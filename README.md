# SirCustomAssetGraph

## Ru - Версия настроек.
*Основные настройки для плагина "SirCustomAssetGraph".*
1. Добавить в Unreal Engine плагин ["SirCustomAssetGraph"]([https://docs.gitlab.com/user/project/repository/web_editor/#create-a-file](https://www.fab.com/ru/listings/fba37d0c-9894-4111-b85c-60c0b133e9d2)).
2. Подключите плагин в своём проекте во вкладке plugins.
3. **!ВАЖНО!** Укажите в **"Asset Мanager"** своего проекта путь, где будут располагаться дата ассеты и установите тип используемого дата ассета **"SirCppDataAssetAttrV3"**.
4. Установите в **"Asset Manager"** своего проекта правило для **"Cook Rule"** которое будет равно **"Always Cook"**.

## En - Settings version.
*Basic settings of the "SirCustomAssetGraph" plugin.*
1. Add a plugin to Unreal Engine ["SirCustomAssetGraph"]([https://docs.gitlab.com/user/project/repository/web_editor/#create-a-file](https://www.fab.com/ru/listings/fba37d0c-9894-4111-b85c-60c0b133e9d2)).
2. Connect the plugin to your project in the plugins tab.
3. **!IMPORTANT!** In **"Asset Manager"** of your project, specify the path where the data assets will be located and set the type of data asset used to **"SirCppDataAssetAttrV3"**.
4. In your project's **"Asset Manager"**, set the **"Cook Rule"** to **"Always Cook"**.

Settings Asset Manager

## Ru
1. Добавьте Primary Asset Type = **SirCppDataAssetAttrV3**
2. Измените Asset Base Class на **SirCppDataAssetAttrV3**
3. **Добавьте путь к папке с Data Assets данными.**
4. Правило **Cook Rule = Always Cook**

## En
1. Add new Primary Asset Type = **SirCppDataAssetAttrV3**
2. Change Asset Base Class = **SirCppDataAssetAttrV3**
3. **Add the path to the folder with your data asset data.**
4. **Cook Rule = Always Cook**

![image](Pic/SettingsAssetManager.png)


# Основные функции для работы с графом.
## Ru

1. Создаем пустой актор. Добавляем актор в мир с игрой. В акторе создаем переменную типа “SirCppCustomGraphAsset”.  
2. Указываем в созданной переменной граф.
3. Теперь вы можете получить из данной переменной все нужные функции, вытянете ноду и напишите **sircpp**

![image](Pic/Function05.png)

4. Функция **SirCppGetUniqueIndexFirstNode**.  
Из переменой с гафом получаем функцию “**SirCppGetUniqueIndexFirstNode**". На выходе данной функции получаем индекс первой ноды, которая подключена к ноде Start.

![image](Pic/Function01.png)

5. Функция **SirCppFindNodeGetAttrData00**
Зная уникальный индекс ноды, разработчик может свободно обращаться к ноде и получать указанную там информацию. Например, базовые атрибуты ноды “**00 Attr**” 

![image](Pic/Function02.png)

6. Атрибут **OutputTags** - Массив тегов, которые разработчик задал на выходе ноды.
Если нода имеет несколько выходных параметров, создаем отдельный виджет, куда указываем тэг ответа. По этим данным мы можем найти ноду, которая подключена к данному ответу. И получить всю нужную информацию.

![image](Pic/Function03.png)

7. Функция **SirCppFindNodeGetAttrData00_UseTag**
Игрок нажимает на виджет с ответом, виджет данный ответ возвращает в актор, где разработчик через функцию “**SirCppFindNodeGetAttrData00_UseTag**” может получить уникальный индекс ноды, которая подключена к данному ответу. 

**ВАЖНО**: Тег ответа должен быть уникальным. Так как логика функции находит первый похожий тег и даёт возможность получить данные именно первого найденого.

![image](Pic/Function04.png)

8. Нода **End** в графе имеет свои собственные атрибуты, которые разработчик может задать.

   *TagForFindNode*   - тег. Пример, для поика в графе ноды с таким же уникальным тегом.
   
   *CustomAction*     - строка. Разработчик сам указывает, через условие, какое действие будет выполнятся. (Если CustomAction == Quest, то выполнять квест.)
   
   *PrimaryDataAsset* - дата ассет.
   
![image](Pic/Function07.png)

9. Функция **SirCppFindNode_END_GetAttrData_01**

   Получаем из базовой функции уникальное значение ноды и проверяем тип ноды, относится ли она к **End node**. Если да, то в переменной графа находим функцию **SirCppFindNode_END_GetAttrData_01** и передаем туда уникальное значение ноды. На прямую или через переменную. После чего на выходе можем работать уже со значениями из данной ноды.

![image](Pic/Function06.png)

10. Для построения тела графа имеются 2 ноды:
    Continue node - Custom data (Все параметры указываются внутри данной ноды)
    Continue node - Data asset (Нода содержит в себе дата ассет)

![image](Pic/Function06.png)







