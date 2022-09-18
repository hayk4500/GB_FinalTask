const int MAX = 100;
string[] stringArray1 = new string[MAX];
string[] stringArray2 = new string[MAX];
char ch; int count = 0; int j = 0;

do
{
    Console.Write($"Введите слово №{count + 1}: ");
    stringArray1[count] = Console.ReadLine();
    count++;
    Console.Write("Ещё? (y/n): ");
    ch = Console.ReadKey().KeyChar;
    Console.WriteLine();
} while (ch != 'n');

Console.WriteLine();

Console.WriteLine("Вы ввели следующие слова");
for (int i = 0; i < count; i++)
{
    Console.Write(stringArray1[i]);
    Console.Write("\t");
}

Console.WriteLine(); Console.WriteLine();

Console.WriteLine("А теперь слова, которые меньше 4 символов:");
for (int i = 0; i < count; i++)
{
    if (stringArray1[i].Length <= 3)
    {
        stringArray2[j] = stringArray1[i];
        j++;
    }
}

for (int i = 0; i < j; i++)
{
    Console.Write(stringArray2[i]);
    Console.Write("\t");
}