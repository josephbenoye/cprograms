#include <my_global.h>
#include <mysql.h>

int main(int argc, char **argv)
{  
  MYSQL *con = mysql_init(NULL);

	printf("con = = = = %d\n",con);

  mysql_close(con);
  exit(0);
}
