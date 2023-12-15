#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(*str)
    {
        i++;
        str++;
    }
    return(i);
}

int main(void)
{
    char f[40];
    char *str = "salam ana xx smiti ziad xx";
    int fd = open("file.txt", O_RDWR | O_CREAT);

    write(3,str,ft_strlen(str));
    size_t bytesRD = read (fd,f,ft_strlen(str));
    // read (fd,f,ft_strlen(str));
    // printf("%zd\n",bytesRD);
    f[bytesRD] = '\0';
    printf("%s\n",f);
    printf("%zd\n",bytesRD);
}



// int main(void) {
//     int fd = open("file.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
//     if (fd == -1) {
//         perror("open");
//         exit(EXIT_FAILURE);
//     }

//     printf("File descriptor: %d\n", fd);

//     // write(fd, "hello world", 11);

//     // Close the file when you're done
//     if (close(fd) == -1) {
//         perror("close");
//         exit(EXIT_FAILURE);
//     }

//     return 0;
// }



// int main()
// {
//     int fd = open("file.txt", O_RDWR | O_CREAT);
//     printf("%d\n",fd);
//     write(fd,"salam",5);
// }
