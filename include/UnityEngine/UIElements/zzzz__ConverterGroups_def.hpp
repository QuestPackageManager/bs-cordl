#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ConverterGroups.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConverterGroups)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace Unity::Properties {
template <typename TSource, typename TDestination> class TypeConverter_2;
}
namespace UnityEngine::UIElements {
class ConverterGroup;
}
namespace UnityEngine::UIElements {
class ConverterGroups___c;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ConverterGroups;
}
namespace UnityEngine::UIElements {
class ConverterGroups___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ConverterGroups);
MARK_REF_PTR_T(::UnityEngine::UIElements::ConverterGroups___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ConverterGroups/<>c
class CORDL_TYPE ConverterGroups___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ConverterGroups___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::Unity::Properties::TypeConverter_2<int8_t, bool>* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_1, put = setStaticF___9__17_1)) ::Unity::Properties::TypeConverter_2<int8_t, char16_t>* __9__17_1;

  /// @brief Field <>9__17_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_10, put = setStaticF___9__17_10)) ::Unity::Properties::TypeConverter_2<int8_t, double_t>* __9__17_10;

  /// @brief Field <>9__17_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_11, put = setStaticF___9__17_11)) ::Unity::Properties::TypeConverter_2<::StringW, int8_t>* __9__17_11;

  /// @brief Field <>9__17_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_2, put = setStaticF___9__17_2)) ::Unity::Properties::TypeConverter_2<int8_t, int16_t>* __9__17_2;

  /// @brief Field <>9__17_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_3, put = setStaticF___9__17_3)) ::Unity::Properties::TypeConverter_2<int8_t, int32_t>* __9__17_3;

  /// @brief Field <>9__17_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_4, put = setStaticF___9__17_4)) ::Unity::Properties::TypeConverter_2<int8_t, int64_t>* __9__17_4;

  /// @brief Field <>9__17_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_5, put = setStaticF___9__17_5)) ::Unity::Properties::TypeConverter_2<int8_t, uint8_t>* __9__17_5;

  /// @brief Field <>9__17_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_6, put = setStaticF___9__17_6)) ::Unity::Properties::TypeConverter_2<int8_t, uint16_t>* __9__17_6;

  /// @brief Field <>9__17_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_7, put = setStaticF___9__17_7)) ::Unity::Properties::TypeConverter_2<int8_t, uint32_t>* __9__17_7;

  /// @brief Field <>9__17_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_8, put = setStaticF___9__17_8)) ::Unity::Properties::TypeConverter_2<int8_t, uint64_t>* __9__17_8;

  /// @brief Field <>9__17_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_9, put = setStaticF___9__17_9)) ::Unity::Properties::TypeConverter_2<int8_t, float_t>* __9__17_9;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0)) ::Unity::Properties::TypeConverter_2<int16_t, bool>* __9__18_0;

  /// @brief Field <>9__18_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_1, put = setStaticF___9__18_1)) ::Unity::Properties::TypeConverter_2<int16_t, int8_t>* __9__18_1;

  /// @brief Field <>9__18_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_10, put = setStaticF___9__18_10)) ::Unity::Properties::TypeConverter_2<int16_t, double_t>* __9__18_10;

  /// @brief Field <>9__18_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_11, put = setStaticF___9__18_11)) ::Unity::Properties::TypeConverter_2<::StringW, int16_t>* __9__18_11;

  /// @brief Field <>9__18_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_2, put = setStaticF___9__18_2)) ::Unity::Properties::TypeConverter_2<int16_t, char16_t>* __9__18_2;

  /// @brief Field <>9__18_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_3, put = setStaticF___9__18_3)) ::Unity::Properties::TypeConverter_2<int16_t, int32_t>* __9__18_3;

  /// @brief Field <>9__18_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_4, put = setStaticF___9__18_4)) ::Unity::Properties::TypeConverter_2<int16_t, int64_t>* __9__18_4;

  /// @brief Field <>9__18_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_5, put = setStaticF___9__18_5)) ::Unity::Properties::TypeConverter_2<int16_t, uint8_t>* __9__18_5;

  /// @brief Field <>9__18_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_6, put = setStaticF___9__18_6)) ::Unity::Properties::TypeConverter_2<int16_t, uint16_t>* __9__18_6;

  /// @brief Field <>9__18_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_7, put = setStaticF___9__18_7)) ::Unity::Properties::TypeConverter_2<int16_t, uint32_t>* __9__18_7;

  /// @brief Field <>9__18_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_8, put = setStaticF___9__18_8)) ::Unity::Properties::TypeConverter_2<int16_t, uint64_t>* __9__18_8;

  /// @brief Field <>9__18_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_9, put = setStaticF___9__18_9)) ::Unity::Properties::TypeConverter_2<int16_t, float_t>* __9__18_9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0)) ::Unity::Properties::TypeConverter_2<int32_t, bool>* __9__19_0;

  /// @brief Field <>9__19_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_1, put = setStaticF___9__19_1)) ::Unity::Properties::TypeConverter_2<int32_t, int8_t>* __9__19_1;

  /// @brief Field <>9__19_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_10, put = setStaticF___9__19_10)) ::Unity::Properties::TypeConverter_2<int32_t, double_t>* __9__19_10;

  /// @brief Field <>9__19_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_11, put = setStaticF___9__19_11)) ::Unity::Properties::TypeConverter_2<::StringW, int32_t>* __9__19_11;

  /// @brief Field <>9__19_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_2, put = setStaticF___9__19_2)) ::Unity::Properties::TypeConverter_2<int32_t, char16_t>* __9__19_2;

  /// @brief Field <>9__19_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_3, put = setStaticF___9__19_3)) ::Unity::Properties::TypeConverter_2<int32_t, int16_t>* __9__19_3;

  /// @brief Field <>9__19_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_4, put = setStaticF___9__19_4)) ::Unity::Properties::TypeConverter_2<int32_t, int64_t>* __9__19_4;

  /// @brief Field <>9__19_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_5, put = setStaticF___9__19_5)) ::Unity::Properties::TypeConverter_2<int32_t, uint8_t>* __9__19_5;

  /// @brief Field <>9__19_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_6, put = setStaticF___9__19_6)) ::Unity::Properties::TypeConverter_2<int32_t, uint16_t>* __9__19_6;

  /// @brief Field <>9__19_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_7, put = setStaticF___9__19_7)) ::Unity::Properties::TypeConverter_2<int32_t, uint32_t>* __9__19_7;

  /// @brief Field <>9__19_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_8, put = setStaticF___9__19_8)) ::Unity::Properties::TypeConverter_2<int32_t, uint64_t>* __9__19_8;

  /// @brief Field <>9__19_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_9, put = setStaticF___9__19_9)) ::Unity::Properties::TypeConverter_2<int32_t, float_t>* __9__19_9;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_0, put = setStaticF___9__20_0)) ::Unity::Properties::TypeConverter_2<int64_t, bool>* __9__20_0;

  /// @brief Field <>9__20_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_1, put = setStaticF___9__20_1)) ::Unity::Properties::TypeConverter_2<int64_t, int8_t>* __9__20_1;

  /// @brief Field <>9__20_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_10, put = setStaticF___9__20_10)) ::Unity::Properties::TypeConverter_2<int64_t, double_t>* __9__20_10;

  /// @brief Field <>9__20_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_11, put = setStaticF___9__20_11)) ::Unity::Properties::TypeConverter_2<::StringW, int64_t>* __9__20_11;

  /// @brief Field <>9__20_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_2, put = setStaticF___9__20_2)) ::Unity::Properties::TypeConverter_2<int64_t, char16_t>* __9__20_2;

  /// @brief Field <>9__20_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_3, put = setStaticF___9__20_3)) ::Unity::Properties::TypeConverter_2<int64_t, int16_t>* __9__20_3;

  /// @brief Field <>9__20_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_4, put = setStaticF___9__20_4)) ::Unity::Properties::TypeConverter_2<int64_t, int32_t>* __9__20_4;

  /// @brief Field <>9__20_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_5, put = setStaticF___9__20_5)) ::Unity::Properties::TypeConverter_2<int64_t, uint8_t>* __9__20_5;

  /// @brief Field <>9__20_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_6, put = setStaticF___9__20_6)) ::Unity::Properties::TypeConverter_2<int64_t, uint16_t>* __9__20_6;

  /// @brief Field <>9__20_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_7, put = setStaticF___9__20_7)) ::Unity::Properties::TypeConverter_2<int64_t, uint32_t>* __9__20_7;

  /// @brief Field <>9__20_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_8, put = setStaticF___9__20_8)) ::Unity::Properties::TypeConverter_2<int64_t, uint64_t>* __9__20_8;

  /// @brief Field <>9__20_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_9, put = setStaticF___9__20_9)) ::Unity::Properties::TypeConverter_2<int64_t, float_t>* __9__20_9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_0, put = setStaticF___9__21_0)) ::Unity::Properties::TypeConverter_2<uint8_t, bool>* __9__21_0;

  /// @brief Field <>9__21_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_1, put = setStaticF___9__21_1)) ::Unity::Properties::TypeConverter_2<uint8_t, int8_t>* __9__21_1;

  /// @brief Field <>9__21_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_10, put = setStaticF___9__21_10)) ::Unity::Properties::TypeConverter_2<uint8_t, double_t>* __9__21_10;

  /// @brief Field <>9__21_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_11, put = setStaticF___9__21_11)) ::Unity::Properties::TypeConverter_2<uint8_t, ::System::Object*>* __9__21_11;

  /// @brief Field <>9__21_12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_12, put = setStaticF___9__21_12)) ::Unity::Properties::TypeConverter_2<::StringW, uint8_t>* __9__21_12;

  /// @brief Field <>9__21_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_2, put = setStaticF___9__21_2)) ::Unity::Properties::TypeConverter_2<uint8_t, char16_t>* __9__21_2;

  /// @brief Field <>9__21_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_3, put = setStaticF___9__21_3)) ::Unity::Properties::TypeConverter_2<uint8_t, int16_t>* __9__21_3;

  /// @brief Field <>9__21_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_4, put = setStaticF___9__21_4)) ::Unity::Properties::TypeConverter_2<uint8_t, int32_t>* __9__21_4;

  /// @brief Field <>9__21_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_5, put = setStaticF___9__21_5)) ::Unity::Properties::TypeConverter_2<uint8_t, int64_t>* __9__21_5;

  /// @brief Field <>9__21_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_6, put = setStaticF___9__21_6)) ::Unity::Properties::TypeConverter_2<uint8_t, uint16_t>* __9__21_6;

  /// @brief Field <>9__21_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_7, put = setStaticF___9__21_7)) ::Unity::Properties::TypeConverter_2<uint8_t, uint32_t>* __9__21_7;

  /// @brief Field <>9__21_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_8, put = setStaticF___9__21_8)) ::Unity::Properties::TypeConverter_2<uint8_t, uint64_t>* __9__21_8;

  /// @brief Field <>9__21_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_9, put = setStaticF___9__21_9)) ::Unity::Properties::TypeConverter_2<uint8_t, float_t>* __9__21_9;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0)) ::Unity::Properties::TypeConverter_2<uint16_t, bool>* __9__22_0;

  /// @brief Field <>9__22_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_1, put = setStaticF___9__22_1)) ::Unity::Properties::TypeConverter_2<uint16_t, int8_t>* __9__22_1;

  /// @brief Field <>9__22_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_10, put = setStaticF___9__22_10)) ::Unity::Properties::TypeConverter_2<uint16_t, double_t>* __9__22_10;

  /// @brief Field <>9__22_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_11, put = setStaticF___9__22_11)) ::Unity::Properties::TypeConverter_2<::StringW, uint16_t>* __9__22_11;

  /// @brief Field <>9__22_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_2, put = setStaticF___9__22_2)) ::Unity::Properties::TypeConverter_2<uint16_t, char16_t>* __9__22_2;

  /// @brief Field <>9__22_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_3, put = setStaticF___9__22_3)) ::Unity::Properties::TypeConverter_2<uint16_t, int16_t>* __9__22_3;

  /// @brief Field <>9__22_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_4, put = setStaticF___9__22_4)) ::Unity::Properties::TypeConverter_2<uint16_t, int32_t>* __9__22_4;

  /// @brief Field <>9__22_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_5, put = setStaticF___9__22_5)) ::Unity::Properties::TypeConverter_2<uint16_t, int64_t>* __9__22_5;

  /// @brief Field <>9__22_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_6, put = setStaticF___9__22_6)) ::Unity::Properties::TypeConverter_2<uint16_t, uint8_t>* __9__22_6;

  /// @brief Field <>9__22_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_7, put = setStaticF___9__22_7)) ::Unity::Properties::TypeConverter_2<uint16_t, uint32_t>* __9__22_7;

  /// @brief Field <>9__22_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_8, put = setStaticF___9__22_8)) ::Unity::Properties::TypeConverter_2<uint16_t, uint64_t>* __9__22_8;

  /// @brief Field <>9__22_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_9, put = setStaticF___9__22_9)) ::Unity::Properties::TypeConverter_2<uint16_t, float_t>* __9__22_9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0)) ::Unity::Properties::TypeConverter_2<uint32_t, bool>* __9__23_0;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_1, put = setStaticF___9__23_1)) ::Unity::Properties::TypeConverter_2<uint32_t, int8_t>* __9__23_1;

  /// @brief Field <>9__23_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_10, put = setStaticF___9__23_10)) ::Unity::Properties::TypeConverter_2<uint32_t, double_t>* __9__23_10;

  /// @brief Field <>9__23_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_11, put = setStaticF___9__23_11)) ::Unity::Properties::TypeConverter_2<::StringW, uint32_t>* __9__23_11;

  /// @brief Field <>9__23_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_2, put = setStaticF___9__23_2)) ::Unity::Properties::TypeConverter_2<uint32_t, char16_t>* __9__23_2;

  /// @brief Field <>9__23_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_3, put = setStaticF___9__23_3)) ::Unity::Properties::TypeConverter_2<uint32_t, int16_t>* __9__23_3;

  /// @brief Field <>9__23_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_4, put = setStaticF___9__23_4)) ::Unity::Properties::TypeConverter_2<uint32_t, int32_t>* __9__23_4;

  /// @brief Field <>9__23_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_5, put = setStaticF___9__23_5)) ::Unity::Properties::TypeConverter_2<uint32_t, int64_t>* __9__23_5;

  /// @brief Field <>9__23_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_6, put = setStaticF___9__23_6)) ::Unity::Properties::TypeConverter_2<uint32_t, uint8_t>* __9__23_6;

  /// @brief Field <>9__23_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_7, put = setStaticF___9__23_7)) ::Unity::Properties::TypeConverter_2<uint32_t, uint16_t>* __9__23_7;

  /// @brief Field <>9__23_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_8, put = setStaticF___9__23_8)) ::Unity::Properties::TypeConverter_2<uint32_t, uint64_t>* __9__23_8;

  /// @brief Field <>9__23_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_9, put = setStaticF___9__23_9)) ::Unity::Properties::TypeConverter_2<uint32_t, float_t>* __9__23_9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0)) ::Unity::Properties::TypeConverter_2<uint64_t, bool>* __9__24_0;

  /// @brief Field <>9__24_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_1, put = setStaticF___9__24_1)) ::Unity::Properties::TypeConverter_2<uint64_t, int8_t>* __9__24_1;

  /// @brief Field <>9__24_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_10, put = setStaticF___9__24_10)) ::Unity::Properties::TypeConverter_2<uint64_t, double_t>* __9__24_10;

  /// @brief Field <>9__24_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_11, put = setStaticF___9__24_11)) ::Unity::Properties::TypeConverter_2<::StringW, uint64_t>* __9__24_11;

  /// @brief Field <>9__24_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_2, put = setStaticF___9__24_2)) ::Unity::Properties::TypeConverter_2<uint64_t, char16_t>* __9__24_2;

  /// @brief Field <>9__24_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_3, put = setStaticF___9__24_3)) ::Unity::Properties::TypeConverter_2<uint64_t, int16_t>* __9__24_3;

  /// @brief Field <>9__24_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_4, put = setStaticF___9__24_4)) ::Unity::Properties::TypeConverter_2<uint64_t, int32_t>* __9__24_4;

  /// @brief Field <>9__24_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_5, put = setStaticF___9__24_5)) ::Unity::Properties::TypeConverter_2<uint64_t, int64_t>* __9__24_5;

  /// @brief Field <>9__24_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_6, put = setStaticF___9__24_6)) ::Unity::Properties::TypeConverter_2<uint64_t, uint8_t>* __9__24_6;

  /// @brief Field <>9__24_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_7, put = setStaticF___9__24_7)) ::Unity::Properties::TypeConverter_2<uint64_t, uint16_t>* __9__24_7;

  /// @brief Field <>9__24_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_8, put = setStaticF___9__24_8)) ::Unity::Properties::TypeConverter_2<uint64_t, uint32_t>* __9__24_8;

  /// @brief Field <>9__24_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__24_9, put = setStaticF___9__24_9)) ::Unity::Properties::TypeConverter_2<uint64_t, float_t>* __9__24_9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::Unity::Properties::TypeConverter_2<float_t, bool>* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1)) ::Unity::Properties::TypeConverter_2<float_t, int8_t>* __9__25_1;

  /// @brief Field <>9__25_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_10, put = setStaticF___9__25_10)) ::Unity::Properties::TypeConverter_2<float_t, double_t>* __9__25_10;

  /// @brief Field <>9__25_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_11, put = setStaticF___9__25_11)) ::Unity::Properties::TypeConverter_2<float_t, ::StringW>* __9__25_11;

  /// @brief Field <>9__25_12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_12, put = setStaticF___9__25_12)) ::Unity::Properties::TypeConverter_2<::StringW, float_t>* __9__25_12;

  /// @brief Field <>9__25_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_2, put = setStaticF___9__25_2)) ::Unity::Properties::TypeConverter_2<float_t, char16_t>* __9__25_2;

  /// @brief Field <>9__25_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_3, put = setStaticF___9__25_3)) ::Unity::Properties::TypeConverter_2<float_t, int16_t>* __9__25_3;

  /// @brief Field <>9__25_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_4, put = setStaticF___9__25_4)) ::Unity::Properties::TypeConverter_2<float_t, int32_t>* __9__25_4;

  /// @brief Field <>9__25_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_5, put = setStaticF___9__25_5)) ::Unity::Properties::TypeConverter_2<float_t, int64_t>* __9__25_5;

  /// @brief Field <>9__25_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_6, put = setStaticF___9__25_6)) ::Unity::Properties::TypeConverter_2<float_t, uint8_t>* __9__25_6;

  /// @brief Field <>9__25_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_7, put = setStaticF___9__25_7)) ::Unity::Properties::TypeConverter_2<float_t, uint16_t>* __9__25_7;

  /// @brief Field <>9__25_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_8, put = setStaticF___9__25_8)) ::Unity::Properties::TypeConverter_2<float_t, uint32_t>* __9__25_8;

  /// @brief Field <>9__25_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_9, put = setStaticF___9__25_9)) ::Unity::Properties::TypeConverter_2<float_t, uint64_t>* __9__25_9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::Unity::Properties::TypeConverter_2<double_t, bool>* __9__26_0;

  /// @brief Field <>9__26_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_1, put = setStaticF___9__26_1)) ::Unity::Properties::TypeConverter_2<double_t, int8_t>* __9__26_1;

  /// @brief Field <>9__26_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_10, put = setStaticF___9__26_10)) ::Unity::Properties::TypeConverter_2<double_t, float_t>* __9__26_10;

  /// @brief Field <>9__26_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_11, put = setStaticF___9__26_11)) ::Unity::Properties::TypeConverter_2<double_t, ::StringW>* __9__26_11;

  /// @brief Field <>9__26_12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_12, put = setStaticF___9__26_12)) ::Unity::Properties::TypeConverter_2<::StringW, double_t>* __9__26_12;

  /// @brief Field <>9__26_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_2, put = setStaticF___9__26_2)) ::Unity::Properties::TypeConverter_2<double_t, char16_t>* __9__26_2;

  /// @brief Field <>9__26_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_3, put = setStaticF___9__26_3)) ::Unity::Properties::TypeConverter_2<double_t, int16_t>* __9__26_3;

  /// @brief Field <>9__26_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_4, put = setStaticF___9__26_4)) ::Unity::Properties::TypeConverter_2<double_t, int32_t>* __9__26_4;

  /// @brief Field <>9__26_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_5, put = setStaticF___9__26_5)) ::Unity::Properties::TypeConverter_2<double_t, int64_t>* __9__26_5;

  /// @brief Field <>9__26_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_6, put = setStaticF___9__26_6)) ::Unity::Properties::TypeConverter_2<double_t, uint8_t>* __9__26_6;

  /// @brief Field <>9__26_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_7, put = setStaticF___9__26_7)) ::Unity::Properties::TypeConverter_2<double_t, uint16_t>* __9__26_7;

  /// @brief Field <>9__26_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_8, put = setStaticF___9__26_8)) ::Unity::Properties::TypeConverter_2<double_t, uint32_t>* __9__26_8;

  /// @brief Field <>9__26_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_9, put = setStaticF___9__26_9)) ::Unity::Properties::TypeConverter_2<double_t, uint64_t>* __9__26_9;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::Unity::Properties::TypeConverter_2<bool, char16_t>* __9__27_0;

  /// @brief Field <>9__27_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_1, put = setStaticF___9__27_1)) ::Unity::Properties::TypeConverter_2<bool, int8_t>* __9__27_1;

  /// @brief Field <>9__27_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_10, put = setStaticF___9__27_10)) ::Unity::Properties::TypeConverter_2<bool, double_t>* __9__27_10;

  /// @brief Field <>9__27_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_11, put = setStaticF___9__27_11)) ::Unity::Properties::TypeConverter_2<::StringW, bool>* __9__27_11;

  /// @brief Field <>9__27_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_2, put = setStaticF___9__27_2)) ::Unity::Properties::TypeConverter_2<bool, int16_t>* __9__27_2;

  /// @brief Field <>9__27_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_3, put = setStaticF___9__27_3)) ::Unity::Properties::TypeConverter_2<bool, int32_t>* __9__27_3;

  /// @brief Field <>9__27_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_4, put = setStaticF___9__27_4)) ::Unity::Properties::TypeConverter_2<bool, int64_t>* __9__27_4;

  /// @brief Field <>9__27_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_5, put = setStaticF___9__27_5)) ::Unity::Properties::TypeConverter_2<bool, uint8_t>* __9__27_5;

  /// @brief Field <>9__27_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_6, put = setStaticF___9__27_6)) ::Unity::Properties::TypeConverter_2<bool, uint16_t>* __9__27_6;

  /// @brief Field <>9__27_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_7, put = setStaticF___9__27_7)) ::Unity::Properties::TypeConverter_2<bool, uint32_t>* __9__27_7;

  /// @brief Field <>9__27_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_8, put = setStaticF___9__27_8)) ::Unity::Properties::TypeConverter_2<bool, uint64_t>* __9__27_8;

  /// @brief Field <>9__27_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_9, put = setStaticF___9__27_9)) ::Unity::Properties::TypeConverter_2<bool, float_t>* __9__27_9;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_0, put = setStaticF___9__28_0)) ::Unity::Properties::TypeConverter_2<char16_t, bool>* __9__28_0;

  /// @brief Field <>9__28_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_1, put = setStaticF___9__28_1)) ::Unity::Properties::TypeConverter_2<char16_t, int8_t>* __9__28_1;

  /// @brief Field <>9__28_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_10, put = setStaticF___9__28_10)) ::Unity::Properties::TypeConverter_2<char16_t, double_t>* __9__28_10;

  /// @brief Field <>9__28_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_11, put = setStaticF___9__28_11)) ::Unity::Properties::TypeConverter_2<::StringW, char16_t>* __9__28_11;

  /// @brief Field <>9__28_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_2, put = setStaticF___9__28_2)) ::Unity::Properties::TypeConverter_2<char16_t, int16_t>* __9__28_2;

  /// @brief Field <>9__28_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_3, put = setStaticF___9__28_3)) ::Unity::Properties::TypeConverter_2<char16_t, int32_t>* __9__28_3;

  /// @brief Field <>9__28_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_4, put = setStaticF___9__28_4)) ::Unity::Properties::TypeConverter_2<char16_t, int64_t>* __9__28_4;

  /// @brief Field <>9__28_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_5, put = setStaticF___9__28_5)) ::Unity::Properties::TypeConverter_2<char16_t, uint8_t>* __9__28_5;

  /// @brief Field <>9__28_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_6, put = setStaticF___9__28_6)) ::Unity::Properties::TypeConverter_2<char16_t, uint16_t>* __9__28_6;

  /// @brief Field <>9__28_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_7, put = setStaticF___9__28_7)) ::Unity::Properties::TypeConverter_2<char16_t, uint32_t>* __9__28_7;

  /// @brief Field <>9__28_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_8, put = setStaticF___9__28_8)) ::Unity::Properties::TypeConverter_2<char16_t, uint64_t>* __9__28_8;

  /// @brief Field <>9__28_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_9, put = setStaticF___9__28_9)) ::Unity::Properties::TypeConverter_2<char16_t, float_t>* __9__28_9;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0)) ::Unity::Properties::TypeConverter_2<::UnityEngine::Color, ::UnityEngine::Color32>* __9__29_0;

  /// @brief Field <>9__29_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_1, put = setStaticF___9__29_1)) ::Unity::Properties::TypeConverter_2<::UnityEngine::Color32, ::UnityEngine::Color>* __9__29_1;

  static inline ::UnityEngine::UIElements::ConverterGroups___c* New_ctor();

  /// @brief Method <RegisterBooleanConverters>b__27_0, addr 0x6a0a5fc, size 0x10, virtual false, abstract: false, final false
  inline char16_t _RegisterBooleanConverters_b__27_0(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_1, addr 0x6a0a60c, size 0x10, virtual false, abstract: false, final false
  inline int8_t _RegisterBooleanConverters_b__27_1(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_10, addr 0x6a0a6a4, size 0x18, virtual false, abstract: false, final false
  inline double_t _RegisterBooleanConverters_b__27_10(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_11, addr 0x6a0a6bc, size 0xf0, virtual false, abstract: false, final false
  inline bool _RegisterBooleanConverters_b__27_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterBooleanConverters>b__27_2, addr 0x6a0a61c, size 0x10, virtual false, abstract: false, final false
  inline int16_t _RegisterBooleanConverters_b__27_2(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_3, addr 0x6a0a62c, size 0x10, virtual false, abstract: false, final false
  inline int32_t _RegisterBooleanConverters_b__27_3(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_4, addr 0x6a0a63c, size 0x10, virtual false, abstract: false, final false
  inline int64_t _RegisterBooleanConverters_b__27_4(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_5, addr 0x6a0a64c, size 0x10, virtual false, abstract: false, final false
  inline uint8_t _RegisterBooleanConverters_b__27_5(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_6, addr 0x6a0a65c, size 0x10, virtual false, abstract: false, final false
  inline uint16_t _RegisterBooleanConverters_b__27_6(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_7, addr 0x6a0a66c, size 0x10, virtual false, abstract: false, final false
  inline uint32_t _RegisterBooleanConverters_b__27_7(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_8, addr 0x6a0a67c, size 0x10, virtual false, abstract: false, final false
  inline uint64_t _RegisterBooleanConverters_b__27_8(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__27_9, addr 0x6a0a68c, size 0x18, virtual false, abstract: false, final false
  inline float_t _RegisterBooleanConverters_b__27_9(::ByRef<bool> v);

  /// @brief Method <RegisterCharConverters>b__28_0, addr 0x6a0a7ac, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterCharConverters_b__28_0(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_1, addr 0x6a0a7bc, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterCharConverters_b__28_1(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_10, addr 0x6a0a808, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterCharConverters_b__28_10(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_11, addr 0x6a0a814, size 0x34, virtual false, abstract: false, final false
  inline char16_t _RegisterCharConverters_b__28_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterCharConverters>b__28_2, addr 0x6a0a7c4, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterCharConverters_b__28_2(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_3, addr 0x6a0a7cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterCharConverters_b__28_3(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_4, addr 0x6a0a7d4, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterCharConverters_b__28_4(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_5, addr 0x6a0a7dc, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterCharConverters_b__28_5(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_6, addr 0x6a0a7e4, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterCharConverters_b__28_6(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_7, addr 0x6a0a7ec, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterCharConverters_b__28_7(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_8, addr 0x6a0a7f4, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterCharConverters_b__28_8(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__28_9, addr 0x6a0a7fc, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterCharConverters_b__28_9(::ByRef<char16_t> v);

  /// @brief Method <RegisterColorConverters>b__29_0, addr 0x6a0a848, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 _RegisterColorConverters_b__29_0(::ByRef<::UnityEngine::Color> v);

  /// @brief Method <RegisterColorConverters>b__29_1, addr 0x6a0a858, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _RegisterColorConverters_b__29_1(::ByRef<::UnityEngine::Color32> v);

  /// @brief Method <RegisterDoubleConverters>b__26_0, addr 0x6a0a474, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterDoubleConverters_b__26_0(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_1, addr 0x6a0a484, size 0x1c, virtual false, abstract: false, final false
  inline int8_t _RegisterDoubleConverters_b__26_1(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_10, addr 0x6a0a568, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterDoubleConverters_b__26_10(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_11, addr 0x6a0a574, size 0x68, virtual false, abstract: false, final false
  inline ::StringW _RegisterDoubleConverters_b__26_11(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_12, addr 0x6a0a5dc, size 0x20, virtual false, abstract: false, final false
  inline double_t _RegisterDoubleConverters_b__26_12(::ByRef<::StringW> v);

  /// @brief Method <RegisterDoubleConverters>b__26_2, addr 0x6a0a4a0, size 0x14, virtual false, abstract: false, final false
  inline char16_t _RegisterDoubleConverters_b__26_2(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_3, addr 0x6a0a4b4, size 0x1c, virtual false, abstract: false, final false
  inline int16_t _RegisterDoubleConverters_b__26_3(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_4, addr 0x6a0a4d0, size 0x20, virtual false, abstract: false, final false
  inline int32_t _RegisterDoubleConverters_b__26_4(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_5, addr 0x6a0a4f0, size 0x20, virtual false, abstract: false, final false
  inline int64_t _RegisterDoubleConverters_b__26_5(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_6, addr 0x6a0a510, size 0x14, virtual false, abstract: false, final false
  inline uint8_t _RegisterDoubleConverters_b__26_6(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_7, addr 0x6a0a524, size 0x14, virtual false, abstract: false, final false
  inline uint16_t _RegisterDoubleConverters_b__26_7(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_8, addr 0x6a0a538, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _RegisterDoubleConverters_b__26_8(::ByRef<double_t> v);

  /// @brief Method <RegisterDoubleConverters>b__26_9, addr 0x6a0a550, size 0x18, virtual false, abstract: false, final false
  inline uint64_t _RegisterDoubleConverters_b__26_9(::ByRef<double_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_0, addr 0x6a0a238, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterFloatConverters_b__25_0(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_1, addr 0x6a0a248, size 0x1c, virtual false, abstract: false, final false
  inline int8_t _RegisterFloatConverters_b__25_1(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_10, addr 0x6a0a32c, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterFloatConverters_b__25_10(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_11, addr 0x6a0a338, size 0x68, virtual false, abstract: false, final false
  inline ::StringW _RegisterFloatConverters_b__25_11(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_12, addr 0x6a0a3a0, size 0xd4, virtual false, abstract: false, final false
  inline float_t _RegisterFloatConverters_b__25_12(::ByRef<::StringW> v);

  /// @brief Method <RegisterFloatConverters>b__25_2, addr 0x6a0a264, size 0x14, virtual false, abstract: false, final false
  inline char16_t _RegisterFloatConverters_b__25_2(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_3, addr 0x6a0a278, size 0x1c, virtual false, abstract: false, final false
  inline int16_t _RegisterFloatConverters_b__25_3(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_4, addr 0x6a0a294, size 0x20, virtual false, abstract: false, final false
  inline int32_t _RegisterFloatConverters_b__25_4(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_5, addr 0x6a0a2b4, size 0x20, virtual false, abstract: false, final false
  inline int64_t _RegisterFloatConverters_b__25_5(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_6, addr 0x6a0a2d4, size 0x14, virtual false, abstract: false, final false
  inline uint8_t _RegisterFloatConverters_b__25_6(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_7, addr 0x6a0a2e8, size 0x14, virtual false, abstract: false, final false
  inline uint16_t _RegisterFloatConverters_b__25_7(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_8, addr 0x6a0a2fc, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _RegisterFloatConverters_b__25_8(::ByRef<float_t> v);

  /// @brief Method <RegisterFloatConverters>b__25_9, addr 0x6a0a314, size 0x18, virtual false, abstract: false, final false
  inline uint64_t _RegisterFloatConverters_b__25_9(::ByRef<float_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_0, addr 0x6a09974, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterInt16Converters_b__18_0(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_1, addr 0x6a09984, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterInt16Converters_b__18_1(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_10, addr 0x6a099d0, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterInt16Converters_b__18_10(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_11, addr 0x6a099dc, size 0xd4, virtual false, abstract: false, final false
  inline int16_t _RegisterInt16Converters_b__18_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterInt16Converters>b__18_2, addr 0x6a0998c, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterInt16Converters_b__18_2(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_3, addr 0x6a09994, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterInt16Converters_b__18_3(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_4, addr 0x6a0999c, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterInt16Converters_b__18_4(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_5, addr 0x6a099a4, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterInt16Converters_b__18_5(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_6, addr 0x6a099ac, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterInt16Converters_b__18_6(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_7, addr 0x6a099b4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterInt16Converters_b__18_7(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_8, addr 0x6a099bc, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterInt16Converters_b__18_8(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__18_9, addr 0x6a099c4, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterInt16Converters_b__18_9(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_0, addr 0x6a09ab0, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterInt32Converters_b__19_0(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_1, addr 0x6a09ac0, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterInt32Converters_b__19_1(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_10, addr 0x6a09b0c, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterInt32Converters_b__19_10(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_11, addr 0x6a09b18, size 0xd4, virtual false, abstract: false, final false
  inline int32_t _RegisterInt32Converters_b__19_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterInt32Converters>b__19_2, addr 0x6a09ac8, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterInt32Converters_b__19_2(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_3, addr 0x6a09ad0, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterInt32Converters_b__19_3(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_4, addr 0x6a09ad8, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterInt32Converters_b__19_4(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_5, addr 0x6a09ae0, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterInt32Converters_b__19_5(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_6, addr 0x6a09ae8, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterInt32Converters_b__19_6(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_7, addr 0x6a09af0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterInt32Converters_b__19_7(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_8, addr 0x6a09af8, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterInt32Converters_b__19_8(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__19_9, addr 0x6a09b00, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterInt32Converters_b__19_9(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_0, addr 0x6a09bec, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterInt64Converters_b__20_0(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_1, addr 0x6a09bfc, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterInt64Converters_b__20_1(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_10, addr 0x6a09c48, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterInt64Converters_b__20_10(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_11, addr 0x6a09c54, size 0xd0, virtual false, abstract: false, final false
  inline int64_t _RegisterInt64Converters_b__20_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterInt64Converters>b__20_2, addr 0x6a09c04, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterInt64Converters_b__20_2(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_3, addr 0x6a09c0c, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterInt64Converters_b__20_3(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_4, addr 0x6a09c14, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterInt64Converters_b__20_4(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_5, addr 0x6a09c1c, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterInt64Converters_b__20_5(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_6, addr 0x6a09c24, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterInt64Converters_b__20_6(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_7, addr 0x6a09c2c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterInt64Converters_b__20_7(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_8, addr 0x6a09c34, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterInt64Converters_b__20_8(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__20_9, addr 0x6a09c3c, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterInt64Converters_b__20_9(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_0, addr 0x6a09838, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterInt8Converters_b__17_0(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_1, addr 0x6a09848, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterInt8Converters_b__17_1(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_10, addr 0x6a09894, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterInt8Converters_b__17_10(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_11, addr 0x6a098a0, size 0xd4, virtual false, abstract: false, final false
  inline int8_t _RegisterInt8Converters_b__17_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterInt8Converters>b__17_2, addr 0x6a09850, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterInt8Converters_b__17_2(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_3, addr 0x6a09858, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterInt8Converters_b__17_3(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_4, addr 0x6a09860, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterInt8Converters_b__17_4(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_5, addr 0x6a09868, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterInt8Converters_b__17_5(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_6, addr 0x6a09870, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterInt8Converters_b__17_6(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_7, addr 0x6a09878, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterInt8Converters_b__17_7(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_8, addr 0x6a09880, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterInt8Converters_b__17_8(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__17_9, addr 0x6a09888, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterInt8Converters_b__17_9(::ByRef<int8_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_0, addr 0x6a09e84, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterUInt16Converters_b__22_0(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_1, addr 0x6a09e94, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterUInt16Converters_b__22_1(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_10, addr 0x6a09ee0, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterUInt16Converters_b__22_10(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_11, addr 0x6a09eec, size 0xd4, virtual false, abstract: false, final false
  inline uint16_t _RegisterUInt16Converters_b__22_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterUInt16Converters>b__22_2, addr 0x6a09e9c, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterUInt16Converters_b__22_2(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_3, addr 0x6a09ea4, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterUInt16Converters_b__22_3(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_4, addr 0x6a09eac, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterUInt16Converters_b__22_4(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_5, addr 0x6a09eb4, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterUInt16Converters_b__22_5(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_6, addr 0x6a09ebc, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterUInt16Converters_b__22_6(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_7, addr 0x6a09ec4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterUInt16Converters_b__22_7(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_8, addr 0x6a09ecc, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterUInt16Converters_b__22_8(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__22_9, addr 0x6a09ed4, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterUInt16Converters_b__22_9(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_0, addr 0x6a09fc0, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterUInt32Converters_b__23_0(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_1, addr 0x6a09fd0, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterUInt32Converters_b__23_1(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_10, addr 0x6a0a01c, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterUInt32Converters_b__23_10(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_11, addr 0x6a0a028, size 0xd4, virtual false, abstract: false, final false
  inline uint32_t _RegisterUInt32Converters_b__23_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterUInt32Converters>b__23_2, addr 0x6a09fd8, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterUInt32Converters_b__23_2(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_3, addr 0x6a09fe0, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterUInt32Converters_b__23_3(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_4, addr 0x6a09fe8, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterUInt32Converters_b__23_4(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_5, addr 0x6a09ff0, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterUInt32Converters_b__23_5(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_6, addr 0x6a09ff8, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterUInt32Converters_b__23_6(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_7, addr 0x6a0a000, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterUInt32Converters_b__23_7(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_8, addr 0x6a0a008, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterUInt32Converters_b__23_8(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__23_9, addr 0x6a0a010, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterUInt32Converters_b__23_9(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_0, addr 0x6a0a0fc, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterUInt64Converters_b__24_0(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_1, addr 0x6a0a10c, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterUInt64Converters_b__24_1(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_10, addr 0x6a0a15c, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterUInt64Converters_b__24_10(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_11, addr 0x6a0a168, size 0xd0, virtual false, abstract: false, final false
  inline uint64_t _RegisterUInt64Converters_b__24_11(::ByRef<::StringW> v);

  /// @brief Method <RegisterUInt64Converters>b__24_2, addr 0x6a0a114, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterUInt64Converters_b__24_2(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_3, addr 0x6a0a11c, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterUInt64Converters_b__24_3(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_4, addr 0x6a0a124, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterUInt64Converters_b__24_4(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_5, addr 0x6a0a12c, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterUInt64Converters_b__24_5(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_6, addr 0x6a0a134, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterUInt64Converters_b__24_6(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_7, addr 0x6a0a13c, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterUInt64Converters_b__24_7(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_8, addr 0x6a0a144, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterUInt64Converters_b__24_8(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__24_9, addr 0x6a0a14c, size 0x10, virtual false, abstract: false, final false
  inline float_t _RegisterUInt64Converters_b__24_9(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_0, addr 0x6a09d24, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterUInt8Converters_b__21_0(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_1, addr 0x6a09d34, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterUInt8Converters_b__21_1(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_10, addr 0x6a09d80, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterUInt8Converters_b__21_10(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_11, addr 0x6a09d8c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterUInt8Converters_b__21_11(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_12, addr 0x6a09db0, size 0xd4, virtual false, abstract: false, final false
  inline uint8_t _RegisterUInt8Converters_b__21_12(::ByRef<::StringW> v);

  /// @brief Method <RegisterUInt8Converters>b__21_2, addr 0x6a09d3c, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterUInt8Converters_b__21_2(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_3, addr 0x6a09d44, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterUInt8Converters_b__21_3(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_4, addr 0x6a09d4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterUInt8Converters_b__21_4(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_5, addr 0x6a09d54, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterUInt8Converters_b__21_5(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_6, addr 0x6a09d5c, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterUInt8Converters_b__21_6(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_7, addr 0x6a09d64, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterUInt8Converters_b__21_7(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_8, addr 0x6a09d6c, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterUInt8Converters_b__21_8(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__21_9, addr 0x6a09d74, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterUInt8Converters_b__21_9(::ByRef<uint8_t> v);

  /// @brief Method .ctor, addr 0x6a09834, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ConverterGroups___c* getStaticF___9();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, bool>* getStaticF___9__17_0();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, char16_t>* getStaticF___9__17_1();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, double_t>* getStaticF___9__17_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, int8_t>* getStaticF___9__17_11();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, int16_t>* getStaticF___9__17_2();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, int32_t>* getStaticF___9__17_3();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, int64_t>* getStaticF___9__17_4();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, uint8_t>* getStaticF___9__17_5();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, uint16_t>* getStaticF___9__17_6();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, uint32_t>* getStaticF___9__17_7();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, uint64_t>* getStaticF___9__17_8();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, float_t>* getStaticF___9__17_9();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, bool>* getStaticF___9__18_0();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, int8_t>* getStaticF___9__18_1();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, double_t>* getStaticF___9__18_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, int16_t>* getStaticF___9__18_11();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, char16_t>* getStaticF___9__18_2();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, int32_t>* getStaticF___9__18_3();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, int64_t>* getStaticF___9__18_4();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, uint8_t>* getStaticF___9__18_5();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, uint16_t>* getStaticF___9__18_6();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, uint32_t>* getStaticF___9__18_7();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, uint64_t>* getStaticF___9__18_8();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, float_t>* getStaticF___9__18_9();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, bool>* getStaticF___9__19_0();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, int8_t>* getStaticF___9__19_1();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, double_t>* getStaticF___9__19_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, int32_t>* getStaticF___9__19_11();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, char16_t>* getStaticF___9__19_2();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, int16_t>* getStaticF___9__19_3();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, int64_t>* getStaticF___9__19_4();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, uint8_t>* getStaticF___9__19_5();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, uint16_t>* getStaticF___9__19_6();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, uint32_t>* getStaticF___9__19_7();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, uint64_t>* getStaticF___9__19_8();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, float_t>* getStaticF___9__19_9();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, bool>* getStaticF___9__20_0();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, int8_t>* getStaticF___9__20_1();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, double_t>* getStaticF___9__20_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, int64_t>* getStaticF___9__20_11();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, char16_t>* getStaticF___9__20_2();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, int16_t>* getStaticF___9__20_3();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, int32_t>* getStaticF___9__20_4();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, uint8_t>* getStaticF___9__20_5();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, uint16_t>* getStaticF___9__20_6();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, uint32_t>* getStaticF___9__20_7();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, uint64_t>* getStaticF___9__20_8();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, float_t>* getStaticF___9__20_9();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, bool>* getStaticF___9__21_0();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, int8_t>* getStaticF___9__21_1();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, double_t>* getStaticF___9__21_10();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, ::System::Object*>* getStaticF___9__21_11();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, uint8_t>* getStaticF___9__21_12();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, char16_t>* getStaticF___9__21_2();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, int16_t>* getStaticF___9__21_3();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, int32_t>* getStaticF___9__21_4();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, int64_t>* getStaticF___9__21_5();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, uint16_t>* getStaticF___9__21_6();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, uint32_t>* getStaticF___9__21_7();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, uint64_t>* getStaticF___9__21_8();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, float_t>* getStaticF___9__21_9();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, bool>* getStaticF___9__22_0();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, int8_t>* getStaticF___9__22_1();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, double_t>* getStaticF___9__22_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, uint16_t>* getStaticF___9__22_11();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, char16_t>* getStaticF___9__22_2();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, int16_t>* getStaticF___9__22_3();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, int32_t>* getStaticF___9__22_4();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, int64_t>* getStaticF___9__22_5();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, uint8_t>* getStaticF___9__22_6();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, uint32_t>* getStaticF___9__22_7();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, uint64_t>* getStaticF___9__22_8();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, float_t>* getStaticF___9__22_9();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, bool>* getStaticF___9__23_0();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, int8_t>* getStaticF___9__23_1();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, double_t>* getStaticF___9__23_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, uint32_t>* getStaticF___9__23_11();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, char16_t>* getStaticF___9__23_2();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, int16_t>* getStaticF___9__23_3();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, int32_t>* getStaticF___9__23_4();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, int64_t>* getStaticF___9__23_5();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, uint8_t>* getStaticF___9__23_6();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, uint16_t>* getStaticF___9__23_7();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, uint64_t>* getStaticF___9__23_8();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, float_t>* getStaticF___9__23_9();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, bool>* getStaticF___9__24_0();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, int8_t>* getStaticF___9__24_1();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, double_t>* getStaticF___9__24_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, uint64_t>* getStaticF___9__24_11();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, char16_t>* getStaticF___9__24_2();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, int16_t>* getStaticF___9__24_3();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, int32_t>* getStaticF___9__24_4();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, int64_t>* getStaticF___9__24_5();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, uint8_t>* getStaticF___9__24_6();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, uint16_t>* getStaticF___9__24_7();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, uint32_t>* getStaticF___9__24_8();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, float_t>* getStaticF___9__24_9();

  static inline ::Unity::Properties::TypeConverter_2<float_t, bool>* getStaticF___9__25_0();

  static inline ::Unity::Properties::TypeConverter_2<float_t, int8_t>* getStaticF___9__25_1();

  static inline ::Unity::Properties::TypeConverter_2<float_t, double_t>* getStaticF___9__25_10();

  static inline ::Unity::Properties::TypeConverter_2<float_t, ::StringW>* getStaticF___9__25_11();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, float_t>* getStaticF___9__25_12();

  static inline ::Unity::Properties::TypeConverter_2<float_t, char16_t>* getStaticF___9__25_2();

  static inline ::Unity::Properties::TypeConverter_2<float_t, int16_t>* getStaticF___9__25_3();

  static inline ::Unity::Properties::TypeConverter_2<float_t, int32_t>* getStaticF___9__25_4();

  static inline ::Unity::Properties::TypeConverter_2<float_t, int64_t>* getStaticF___9__25_5();

  static inline ::Unity::Properties::TypeConverter_2<float_t, uint8_t>* getStaticF___9__25_6();

  static inline ::Unity::Properties::TypeConverter_2<float_t, uint16_t>* getStaticF___9__25_7();

  static inline ::Unity::Properties::TypeConverter_2<float_t, uint32_t>* getStaticF___9__25_8();

  static inline ::Unity::Properties::TypeConverter_2<float_t, uint64_t>* getStaticF___9__25_9();

  static inline ::Unity::Properties::TypeConverter_2<double_t, bool>* getStaticF___9__26_0();

  static inline ::Unity::Properties::TypeConverter_2<double_t, int8_t>* getStaticF___9__26_1();

  static inline ::Unity::Properties::TypeConverter_2<double_t, float_t>* getStaticF___9__26_10();

  static inline ::Unity::Properties::TypeConverter_2<double_t, ::StringW>* getStaticF___9__26_11();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, double_t>* getStaticF___9__26_12();

  static inline ::Unity::Properties::TypeConverter_2<double_t, char16_t>* getStaticF___9__26_2();

  static inline ::Unity::Properties::TypeConverter_2<double_t, int16_t>* getStaticF___9__26_3();

  static inline ::Unity::Properties::TypeConverter_2<double_t, int32_t>* getStaticF___9__26_4();

  static inline ::Unity::Properties::TypeConverter_2<double_t, int64_t>* getStaticF___9__26_5();

  static inline ::Unity::Properties::TypeConverter_2<double_t, uint8_t>* getStaticF___9__26_6();

  static inline ::Unity::Properties::TypeConverter_2<double_t, uint16_t>* getStaticF___9__26_7();

  static inline ::Unity::Properties::TypeConverter_2<double_t, uint32_t>* getStaticF___9__26_8();

  static inline ::Unity::Properties::TypeConverter_2<double_t, uint64_t>* getStaticF___9__26_9();

  static inline ::Unity::Properties::TypeConverter_2<bool, char16_t>* getStaticF___9__27_0();

  static inline ::Unity::Properties::TypeConverter_2<bool, int8_t>* getStaticF___9__27_1();

  static inline ::Unity::Properties::TypeConverter_2<bool, double_t>* getStaticF___9__27_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, bool>* getStaticF___9__27_11();

  static inline ::Unity::Properties::TypeConverter_2<bool, int16_t>* getStaticF___9__27_2();

  static inline ::Unity::Properties::TypeConverter_2<bool, int32_t>* getStaticF___9__27_3();

  static inline ::Unity::Properties::TypeConverter_2<bool, int64_t>* getStaticF___9__27_4();

  static inline ::Unity::Properties::TypeConverter_2<bool, uint8_t>* getStaticF___9__27_5();

  static inline ::Unity::Properties::TypeConverter_2<bool, uint16_t>* getStaticF___9__27_6();

  static inline ::Unity::Properties::TypeConverter_2<bool, uint32_t>* getStaticF___9__27_7();

  static inline ::Unity::Properties::TypeConverter_2<bool, uint64_t>* getStaticF___9__27_8();

  static inline ::Unity::Properties::TypeConverter_2<bool, float_t>* getStaticF___9__27_9();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, bool>* getStaticF___9__28_0();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, int8_t>* getStaticF___9__28_1();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, double_t>* getStaticF___9__28_10();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, char16_t>* getStaticF___9__28_11();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, int16_t>* getStaticF___9__28_2();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, int32_t>* getStaticF___9__28_3();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, int64_t>* getStaticF___9__28_4();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, uint8_t>* getStaticF___9__28_5();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, uint16_t>* getStaticF___9__28_6();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, uint32_t>* getStaticF___9__28_7();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, uint64_t>* getStaticF___9__28_8();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, float_t>* getStaticF___9__28_9();

  static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::Color, ::UnityEngine::Color32>* getStaticF___9__29_0();

  static inline ::Unity::Properties::TypeConverter_2<::UnityEngine::Color32, ::UnityEngine::Color>* getStaticF___9__29_1();

  static inline void setStaticF___9(::UnityEngine::UIElements::ConverterGroups___c* value);

  static inline void setStaticF___9__17_0(::Unity::Properties::TypeConverter_2<int8_t, bool>* value);

  static inline void setStaticF___9__17_1(::Unity::Properties::TypeConverter_2<int8_t, char16_t>* value);

  static inline void setStaticF___9__17_10(::Unity::Properties::TypeConverter_2<int8_t, double_t>* value);

  static inline void setStaticF___9__17_11(::Unity::Properties::TypeConverter_2<::StringW, int8_t>* value);

  static inline void setStaticF___9__17_2(::Unity::Properties::TypeConverter_2<int8_t, int16_t>* value);

  static inline void setStaticF___9__17_3(::Unity::Properties::TypeConverter_2<int8_t, int32_t>* value);

  static inline void setStaticF___9__17_4(::Unity::Properties::TypeConverter_2<int8_t, int64_t>* value);

  static inline void setStaticF___9__17_5(::Unity::Properties::TypeConverter_2<int8_t, uint8_t>* value);

  static inline void setStaticF___9__17_6(::Unity::Properties::TypeConverter_2<int8_t, uint16_t>* value);

  static inline void setStaticF___9__17_7(::Unity::Properties::TypeConverter_2<int8_t, uint32_t>* value);

  static inline void setStaticF___9__17_8(::Unity::Properties::TypeConverter_2<int8_t, uint64_t>* value);

  static inline void setStaticF___9__17_9(::Unity::Properties::TypeConverter_2<int8_t, float_t>* value);

  static inline void setStaticF___9__18_0(::Unity::Properties::TypeConverter_2<int16_t, bool>* value);

  static inline void setStaticF___9__18_1(::Unity::Properties::TypeConverter_2<int16_t, int8_t>* value);

  static inline void setStaticF___9__18_10(::Unity::Properties::TypeConverter_2<int16_t, double_t>* value);

  static inline void setStaticF___9__18_11(::Unity::Properties::TypeConverter_2<::StringW, int16_t>* value);

  static inline void setStaticF___9__18_2(::Unity::Properties::TypeConverter_2<int16_t, char16_t>* value);

  static inline void setStaticF___9__18_3(::Unity::Properties::TypeConverter_2<int16_t, int32_t>* value);

  static inline void setStaticF___9__18_4(::Unity::Properties::TypeConverter_2<int16_t, int64_t>* value);

  static inline void setStaticF___9__18_5(::Unity::Properties::TypeConverter_2<int16_t, uint8_t>* value);

  static inline void setStaticF___9__18_6(::Unity::Properties::TypeConverter_2<int16_t, uint16_t>* value);

  static inline void setStaticF___9__18_7(::Unity::Properties::TypeConverter_2<int16_t, uint32_t>* value);

  static inline void setStaticF___9__18_8(::Unity::Properties::TypeConverter_2<int16_t, uint64_t>* value);

  static inline void setStaticF___9__18_9(::Unity::Properties::TypeConverter_2<int16_t, float_t>* value);

  static inline void setStaticF___9__19_0(::Unity::Properties::TypeConverter_2<int32_t, bool>* value);

  static inline void setStaticF___9__19_1(::Unity::Properties::TypeConverter_2<int32_t, int8_t>* value);

  static inline void setStaticF___9__19_10(::Unity::Properties::TypeConverter_2<int32_t, double_t>* value);

  static inline void setStaticF___9__19_11(::Unity::Properties::TypeConverter_2<::StringW, int32_t>* value);

  static inline void setStaticF___9__19_2(::Unity::Properties::TypeConverter_2<int32_t, char16_t>* value);

  static inline void setStaticF___9__19_3(::Unity::Properties::TypeConverter_2<int32_t, int16_t>* value);

  static inline void setStaticF___9__19_4(::Unity::Properties::TypeConverter_2<int32_t, int64_t>* value);

  static inline void setStaticF___9__19_5(::Unity::Properties::TypeConverter_2<int32_t, uint8_t>* value);

  static inline void setStaticF___9__19_6(::Unity::Properties::TypeConverter_2<int32_t, uint16_t>* value);

  static inline void setStaticF___9__19_7(::Unity::Properties::TypeConverter_2<int32_t, uint32_t>* value);

  static inline void setStaticF___9__19_8(::Unity::Properties::TypeConverter_2<int32_t, uint64_t>* value);

  static inline void setStaticF___9__19_9(::Unity::Properties::TypeConverter_2<int32_t, float_t>* value);

  static inline void setStaticF___9__20_0(::Unity::Properties::TypeConverter_2<int64_t, bool>* value);

  static inline void setStaticF___9__20_1(::Unity::Properties::TypeConverter_2<int64_t, int8_t>* value);

  static inline void setStaticF___9__20_10(::Unity::Properties::TypeConverter_2<int64_t, double_t>* value);

  static inline void setStaticF___9__20_11(::Unity::Properties::TypeConverter_2<::StringW, int64_t>* value);

  static inline void setStaticF___9__20_2(::Unity::Properties::TypeConverter_2<int64_t, char16_t>* value);

  static inline void setStaticF___9__20_3(::Unity::Properties::TypeConverter_2<int64_t, int16_t>* value);

  static inline void setStaticF___9__20_4(::Unity::Properties::TypeConverter_2<int64_t, int32_t>* value);

  static inline void setStaticF___9__20_5(::Unity::Properties::TypeConverter_2<int64_t, uint8_t>* value);

  static inline void setStaticF___9__20_6(::Unity::Properties::TypeConverter_2<int64_t, uint16_t>* value);

  static inline void setStaticF___9__20_7(::Unity::Properties::TypeConverter_2<int64_t, uint32_t>* value);

  static inline void setStaticF___9__20_8(::Unity::Properties::TypeConverter_2<int64_t, uint64_t>* value);

  static inline void setStaticF___9__20_9(::Unity::Properties::TypeConverter_2<int64_t, float_t>* value);

  static inline void setStaticF___9__21_0(::Unity::Properties::TypeConverter_2<uint8_t, bool>* value);

  static inline void setStaticF___9__21_1(::Unity::Properties::TypeConverter_2<uint8_t, int8_t>* value);

  static inline void setStaticF___9__21_10(::Unity::Properties::TypeConverter_2<uint8_t, double_t>* value);

  static inline void setStaticF___9__21_11(::Unity::Properties::TypeConverter_2<uint8_t, ::System::Object*>* value);

  static inline void setStaticF___9__21_12(::Unity::Properties::TypeConverter_2<::StringW, uint8_t>* value);

  static inline void setStaticF___9__21_2(::Unity::Properties::TypeConverter_2<uint8_t, char16_t>* value);

  static inline void setStaticF___9__21_3(::Unity::Properties::TypeConverter_2<uint8_t, int16_t>* value);

  static inline void setStaticF___9__21_4(::Unity::Properties::TypeConverter_2<uint8_t, int32_t>* value);

  static inline void setStaticF___9__21_5(::Unity::Properties::TypeConverter_2<uint8_t, int64_t>* value);

  static inline void setStaticF___9__21_6(::Unity::Properties::TypeConverter_2<uint8_t, uint16_t>* value);

  static inline void setStaticF___9__21_7(::Unity::Properties::TypeConverter_2<uint8_t, uint32_t>* value);

  static inline void setStaticF___9__21_8(::Unity::Properties::TypeConverter_2<uint8_t, uint64_t>* value);

  static inline void setStaticF___9__21_9(::Unity::Properties::TypeConverter_2<uint8_t, float_t>* value);

  static inline void setStaticF___9__22_0(::Unity::Properties::TypeConverter_2<uint16_t, bool>* value);

  static inline void setStaticF___9__22_1(::Unity::Properties::TypeConverter_2<uint16_t, int8_t>* value);

  static inline void setStaticF___9__22_10(::Unity::Properties::TypeConverter_2<uint16_t, double_t>* value);

  static inline void setStaticF___9__22_11(::Unity::Properties::TypeConverter_2<::StringW, uint16_t>* value);

  static inline void setStaticF___9__22_2(::Unity::Properties::TypeConverter_2<uint16_t, char16_t>* value);

  static inline void setStaticF___9__22_3(::Unity::Properties::TypeConverter_2<uint16_t, int16_t>* value);

  static inline void setStaticF___9__22_4(::Unity::Properties::TypeConverter_2<uint16_t, int32_t>* value);

  static inline void setStaticF___9__22_5(::Unity::Properties::TypeConverter_2<uint16_t, int64_t>* value);

  static inline void setStaticF___9__22_6(::Unity::Properties::TypeConverter_2<uint16_t, uint8_t>* value);

  static inline void setStaticF___9__22_7(::Unity::Properties::TypeConverter_2<uint16_t, uint32_t>* value);

  static inline void setStaticF___9__22_8(::Unity::Properties::TypeConverter_2<uint16_t, uint64_t>* value);

  static inline void setStaticF___9__22_9(::Unity::Properties::TypeConverter_2<uint16_t, float_t>* value);

  static inline void setStaticF___9__23_0(::Unity::Properties::TypeConverter_2<uint32_t, bool>* value);

  static inline void setStaticF___9__23_1(::Unity::Properties::TypeConverter_2<uint32_t, int8_t>* value);

  static inline void setStaticF___9__23_10(::Unity::Properties::TypeConverter_2<uint32_t, double_t>* value);

  static inline void setStaticF___9__23_11(::Unity::Properties::TypeConverter_2<::StringW, uint32_t>* value);

  static inline void setStaticF___9__23_2(::Unity::Properties::TypeConverter_2<uint32_t, char16_t>* value);

  static inline void setStaticF___9__23_3(::Unity::Properties::TypeConverter_2<uint32_t, int16_t>* value);

  static inline void setStaticF___9__23_4(::Unity::Properties::TypeConverter_2<uint32_t, int32_t>* value);

  static inline void setStaticF___9__23_5(::Unity::Properties::TypeConverter_2<uint32_t, int64_t>* value);

  static inline void setStaticF___9__23_6(::Unity::Properties::TypeConverter_2<uint32_t, uint8_t>* value);

  static inline void setStaticF___9__23_7(::Unity::Properties::TypeConverter_2<uint32_t, uint16_t>* value);

  static inline void setStaticF___9__23_8(::Unity::Properties::TypeConverter_2<uint32_t, uint64_t>* value);

  static inline void setStaticF___9__23_9(::Unity::Properties::TypeConverter_2<uint32_t, float_t>* value);

  static inline void setStaticF___9__24_0(::Unity::Properties::TypeConverter_2<uint64_t, bool>* value);

  static inline void setStaticF___9__24_1(::Unity::Properties::TypeConverter_2<uint64_t, int8_t>* value);

  static inline void setStaticF___9__24_10(::Unity::Properties::TypeConverter_2<uint64_t, double_t>* value);

  static inline void setStaticF___9__24_11(::Unity::Properties::TypeConverter_2<::StringW, uint64_t>* value);

  static inline void setStaticF___9__24_2(::Unity::Properties::TypeConverter_2<uint64_t, char16_t>* value);

  static inline void setStaticF___9__24_3(::Unity::Properties::TypeConverter_2<uint64_t, int16_t>* value);

  static inline void setStaticF___9__24_4(::Unity::Properties::TypeConverter_2<uint64_t, int32_t>* value);

  static inline void setStaticF___9__24_5(::Unity::Properties::TypeConverter_2<uint64_t, int64_t>* value);

  static inline void setStaticF___9__24_6(::Unity::Properties::TypeConverter_2<uint64_t, uint8_t>* value);

  static inline void setStaticF___9__24_7(::Unity::Properties::TypeConverter_2<uint64_t, uint16_t>* value);

  static inline void setStaticF___9__24_8(::Unity::Properties::TypeConverter_2<uint64_t, uint32_t>* value);

  static inline void setStaticF___9__24_9(::Unity::Properties::TypeConverter_2<uint64_t, float_t>* value);

  static inline void setStaticF___9__25_0(::Unity::Properties::TypeConverter_2<float_t, bool>* value);

  static inline void setStaticF___9__25_1(::Unity::Properties::TypeConverter_2<float_t, int8_t>* value);

  static inline void setStaticF___9__25_10(::Unity::Properties::TypeConverter_2<float_t, double_t>* value);

  static inline void setStaticF___9__25_11(::Unity::Properties::TypeConverter_2<float_t, ::StringW>* value);

  static inline void setStaticF___9__25_12(::Unity::Properties::TypeConverter_2<::StringW, float_t>* value);

  static inline void setStaticF___9__25_2(::Unity::Properties::TypeConverter_2<float_t, char16_t>* value);

  static inline void setStaticF___9__25_3(::Unity::Properties::TypeConverter_2<float_t, int16_t>* value);

  static inline void setStaticF___9__25_4(::Unity::Properties::TypeConverter_2<float_t, int32_t>* value);

  static inline void setStaticF___9__25_5(::Unity::Properties::TypeConverter_2<float_t, int64_t>* value);

  static inline void setStaticF___9__25_6(::Unity::Properties::TypeConverter_2<float_t, uint8_t>* value);

  static inline void setStaticF___9__25_7(::Unity::Properties::TypeConverter_2<float_t, uint16_t>* value);

  static inline void setStaticF___9__25_8(::Unity::Properties::TypeConverter_2<float_t, uint32_t>* value);

  static inline void setStaticF___9__25_9(::Unity::Properties::TypeConverter_2<float_t, uint64_t>* value);

  static inline void setStaticF___9__26_0(::Unity::Properties::TypeConverter_2<double_t, bool>* value);

  static inline void setStaticF___9__26_1(::Unity::Properties::TypeConverter_2<double_t, int8_t>* value);

  static inline void setStaticF___9__26_10(::Unity::Properties::TypeConverter_2<double_t, float_t>* value);

  static inline void setStaticF___9__26_11(::Unity::Properties::TypeConverter_2<double_t, ::StringW>* value);

  static inline void setStaticF___9__26_12(::Unity::Properties::TypeConverter_2<::StringW, double_t>* value);

  static inline void setStaticF___9__26_2(::Unity::Properties::TypeConverter_2<double_t, char16_t>* value);

  static inline void setStaticF___9__26_3(::Unity::Properties::TypeConverter_2<double_t, int16_t>* value);

  static inline void setStaticF___9__26_4(::Unity::Properties::TypeConverter_2<double_t, int32_t>* value);

  static inline void setStaticF___9__26_5(::Unity::Properties::TypeConverter_2<double_t, int64_t>* value);

  static inline void setStaticF___9__26_6(::Unity::Properties::TypeConverter_2<double_t, uint8_t>* value);

  static inline void setStaticF___9__26_7(::Unity::Properties::TypeConverter_2<double_t, uint16_t>* value);

  static inline void setStaticF___9__26_8(::Unity::Properties::TypeConverter_2<double_t, uint32_t>* value);

  static inline void setStaticF___9__26_9(::Unity::Properties::TypeConverter_2<double_t, uint64_t>* value);

  static inline void setStaticF___9__27_0(::Unity::Properties::TypeConverter_2<bool, char16_t>* value);

  static inline void setStaticF___9__27_1(::Unity::Properties::TypeConverter_2<bool, int8_t>* value);

  static inline void setStaticF___9__27_10(::Unity::Properties::TypeConverter_2<bool, double_t>* value);

  static inline void setStaticF___9__27_11(::Unity::Properties::TypeConverter_2<::StringW, bool>* value);

  static inline void setStaticF___9__27_2(::Unity::Properties::TypeConverter_2<bool, int16_t>* value);

  static inline void setStaticF___9__27_3(::Unity::Properties::TypeConverter_2<bool, int32_t>* value);

  static inline void setStaticF___9__27_4(::Unity::Properties::TypeConverter_2<bool, int64_t>* value);

  static inline void setStaticF___9__27_5(::Unity::Properties::TypeConverter_2<bool, uint8_t>* value);

  static inline void setStaticF___9__27_6(::Unity::Properties::TypeConverter_2<bool, uint16_t>* value);

  static inline void setStaticF___9__27_7(::Unity::Properties::TypeConverter_2<bool, uint32_t>* value);

  static inline void setStaticF___9__27_8(::Unity::Properties::TypeConverter_2<bool, uint64_t>* value);

  static inline void setStaticF___9__27_9(::Unity::Properties::TypeConverter_2<bool, float_t>* value);

  static inline void setStaticF___9__28_0(::Unity::Properties::TypeConverter_2<char16_t, bool>* value);

  static inline void setStaticF___9__28_1(::Unity::Properties::TypeConverter_2<char16_t, int8_t>* value);

  static inline void setStaticF___9__28_10(::Unity::Properties::TypeConverter_2<char16_t, double_t>* value);

  static inline void setStaticF___9__28_11(::Unity::Properties::TypeConverter_2<::StringW, char16_t>* value);

  static inline void setStaticF___9__28_2(::Unity::Properties::TypeConverter_2<char16_t, int16_t>* value);

  static inline void setStaticF___9__28_3(::Unity::Properties::TypeConverter_2<char16_t, int32_t>* value);

  static inline void setStaticF___9__28_4(::Unity::Properties::TypeConverter_2<char16_t, int64_t>* value);

  static inline void setStaticF___9__28_5(::Unity::Properties::TypeConverter_2<char16_t, uint8_t>* value);

  static inline void setStaticF___9__28_6(::Unity::Properties::TypeConverter_2<char16_t, uint16_t>* value);

  static inline void setStaticF___9__28_7(::Unity::Properties::TypeConverter_2<char16_t, uint32_t>* value);

  static inline void setStaticF___9__28_8(::Unity::Properties::TypeConverter_2<char16_t, uint64_t>* value);

  static inline void setStaticF___9__28_9(::Unity::Properties::TypeConverter_2<char16_t, float_t>* value);

  static inline void setStaticF___9__29_0(::Unity::Properties::TypeConverter_2<::UnityEngine::Color, ::UnityEngine::Color32>* value);

  static inline void setStaticF___9__29_1(::Unity::Properties::TypeConverter_2<::UnityEngine::Color32, ::UnityEngine::Color>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConverterGroups___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroups___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConverterGroups___c(ConverterGroups___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroups___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConverterGroups___c(ConverterGroups___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4034 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ConverterGroups___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ConverterGroups
class CORDL_TYPE ConverterGroups : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::ConverterGroups___c;

  /// @brief Field s_BindingConverterGroups, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BindingConverterGroups,
                      put = setStaticF_s_BindingConverterGroups)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>* s_BindingConverterGroups;

  /// @brief Field s_GlobalConverters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GlobalConverters, put = setStaticF_s_GlobalConverters)) ::UnityEngine::UIElements::ConverterGroup* s_GlobalConverters;

  /// @brief Field s_PrimitivesConverters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PrimitivesConverters, put = setStaticF_s_PrimitivesConverters)) ::UnityEngine::UIElements::ConverterGroup* s_PrimitivesConverters;

  /// @brief Method RegisterBooleanConverters, addr 0x6a078a8, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterBooleanConverters();

  /// @brief Method RegisterCharConverters, addr 0x6a086c4, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterCharConverters();

  /// @brief Method RegisterColorConverters, addr 0x6a094e0, size 0x300, virtual false, abstract: false, final false
  static inline void RegisterColorConverters();

  /// @brief Method RegisterDoubleConverters, addr 0x6a0696c, size 0xf3c, virtual false, abstract: false, final false
  static inline void RegisterDoubleConverters();

  /// @brief Method RegisterFloatConverters, addr 0x6a05a30, size 0xf3c, virtual false, abstract: false, final false
  static inline void RegisterFloatConverters();

  /// @brief Method RegisterGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline void RegisterGlobal(::Unity::Properties::TypeConverter_2<TSource, TDestination>* converter);

  /// @brief Method RegisterInt16Converters, addr 0x69ff64c, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterInt16Converters();

  /// @brief Method RegisterInt32Converters, addr 0x6a00468, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterInt32Converters();

  /// @brief Method RegisterInt64Converters, addr 0x6a01284, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterInt64Converters();

  /// @brief Method RegisterInt8Converters, addr 0x69fe830, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterInt8Converters();

  /// @brief Method RegisterPrimitivesConverter, addr 0x69fe7b0, size 0x80, virtual false, abstract: false, final false
  static inline void RegisterPrimitivesConverter();

  /// @brief Method RegisterUInt16Converters, addr 0x6a02fdc, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterUInt16Converters();

  /// @brief Method RegisterUInt32Converters, addr 0x6a03df8, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterUInt32Converters();

  /// @brief Method RegisterUInt64Converters, addr 0x6a04c14, size 0xe1c, virtual false, abstract: false, final false
  static inline void RegisterUInt64Converters();

  /// @brief Method RegisterUInt8Converters, addr 0x6a020a0, size 0xf3c, virtual false, abstract: false, final false
  static inline void RegisterUInt8Converters();

  /// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvert(::ByRef<TSource> source, ::ByRef<TDestination> destination);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>* getStaticF_s_BindingConverterGroups();

  static inline ::UnityEngine::UIElements::ConverterGroup* getStaticF_s_GlobalConverters();

  static inline ::UnityEngine::UIElements::ConverterGroup* getStaticF_s_PrimitivesConverters();

  static inline void setStaticF_s_BindingConverterGroups(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::ConverterGroup*>* value);

  static inline void setStaticF_s_GlobalConverters(::UnityEngine::UIElements::ConverterGroup* value);

  static inline void setStaticF_s_PrimitivesConverters(::UnityEngine::UIElements::ConverterGroup* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConverterGroups();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroups", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConverterGroups(ConverterGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroups", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConverterGroups(ConverterGroups const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4035 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ConverterGroups, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ConverterGroups);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ConverterGroups*, "UnityEngine.UIElements", "ConverterGroups");
NEED_NO_BOX(::UnityEngine::UIElements::ConverterGroups___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ConverterGroups___c*, "UnityEngine.UIElements", "ConverterGroups/<>c");
