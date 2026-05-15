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

*SirCppGetUniqueIndexFirstNode*
1. Создаем пустой актор. Добавляем актор в мир с игрой. В акторе создаем переменную типа “SirCppCustomGraphAsset”.  
2. Указываем в созданной переменной граф.  
3. Из переменой с гафом получаем функцию “SirCppGetUniqueIndexFirstNode". На выходе данной функции получаем индекс первой ноды, которая подключена к ноде старт.

![image](Pic/Function01.png)

4. Зная уникальный индекс ноды, разработчик может свободно обращаться к ноде и получать указанную там информацию. Например, базовые атрибуты ноды “**00 Attr**” 

![image](Pic/Function02.png)

5. Если нода имеет несколько вариантов ответа, создаем отдельные виджет, куда указываем Id ответа и тэг. По этим данным мы можем найти ноду, которая подключена к данному ответу. И получить всю нужную информацию.

![image](Pic/Function03.png)

6. Игрок нажимает на виджет с ответом, виджет данный ответ возвращает в актор, где разработчик через функцию “**SirCppFindNodeGetAttrData00_UseTag**” может получить уникальный индекс ноды, которая подключена к данному ответу. 
**ВАЖНО**: Тег должен быть уникальным. 

![image](Pic/Function04.png)
