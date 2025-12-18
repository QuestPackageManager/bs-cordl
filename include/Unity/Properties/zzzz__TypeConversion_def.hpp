#pragma once
// IWYU pragma private; include "Unity/Properties/TypeConversion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeConversion)
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Properties {
class PrimitiveConverters_TypeConversion___c;
}
namespace Unity::Properties {
class TypeConversion_PrimitiveConverters;
}
namespace Unity::Properties {
template <typename TSource, typename TDestination> class TypeConverter_2;
}
// Forward declare root types
namespace Unity::Properties {
class PrimitiveConverters_TypeConversion___c;
}
namespace Unity::Properties {
class TypeConversion;
}
namespace Unity::Properties {
class TypeConversion_PrimitiveConverters;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::PrimitiveConverters_TypeConversion___c);
MARK_REF_PTR_T(::Unity::Properties::TypeConversion);
MARK_REF_PTR_T(::Unity::Properties::TypeConversion_PrimitiveConverters);
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeConversion/PrimitiveConverters/<>c
class CORDL_TYPE PrimitiveConverters_TypeConversion___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::PrimitiveConverters_TypeConversion___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>* __9__0_0;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::Unity::Properties::TypeConverter_2<double_t, int8_t>* __9__10_0;

  /// @brief Field <>9__10_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_1, put = setStaticF___9__10_1)) ::Unity::Properties::TypeConverter_2<double_t, char16_t>* __9__10_1;

  /// @brief Field <>9__10_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_10, put = setStaticF___9__10_10)) ::Unity::Properties::TypeConverter_2<double_t, float_t>* __9__10_10;

  /// @brief Field <>9__10_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_11, put = setStaticF___9__10_11)) ::Unity::Properties::TypeConverter_2<double_t, ::System::Object*>* __9__10_11;

  /// @brief Field <>9__10_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_2, put = setStaticF___9__10_2)) ::Unity::Properties::TypeConverter_2<double_t, bool>* __9__10_2;

  /// @brief Field <>9__10_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_3, put = setStaticF___9__10_3)) ::Unity::Properties::TypeConverter_2<double_t, int16_t>* __9__10_3;

  /// @brief Field <>9__10_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_4, put = setStaticF___9__10_4)) ::Unity::Properties::TypeConverter_2<double_t, int32_t>* __9__10_4;

  /// @brief Field <>9__10_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_5, put = setStaticF___9__10_5)) ::Unity::Properties::TypeConverter_2<double_t, int64_t>* __9__10_5;

  /// @brief Field <>9__10_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_6, put = setStaticF___9__10_6)) ::Unity::Properties::TypeConverter_2<double_t, uint8_t>* __9__10_6;

  /// @brief Field <>9__10_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_7, put = setStaticF___9__10_7)) ::Unity::Properties::TypeConverter_2<double_t, uint16_t>* __9__10_7;

  /// @brief Field <>9__10_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_8, put = setStaticF___9__10_8)) ::Unity::Properties::TypeConverter_2<double_t, uint32_t>* __9__10_8;

  /// @brief Field <>9__10_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_9, put = setStaticF___9__10_9)) ::Unity::Properties::TypeConverter_2<double_t, uint64_t>* __9__10_9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::Unity::Properties::TypeConverter_2<bool, char16_t>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_1, put = setStaticF___9__11_1)) ::Unity::Properties::TypeConverter_2<bool, int8_t>* __9__11_1;

  /// @brief Field <>9__11_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_10, put = setStaticF___9__11_10)) ::Unity::Properties::TypeConverter_2<bool, double_t>* __9__11_10;

  /// @brief Field <>9__11_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_11, put = setStaticF___9__11_11)) ::Unity::Properties::TypeConverter_2<bool, ::System::Object*>* __9__11_11;

  /// @brief Field <>9__11_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_2, put = setStaticF___9__11_2)) ::Unity::Properties::TypeConverter_2<bool, int16_t>* __9__11_2;

  /// @brief Field <>9__11_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_3, put = setStaticF___9__11_3)) ::Unity::Properties::TypeConverter_2<bool, int32_t>* __9__11_3;

  /// @brief Field <>9__11_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_4, put = setStaticF___9__11_4)) ::Unity::Properties::TypeConverter_2<bool, int64_t>* __9__11_4;

  /// @brief Field <>9__11_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_5, put = setStaticF___9__11_5)) ::Unity::Properties::TypeConverter_2<bool, uint8_t>* __9__11_5;

  /// @brief Field <>9__11_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_6, put = setStaticF___9__11_6)) ::Unity::Properties::TypeConverter_2<bool, uint16_t>* __9__11_6;

  /// @brief Field <>9__11_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_7, put = setStaticF___9__11_7)) ::Unity::Properties::TypeConverter_2<bool, uint32_t>* __9__11_7;

  /// @brief Field <>9__11_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_8, put = setStaticF___9__11_8)) ::Unity::Properties::TypeConverter_2<bool, uint64_t>* __9__11_8;

  /// @brief Field <>9__11_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_9, put = setStaticF___9__11_9)) ::Unity::Properties::TypeConverter_2<bool, float_t>* __9__11_9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::Unity::Properties::TypeConverter_2<::StringW, char16_t>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_1, put = setStaticF___9__12_1)) ::Unity::Properties::TypeConverter_2<char16_t, bool>* __9__12_1;

  /// @brief Field <>9__12_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_10, put = setStaticF___9__12_10)) ::Unity::Properties::TypeConverter_2<char16_t, float_t>* __9__12_10;

  /// @brief Field <>9__12_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_11, put = setStaticF___9__12_11)) ::Unity::Properties::TypeConverter_2<char16_t, double_t>* __9__12_11;

  /// @brief Field <>9__12_12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_12, put = setStaticF___9__12_12)) ::Unity::Properties::TypeConverter_2<char16_t, ::System::Object*>* __9__12_12;

  /// @brief Field <>9__12_13, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_13, put = setStaticF___9__12_13)) ::Unity::Properties::TypeConverter_2<char16_t, ::StringW>* __9__12_13;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2)) ::Unity::Properties::TypeConverter_2<char16_t, int8_t>* __9__12_2;

  /// @brief Field <>9__12_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_3, put = setStaticF___9__12_3)) ::Unity::Properties::TypeConverter_2<char16_t, int16_t>* __9__12_3;

  /// @brief Field <>9__12_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_4, put = setStaticF___9__12_4)) ::Unity::Properties::TypeConverter_2<char16_t, int32_t>* __9__12_4;

  /// @brief Field <>9__12_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_5, put = setStaticF___9__12_5)) ::Unity::Properties::TypeConverter_2<char16_t, int64_t>* __9__12_5;

  /// @brief Field <>9__12_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_6, put = setStaticF___9__12_6)) ::Unity::Properties::TypeConverter_2<char16_t, uint8_t>* __9__12_6;

  /// @brief Field <>9__12_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_7, put = setStaticF___9__12_7)) ::Unity::Properties::TypeConverter_2<char16_t, uint16_t>* __9__12_7;

  /// @brief Field <>9__12_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_8, put = setStaticF___9__12_8)) ::Unity::Properties::TypeConverter_2<char16_t, uint32_t>* __9__12_8;

  /// @brief Field <>9__12_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_9, put = setStaticF___9__12_9)) ::Unity::Properties::TypeConverter_2<char16_t, uint64_t>* __9__12_9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0)) ::Unity::Properties::TypeConverter_2<::StringW, char16_t>* __9__13_0;

  /// @brief Field <>9__13_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_1, put = setStaticF___9__13_1)) ::Unity::Properties::TypeConverter_2<char16_t, ::StringW>* __9__13_1;

  /// @brief Field <>9__13_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_10, put = setStaticF___9__13_10)) ::Unity::Properties::TypeConverter_2<::StringW, int64_t>* __9__13_10;

  /// @brief Field <>9__13_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_11, put = setStaticF___9__13_11)) ::Unity::Properties::TypeConverter_2<int64_t, ::StringW>* __9__13_11;

  /// @brief Field <>9__13_12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_12, put = setStaticF___9__13_12)) ::Unity::Properties::TypeConverter_2<::StringW, uint8_t>* __9__13_12;

  /// @brief Field <>9__13_13, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_13, put = setStaticF___9__13_13)) ::Unity::Properties::TypeConverter_2<uint8_t, ::StringW>* __9__13_13;

  /// @brief Field <>9__13_14, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_14, put = setStaticF___9__13_14)) ::Unity::Properties::TypeConverter_2<::StringW, uint16_t>* __9__13_14;

  /// @brief Field <>9__13_15, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_15, put = setStaticF___9__13_15)) ::Unity::Properties::TypeConverter_2<uint16_t, ::StringW>* __9__13_15;

  /// @brief Field <>9__13_16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_16, put = setStaticF___9__13_16)) ::Unity::Properties::TypeConverter_2<::StringW, uint32_t>* __9__13_16;

  /// @brief Field <>9__13_17, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_17, put = setStaticF___9__13_17)) ::Unity::Properties::TypeConverter_2<uint32_t, ::StringW>* __9__13_17;

  /// @brief Field <>9__13_18, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_18, put = setStaticF___9__13_18)) ::Unity::Properties::TypeConverter_2<::StringW, uint64_t>* __9__13_18;

  /// @brief Field <>9__13_19, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_19, put = setStaticF___9__13_19)) ::Unity::Properties::TypeConverter_2<uint64_t, ::StringW>* __9__13_19;

  /// @brief Field <>9__13_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_2, put = setStaticF___9__13_2)) ::Unity::Properties::TypeConverter_2<::StringW, bool>* __9__13_2;

  /// @brief Field <>9__13_20, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_20, put = setStaticF___9__13_20)) ::Unity::Properties::TypeConverter_2<::StringW, float_t>* __9__13_20;

  /// @brief Field <>9__13_21, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_21, put = setStaticF___9__13_21)) ::Unity::Properties::TypeConverter_2<float_t, ::StringW>* __9__13_21;

  /// @brief Field <>9__13_22, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_22, put = setStaticF___9__13_22)) ::Unity::Properties::TypeConverter_2<::StringW, double_t>* __9__13_22;

  /// @brief Field <>9__13_23, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_23, put = setStaticF___9__13_23)) ::Unity::Properties::TypeConverter_2<double_t, ::StringW>* __9__13_23;

  /// @brief Field <>9__13_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_3, put = setStaticF___9__13_3)) ::Unity::Properties::TypeConverter_2<bool, ::StringW>* __9__13_3;

  /// @brief Field <>9__13_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_4, put = setStaticF___9__13_4)) ::Unity::Properties::TypeConverter_2<::StringW, int8_t>* __9__13_4;

  /// @brief Field <>9__13_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_5, put = setStaticF___9__13_5)) ::Unity::Properties::TypeConverter_2<int8_t, ::StringW>* __9__13_5;

  /// @brief Field <>9__13_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_6, put = setStaticF___9__13_6)) ::Unity::Properties::TypeConverter_2<::StringW, int16_t>* __9__13_6;

  /// @brief Field <>9__13_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_7, put = setStaticF___9__13_7)) ::Unity::Properties::TypeConverter_2<int16_t, ::StringW>* __9__13_7;

  /// @brief Field <>9__13_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_8, put = setStaticF___9__13_8)) ::Unity::Properties::TypeConverter_2<::StringW, int32_t>* __9__13_8;

  /// @brief Field <>9__13_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_9, put = setStaticF___9__13_9)) ::Unity::Properties::TypeConverter_2<int32_t, ::StringW>* __9__13_9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::Unity::Properties::TypeConverter_2<::System::Object*, char16_t>* __9__14_0;

  /// @brief Field <>9__14_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_1, put = setStaticF___9__14_1)) ::Unity::Properties::TypeConverter_2<::System::Object*, bool>* __9__14_1;

  /// @brief Field <>9__14_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_10, put = setStaticF___9__14_10)) ::Unity::Properties::TypeConverter_2<::System::Object*, float_t>* __9__14_10;

  /// @brief Field <>9__14_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_11, put = setStaticF___9__14_11)) ::Unity::Properties::TypeConverter_2<::System::Object*, double_t>* __9__14_11;

  /// @brief Field <>9__14_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_2, put = setStaticF___9__14_2)) ::Unity::Properties::TypeConverter_2<::System::Object*, int8_t>* __9__14_2;

  /// @brief Field <>9__14_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_3, put = setStaticF___9__14_3)) ::Unity::Properties::TypeConverter_2<::System::Object*, int16_t>* __9__14_3;

  /// @brief Field <>9__14_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_4, put = setStaticF___9__14_4)) ::Unity::Properties::TypeConverter_2<::System::Object*, int32_t>* __9__14_4;

  /// @brief Field <>9__14_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_5, put = setStaticF___9__14_5)) ::Unity::Properties::TypeConverter_2<::System::Object*, int64_t>* __9__14_5;

  /// @brief Field <>9__14_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_6, put = setStaticF___9__14_6)) ::Unity::Properties::TypeConverter_2<::System::Object*, uint8_t>* __9__14_6;

  /// @brief Field <>9__14_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_7, put = setStaticF___9__14_7)) ::Unity::Properties::TypeConverter_2<::System::Object*, uint16_t>* __9__14_7;

  /// @brief Field <>9__14_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_8, put = setStaticF___9__14_8)) ::Unity::Properties::TypeConverter_2<::System::Object*, uint32_t>* __9__14_8;

  /// @brief Field <>9__14_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_9, put = setStaticF___9__14_9)) ::Unity::Properties::TypeConverter_2<::System::Object*, uint64_t>* __9__14_9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::Unity::Properties::TypeConverter_2<int8_t, char16_t>* __9__1_0;

  /// @brief Field <>9__1_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_1, put = setStaticF___9__1_1)) ::Unity::Properties::TypeConverter_2<int8_t, bool>* __9__1_1;

  /// @brief Field <>9__1_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_10, put = setStaticF___9__1_10)) ::Unity::Properties::TypeConverter_2<int8_t, double_t>* __9__1_10;

  /// @brief Field <>9__1_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_11, put = setStaticF___9__1_11)) ::Unity::Properties::TypeConverter_2<int8_t, ::System::Object*>* __9__1_11;

  /// @brief Field <>9__1_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_2, put = setStaticF___9__1_2)) ::Unity::Properties::TypeConverter_2<int8_t, int16_t>* __9__1_2;

  /// @brief Field <>9__1_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_3, put = setStaticF___9__1_3)) ::Unity::Properties::TypeConverter_2<int8_t, int32_t>* __9__1_3;

  /// @brief Field <>9__1_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_4, put = setStaticF___9__1_4)) ::Unity::Properties::TypeConverter_2<int8_t, int64_t>* __9__1_4;

  /// @brief Field <>9__1_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_5, put = setStaticF___9__1_5)) ::Unity::Properties::TypeConverter_2<int8_t, uint8_t>* __9__1_5;

  /// @brief Field <>9__1_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_6, put = setStaticF___9__1_6)) ::Unity::Properties::TypeConverter_2<int8_t, uint16_t>* __9__1_6;

  /// @brief Field <>9__1_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_7, put = setStaticF___9__1_7)) ::Unity::Properties::TypeConverter_2<int8_t, uint32_t>* __9__1_7;

  /// @brief Field <>9__1_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_8, put = setStaticF___9__1_8)) ::Unity::Properties::TypeConverter_2<int8_t, uint64_t>* __9__1_8;

  /// @brief Field <>9__1_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_9, put = setStaticF___9__1_9)) ::Unity::Properties::TypeConverter_2<int8_t, float_t>* __9__1_9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::Unity::Properties::TypeConverter_2<int16_t, int8_t>* __9__2_0;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1)) ::Unity::Properties::TypeConverter_2<int16_t, char16_t>* __9__2_1;

  /// @brief Field <>9__2_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_10, put = setStaticF___9__2_10)) ::Unity::Properties::TypeConverter_2<int16_t, double_t>* __9__2_10;

  /// @brief Field <>9__2_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_11, put = setStaticF___9__2_11)) ::Unity::Properties::TypeConverter_2<int16_t, ::System::Object*>* __9__2_11;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_2, put = setStaticF___9__2_2)) ::Unity::Properties::TypeConverter_2<int16_t, bool>* __9__2_2;

  /// @brief Field <>9__2_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_3, put = setStaticF___9__2_3)) ::Unity::Properties::TypeConverter_2<int16_t, int32_t>* __9__2_3;

  /// @brief Field <>9__2_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_4, put = setStaticF___9__2_4)) ::Unity::Properties::TypeConverter_2<int16_t, int64_t>* __9__2_4;

  /// @brief Field <>9__2_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_5, put = setStaticF___9__2_5)) ::Unity::Properties::TypeConverter_2<int16_t, uint8_t>* __9__2_5;

  /// @brief Field <>9__2_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_6, put = setStaticF___9__2_6)) ::Unity::Properties::TypeConverter_2<int16_t, uint16_t>* __9__2_6;

  /// @brief Field <>9__2_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_7, put = setStaticF___9__2_7)) ::Unity::Properties::TypeConverter_2<int16_t, uint32_t>* __9__2_7;

  /// @brief Field <>9__2_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_8, put = setStaticF___9__2_8)) ::Unity::Properties::TypeConverter_2<int16_t, uint64_t>* __9__2_8;

  /// @brief Field <>9__2_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_9, put = setStaticF___9__2_9)) ::Unity::Properties::TypeConverter_2<int16_t, float_t>* __9__2_9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::Unity::Properties::TypeConverter_2<int32_t, int8_t>* __9__3_0;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_1, put = setStaticF___9__3_1)) ::Unity::Properties::TypeConverter_2<int32_t, char16_t>* __9__3_1;

  /// @brief Field <>9__3_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_10, put = setStaticF___9__3_10)) ::Unity::Properties::TypeConverter_2<int32_t, double_t>* __9__3_10;

  /// @brief Field <>9__3_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_11, put = setStaticF___9__3_11)) ::Unity::Properties::TypeConverter_2<int32_t, ::System::Object*>* __9__3_11;

  /// @brief Field <>9__3_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_2, put = setStaticF___9__3_2)) ::Unity::Properties::TypeConverter_2<int32_t, bool>* __9__3_2;

  /// @brief Field <>9__3_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_3, put = setStaticF___9__3_3)) ::Unity::Properties::TypeConverter_2<int32_t, int16_t>* __9__3_3;

  /// @brief Field <>9__3_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_4, put = setStaticF___9__3_4)) ::Unity::Properties::TypeConverter_2<int32_t, int64_t>* __9__3_4;

  /// @brief Field <>9__3_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_5, put = setStaticF___9__3_5)) ::Unity::Properties::TypeConverter_2<int32_t, uint8_t>* __9__3_5;

  /// @brief Field <>9__3_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_6, put = setStaticF___9__3_6)) ::Unity::Properties::TypeConverter_2<int32_t, uint16_t>* __9__3_6;

  /// @brief Field <>9__3_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_7, put = setStaticF___9__3_7)) ::Unity::Properties::TypeConverter_2<int32_t, uint32_t>* __9__3_7;

  /// @brief Field <>9__3_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_8, put = setStaticF___9__3_8)) ::Unity::Properties::TypeConverter_2<int32_t, uint64_t>* __9__3_8;

  /// @brief Field <>9__3_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_9, put = setStaticF___9__3_9)) ::Unity::Properties::TypeConverter_2<int32_t, float_t>* __9__3_9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::Unity::Properties::TypeConverter_2<int64_t, int8_t>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::Unity::Properties::TypeConverter_2<int64_t, char16_t>* __9__4_1;

  /// @brief Field <>9__4_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_10, put = setStaticF___9__4_10)) ::Unity::Properties::TypeConverter_2<int64_t, double_t>* __9__4_10;

  /// @brief Field <>9__4_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_11, put = setStaticF___9__4_11)) ::Unity::Properties::TypeConverter_2<int64_t, ::System::Object*>* __9__4_11;

  /// @brief Field <>9__4_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_2, put = setStaticF___9__4_2)) ::Unity::Properties::TypeConverter_2<int64_t, bool>* __9__4_2;

  /// @brief Field <>9__4_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_3, put = setStaticF___9__4_3)) ::Unity::Properties::TypeConverter_2<int64_t, int16_t>* __9__4_3;

  /// @brief Field <>9__4_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_4, put = setStaticF___9__4_4)) ::Unity::Properties::TypeConverter_2<int64_t, int32_t>* __9__4_4;

  /// @brief Field <>9__4_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_5, put = setStaticF___9__4_5)) ::Unity::Properties::TypeConverter_2<int64_t, uint8_t>* __9__4_5;

  /// @brief Field <>9__4_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_6, put = setStaticF___9__4_6)) ::Unity::Properties::TypeConverter_2<int64_t, uint16_t>* __9__4_6;

  /// @brief Field <>9__4_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_7, put = setStaticF___9__4_7)) ::Unity::Properties::TypeConverter_2<int64_t, uint32_t>* __9__4_7;

  /// @brief Field <>9__4_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_8, put = setStaticF___9__4_8)) ::Unity::Properties::TypeConverter_2<int64_t, uint64_t>* __9__4_8;

  /// @brief Field <>9__4_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_9, put = setStaticF___9__4_9)) ::Unity::Properties::TypeConverter_2<int64_t, float_t>* __9__4_9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::Unity::Properties::TypeConverter_2<uint8_t, int8_t>* __9__5_0;

  /// @brief Field <>9__5_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_1, put = setStaticF___9__5_1)) ::Unity::Properties::TypeConverter_2<uint8_t, char16_t>* __9__5_1;

  /// @brief Field <>9__5_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_10, put = setStaticF___9__5_10)) ::Unity::Properties::TypeConverter_2<uint8_t, double_t>* __9__5_10;

  /// @brief Field <>9__5_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_11, put = setStaticF___9__5_11)) ::Unity::Properties::TypeConverter_2<uint8_t, ::System::Object*>* __9__5_11;

  /// @brief Field <>9__5_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_2, put = setStaticF___9__5_2)) ::Unity::Properties::TypeConverter_2<uint8_t, bool>* __9__5_2;

  /// @brief Field <>9__5_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_3, put = setStaticF___9__5_3)) ::Unity::Properties::TypeConverter_2<uint8_t, int16_t>* __9__5_3;

  /// @brief Field <>9__5_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_4, put = setStaticF___9__5_4)) ::Unity::Properties::TypeConverter_2<uint8_t, int32_t>* __9__5_4;

  /// @brief Field <>9__5_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_5, put = setStaticF___9__5_5)) ::Unity::Properties::TypeConverter_2<uint8_t, int64_t>* __9__5_5;

  /// @brief Field <>9__5_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_6, put = setStaticF___9__5_6)) ::Unity::Properties::TypeConverter_2<uint8_t, uint16_t>* __9__5_6;

  /// @brief Field <>9__5_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_7, put = setStaticF___9__5_7)) ::Unity::Properties::TypeConverter_2<uint8_t, uint32_t>* __9__5_7;

  /// @brief Field <>9__5_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_8, put = setStaticF___9__5_8)) ::Unity::Properties::TypeConverter_2<uint8_t, uint64_t>* __9__5_8;

  /// @brief Field <>9__5_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_9, put = setStaticF___9__5_9)) ::Unity::Properties::TypeConverter_2<uint8_t, float_t>* __9__5_9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::Unity::Properties::TypeConverter_2<uint16_t, int8_t>* __9__6_0;

  /// @brief Field <>9__6_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_1, put = setStaticF___9__6_1)) ::Unity::Properties::TypeConverter_2<uint16_t, char16_t>* __9__6_1;

  /// @brief Field <>9__6_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_10, put = setStaticF___9__6_10)) ::Unity::Properties::TypeConverter_2<uint16_t, double_t>* __9__6_10;

  /// @brief Field <>9__6_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_11, put = setStaticF___9__6_11)) ::Unity::Properties::TypeConverter_2<uint16_t, ::System::Object*>* __9__6_11;

  /// @brief Field <>9__6_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_2, put = setStaticF___9__6_2)) ::Unity::Properties::TypeConverter_2<uint16_t, bool>* __9__6_2;

  /// @brief Field <>9__6_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_3, put = setStaticF___9__6_3)) ::Unity::Properties::TypeConverter_2<uint16_t, int16_t>* __9__6_3;

  /// @brief Field <>9__6_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_4, put = setStaticF___9__6_4)) ::Unity::Properties::TypeConverter_2<uint16_t, int32_t>* __9__6_4;

  /// @brief Field <>9__6_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_5, put = setStaticF___9__6_5)) ::Unity::Properties::TypeConverter_2<uint16_t, int64_t>* __9__6_5;

  /// @brief Field <>9__6_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_6, put = setStaticF___9__6_6)) ::Unity::Properties::TypeConverter_2<uint16_t, uint8_t>* __9__6_6;

  /// @brief Field <>9__6_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_7, put = setStaticF___9__6_7)) ::Unity::Properties::TypeConverter_2<uint16_t, uint32_t>* __9__6_7;

  /// @brief Field <>9__6_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_8, put = setStaticF___9__6_8)) ::Unity::Properties::TypeConverter_2<uint16_t, uint64_t>* __9__6_8;

  /// @brief Field <>9__6_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_9, put = setStaticF___9__6_9)) ::Unity::Properties::TypeConverter_2<uint16_t, float_t>* __9__6_9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::Unity::Properties::TypeConverter_2<uint32_t, int8_t>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1)) ::Unity::Properties::TypeConverter_2<uint32_t, char16_t>* __9__7_1;

  /// @brief Field <>9__7_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_10, put = setStaticF___9__7_10)) ::Unity::Properties::TypeConverter_2<uint32_t, double_t>* __9__7_10;

  /// @brief Field <>9__7_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_11, put = setStaticF___9__7_11)) ::Unity::Properties::TypeConverter_2<uint32_t, ::System::Object*>* __9__7_11;

  /// @brief Field <>9__7_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_2, put = setStaticF___9__7_2)) ::Unity::Properties::TypeConverter_2<uint32_t, bool>* __9__7_2;

  /// @brief Field <>9__7_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_3, put = setStaticF___9__7_3)) ::Unity::Properties::TypeConverter_2<uint32_t, int16_t>* __9__7_3;

  /// @brief Field <>9__7_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_4, put = setStaticF___9__7_4)) ::Unity::Properties::TypeConverter_2<uint32_t, int32_t>* __9__7_4;

  /// @brief Field <>9__7_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_5, put = setStaticF___9__7_5)) ::Unity::Properties::TypeConverter_2<uint32_t, int64_t>* __9__7_5;

  /// @brief Field <>9__7_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_6, put = setStaticF___9__7_6)) ::Unity::Properties::TypeConverter_2<uint32_t, uint8_t>* __9__7_6;

  /// @brief Field <>9__7_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_7, put = setStaticF___9__7_7)) ::Unity::Properties::TypeConverter_2<uint32_t, uint16_t>* __9__7_7;

  /// @brief Field <>9__7_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_8, put = setStaticF___9__7_8)) ::Unity::Properties::TypeConverter_2<uint32_t, uint64_t>* __9__7_8;

  /// @brief Field <>9__7_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_9, put = setStaticF___9__7_9)) ::Unity::Properties::TypeConverter_2<uint32_t, float_t>* __9__7_9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::Unity::Properties::TypeConverter_2<uint64_t, int8_t>* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1)) ::Unity::Properties::TypeConverter_2<uint64_t, char16_t>* __9__8_1;

  /// @brief Field <>9__8_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_10, put = setStaticF___9__8_10)) ::Unity::Properties::TypeConverter_2<uint64_t, double_t>* __9__8_10;

  /// @brief Field <>9__8_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_11, put = setStaticF___9__8_11)) ::Unity::Properties::TypeConverter_2<uint64_t, ::System::Object*>* __9__8_11;

  /// @brief Field <>9__8_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_2, put = setStaticF___9__8_2)) ::Unity::Properties::TypeConverter_2<uint64_t, bool>* __9__8_2;

  /// @brief Field <>9__8_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_3, put = setStaticF___9__8_3)) ::Unity::Properties::TypeConverter_2<uint64_t, int16_t>* __9__8_3;

  /// @brief Field <>9__8_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_4, put = setStaticF___9__8_4)) ::Unity::Properties::TypeConverter_2<uint64_t, int32_t>* __9__8_4;

  /// @brief Field <>9__8_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_5, put = setStaticF___9__8_5)) ::Unity::Properties::TypeConverter_2<uint64_t, int64_t>* __9__8_5;

  /// @brief Field <>9__8_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_6, put = setStaticF___9__8_6)) ::Unity::Properties::TypeConverter_2<uint64_t, uint8_t>* __9__8_6;

  /// @brief Field <>9__8_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_7, put = setStaticF___9__8_7)) ::Unity::Properties::TypeConverter_2<uint64_t, uint16_t>* __9__8_7;

  /// @brief Field <>9__8_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_8, put = setStaticF___9__8_8)) ::Unity::Properties::TypeConverter_2<uint64_t, uint32_t>* __9__8_8;

  /// @brief Field <>9__8_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_9, put = setStaticF___9__8_9)) ::Unity::Properties::TypeConverter_2<uint64_t, float_t>* __9__8_9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::Unity::Properties::TypeConverter_2<float_t, int8_t>* __9__9_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_1, put = setStaticF___9__9_1)) ::Unity::Properties::TypeConverter_2<float_t, char16_t>* __9__9_1;

  /// @brief Field <>9__9_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_10, put = setStaticF___9__9_10)) ::Unity::Properties::TypeConverter_2<float_t, double_t>* __9__9_10;

  /// @brief Field <>9__9_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_11, put = setStaticF___9__9_11)) ::Unity::Properties::TypeConverter_2<float_t, ::System::Object*>* __9__9_11;

  /// @brief Field <>9__9_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_2, put = setStaticF___9__9_2)) ::Unity::Properties::TypeConverter_2<float_t, bool>* __9__9_2;

  /// @brief Field <>9__9_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_3, put = setStaticF___9__9_3)) ::Unity::Properties::TypeConverter_2<float_t, int16_t>* __9__9_3;

  /// @brief Field <>9__9_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_4, put = setStaticF___9__9_4)) ::Unity::Properties::TypeConverter_2<float_t, int32_t>* __9__9_4;

  /// @brief Field <>9__9_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_5, put = setStaticF___9__9_5)) ::Unity::Properties::TypeConverter_2<float_t, int64_t>* __9__9_5;

  /// @brief Field <>9__9_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_6, put = setStaticF___9__9_6)) ::Unity::Properties::TypeConverter_2<float_t, uint8_t>* __9__9_6;

  /// @brief Field <>9__9_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_7, put = setStaticF___9__9_7)) ::Unity::Properties::TypeConverter_2<float_t, uint16_t>* __9__9_7;

  /// @brief Field <>9__9_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_8, put = setStaticF___9__9_8)) ::Unity::Properties::TypeConverter_2<float_t, uint32_t>* __9__9_8;

  /// @brief Field <>9__9_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_9, put = setStaticF___9__9_9)) ::Unity::Properties::TypeConverter_2<float_t, uint64_t>* __9__9_9;

  static inline ::Unity::Properties::PrimitiveConverters_TypeConversion___c* New_ctor();

  /// @brief Method <RegisterBooleanConverters>b__11_0, addr 0x69e43d4, size 0x10, virtual false, abstract: false, final false
  inline char16_t _RegisterBooleanConverters_b__11_0(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_1, addr 0x69e43e4, size 0x10, virtual false, abstract: false, final false
  inline int8_t _RegisterBooleanConverters_b__11_1(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_10, addr 0x69e447c, size 0x18, virtual false, abstract: false, final false
  inline double_t _RegisterBooleanConverters_b__11_10(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_11, addr 0x69e4494, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBooleanConverters_b__11_11(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_2, addr 0x69e43f4, size 0x10, virtual false, abstract: false, final false
  inline int16_t _RegisterBooleanConverters_b__11_2(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_3, addr 0x69e4404, size 0x10, virtual false, abstract: false, final false
  inline int32_t _RegisterBooleanConverters_b__11_3(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_4, addr 0x69e4414, size 0x10, virtual false, abstract: false, final false
  inline int64_t _RegisterBooleanConverters_b__11_4(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_5, addr 0x69e4424, size 0x10, virtual false, abstract: false, final false
  inline uint8_t _RegisterBooleanConverters_b__11_5(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_6, addr 0x69e4434, size 0x10, virtual false, abstract: false, final false
  inline uint16_t _RegisterBooleanConverters_b__11_6(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_7, addr 0x69e4444, size 0x10, virtual false, abstract: false, final false
  inline uint32_t _RegisterBooleanConverters_b__11_7(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_8, addr 0x69e4454, size 0x10, virtual false, abstract: false, final false
  inline uint64_t _RegisterBooleanConverters_b__11_8(::ByRef<bool> v);

  /// @brief Method <RegisterBooleanConverters>b__11_9, addr 0x69e4464, size 0x18, virtual false, abstract: false, final false
  inline float_t _RegisterBooleanConverters_b__11_9(::ByRef<bool> v);

  /// @brief Method <RegisterCharConverters>b__12_0, addr 0x69e44c0, size 0x70, virtual false, abstract: false, final false
  inline char16_t _RegisterCharConverters_b__12_0(::ByRef<::StringW> v);

  /// @brief Method <RegisterCharConverters>b__12_1, addr 0x69e4530, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterCharConverters_b__12_1(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_10, addr 0x69e4580, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterCharConverters_b__12_10(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_11, addr 0x69e458c, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterCharConverters_b__12_11(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_12, addr 0x69e4598, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterCharConverters_b__12_12(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_13, addr 0x69e45bc, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW _RegisterCharConverters_b__12_13(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_2, addr 0x69e4540, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterCharConverters_b__12_2(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_3, addr 0x69e4548, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterCharConverters_b__12_3(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_4, addr 0x69e4550, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterCharConverters_b__12_4(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_5, addr 0x69e4558, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterCharConverters_b__12_5(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_6, addr 0x69e4560, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterCharConverters_b__12_6(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_7, addr 0x69e4568, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterCharConverters_b__12_7(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_8, addr 0x69e4570, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterCharConverters_b__12_8(::ByRef<char16_t> v);

  /// @brief Method <RegisterCharConverters>b__12_9, addr 0x69e4578, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterCharConverters_b__12_9(::ByRef<char16_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_0, addr 0x69e40c4, size 0x1c, virtual false, abstract: false, final false
  inline int8_t _RegisterFloat32Converters_b__9_0(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_1, addr 0x69e40e0, size 0x14, virtual false, abstract: false, final false
  inline char16_t _RegisterFloat32Converters_b__9_1(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_10, addr 0x69e421c, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterFloat32Converters_b__9_10(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_11, addr 0x69e4228, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterFloat32Converters_b__9_11(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_2, addr 0x69e40f4, size 0x74, virtual false, abstract: false, final false
  inline bool _RegisterFloat32Converters_b__9_2(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_3, addr 0x69e4168, size 0x1c, virtual false, abstract: false, final false
  inline int16_t _RegisterFloat32Converters_b__9_3(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_4, addr 0x69e4184, size 0x20, virtual false, abstract: false, final false
  inline int32_t _RegisterFloat32Converters_b__9_4(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_5, addr 0x69e41a4, size 0x20, virtual false, abstract: false, final false
  inline int64_t _RegisterFloat32Converters_b__9_5(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_6, addr 0x69e41c4, size 0x14, virtual false, abstract: false, final false
  inline uint8_t _RegisterFloat32Converters_b__9_6(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_7, addr 0x69e41d8, size 0x14, virtual false, abstract: false, final false
  inline uint16_t _RegisterFloat32Converters_b__9_7(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_8, addr 0x69e41ec, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _RegisterFloat32Converters_b__9_8(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat32Converters>b__9_9, addr 0x69e4204, size 0x18, virtual false, abstract: false, final false
  inline uint64_t _RegisterFloat32Converters_b__9_9(::ByRef<float_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_0, addr 0x69e424c, size 0x1c, virtual false, abstract: false, final false
  inline int8_t _RegisterFloat64Converters_b__10_0(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_1, addr 0x69e4268, size 0x14, virtual false, abstract: false, final false
  inline char16_t _RegisterFloat64Converters_b__10_1(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_10, addr 0x69e43a4, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterFloat64Converters_b__10_10(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_11, addr 0x69e43b0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterFloat64Converters_b__10_11(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_2, addr 0x69e427c, size 0x74, virtual false, abstract: false, final false
  inline bool _RegisterFloat64Converters_b__10_2(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_3, addr 0x69e42f0, size 0x1c, virtual false, abstract: false, final false
  inline int16_t _RegisterFloat64Converters_b__10_3(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_4, addr 0x69e430c, size 0x20, virtual false, abstract: false, final false
  inline int32_t _RegisterFloat64Converters_b__10_4(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_5, addr 0x69e432c, size 0x20, virtual false, abstract: false, final false
  inline int64_t _RegisterFloat64Converters_b__10_5(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_6, addr 0x69e434c, size 0x14, virtual false, abstract: false, final false
  inline uint8_t _RegisterFloat64Converters_b__10_6(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_7, addr 0x69e4360, size 0x14, virtual false, abstract: false, final false
  inline uint16_t _RegisterFloat64Converters_b__10_7(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_8, addr 0x69e4374, size 0x18, virtual false, abstract: false, final false
  inline uint32_t _RegisterFloat64Converters_b__10_8(::ByRef<double_t> v);

  /// @brief Method <RegisterFloat64Converters>b__10_9, addr 0x69e438c, size 0x18, virtual false, abstract: false, final false
  inline uint64_t _RegisterFloat64Converters_b__10_9(::ByRef<double_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_0, addr 0x69e3cf4, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterInt16Converters_b__2_0(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_1, addr 0x69e3cfc, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterInt16Converters_b__2_1(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_10, addr 0x69e3d50, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterInt16Converters_b__2_10(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_11, addr 0x69e3d5c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterInt16Converters_b__2_11(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_2, addr 0x69e3d04, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterInt16Converters_b__2_2(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_3, addr 0x69e3d14, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterInt16Converters_b__2_3(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_4, addr 0x69e3d1c, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterInt16Converters_b__2_4(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_5, addr 0x69e3d24, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterInt16Converters_b__2_5(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_6, addr 0x69e3d2c, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterInt16Converters_b__2_6(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_7, addr 0x69e3d34, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterInt16Converters_b__2_7(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_8, addr 0x69e3d3c, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterInt16Converters_b__2_8(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt16Converters>b__2_9, addr 0x69e3d44, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterInt16Converters_b__2_9(::ByRef<int16_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_0, addr 0x69e3d80, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterInt32Converters_b__3_0(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_1, addr 0x69e3d88, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterInt32Converters_b__3_1(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_10, addr 0x69e3ddc, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterInt32Converters_b__3_10(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_11, addr 0x69e3de8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterInt32Converters_b__3_11(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_2, addr 0x69e3d90, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterInt32Converters_b__3_2(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_3, addr 0x69e3da0, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterInt32Converters_b__3_3(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_4, addr 0x69e3da8, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterInt32Converters_b__3_4(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_5, addr 0x69e3db0, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterInt32Converters_b__3_5(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_6, addr 0x69e3db8, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterInt32Converters_b__3_6(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_7, addr 0x69e3dc0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterInt32Converters_b__3_7(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_8, addr 0x69e3dc8, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterInt32Converters_b__3_8(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt32Converters>b__3_9, addr 0x69e3dd0, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterInt32Converters_b__3_9(::ByRef<int32_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_0, addr 0x69e3e0c, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterInt64Converters_b__4_0(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_1, addr 0x69e3e14, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterInt64Converters_b__4_1(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_10, addr 0x69e3e68, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterInt64Converters_b__4_10(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_11, addr 0x69e3e74, size 0x20, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterInt64Converters_b__4_11(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_2, addr 0x69e3e1c, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterInt64Converters_b__4_2(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_3, addr 0x69e3e2c, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterInt64Converters_b__4_3(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_4, addr 0x69e3e34, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterInt64Converters_b__4_4(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_5, addr 0x69e3e3c, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterInt64Converters_b__4_5(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_6, addr 0x69e3e44, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterInt64Converters_b__4_6(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_7, addr 0x69e3e4c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterInt64Converters_b__4_7(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_8, addr 0x69e3e54, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterInt64Converters_b__4_8(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt64Converters>b__4_9, addr 0x69e3e5c, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterInt64Converters_b__4_9(::ByRef<int64_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_0, addr 0x69e3c68, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterInt8Converters_b__1_0(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_1, addr 0x69e3c70, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterInt8Converters_b__1_1(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_10, addr 0x69e3cc4, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterInt8Converters_b__1_10(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_11, addr 0x69e3cd0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterInt8Converters_b__1_11(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_2, addr 0x69e3c80, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterInt8Converters_b__1_2(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_3, addr 0x69e3c88, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterInt8Converters_b__1_3(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_4, addr 0x69e3c90, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterInt8Converters_b__1_4(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_5, addr 0x69e3c98, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterInt8Converters_b__1_5(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_6, addr 0x69e3ca0, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterInt8Converters_b__1_6(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_7, addr 0x69e3ca8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterInt8Converters_b__1_7(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_8, addr 0x69e3cb0, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterInt8Converters_b__1_8(::ByRef<int8_t> v);

  /// @brief Method <RegisterInt8Converters>b__1_9, addr 0x69e3cb8, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterInt8Converters_b__1_9(::ByRef<int8_t> v);

  /// @brief Method <RegisterObjectConverters>b__14_0, addr 0x69e4f5c, size 0x2c, virtual false, abstract: false, final false
  inline char16_t _RegisterObjectConverters_b__14_0(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_1, addr 0x69e4f88, size 0x34, virtual false, abstract: false, final false
  inline bool _RegisterObjectConverters_b__14_1(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_10, addr 0x69e511c, size 0x2c, virtual false, abstract: false, final false
  inline float_t _RegisterObjectConverters_b__14_10(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_11, addr 0x69e5148, size 0x2c, virtual false, abstract: false, final false
  inline double_t _RegisterObjectConverters_b__14_11(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_2, addr 0x69e4fbc, size 0x2c, virtual false, abstract: false, final false
  inline int8_t _RegisterObjectConverters_b__14_2(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_3, addr 0x69e4fe8, size 0x2c, virtual false, abstract: false, final false
  inline int16_t _RegisterObjectConverters_b__14_3(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_4, addr 0x69e5014, size 0x2c, virtual false, abstract: false, final false
  inline int32_t _RegisterObjectConverters_b__14_4(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_5, addr 0x69e5040, size 0x2c, virtual false, abstract: false, final false
  inline int64_t _RegisterObjectConverters_b__14_5(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_6, addr 0x69e506c, size 0x2c, virtual false, abstract: false, final false
  inline uint8_t _RegisterObjectConverters_b__14_6(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_7, addr 0x69e5098, size 0x2c, virtual false, abstract: false, final false
  inline uint16_t _RegisterObjectConverters_b__14_7(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_8, addr 0x69e50c4, size 0x2c, virtual false, abstract: false, final false
  inline uint32_t _RegisterObjectConverters_b__14_8(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterObjectConverters>b__14_9, addr 0x69e50f0, size 0x2c, virtual false, abstract: false, final false
  inline uint64_t _RegisterObjectConverters_b__14_9(::ByRef<::System::Object*> v);

  /// @brief Method <RegisterStringConverters>b__13_0, addr 0x69e45e8, size 0x34, virtual false, abstract: false, final false
  inline char16_t _RegisterStringConverters_b__13_0(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_1, addr 0x69e461c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_1(::ByRef<char16_t> v);

  /// @brief Method <RegisterStringConverters>b__13_10, addr 0x69e49bc, size 0xbc, virtual false, abstract: false, final false
  inline int64_t _RegisterStringConverters_b__13_10(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_11, addr 0x69e4a78, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_11(::ByRef<int64_t> v);

  /// @brief Method <RegisterStringConverters>b__13_12, addr 0x69e4a84, size 0xc0, virtual false, abstract: false, final false
  inline uint8_t _RegisterStringConverters_b__13_12(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_13, addr 0x69e4b44, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_13(::ByRef<uint8_t> v);

  /// @brief Method <RegisterStringConverters>b__13_14, addr 0x69e4b50, size 0xc0, virtual false, abstract: false, final false
  inline uint16_t _RegisterStringConverters_b__13_14(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_15, addr 0x69e4c10, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_15(::ByRef<uint16_t> v);

  /// @brief Method <RegisterStringConverters>b__13_16, addr 0x69e4c1c, size 0xc0, virtual false, abstract: false, final false
  inline uint32_t _RegisterStringConverters_b__13_16(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_17, addr 0x69e4cdc, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_17(::ByRef<uint32_t> v);

  /// @brief Method <RegisterStringConverters>b__13_18, addr 0x69e4ce8, size 0xbc, virtual false, abstract: false, final false
  inline uint64_t _RegisterStringConverters_b__13_18(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_19, addr 0x69e4da4, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_19(::ByRef<uint64_t> v);

  /// @brief Method <RegisterStringConverters>b__13_2, addr 0x69e4648, size 0xe4, virtual false, abstract: false, final false
  inline bool _RegisterStringConverters_b__13_2(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_20, addr 0x69e4db0, size 0xbc, virtual false, abstract: false, final false
  inline float_t _RegisterStringConverters_b__13_20(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_21, addr 0x69e4e6c, size 0x68, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_21(::ByRef<float_t> v);

  /// @brief Method <RegisterStringConverters>b__13_22, addr 0x69e4ed4, size 0x20, virtual false, abstract: false, final false
  inline double_t _RegisterStringConverters_b__13_22(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_23, addr 0x69e4ef4, size 0x68, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_23(::ByRef<double_t> v);

  /// @brief Method <RegisterStringConverters>b__13_3, addr 0x69e472c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_3(::ByRef<bool> v);

  /// @brief Method <RegisterStringConverters>b__13_4, addr 0x69e4758, size 0xc0, virtual false, abstract: false, final false
  inline int8_t _RegisterStringConverters_b__13_4(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_5, addr 0x69e4818, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_5(::ByRef<int8_t> v);

  /// @brief Method <RegisterStringConverters>b__13_6, addr 0x69e4824, size 0xc0, virtual false, abstract: false, final false
  inline int16_t _RegisterStringConverters_b__13_6(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_7, addr 0x69e48e4, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_7(::ByRef<int16_t> v);

  /// @brief Method <RegisterStringConverters>b__13_8, addr 0x69e48f0, size 0xc0, virtual false, abstract: false, final false
  inline int32_t _RegisterStringConverters_b__13_8(::ByRef<::StringW> v);

  /// @brief Method <RegisterStringConverters>b__13_9, addr 0x69e49b0, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _RegisterStringConverters_b__13_9(::ByRef<int32_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_0, addr 0x69e3f20, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterUInt16Converters_b__6_0(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_1, addr 0x69e3f28, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterUInt16Converters_b__6_1(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_10, addr 0x69e3f7c, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterUInt16Converters_b__6_10(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_11, addr 0x69e3f88, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterUInt16Converters_b__6_11(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_2, addr 0x69e3f30, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterUInt16Converters_b__6_2(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_3, addr 0x69e3f40, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterUInt16Converters_b__6_3(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_4, addr 0x69e3f48, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterUInt16Converters_b__6_4(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_5, addr 0x69e3f50, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterUInt16Converters_b__6_5(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_6, addr 0x69e3f58, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterUInt16Converters_b__6_6(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_7, addr 0x69e3f60, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterUInt16Converters_b__6_7(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_8, addr 0x69e3f68, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterUInt16Converters_b__6_8(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt16Converters>b__6_9, addr 0x69e3f70, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterUInt16Converters_b__6_9(::ByRef<uint16_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_0, addr 0x69e3fac, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterUInt32Converters_b__7_0(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_1, addr 0x69e3fb4, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterUInt32Converters_b__7_1(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_10, addr 0x69e4008, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterUInt32Converters_b__7_10(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_11, addr 0x69e4014, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterUInt32Converters_b__7_11(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_2, addr 0x69e3fbc, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterUInt32Converters_b__7_2(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_3, addr 0x69e3fcc, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterUInt32Converters_b__7_3(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_4, addr 0x69e3fd4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterUInt32Converters_b__7_4(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_5, addr 0x69e3fdc, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterUInt32Converters_b__7_5(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_6, addr 0x69e3fe4, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterUInt32Converters_b__7_6(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_7, addr 0x69e3fec, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterUInt32Converters_b__7_7(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_8, addr 0x69e3ff4, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterUInt32Converters_b__7_8(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt32Converters>b__7_9, addr 0x69e3ffc, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterUInt32Converters_b__7_9(::ByRef<uint32_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_0, addr 0x69e4038, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterUInt64Converters_b__8_0(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_1, addr 0x69e4040, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterUInt64Converters_b__8_1(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_10, addr 0x69e4098, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterUInt64Converters_b__8_10(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_11, addr 0x69e40a4, size 0x20, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterUInt64Converters_b__8_11(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_2, addr 0x69e4048, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterUInt64Converters_b__8_2(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_3, addr 0x69e4058, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterUInt64Converters_b__8_3(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_4, addr 0x69e4060, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterUInt64Converters_b__8_4(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_5, addr 0x69e4068, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterUInt64Converters_b__8_5(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_6, addr 0x69e4070, size 0x8, virtual false, abstract: false, final false
  inline uint8_t _RegisterUInt64Converters_b__8_6(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_7, addr 0x69e4078, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterUInt64Converters_b__8_7(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_8, addr 0x69e4080, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterUInt64Converters_b__8_8(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt64Converters>b__8_9, addr 0x69e4088, size 0x10, virtual false, abstract: false, final false
  inline float_t _RegisterUInt64Converters_b__8_9(::ByRef<uint64_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_0, addr 0x69e3e94, size 0x8, virtual false, abstract: false, final false
  inline int8_t _RegisterUInt8Converters_b__5_0(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_1, addr 0x69e3e9c, size 0x8, virtual false, abstract: false, final false
  inline char16_t _RegisterUInt8Converters_b__5_1(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_10, addr 0x69e3ef0, size 0xc, virtual false, abstract: false, final false
  inline double_t _RegisterUInt8Converters_b__5_10(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_11, addr 0x69e3efc, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterUInt8Converters_b__5_11(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_2, addr 0x69e3ea4, size 0x10, virtual false, abstract: false, final false
  inline bool _RegisterUInt8Converters_b__5_2(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_3, addr 0x69e3eb4, size 0x8, virtual false, abstract: false, final false
  inline int16_t _RegisterUInt8Converters_b__5_3(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_4, addr 0x69e3ebc, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterUInt8Converters_b__5_4(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_5, addr 0x69e3ec4, size 0x8, virtual false, abstract: false, final false
  inline int64_t _RegisterUInt8Converters_b__5_5(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_6, addr 0x69e3ecc, size 0x8, virtual false, abstract: false, final false
  inline uint16_t _RegisterUInt8Converters_b__5_6(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_7, addr 0x69e3ed4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t _RegisterUInt8Converters_b__5_7(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_8, addr 0x69e3edc, size 0x8, virtual false, abstract: false, final false
  inline uint64_t _RegisterUInt8Converters_b__5_8(::ByRef<uint8_t> v);

  /// @brief Method <RegisterUInt8Converters>b__5_9, addr 0x69e3ee4, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterUInt8Converters_b__5_9(::ByRef<uint8_t> v);

  /// @brief Method <Register>b__0_0, addr 0x69e3c3c, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Guid _Register_b__0_0(::ByRef<::StringW> g);

  /// @brief Method .ctor, addr 0x69e3c38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::PrimitiveConverters_TypeConversion___c* getStaticF___9();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>* getStaticF___9__0_0();

  static inline ::Unity::Properties::TypeConverter_2<double_t, int8_t>* getStaticF___9__10_0();

  static inline ::Unity::Properties::TypeConverter_2<double_t, char16_t>* getStaticF___9__10_1();

  static inline ::Unity::Properties::TypeConverter_2<double_t, float_t>* getStaticF___9__10_10();

  static inline ::Unity::Properties::TypeConverter_2<double_t, ::System::Object*>* getStaticF___9__10_11();

  static inline ::Unity::Properties::TypeConverter_2<double_t, bool>* getStaticF___9__10_2();

  static inline ::Unity::Properties::TypeConverter_2<double_t, int16_t>* getStaticF___9__10_3();

  static inline ::Unity::Properties::TypeConverter_2<double_t, int32_t>* getStaticF___9__10_4();

  static inline ::Unity::Properties::TypeConverter_2<double_t, int64_t>* getStaticF___9__10_5();

  static inline ::Unity::Properties::TypeConverter_2<double_t, uint8_t>* getStaticF___9__10_6();

  static inline ::Unity::Properties::TypeConverter_2<double_t, uint16_t>* getStaticF___9__10_7();

  static inline ::Unity::Properties::TypeConverter_2<double_t, uint32_t>* getStaticF___9__10_8();

  static inline ::Unity::Properties::TypeConverter_2<double_t, uint64_t>* getStaticF___9__10_9();

  static inline ::Unity::Properties::TypeConverter_2<bool, char16_t>* getStaticF___9__11_0();

  static inline ::Unity::Properties::TypeConverter_2<bool, int8_t>* getStaticF___9__11_1();

  static inline ::Unity::Properties::TypeConverter_2<bool, double_t>* getStaticF___9__11_10();

  static inline ::Unity::Properties::TypeConverter_2<bool, ::System::Object*>* getStaticF___9__11_11();

  static inline ::Unity::Properties::TypeConverter_2<bool, int16_t>* getStaticF___9__11_2();

  static inline ::Unity::Properties::TypeConverter_2<bool, int32_t>* getStaticF___9__11_3();

  static inline ::Unity::Properties::TypeConverter_2<bool, int64_t>* getStaticF___9__11_4();

  static inline ::Unity::Properties::TypeConverter_2<bool, uint8_t>* getStaticF___9__11_5();

  static inline ::Unity::Properties::TypeConverter_2<bool, uint16_t>* getStaticF___9__11_6();

  static inline ::Unity::Properties::TypeConverter_2<bool, uint32_t>* getStaticF___9__11_7();

  static inline ::Unity::Properties::TypeConverter_2<bool, uint64_t>* getStaticF___9__11_8();

  static inline ::Unity::Properties::TypeConverter_2<bool, float_t>* getStaticF___9__11_9();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, char16_t>* getStaticF___9__12_0();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, bool>* getStaticF___9__12_1();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, float_t>* getStaticF___9__12_10();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, double_t>* getStaticF___9__12_11();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, ::System::Object*>* getStaticF___9__12_12();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, ::StringW>* getStaticF___9__12_13();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, int8_t>* getStaticF___9__12_2();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, int16_t>* getStaticF___9__12_3();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, int32_t>* getStaticF___9__12_4();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, int64_t>* getStaticF___9__12_5();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, uint8_t>* getStaticF___9__12_6();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, uint16_t>* getStaticF___9__12_7();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, uint32_t>* getStaticF___9__12_8();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, uint64_t>* getStaticF___9__12_9();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, char16_t>* getStaticF___9__13_0();

  static inline ::Unity::Properties::TypeConverter_2<char16_t, ::StringW>* getStaticF___9__13_1();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, int64_t>* getStaticF___9__13_10();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, ::StringW>* getStaticF___9__13_11();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, uint8_t>* getStaticF___9__13_12();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, ::StringW>* getStaticF___9__13_13();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, uint16_t>* getStaticF___9__13_14();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, ::StringW>* getStaticF___9__13_15();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, uint32_t>* getStaticF___9__13_16();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, ::StringW>* getStaticF___9__13_17();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, uint64_t>* getStaticF___9__13_18();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, ::StringW>* getStaticF___9__13_19();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, bool>* getStaticF___9__13_2();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, float_t>* getStaticF___9__13_20();

  static inline ::Unity::Properties::TypeConverter_2<float_t, ::StringW>* getStaticF___9__13_21();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, double_t>* getStaticF___9__13_22();

  static inline ::Unity::Properties::TypeConverter_2<double_t, ::StringW>* getStaticF___9__13_23();

  static inline ::Unity::Properties::TypeConverter_2<bool, ::StringW>* getStaticF___9__13_3();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, int8_t>* getStaticF___9__13_4();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, ::StringW>* getStaticF___9__13_5();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, int16_t>* getStaticF___9__13_6();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, ::StringW>* getStaticF___9__13_7();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, int32_t>* getStaticF___9__13_8();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, ::StringW>* getStaticF___9__13_9();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, char16_t>* getStaticF___9__14_0();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, bool>* getStaticF___9__14_1();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, float_t>* getStaticF___9__14_10();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, double_t>* getStaticF___9__14_11();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, int8_t>* getStaticF___9__14_2();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, int16_t>* getStaticF___9__14_3();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, int32_t>* getStaticF___9__14_4();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, int64_t>* getStaticF___9__14_5();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, uint8_t>* getStaticF___9__14_6();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, uint16_t>* getStaticF___9__14_7();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, uint32_t>* getStaticF___9__14_8();

  static inline ::Unity::Properties::TypeConverter_2<::System::Object*, uint64_t>* getStaticF___9__14_9();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, char16_t>* getStaticF___9__1_0();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, bool>* getStaticF___9__1_1();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, double_t>* getStaticF___9__1_10();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, ::System::Object*>* getStaticF___9__1_11();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, int16_t>* getStaticF___9__1_2();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, int32_t>* getStaticF___9__1_3();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, int64_t>* getStaticF___9__1_4();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, uint8_t>* getStaticF___9__1_5();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, uint16_t>* getStaticF___9__1_6();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, uint32_t>* getStaticF___9__1_7();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, uint64_t>* getStaticF___9__1_8();

  static inline ::Unity::Properties::TypeConverter_2<int8_t, float_t>* getStaticF___9__1_9();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, int8_t>* getStaticF___9__2_0();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, char16_t>* getStaticF___9__2_1();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, double_t>* getStaticF___9__2_10();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, ::System::Object*>* getStaticF___9__2_11();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, bool>* getStaticF___9__2_2();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, int32_t>* getStaticF___9__2_3();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, int64_t>* getStaticF___9__2_4();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, uint8_t>* getStaticF___9__2_5();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, uint16_t>* getStaticF___9__2_6();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, uint32_t>* getStaticF___9__2_7();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, uint64_t>* getStaticF___9__2_8();

  static inline ::Unity::Properties::TypeConverter_2<int16_t, float_t>* getStaticF___9__2_9();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, int8_t>* getStaticF___9__3_0();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, char16_t>* getStaticF___9__3_1();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, double_t>* getStaticF___9__3_10();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, ::System::Object*>* getStaticF___9__3_11();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, bool>* getStaticF___9__3_2();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, int16_t>* getStaticF___9__3_3();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, int64_t>* getStaticF___9__3_4();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, uint8_t>* getStaticF___9__3_5();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, uint16_t>* getStaticF___9__3_6();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, uint32_t>* getStaticF___9__3_7();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, uint64_t>* getStaticF___9__3_8();

  static inline ::Unity::Properties::TypeConverter_2<int32_t, float_t>* getStaticF___9__3_9();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, int8_t>* getStaticF___9__4_0();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, char16_t>* getStaticF___9__4_1();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, double_t>* getStaticF___9__4_10();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, ::System::Object*>* getStaticF___9__4_11();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, bool>* getStaticF___9__4_2();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, int16_t>* getStaticF___9__4_3();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, int32_t>* getStaticF___9__4_4();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, uint8_t>* getStaticF___9__4_5();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, uint16_t>* getStaticF___9__4_6();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, uint32_t>* getStaticF___9__4_7();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, uint64_t>* getStaticF___9__4_8();

  static inline ::Unity::Properties::TypeConverter_2<int64_t, float_t>* getStaticF___9__4_9();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, int8_t>* getStaticF___9__5_0();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, char16_t>* getStaticF___9__5_1();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, double_t>* getStaticF___9__5_10();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, ::System::Object*>* getStaticF___9__5_11();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, bool>* getStaticF___9__5_2();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, int16_t>* getStaticF___9__5_3();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, int32_t>* getStaticF___9__5_4();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, int64_t>* getStaticF___9__5_5();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, uint16_t>* getStaticF___9__5_6();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, uint32_t>* getStaticF___9__5_7();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, uint64_t>* getStaticF___9__5_8();

  static inline ::Unity::Properties::TypeConverter_2<uint8_t, float_t>* getStaticF___9__5_9();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, int8_t>* getStaticF___9__6_0();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, char16_t>* getStaticF___9__6_1();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, double_t>* getStaticF___9__6_10();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, ::System::Object*>* getStaticF___9__6_11();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, bool>* getStaticF___9__6_2();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, int16_t>* getStaticF___9__6_3();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, int32_t>* getStaticF___9__6_4();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, int64_t>* getStaticF___9__6_5();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, uint8_t>* getStaticF___9__6_6();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, uint32_t>* getStaticF___9__6_7();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, uint64_t>* getStaticF___9__6_8();

  static inline ::Unity::Properties::TypeConverter_2<uint16_t, float_t>* getStaticF___9__6_9();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, int8_t>* getStaticF___9__7_0();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, char16_t>* getStaticF___9__7_1();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, double_t>* getStaticF___9__7_10();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, ::System::Object*>* getStaticF___9__7_11();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, bool>* getStaticF___9__7_2();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, int16_t>* getStaticF___9__7_3();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, int32_t>* getStaticF___9__7_4();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, int64_t>* getStaticF___9__7_5();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, uint8_t>* getStaticF___9__7_6();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, uint16_t>* getStaticF___9__7_7();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, uint64_t>* getStaticF___9__7_8();

  static inline ::Unity::Properties::TypeConverter_2<uint32_t, float_t>* getStaticF___9__7_9();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, int8_t>* getStaticF___9__8_0();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, char16_t>* getStaticF___9__8_1();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, double_t>* getStaticF___9__8_10();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, ::System::Object*>* getStaticF___9__8_11();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, bool>* getStaticF___9__8_2();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, int16_t>* getStaticF___9__8_3();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, int32_t>* getStaticF___9__8_4();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, int64_t>* getStaticF___9__8_5();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, uint8_t>* getStaticF___9__8_6();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, uint16_t>* getStaticF___9__8_7();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, uint32_t>* getStaticF___9__8_8();

  static inline ::Unity::Properties::TypeConverter_2<uint64_t, float_t>* getStaticF___9__8_9();

  static inline ::Unity::Properties::TypeConverter_2<float_t, int8_t>* getStaticF___9__9_0();

  static inline ::Unity::Properties::TypeConverter_2<float_t, char16_t>* getStaticF___9__9_1();

  static inline ::Unity::Properties::TypeConverter_2<float_t, double_t>* getStaticF___9__9_10();

  static inline ::Unity::Properties::TypeConverter_2<float_t, ::System::Object*>* getStaticF___9__9_11();

  static inline ::Unity::Properties::TypeConverter_2<float_t, bool>* getStaticF___9__9_2();

  static inline ::Unity::Properties::TypeConverter_2<float_t, int16_t>* getStaticF___9__9_3();

  static inline ::Unity::Properties::TypeConverter_2<float_t, int32_t>* getStaticF___9__9_4();

  static inline ::Unity::Properties::TypeConverter_2<float_t, int64_t>* getStaticF___9__9_5();

  static inline ::Unity::Properties::TypeConverter_2<float_t, uint8_t>* getStaticF___9__9_6();

  static inline ::Unity::Properties::TypeConverter_2<float_t, uint16_t>* getStaticF___9__9_7();

  static inline ::Unity::Properties::TypeConverter_2<float_t, uint32_t>* getStaticF___9__9_8();

  static inline ::Unity::Properties::TypeConverter_2<float_t, uint64_t>* getStaticF___9__9_9();

  static inline void setStaticF___9(::Unity::Properties::PrimitiveConverters_TypeConversion___c* value);

  static inline void setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>* value);

  static inline void setStaticF___9__10_0(::Unity::Properties::TypeConverter_2<double_t, int8_t>* value);

  static inline void setStaticF___9__10_1(::Unity::Properties::TypeConverter_2<double_t, char16_t>* value);

  static inline void setStaticF___9__10_10(::Unity::Properties::TypeConverter_2<double_t, float_t>* value);

  static inline void setStaticF___9__10_11(::Unity::Properties::TypeConverter_2<double_t, ::System::Object*>* value);

  static inline void setStaticF___9__10_2(::Unity::Properties::TypeConverter_2<double_t, bool>* value);

  static inline void setStaticF___9__10_3(::Unity::Properties::TypeConverter_2<double_t, int16_t>* value);

  static inline void setStaticF___9__10_4(::Unity::Properties::TypeConverter_2<double_t, int32_t>* value);

  static inline void setStaticF___9__10_5(::Unity::Properties::TypeConverter_2<double_t, int64_t>* value);

  static inline void setStaticF___9__10_6(::Unity::Properties::TypeConverter_2<double_t, uint8_t>* value);

  static inline void setStaticF___9__10_7(::Unity::Properties::TypeConverter_2<double_t, uint16_t>* value);

  static inline void setStaticF___9__10_8(::Unity::Properties::TypeConverter_2<double_t, uint32_t>* value);

  static inline void setStaticF___9__10_9(::Unity::Properties::TypeConverter_2<double_t, uint64_t>* value);

  static inline void setStaticF___9__11_0(::Unity::Properties::TypeConverter_2<bool, char16_t>* value);

  static inline void setStaticF___9__11_1(::Unity::Properties::TypeConverter_2<bool, int8_t>* value);

  static inline void setStaticF___9__11_10(::Unity::Properties::TypeConverter_2<bool, double_t>* value);

  static inline void setStaticF___9__11_11(::Unity::Properties::TypeConverter_2<bool, ::System::Object*>* value);

  static inline void setStaticF___9__11_2(::Unity::Properties::TypeConverter_2<bool, int16_t>* value);

  static inline void setStaticF___9__11_3(::Unity::Properties::TypeConverter_2<bool, int32_t>* value);

  static inline void setStaticF___9__11_4(::Unity::Properties::TypeConverter_2<bool, int64_t>* value);

  static inline void setStaticF___9__11_5(::Unity::Properties::TypeConverter_2<bool, uint8_t>* value);

  static inline void setStaticF___9__11_6(::Unity::Properties::TypeConverter_2<bool, uint16_t>* value);

  static inline void setStaticF___9__11_7(::Unity::Properties::TypeConverter_2<bool, uint32_t>* value);

  static inline void setStaticF___9__11_8(::Unity::Properties::TypeConverter_2<bool, uint64_t>* value);

  static inline void setStaticF___9__11_9(::Unity::Properties::TypeConverter_2<bool, float_t>* value);

  static inline void setStaticF___9__12_0(::Unity::Properties::TypeConverter_2<::StringW, char16_t>* value);

  static inline void setStaticF___9__12_1(::Unity::Properties::TypeConverter_2<char16_t, bool>* value);

  static inline void setStaticF___9__12_10(::Unity::Properties::TypeConverter_2<char16_t, float_t>* value);

  static inline void setStaticF___9__12_11(::Unity::Properties::TypeConverter_2<char16_t, double_t>* value);

  static inline void setStaticF___9__12_12(::Unity::Properties::TypeConverter_2<char16_t, ::System::Object*>* value);

  static inline void setStaticF___9__12_13(::Unity::Properties::TypeConverter_2<char16_t, ::StringW>* value);

  static inline void setStaticF___9__12_2(::Unity::Properties::TypeConverter_2<char16_t, int8_t>* value);

  static inline void setStaticF___9__12_3(::Unity::Properties::TypeConverter_2<char16_t, int16_t>* value);

  static inline void setStaticF___9__12_4(::Unity::Properties::TypeConverter_2<char16_t, int32_t>* value);

  static inline void setStaticF___9__12_5(::Unity::Properties::TypeConverter_2<char16_t, int64_t>* value);

  static inline void setStaticF___9__12_6(::Unity::Properties::TypeConverter_2<char16_t, uint8_t>* value);

  static inline void setStaticF___9__12_7(::Unity::Properties::TypeConverter_2<char16_t, uint16_t>* value);

  static inline void setStaticF___9__12_8(::Unity::Properties::TypeConverter_2<char16_t, uint32_t>* value);

  static inline void setStaticF___9__12_9(::Unity::Properties::TypeConverter_2<char16_t, uint64_t>* value);

  static inline void setStaticF___9__13_0(::Unity::Properties::TypeConverter_2<::StringW, char16_t>* value);

  static inline void setStaticF___9__13_1(::Unity::Properties::TypeConverter_2<char16_t, ::StringW>* value);

  static inline void setStaticF___9__13_10(::Unity::Properties::TypeConverter_2<::StringW, int64_t>* value);

  static inline void setStaticF___9__13_11(::Unity::Properties::TypeConverter_2<int64_t, ::StringW>* value);

  static inline void setStaticF___9__13_12(::Unity::Properties::TypeConverter_2<::StringW, uint8_t>* value);

  static inline void setStaticF___9__13_13(::Unity::Properties::TypeConverter_2<uint8_t, ::StringW>* value);

  static inline void setStaticF___9__13_14(::Unity::Properties::TypeConverter_2<::StringW, uint16_t>* value);

  static inline void setStaticF___9__13_15(::Unity::Properties::TypeConverter_2<uint16_t, ::StringW>* value);

  static inline void setStaticF___9__13_16(::Unity::Properties::TypeConverter_2<::StringW, uint32_t>* value);

  static inline void setStaticF___9__13_17(::Unity::Properties::TypeConverter_2<uint32_t, ::StringW>* value);

  static inline void setStaticF___9__13_18(::Unity::Properties::TypeConverter_2<::StringW, uint64_t>* value);

  static inline void setStaticF___9__13_19(::Unity::Properties::TypeConverter_2<uint64_t, ::StringW>* value);

  static inline void setStaticF___9__13_2(::Unity::Properties::TypeConverter_2<::StringW, bool>* value);

  static inline void setStaticF___9__13_20(::Unity::Properties::TypeConverter_2<::StringW, float_t>* value);

  static inline void setStaticF___9__13_21(::Unity::Properties::TypeConverter_2<float_t, ::StringW>* value);

  static inline void setStaticF___9__13_22(::Unity::Properties::TypeConverter_2<::StringW, double_t>* value);

  static inline void setStaticF___9__13_23(::Unity::Properties::TypeConverter_2<double_t, ::StringW>* value);

  static inline void setStaticF___9__13_3(::Unity::Properties::TypeConverter_2<bool, ::StringW>* value);

  static inline void setStaticF___9__13_4(::Unity::Properties::TypeConverter_2<::StringW, int8_t>* value);

  static inline void setStaticF___9__13_5(::Unity::Properties::TypeConverter_2<int8_t, ::StringW>* value);

  static inline void setStaticF___9__13_6(::Unity::Properties::TypeConverter_2<::StringW, int16_t>* value);

  static inline void setStaticF___9__13_7(::Unity::Properties::TypeConverter_2<int16_t, ::StringW>* value);

  static inline void setStaticF___9__13_8(::Unity::Properties::TypeConverter_2<::StringW, int32_t>* value);

  static inline void setStaticF___9__13_9(::Unity::Properties::TypeConverter_2<int32_t, ::StringW>* value);

  static inline void setStaticF___9__14_0(::Unity::Properties::TypeConverter_2<::System::Object*, char16_t>* value);

  static inline void setStaticF___9__14_1(::Unity::Properties::TypeConverter_2<::System::Object*, bool>* value);

  static inline void setStaticF___9__14_10(::Unity::Properties::TypeConverter_2<::System::Object*, float_t>* value);

  static inline void setStaticF___9__14_11(::Unity::Properties::TypeConverter_2<::System::Object*, double_t>* value);

  static inline void setStaticF___9__14_2(::Unity::Properties::TypeConverter_2<::System::Object*, int8_t>* value);

  static inline void setStaticF___9__14_3(::Unity::Properties::TypeConverter_2<::System::Object*, int16_t>* value);

  static inline void setStaticF___9__14_4(::Unity::Properties::TypeConverter_2<::System::Object*, int32_t>* value);

  static inline void setStaticF___9__14_5(::Unity::Properties::TypeConverter_2<::System::Object*, int64_t>* value);

  static inline void setStaticF___9__14_6(::Unity::Properties::TypeConverter_2<::System::Object*, uint8_t>* value);

  static inline void setStaticF___9__14_7(::Unity::Properties::TypeConverter_2<::System::Object*, uint16_t>* value);

  static inline void setStaticF___9__14_8(::Unity::Properties::TypeConverter_2<::System::Object*, uint32_t>* value);

  static inline void setStaticF___9__14_9(::Unity::Properties::TypeConverter_2<::System::Object*, uint64_t>* value);

  static inline void setStaticF___9__1_0(::Unity::Properties::TypeConverter_2<int8_t, char16_t>* value);

  static inline void setStaticF___9__1_1(::Unity::Properties::TypeConverter_2<int8_t, bool>* value);

  static inline void setStaticF___9__1_10(::Unity::Properties::TypeConverter_2<int8_t, double_t>* value);

  static inline void setStaticF___9__1_11(::Unity::Properties::TypeConverter_2<int8_t, ::System::Object*>* value);

  static inline void setStaticF___9__1_2(::Unity::Properties::TypeConverter_2<int8_t, int16_t>* value);

  static inline void setStaticF___9__1_3(::Unity::Properties::TypeConverter_2<int8_t, int32_t>* value);

  static inline void setStaticF___9__1_4(::Unity::Properties::TypeConverter_2<int8_t, int64_t>* value);

  static inline void setStaticF___9__1_5(::Unity::Properties::TypeConverter_2<int8_t, uint8_t>* value);

  static inline void setStaticF___9__1_6(::Unity::Properties::TypeConverter_2<int8_t, uint16_t>* value);

  static inline void setStaticF___9__1_7(::Unity::Properties::TypeConverter_2<int8_t, uint32_t>* value);

  static inline void setStaticF___9__1_8(::Unity::Properties::TypeConverter_2<int8_t, uint64_t>* value);

  static inline void setStaticF___9__1_9(::Unity::Properties::TypeConverter_2<int8_t, float_t>* value);

  static inline void setStaticF___9__2_0(::Unity::Properties::TypeConverter_2<int16_t, int8_t>* value);

  static inline void setStaticF___9__2_1(::Unity::Properties::TypeConverter_2<int16_t, char16_t>* value);

  static inline void setStaticF___9__2_10(::Unity::Properties::TypeConverter_2<int16_t, double_t>* value);

  static inline void setStaticF___9__2_11(::Unity::Properties::TypeConverter_2<int16_t, ::System::Object*>* value);

  static inline void setStaticF___9__2_2(::Unity::Properties::TypeConverter_2<int16_t, bool>* value);

  static inline void setStaticF___9__2_3(::Unity::Properties::TypeConverter_2<int16_t, int32_t>* value);

  static inline void setStaticF___9__2_4(::Unity::Properties::TypeConverter_2<int16_t, int64_t>* value);

  static inline void setStaticF___9__2_5(::Unity::Properties::TypeConverter_2<int16_t, uint8_t>* value);

  static inline void setStaticF___9__2_6(::Unity::Properties::TypeConverter_2<int16_t, uint16_t>* value);

  static inline void setStaticF___9__2_7(::Unity::Properties::TypeConverter_2<int16_t, uint32_t>* value);

  static inline void setStaticF___9__2_8(::Unity::Properties::TypeConverter_2<int16_t, uint64_t>* value);

  static inline void setStaticF___9__2_9(::Unity::Properties::TypeConverter_2<int16_t, float_t>* value);

  static inline void setStaticF___9__3_0(::Unity::Properties::TypeConverter_2<int32_t, int8_t>* value);

  static inline void setStaticF___9__3_1(::Unity::Properties::TypeConverter_2<int32_t, char16_t>* value);

  static inline void setStaticF___9__3_10(::Unity::Properties::TypeConverter_2<int32_t, double_t>* value);

  static inline void setStaticF___9__3_11(::Unity::Properties::TypeConverter_2<int32_t, ::System::Object*>* value);

  static inline void setStaticF___9__3_2(::Unity::Properties::TypeConverter_2<int32_t, bool>* value);

  static inline void setStaticF___9__3_3(::Unity::Properties::TypeConverter_2<int32_t, int16_t>* value);

  static inline void setStaticF___9__3_4(::Unity::Properties::TypeConverter_2<int32_t, int64_t>* value);

  static inline void setStaticF___9__3_5(::Unity::Properties::TypeConverter_2<int32_t, uint8_t>* value);

  static inline void setStaticF___9__3_6(::Unity::Properties::TypeConverter_2<int32_t, uint16_t>* value);

  static inline void setStaticF___9__3_7(::Unity::Properties::TypeConverter_2<int32_t, uint32_t>* value);

  static inline void setStaticF___9__3_8(::Unity::Properties::TypeConverter_2<int32_t, uint64_t>* value);

  static inline void setStaticF___9__3_9(::Unity::Properties::TypeConverter_2<int32_t, float_t>* value);

  static inline void setStaticF___9__4_0(::Unity::Properties::TypeConverter_2<int64_t, int8_t>* value);

  static inline void setStaticF___9__4_1(::Unity::Properties::TypeConverter_2<int64_t, char16_t>* value);

  static inline void setStaticF___9__4_10(::Unity::Properties::TypeConverter_2<int64_t, double_t>* value);

  static inline void setStaticF___9__4_11(::Unity::Properties::TypeConverter_2<int64_t, ::System::Object*>* value);

  static inline void setStaticF___9__4_2(::Unity::Properties::TypeConverter_2<int64_t, bool>* value);

  static inline void setStaticF___9__4_3(::Unity::Properties::TypeConverter_2<int64_t, int16_t>* value);

  static inline void setStaticF___9__4_4(::Unity::Properties::TypeConverter_2<int64_t, int32_t>* value);

  static inline void setStaticF___9__4_5(::Unity::Properties::TypeConverter_2<int64_t, uint8_t>* value);

  static inline void setStaticF___9__4_6(::Unity::Properties::TypeConverter_2<int64_t, uint16_t>* value);

  static inline void setStaticF___9__4_7(::Unity::Properties::TypeConverter_2<int64_t, uint32_t>* value);

  static inline void setStaticF___9__4_8(::Unity::Properties::TypeConverter_2<int64_t, uint64_t>* value);

  static inline void setStaticF___9__4_9(::Unity::Properties::TypeConverter_2<int64_t, float_t>* value);

  static inline void setStaticF___9__5_0(::Unity::Properties::TypeConverter_2<uint8_t, int8_t>* value);

  static inline void setStaticF___9__5_1(::Unity::Properties::TypeConverter_2<uint8_t, char16_t>* value);

  static inline void setStaticF___9__5_10(::Unity::Properties::TypeConverter_2<uint8_t, double_t>* value);

  static inline void setStaticF___9__5_11(::Unity::Properties::TypeConverter_2<uint8_t, ::System::Object*>* value);

  static inline void setStaticF___9__5_2(::Unity::Properties::TypeConverter_2<uint8_t, bool>* value);

  static inline void setStaticF___9__5_3(::Unity::Properties::TypeConverter_2<uint8_t, int16_t>* value);

  static inline void setStaticF___9__5_4(::Unity::Properties::TypeConverter_2<uint8_t, int32_t>* value);

  static inline void setStaticF___9__5_5(::Unity::Properties::TypeConverter_2<uint8_t, int64_t>* value);

  static inline void setStaticF___9__5_6(::Unity::Properties::TypeConverter_2<uint8_t, uint16_t>* value);

  static inline void setStaticF___9__5_7(::Unity::Properties::TypeConverter_2<uint8_t, uint32_t>* value);

  static inline void setStaticF___9__5_8(::Unity::Properties::TypeConverter_2<uint8_t, uint64_t>* value);

  static inline void setStaticF___9__5_9(::Unity::Properties::TypeConverter_2<uint8_t, float_t>* value);

  static inline void setStaticF___9__6_0(::Unity::Properties::TypeConverter_2<uint16_t, int8_t>* value);

  static inline void setStaticF___9__6_1(::Unity::Properties::TypeConverter_2<uint16_t, char16_t>* value);

  static inline void setStaticF___9__6_10(::Unity::Properties::TypeConverter_2<uint16_t, double_t>* value);

  static inline void setStaticF___9__6_11(::Unity::Properties::TypeConverter_2<uint16_t, ::System::Object*>* value);

  static inline void setStaticF___9__6_2(::Unity::Properties::TypeConverter_2<uint16_t, bool>* value);

  static inline void setStaticF___9__6_3(::Unity::Properties::TypeConverter_2<uint16_t, int16_t>* value);

  static inline void setStaticF___9__6_4(::Unity::Properties::TypeConverter_2<uint16_t, int32_t>* value);

  static inline void setStaticF___9__6_5(::Unity::Properties::TypeConverter_2<uint16_t, int64_t>* value);

  static inline void setStaticF___9__6_6(::Unity::Properties::TypeConverter_2<uint16_t, uint8_t>* value);

  static inline void setStaticF___9__6_7(::Unity::Properties::TypeConverter_2<uint16_t, uint32_t>* value);

  static inline void setStaticF___9__6_8(::Unity::Properties::TypeConverter_2<uint16_t, uint64_t>* value);

  static inline void setStaticF___9__6_9(::Unity::Properties::TypeConverter_2<uint16_t, float_t>* value);

  static inline void setStaticF___9__7_0(::Unity::Properties::TypeConverter_2<uint32_t, int8_t>* value);

  static inline void setStaticF___9__7_1(::Unity::Properties::TypeConverter_2<uint32_t, char16_t>* value);

  static inline void setStaticF___9__7_10(::Unity::Properties::TypeConverter_2<uint32_t, double_t>* value);

  static inline void setStaticF___9__7_11(::Unity::Properties::TypeConverter_2<uint32_t, ::System::Object*>* value);

  static inline void setStaticF___9__7_2(::Unity::Properties::TypeConverter_2<uint32_t, bool>* value);

  static inline void setStaticF___9__7_3(::Unity::Properties::TypeConverter_2<uint32_t, int16_t>* value);

  static inline void setStaticF___9__7_4(::Unity::Properties::TypeConverter_2<uint32_t, int32_t>* value);

  static inline void setStaticF___9__7_5(::Unity::Properties::TypeConverter_2<uint32_t, int64_t>* value);

  static inline void setStaticF___9__7_6(::Unity::Properties::TypeConverter_2<uint32_t, uint8_t>* value);

  static inline void setStaticF___9__7_7(::Unity::Properties::TypeConverter_2<uint32_t, uint16_t>* value);

  static inline void setStaticF___9__7_8(::Unity::Properties::TypeConverter_2<uint32_t, uint64_t>* value);

  static inline void setStaticF___9__7_9(::Unity::Properties::TypeConverter_2<uint32_t, float_t>* value);

  static inline void setStaticF___9__8_0(::Unity::Properties::TypeConverter_2<uint64_t, int8_t>* value);

  static inline void setStaticF___9__8_1(::Unity::Properties::TypeConverter_2<uint64_t, char16_t>* value);

  static inline void setStaticF___9__8_10(::Unity::Properties::TypeConverter_2<uint64_t, double_t>* value);

  static inline void setStaticF___9__8_11(::Unity::Properties::TypeConverter_2<uint64_t, ::System::Object*>* value);

  static inline void setStaticF___9__8_2(::Unity::Properties::TypeConverter_2<uint64_t, bool>* value);

  static inline void setStaticF___9__8_3(::Unity::Properties::TypeConverter_2<uint64_t, int16_t>* value);

  static inline void setStaticF___9__8_4(::Unity::Properties::TypeConverter_2<uint64_t, int32_t>* value);

  static inline void setStaticF___9__8_5(::Unity::Properties::TypeConverter_2<uint64_t, int64_t>* value);

  static inline void setStaticF___9__8_6(::Unity::Properties::TypeConverter_2<uint64_t, uint8_t>* value);

  static inline void setStaticF___9__8_7(::Unity::Properties::TypeConverter_2<uint64_t, uint16_t>* value);

  static inline void setStaticF___9__8_8(::Unity::Properties::TypeConverter_2<uint64_t, uint32_t>* value);

  static inline void setStaticF___9__8_9(::Unity::Properties::TypeConverter_2<uint64_t, float_t>* value);

  static inline void setStaticF___9__9_0(::Unity::Properties::TypeConverter_2<float_t, int8_t>* value);

  static inline void setStaticF___9__9_1(::Unity::Properties::TypeConverter_2<float_t, char16_t>* value);

  static inline void setStaticF___9__9_10(::Unity::Properties::TypeConverter_2<float_t, double_t>* value);

  static inline void setStaticF___9__9_11(::Unity::Properties::TypeConverter_2<float_t, ::System::Object*>* value);

  static inline void setStaticF___9__9_2(::Unity::Properties::TypeConverter_2<float_t, bool>* value);

  static inline void setStaticF___9__9_3(::Unity::Properties::TypeConverter_2<float_t, int16_t>* value);

  static inline void setStaticF___9__9_4(::Unity::Properties::TypeConverter_2<float_t, int32_t>* value);

  static inline void setStaticF___9__9_5(::Unity::Properties::TypeConverter_2<float_t, int64_t>* value);

  static inline void setStaticF___9__9_6(::Unity::Properties::TypeConverter_2<float_t, uint8_t>* value);

  static inline void setStaticF___9__9_7(::Unity::Properties::TypeConverter_2<float_t, uint16_t>* value);

  static inline void setStaticF___9__9_8(::Unity::Properties::TypeConverter_2<float_t, uint32_t>* value);

  static inline void setStaticF___9__9_9(::Unity::Properties::TypeConverter_2<float_t, uint64_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveConverters_TypeConversion___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveConverters_TypeConversion___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveConverters_TypeConversion___c(PrimitiveConverters_TypeConversion___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveConverters_TypeConversion___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveConverters_TypeConversion___c(PrimitiveConverters_TypeConversion___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::PrimitiveConverters_TypeConversion___c, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeConversion/PrimitiveConverters
class CORDL_TYPE TypeConversion_PrimitiveConverters : public ::System::Object {
public:
  // Declarations
  using __c = ::Unity::Properties::PrimitiveConverters_TypeConversion___c;

  /// @brief Method Register, addr 0x69d7078, size 0x1e0, virtual false, abstract: false, final false
  static inline void Register();

  /// @brief Method RegisterBooleanConverters, addr 0x69df790, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterBooleanConverters();

  /// @brief Method RegisterCharConverters, addr 0x69e04dc, size 0xf74, virtual false, abstract: false, final false
  static inline void RegisterCharConverters();

  /// @brief Method RegisterFloat32Converters, addr 0x69ddcf8, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterFloat32Converters();

  /// @brief Method RegisterFloat64Converters, addr 0x69dea44, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterFloat64Converters();

  /// @brief Method RegisterInt16Converters, addr 0x69d7fe4, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterInt16Converters();

  /// @brief Method RegisterInt32Converters, addr 0x69d8d30, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterInt32Converters();

  /// @brief Method RegisterInt64Converters, addr 0x69d9a7c, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterInt64Converters();

  /// @brief Method RegisterInt8Converters, addr 0x69d7298, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterInt8Converters();

  /// @brief Method RegisterObjectConverters, addr 0x69e2e98, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterObjectConverters();

  /// @brief Method RegisterStringConverters, addr 0x69e1450, size 0x1a48, virtual false, abstract: false, final false
  static inline void RegisterStringConverters();

  /// @brief Method RegisterUInt16Converters, addr 0x69db514, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterUInt16Converters();

  /// @brief Method RegisterUInt32Converters, addr 0x69dc260, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterUInt32Converters();

  /// @brief Method RegisterUInt64Converters, addr 0x69dcfac, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterUInt64Converters();

  /// @brief Method RegisterUInt8Converters, addr 0x69da7c8, size 0xd4c, virtual false, abstract: false, final false
  static inline void RegisterUInt8Converters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConversion_PrimitiveConverters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion_PrimitiveConverters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConversion_PrimitiveConverters(TypeConversion_PrimitiveConverters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion_PrimitiveConverters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConversion_PrimitiveConverters(TypeConversion_PrimitiveConverters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19413 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeConversion_PrimitiveConverters, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies System.Object, Unity.Properties.ConversionRegistry
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeConversion
class CORDL_TYPE TypeConversion : public ::System::Object {
public:
  // Declarations
  using PrimitiveConverters = ::Unity::Properties::TypeConversion_PrimitiveConverters;

  /// @brief Field s_GlobalConverters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GlobalConverters, put = setStaticF_s_GlobalConverters)) ::Unity::Properties::ConversionRegistry s_GlobalConverters;

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline TDestination Convert(::ByRef<TSource> value);

  /// @brief Method IsNumericType, addr 0x69d7258, size 0x40, virtual false, abstract: false, final false
  static inline bool IsNumericType(::System::Type* t);

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline void Register(::Unity::Properties::TypeConverter_2<TSource, TDestination>* converter);

  /// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvert(::ByRef<TSource> source, ::ByRef<TDestination> destination);

  /// @brief Method TryConvertToUnityEngineObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvertToUnityEngineObject(TSource source, ::ByRef<TDestination> destination);

  static inline ::Unity::Properties::ConversionRegistry getStaticF_s_GlobalConverters();

  static inline void setStaticF_s_GlobalConverters(::Unity::Properties::ConversionRegistry value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConversion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConversion(TypeConversion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConversion(TypeConversion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeConversion, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::PrimitiveConverters_TypeConversion___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PrimitiveConverters_TypeConversion___c*, "Unity.Properties", "TypeConversion/PrimitiveConverters/<>c");
NEED_NO_BOX(::Unity::Properties::TypeConversion);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeConversion*, "Unity.Properties", "TypeConversion");
NEED_NO_BOX(::Unity::Properties::TypeConversion_PrimitiveConverters);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeConversion_PrimitiveConverters*, "Unity.Properties", "TypeConversion/PrimitiveConverters");
