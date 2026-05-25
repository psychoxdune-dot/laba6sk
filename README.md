# Laboratory work #6

[![CI](https://github.com/dmitriysd9202/lab06/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/dmitriysd9202/lab06/actions/workflows/ci.yml)

## Цель
Настроить CPack для генерации пакетов (DEB, RPM, TGZ, ZIP) и GitHub Actions для автоматического релиза по тегу.

## Выполненные шаги
- Создан репозиторий lab06, скопированы необходимые библиотеки.
- Написан CMakeLists.txt с установкой solver и настройкой версии.
- Настроен CPackConfig.cmake – добавлены контакты, имена пакетов, генераторы.
- Организован GitHub Actions workflow (ci.yml):
  - триггер на пуш тегов v*
  - установка rpm
  - конфигурация, сборка, вызов cpack
  - создание релиза через softprops/action-gh-release
- Исправлены ошибки:
  - добавлена зависимость formatter_ex_lib -> formatter_lib
  - указан maintainer для DEB-пакета
- Созданы теги v1.0.0 ... v1.0.5, последний прошёл успешно.

## Результаты
- Релиз v1.0.5: https://github.com/dmitriysd9202/lab06/releases/tag/v1.0.5
- К релизу приложены 4 пакета (deb, rpm, tar.gz, zip).

## Вывод
Лабораторная работа №6 выполнена полностью. CPack и GitHub Actions настроены корректно.
