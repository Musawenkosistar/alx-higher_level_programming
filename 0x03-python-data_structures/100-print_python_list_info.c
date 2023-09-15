#include <stdio.h>

/**
 * print_python_list_info - Prints basic info about Python lists
 * @p: A PyObject list.
 *
 * Return: nothing
 */
void print_python_list_info(PyObject *p)
{
	Py_ssize_t count;
	Py_ssize_t length = PyList_Size(p);
	PyListObject *pObj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", length);
	printf("[*] Allocated = %ld\n", pObj->allocated);

	for (count = 0; count < length; count++)
	{
		printf("Element %ld: %s\n", count, Py_TYPE(pObj->ob_item[count])->tp_name);
	}
}
