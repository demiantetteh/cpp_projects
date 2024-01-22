//
// CPSC 2620 Spring 2024
// Assignment 1
//
// Problem 3
//
// This program reads an image file in PGM format and applies three
// different filters to the image.  The result of each filter is
// written into a separate image.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// allocates an m x n two-dimensional array of integers
int **allocate(int m, int n);

// deallocates a two-dimensional array of integers with m rows
void deallocate(int **A, int m);

// reads a PGM image from the given file name and return the dimensions
// and the image in a two dimensional array.  No error checking is done
// to see whether the image file is valid (other than whether it can
// be opened for reading).
bool read_image(const char *filename, int &m, int &n, int **&img);

// writes a PGM image to the given file name and prefix
bool write_image(const char *filename, int m, int n, int **img,
                 const char *prefix);

// process the image with the appropriate filter
void process(int **img, int m, int n, int **output,
             int (*filter)(int A[5][5]));

// computes the average (rounded to the nearest integer) of the array
int average(int A[5][5]);

// computes the median of the array
int median(int A[5][5]);

// computes the strange function as given in the assignment
int strange(int A[5][5]);

// sorts a 1D array, to be implemented in the median function
void insertionSort(int arr[], int size);

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    cerr << "Usage: " << argv[0] << " file.pgm" << endl;
    return 1;
  }

  int m, n, **img;
  if (!read_image(argv[1], m, n, img))
  {
    cerr << "Cannot open " << argv[1] << " for reading." << endl;
    return 2;
  }

  int **output = allocate(m, n);

  cout << "Applying average filter." << endl;
  // TO DO: call process HERE to apply the average filter
  process(img, m, n, output, average);
  if (!write_image(argv[1], m, n, output, "avg"))
  {
    cerr << "Cannot write result." << endl;
    return 3;
  }

  cout << "Applying median filter." << endl;
  // TO DO: call process HERE to apply the median filter
  process(img, m, n, output, median);
  if (!write_image(argv[1], m, n, output, "med"))
  {
    cerr << "Cannot write result." << endl;
    return 3;
  }

  cout << "Applying strange filter." << endl;
  // TO DO: call strange HERE to apply the strange filter
  process(img, m, n, output, strange);
  if (!write_image(argv[1], m, n, output, "str"))
  {
    cerr << "Cannot write result." << endl;
    return 3;
  }

  deallocate(img, m);
  deallocate(output, m);

  return 0;
}

// allocates an m x n two-dimensional array of integers
int **allocate(int m, int n)
{
  // TO DO: implement this
  int **A;
  A = new int *[m]; // first dimension
  for (int i = 0; i < m; i++)
  {
    A[i] = new int[n];
  }

  return A;
}

// deallocates a two-dimensional array of integers with m rows
void deallocate(int **A, int m)
{
  // TO DO: implement this
  for (int i = 0; i < m; i++)
  {
    delete[] A[i]; // delete the inner dimensions first
  }
  delete[] A;
  A = nullptr; //ensuring no dangling pointer
}

// reads a PGM image from the given file name and return the dimensions
// and the image in a two dimensional array.  No error checking is done
// to see whether the image file is valid (other than whether it can
// be opened for reading).
bool read_image(const char *filename, int &m, int &n, int **&img)
{
  ifstream is(filename, ios::binary);
  if (!is)
  {
    return false;
  }

  string s;

  is >> s;
  is >> n >> m >> s;
  is.ignore(1024, '\n');
  img = allocate(m, n);

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      img[i][j] = is.get();
    }
  }
  return true;
}

// writes a PGM image to the given file name and prefix
bool write_image(const char *filename, int m, int n, int **img,
                 const char *prefix)
{
  string s = prefix;
  s += "-";
  s += filename;

  ofstream os(s.c_str(), ios::binary);
  if (!os)
  {
    return false;
  }
  os << "P5" << endl;
  os << n << " " << m << endl;
  os << 255 << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      os.put(static_cast<unsigned char>(img[i][j]));
    }
  }
  return !(os.fail());
}

// process the image with the appropriate filter
void process(int **img, int m, int n, int **output,
             int (*filter)(int A[5][5]))
{
  int A[5][5];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i < 2 || i >= m - 2 || j < 2 || j >= n - 2)
      {
        output[i][j] = 0;
      }
      else
      {
        for (int k = 0; k < 5; k++)
        {
          for (int l = 0; l < 5; l++)
          {
            A[k][l] = img[i - 2 + k][j - 2 + l];
            output[i][j] = filter(A);
          }
        }
      }
    }
  }
}

const int MYSIZE = 25; // to be used in the functions below

// computes the average (rounded to the nearest integer) of the array
int average(int A[5][5])
{
  // TO DO: implement this
  int myarray[MYSIZE];
  int count = 0, sum = 0;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      myarray[count] = A[i][j];
      count++;
    }
  }

  for (int x = 0; x < count; x++)
  {
    sum += myarray[x];
  }

  double avg = static_cast<double>(sum) / count;
  int roundedAvg = static_cast<int>(round(avg));

  return (roundedAvg);
}

// computes the median of the array
int median(int A[5][5])
{
  // TO DO: implement this
  int myarray[MYSIZE], avg;
  int count = 0, sum = 0;
  double x;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      myarray[count] = A[i][j];
      count++;
    }
  }

  insertionSort(myarray, count);

  if (count % 2 == 0)
  {
    avg = count / 2;

    x = (myarray[avg - 1] + myarray[avg]) / 2.0;
  }
  else
  {
    double dec = floor(count / 2.0);
    avg = static_cast<int>(dec);

    x = myarray[avg];
  }

  return (x);
}

// computes the strange function as given in the assignment
int strange(int A[5][5])
{
  // TO DO: implement this
  double rest_formula = (-A[1][1] - 2 * A[2][1] - A[3][1] + A[1][3] + 2 * A[2][3] + A[3][3] + 1020);
  double strange_formula = (255.0 / 2040) * rest_formula;

  int rounded = static_cast<int>(round(strange_formula));

  return (rounded);
}

// sorts a 1D array, to be implemented in the median function
void insertionSort(int arr[], int size)
{
  int key, j;
  for (int i = 1; i < size; i++)
  {
    key = arr[i];
    j = i - 1;
    while ((j >= 0) && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
