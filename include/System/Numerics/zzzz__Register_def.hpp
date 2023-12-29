#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Register)
// Forward declare root types
namespace System::Numerics {
struct Register;
}
// Write type traits
MARK_VAL_T(::System::Numerics::Register);
// Type: System.Numerics::Register
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace System::Numerics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3546))
// CS Name: ::System.Numerics::Register
struct CORDL_TYPE Register {
public:
  // Declarations
  /// @brief Field byte_0, offset 0x0, size 0x1
  __declspec(property(get = __get_byte_0, put = __set_byte_0)) uint8_t byte_0;

  /// @brief Field byte_1, offset 0x1, size 0x1
  __declspec(property(get = __get_byte_1, put = __set_byte_1)) uint8_t byte_1;

  /// @brief Field byte_2, offset 0x2, size 0x1
  __declspec(property(get = __get_byte_2, put = __set_byte_2)) uint8_t byte_2;

  /// @brief Field byte_3, offset 0x3, size 0x1
  __declspec(property(get = __get_byte_3, put = __set_byte_3)) uint8_t byte_3;

  /// @brief Field byte_4, offset 0x4, size 0x1
  __declspec(property(get = __get_byte_4, put = __set_byte_4)) uint8_t byte_4;

  /// @brief Field byte_5, offset 0x5, size 0x1
  __declspec(property(get = __get_byte_5, put = __set_byte_5)) uint8_t byte_5;

  /// @brief Field byte_6, offset 0x6, size 0x1
  __declspec(property(get = __get_byte_6, put = __set_byte_6)) uint8_t byte_6;

  /// @brief Field byte_7, offset 0x7, size 0x1
  __declspec(property(get = __get_byte_7, put = __set_byte_7)) uint8_t byte_7;

  /// @brief Field byte_8, offset 0x8, size 0x1
  __declspec(property(get = __get_byte_8, put = __set_byte_8)) uint8_t byte_8;

  /// @brief Field byte_9, offset 0x9, size 0x1
  __declspec(property(get = __get_byte_9, put = __set_byte_9)) uint8_t byte_9;

  /// @brief Field byte_10, offset 0xa, size 0x1
  __declspec(property(get = __get_byte_10, put = __set_byte_10)) uint8_t byte_10;

  /// @brief Field byte_11, offset 0xb, size 0x1
  __declspec(property(get = __get_byte_11, put = __set_byte_11)) uint8_t byte_11;

  /// @brief Field byte_12, offset 0xc, size 0x1
  __declspec(property(get = __get_byte_12, put = __set_byte_12)) uint8_t byte_12;

  /// @brief Field byte_13, offset 0xd, size 0x1
  __declspec(property(get = __get_byte_13, put = __set_byte_13)) uint8_t byte_13;

  /// @brief Field byte_14, offset 0xe, size 0x1
  __declspec(property(get = __get_byte_14, put = __set_byte_14)) uint8_t byte_14;

  /// @brief Field byte_15, offset 0xf, size 0x1
  __declspec(property(get = __get_byte_15, put = __set_byte_15)) uint8_t byte_15;

  /// @brief Field sbyte_0, offset 0x0, size 0x1
  __declspec(property(get = __get_sbyte_0, put = __set_sbyte_0)) int8_t sbyte_0;

  /// @brief Field sbyte_1, offset 0x1, size 0x1
  __declspec(property(get = __get_sbyte_1, put = __set_sbyte_1)) int8_t sbyte_1;

  /// @brief Field sbyte_2, offset 0x2, size 0x1
  __declspec(property(get = __get_sbyte_2, put = __set_sbyte_2)) int8_t sbyte_2;

  /// @brief Field sbyte_3, offset 0x3, size 0x1
  __declspec(property(get = __get_sbyte_3, put = __set_sbyte_3)) int8_t sbyte_3;

  /// @brief Field sbyte_4, offset 0x4, size 0x1
  __declspec(property(get = __get_sbyte_4, put = __set_sbyte_4)) int8_t sbyte_4;

  /// @brief Field sbyte_5, offset 0x5, size 0x1
  __declspec(property(get = __get_sbyte_5, put = __set_sbyte_5)) int8_t sbyte_5;

  /// @brief Field sbyte_6, offset 0x6, size 0x1
  __declspec(property(get = __get_sbyte_6, put = __set_sbyte_6)) int8_t sbyte_6;

  /// @brief Field sbyte_7, offset 0x7, size 0x1
  __declspec(property(get = __get_sbyte_7, put = __set_sbyte_7)) int8_t sbyte_7;

  /// @brief Field sbyte_8, offset 0x8, size 0x1
  __declspec(property(get = __get_sbyte_8, put = __set_sbyte_8)) int8_t sbyte_8;

  /// @brief Field sbyte_9, offset 0x9, size 0x1
  __declspec(property(get = __get_sbyte_9, put = __set_sbyte_9)) int8_t sbyte_9;

  /// @brief Field sbyte_10, offset 0xa, size 0x1
  __declspec(property(get = __get_sbyte_10, put = __set_sbyte_10)) int8_t sbyte_10;

  /// @brief Field sbyte_11, offset 0xb, size 0x1
  __declspec(property(get = __get_sbyte_11, put = __set_sbyte_11)) int8_t sbyte_11;

  /// @brief Field sbyte_12, offset 0xc, size 0x1
  __declspec(property(get = __get_sbyte_12, put = __set_sbyte_12)) int8_t sbyte_12;

  /// @brief Field sbyte_13, offset 0xd, size 0x1
  __declspec(property(get = __get_sbyte_13, put = __set_sbyte_13)) int8_t sbyte_13;

  /// @brief Field sbyte_14, offset 0xe, size 0x1
  __declspec(property(get = __get_sbyte_14, put = __set_sbyte_14)) int8_t sbyte_14;

  /// @brief Field sbyte_15, offset 0xf, size 0x1
  __declspec(property(get = __get_sbyte_15, put = __set_sbyte_15)) int8_t sbyte_15;

  /// @brief Field uint16_0, offset 0x0, size 0x2
  __declspec(property(get = __get_uint16_0, put = __set_uint16_0)) uint16_t uint16_0;

  /// @brief Field uint16_1, offset 0x2, size 0x2
  __declspec(property(get = __get_uint16_1, put = __set_uint16_1)) uint16_t uint16_1;

  /// @brief Field uint16_2, offset 0x4, size 0x2
  __declspec(property(get = __get_uint16_2, put = __set_uint16_2)) uint16_t uint16_2;

  /// @brief Field uint16_3, offset 0x6, size 0x2
  __declspec(property(get = __get_uint16_3, put = __set_uint16_3)) uint16_t uint16_3;

  /// @brief Field uint16_4, offset 0x8, size 0x2
  __declspec(property(get = __get_uint16_4, put = __set_uint16_4)) uint16_t uint16_4;

  /// @brief Field uint16_5, offset 0xa, size 0x2
  __declspec(property(get = __get_uint16_5, put = __set_uint16_5)) uint16_t uint16_5;

  /// @brief Field uint16_6, offset 0xc, size 0x2
  __declspec(property(get = __get_uint16_6, put = __set_uint16_6)) uint16_t uint16_6;

  /// @brief Field uint16_7, offset 0xe, size 0x2
  __declspec(property(get = __get_uint16_7, put = __set_uint16_7)) uint16_t uint16_7;

  /// @brief Field int16_0, offset 0x0, size 0x2
  __declspec(property(get = __get_int16_0, put = __set_int16_0)) int16_t int16_0;

  /// @brief Field int16_1, offset 0x2, size 0x2
  __declspec(property(get = __get_int16_1, put = __set_int16_1)) int16_t int16_1;

  /// @brief Field int16_2, offset 0x4, size 0x2
  __declspec(property(get = __get_int16_2, put = __set_int16_2)) int16_t int16_2;

  /// @brief Field int16_3, offset 0x6, size 0x2
  __declspec(property(get = __get_int16_3, put = __set_int16_3)) int16_t int16_3;

  /// @brief Field int16_4, offset 0x8, size 0x2
  __declspec(property(get = __get_int16_4, put = __set_int16_4)) int16_t int16_4;

  /// @brief Field int16_5, offset 0xa, size 0x2
  __declspec(property(get = __get_int16_5, put = __set_int16_5)) int16_t int16_5;

  /// @brief Field int16_6, offset 0xc, size 0x2
  __declspec(property(get = __get_int16_6, put = __set_int16_6)) int16_t int16_6;

  /// @brief Field int16_7, offset 0xe, size 0x2
  __declspec(property(get = __get_int16_7, put = __set_int16_7)) int16_t int16_7;

  /// @brief Field uint32_0, offset 0x0, size 0x4
  __declspec(property(get = __get_uint32_0, put = __set_uint32_0)) uint32_t uint32_0;

  /// @brief Field uint32_1, offset 0x4, size 0x4
  __declspec(property(get = __get_uint32_1, put = __set_uint32_1)) uint32_t uint32_1;

  /// @brief Field uint32_2, offset 0x8, size 0x4
  __declspec(property(get = __get_uint32_2, put = __set_uint32_2)) uint32_t uint32_2;

  /// @brief Field uint32_3, offset 0xc, size 0x4
  __declspec(property(get = __get_uint32_3, put = __set_uint32_3)) uint32_t uint32_3;

  /// @brief Field int32_0, offset 0x0, size 0x4
  __declspec(property(get = __get_int32_0, put = __set_int32_0)) int32_t int32_0;

  /// @brief Field int32_1, offset 0x4, size 0x4
  __declspec(property(get = __get_int32_1, put = __set_int32_1)) int32_t int32_1;

  /// @brief Field int32_2, offset 0x8, size 0x4
  __declspec(property(get = __get_int32_2, put = __set_int32_2)) int32_t int32_2;

  /// @brief Field int32_3, offset 0xc, size 0x4
  __declspec(property(get = __get_int32_3, put = __set_int32_3)) int32_t int32_3;

  /// @brief Field uint64_0, offset 0x0, size 0x8
  __declspec(property(get = __get_uint64_0, put = __set_uint64_0)) uint64_t uint64_0;

  /// @brief Field uint64_1, offset 0x8, size 0x8
  __declspec(property(get = __get_uint64_1, put = __set_uint64_1)) uint64_t uint64_1;

  /// @brief Field int64_0, offset 0x0, size 0x8
  __declspec(property(get = __get_int64_0, put = __set_int64_0)) int64_t int64_0;

  /// @brief Field int64_1, offset 0x8, size 0x8
  __declspec(property(get = __get_int64_1, put = __set_int64_1)) int64_t int64_1;

  /// @brief Field single_0, offset 0x0, size 0x4
  __declspec(property(get = __get_single_0, put = __set_single_0)) float_t single_0;

  /// @brief Field single_1, offset 0x4, size 0x4
  __declspec(property(get = __get_single_1, put = __set_single_1)) float_t single_1;

  /// @brief Field single_2, offset 0x8, size 0x4
  __declspec(property(get = __get_single_2, put = __set_single_2)) float_t single_2;

  /// @brief Field single_3, offset 0xc, size 0x4
  __declspec(property(get = __get_single_3, put = __set_single_3)) float_t single_3;

  /// @brief Field double_0, offset 0x0, size 0x8
  __declspec(property(get = __get_double_0, put = __set_double_0)) double_t double_0;

  /// @brief Field double_1, offset 0x8, size 0x8
  __declspec(property(get = __get_double_1, put = __set_double_1)) double_t double_1;

  constexpr uint8_t& __get_byte_0();

  constexpr uint8_t const& __get_byte_0() const;

  constexpr void __set_byte_0(uint8_t value);

  constexpr uint8_t& __get_byte_1();

  constexpr uint8_t const& __get_byte_1() const;

  constexpr void __set_byte_1(uint8_t value);

  constexpr uint8_t& __get_byte_2();

  constexpr uint8_t const& __get_byte_2() const;

  constexpr void __set_byte_2(uint8_t value);

  constexpr uint8_t& __get_byte_3();

  constexpr uint8_t const& __get_byte_3() const;

  constexpr void __set_byte_3(uint8_t value);

  constexpr uint8_t& __get_byte_4();

  constexpr uint8_t const& __get_byte_4() const;

  constexpr void __set_byte_4(uint8_t value);

  constexpr uint8_t& __get_byte_5();

  constexpr uint8_t const& __get_byte_5() const;

  constexpr void __set_byte_5(uint8_t value);

  constexpr uint8_t& __get_byte_6();

  constexpr uint8_t const& __get_byte_6() const;

  constexpr void __set_byte_6(uint8_t value);

  constexpr uint8_t& __get_byte_7();

  constexpr uint8_t const& __get_byte_7() const;

  constexpr void __set_byte_7(uint8_t value);

  constexpr uint8_t& __get_byte_8();

  constexpr uint8_t const& __get_byte_8() const;

  constexpr void __set_byte_8(uint8_t value);

  constexpr uint8_t& __get_byte_9();

  constexpr uint8_t const& __get_byte_9() const;

  constexpr void __set_byte_9(uint8_t value);

  constexpr uint8_t& __get_byte_10();

  constexpr uint8_t const& __get_byte_10() const;

  constexpr void __set_byte_10(uint8_t value);

  constexpr uint8_t& __get_byte_11();

  constexpr uint8_t const& __get_byte_11() const;

  constexpr void __set_byte_11(uint8_t value);

  constexpr uint8_t& __get_byte_12();

  constexpr uint8_t const& __get_byte_12() const;

  constexpr void __set_byte_12(uint8_t value);

  constexpr uint8_t& __get_byte_13();

  constexpr uint8_t const& __get_byte_13() const;

  constexpr void __set_byte_13(uint8_t value);

  constexpr uint8_t& __get_byte_14();

  constexpr uint8_t const& __get_byte_14() const;

  constexpr void __set_byte_14(uint8_t value);

  constexpr uint8_t& __get_byte_15();

  constexpr uint8_t const& __get_byte_15() const;

  constexpr void __set_byte_15(uint8_t value);

  constexpr int8_t& __get_sbyte_0();

  constexpr int8_t const& __get_sbyte_0() const;

  constexpr void __set_sbyte_0(int8_t value);

  constexpr int8_t& __get_sbyte_1();

  constexpr int8_t const& __get_sbyte_1() const;

  constexpr void __set_sbyte_1(int8_t value);

  constexpr int8_t& __get_sbyte_2();

  constexpr int8_t const& __get_sbyte_2() const;

  constexpr void __set_sbyte_2(int8_t value);

  constexpr int8_t& __get_sbyte_3();

  constexpr int8_t const& __get_sbyte_3() const;

  constexpr void __set_sbyte_3(int8_t value);

  constexpr int8_t& __get_sbyte_4();

  constexpr int8_t const& __get_sbyte_4() const;

  constexpr void __set_sbyte_4(int8_t value);

  constexpr int8_t& __get_sbyte_5();

  constexpr int8_t const& __get_sbyte_5() const;

  constexpr void __set_sbyte_5(int8_t value);

  constexpr int8_t& __get_sbyte_6();

  constexpr int8_t const& __get_sbyte_6() const;

  constexpr void __set_sbyte_6(int8_t value);

  constexpr int8_t& __get_sbyte_7();

  constexpr int8_t const& __get_sbyte_7() const;

  constexpr void __set_sbyte_7(int8_t value);

  constexpr int8_t& __get_sbyte_8();

  constexpr int8_t const& __get_sbyte_8() const;

  constexpr void __set_sbyte_8(int8_t value);

  constexpr int8_t& __get_sbyte_9();

  constexpr int8_t const& __get_sbyte_9() const;

  constexpr void __set_sbyte_9(int8_t value);

  constexpr int8_t& __get_sbyte_10();

  constexpr int8_t const& __get_sbyte_10() const;

  constexpr void __set_sbyte_10(int8_t value);

  constexpr int8_t& __get_sbyte_11();

  constexpr int8_t const& __get_sbyte_11() const;

  constexpr void __set_sbyte_11(int8_t value);

  constexpr int8_t& __get_sbyte_12();

  constexpr int8_t const& __get_sbyte_12() const;

  constexpr void __set_sbyte_12(int8_t value);

  constexpr int8_t& __get_sbyte_13();

  constexpr int8_t const& __get_sbyte_13() const;

  constexpr void __set_sbyte_13(int8_t value);

  constexpr int8_t& __get_sbyte_14();

  constexpr int8_t const& __get_sbyte_14() const;

  constexpr void __set_sbyte_14(int8_t value);

  constexpr int8_t& __get_sbyte_15();

  constexpr int8_t const& __get_sbyte_15() const;

  constexpr void __set_sbyte_15(int8_t value);

  constexpr uint16_t& __get_uint16_0();

  constexpr uint16_t const& __get_uint16_0() const;

  constexpr void __set_uint16_0(uint16_t value);

  constexpr uint16_t& __get_uint16_1();

  constexpr uint16_t const& __get_uint16_1() const;

  constexpr void __set_uint16_1(uint16_t value);

  constexpr uint16_t& __get_uint16_2();

  constexpr uint16_t const& __get_uint16_2() const;

  constexpr void __set_uint16_2(uint16_t value);

  constexpr uint16_t& __get_uint16_3();

  constexpr uint16_t const& __get_uint16_3() const;

  constexpr void __set_uint16_3(uint16_t value);

  constexpr uint16_t& __get_uint16_4();

  constexpr uint16_t const& __get_uint16_4() const;

  constexpr void __set_uint16_4(uint16_t value);

  constexpr uint16_t& __get_uint16_5();

  constexpr uint16_t const& __get_uint16_5() const;

  constexpr void __set_uint16_5(uint16_t value);

  constexpr uint16_t& __get_uint16_6();

  constexpr uint16_t const& __get_uint16_6() const;

  constexpr void __set_uint16_6(uint16_t value);

  constexpr uint16_t& __get_uint16_7();

  constexpr uint16_t const& __get_uint16_7() const;

  constexpr void __set_uint16_7(uint16_t value);

  constexpr int16_t& __get_int16_0();

  constexpr int16_t const& __get_int16_0() const;

  constexpr void __set_int16_0(int16_t value);

  constexpr int16_t& __get_int16_1();

  constexpr int16_t const& __get_int16_1() const;

  constexpr void __set_int16_1(int16_t value);

  constexpr int16_t& __get_int16_2();

  constexpr int16_t const& __get_int16_2() const;

  constexpr void __set_int16_2(int16_t value);

  constexpr int16_t& __get_int16_3();

  constexpr int16_t const& __get_int16_3() const;

  constexpr void __set_int16_3(int16_t value);

  constexpr int16_t& __get_int16_4();

  constexpr int16_t const& __get_int16_4() const;

  constexpr void __set_int16_4(int16_t value);

  constexpr int16_t& __get_int16_5();

  constexpr int16_t const& __get_int16_5() const;

  constexpr void __set_int16_5(int16_t value);

  constexpr int16_t& __get_int16_6();

  constexpr int16_t const& __get_int16_6() const;

  constexpr void __set_int16_6(int16_t value);

  constexpr int16_t& __get_int16_7();

  constexpr int16_t const& __get_int16_7() const;

  constexpr void __set_int16_7(int16_t value);

  constexpr uint32_t& __get_uint32_0();

  constexpr uint32_t const& __get_uint32_0() const;

  constexpr void __set_uint32_0(uint32_t value);

  constexpr uint32_t& __get_uint32_1();

  constexpr uint32_t const& __get_uint32_1() const;

  constexpr void __set_uint32_1(uint32_t value);

  constexpr uint32_t& __get_uint32_2();

  constexpr uint32_t const& __get_uint32_2() const;

  constexpr void __set_uint32_2(uint32_t value);

  constexpr uint32_t& __get_uint32_3();

  constexpr uint32_t const& __get_uint32_3() const;

  constexpr void __set_uint32_3(uint32_t value);

  constexpr int32_t& __get_int32_0();

  constexpr int32_t const& __get_int32_0() const;

  constexpr void __set_int32_0(int32_t value);

  constexpr int32_t& __get_int32_1();

  constexpr int32_t const& __get_int32_1() const;

  constexpr void __set_int32_1(int32_t value);

  constexpr int32_t& __get_int32_2();

  constexpr int32_t const& __get_int32_2() const;

  constexpr void __set_int32_2(int32_t value);

  constexpr int32_t& __get_int32_3();

  constexpr int32_t const& __get_int32_3() const;

  constexpr void __set_int32_3(int32_t value);

  constexpr uint64_t& __get_uint64_0();

  constexpr uint64_t const& __get_uint64_0() const;

  constexpr void __set_uint64_0(uint64_t value);

  constexpr uint64_t& __get_uint64_1();

  constexpr uint64_t const& __get_uint64_1() const;

  constexpr void __set_uint64_1(uint64_t value);

  constexpr int64_t& __get_int64_0();

  constexpr int64_t const& __get_int64_0() const;

  constexpr void __set_int64_0(int64_t value);

  constexpr int64_t& __get_int64_1();

  constexpr int64_t const& __get_int64_1() const;

  constexpr void __set_int64_1(int64_t value);

  constexpr float_t& __get_single_0();

  constexpr float_t const& __get_single_0() const;

  constexpr void __set_single_0(float_t value);

  constexpr float_t& __get_single_1();

  constexpr float_t const& __get_single_1() const;

  constexpr void __set_single_1(float_t value);

  constexpr float_t& __get_single_2();

  constexpr float_t const& __get_single_2() const;

  constexpr void __set_single_2(float_t value);

  constexpr float_t& __get_single_3();

  constexpr float_t const& __get_single_3() const;

  constexpr void __set_single_3(float_t value);

  constexpr double_t& __get_double_0();

  constexpr double_t const& __get_double_0() const;

  constexpr void __set_double_0(double_t value);

  constexpr double_t& __get_double_1();

  constexpr double_t const& __get_double_1() const;

  constexpr void __set_double_1(double_t value);

  // Ctor Parameters [CppParam { name: "byte_0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_2",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_4", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "byte_5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_7", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_8", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_9", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "byte_10", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_11", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_12", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_13", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte_14", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "byte_15", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_0", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_1", ty:
  // "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_2", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_3", ty: "int8_t", modifiers: "", def_value: None },
  // CppParam { name: "sbyte_4", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_5", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_6", ty: "int8_t",
  // modifiers: "", def_value: None }, CppParam { name: "sbyte_7", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_8", ty: "int8_t", modifiers: "", def_value: None }, CppParam
  // { name: "sbyte_9", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_10", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_11", ty: "int8_t",
  // modifiers: "", def_value: None }, CppParam { name: "sbyte_12", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_13", ty: "int8_t", modifiers: "", def_value: None },
  // CppParam { name: "sbyte_14", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "sbyte_15", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "uint16_0", ty:
  // "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_2", ty: "uint16_t", modifiers: "", def_value:
  // None }, CppParam { name: "uint16_3", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_4", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_5",
  // ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_6", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uint16_7", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "int16_0", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_1", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name:
  // "int16_2", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_3", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_4", ty: "int16_t", modifiers: "",
  // def_value: None }, CppParam { name: "int16_5", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "int16_6", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name:
  // "int16_7", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "uint32_0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "uint32_1", ty: "uint32_t", modifiers:
  // "", def_value: None }, CppParam { name: "uint32_2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "uint32_3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "int32_0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "int32_1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "int32_2", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "int32_3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uint64_0", ty: "uint64_t", modifiers: "", def_value: None },
  // CppParam { name: "uint64_1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "int64_0", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "int64_1", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "single_0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "single_1", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "single_2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "single_3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "double_0",
  // ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "double_1", ty: "double_t", modifiers: "", def_value: None }]
  constexpr Register(uint8_t byte_0, uint8_t byte_1, uint8_t byte_2, uint8_t byte_3, uint8_t byte_4, uint8_t byte_5, uint8_t byte_6, uint8_t byte_7, uint8_t byte_8, uint8_t byte_9, uint8_t byte_10,
                     uint8_t byte_11, uint8_t byte_12, uint8_t byte_13, uint8_t byte_14, uint8_t byte_15, int8_t sbyte_0, int8_t sbyte_1, int8_t sbyte_2, int8_t sbyte_3, int8_t sbyte_4,
                     int8_t sbyte_5, int8_t sbyte_6, int8_t sbyte_7, int8_t sbyte_8, int8_t sbyte_9, int8_t sbyte_10, int8_t sbyte_11, int8_t sbyte_12, int8_t sbyte_13, int8_t sbyte_14,
                     int8_t sbyte_15, uint16_t uint16_0, uint16_t uint16_1, uint16_t uint16_2, uint16_t uint16_3, uint16_t uint16_4, uint16_t uint16_5, uint16_t uint16_6, uint16_t uint16_7,
                     int16_t int16_0, int16_t int16_1, int16_t int16_2, int16_t int16_3, int16_t int16_4, int16_t int16_5, int16_t int16_6, int16_t int16_7, uint32_t uint32_0, uint32_t uint32_1,
                     uint32_t uint32_2, uint32_t uint32_3, int32_t int32_0, int32_t int32_1, int32_t int32_2, int32_t int32_3, uint64_t uint64_0, uint64_t uint64_1, int64_t int64_0, int64_t int64_1,
                     float_t single_0, float_t single_1, float_t single_2, float_t single_3, double_t double_0, double_t double_1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Register();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___byte_0_padding[0x0];
      /// @brief Field byte_0, offset: 0x0, size: 0x1, def value: None
      uint8_t ___byte_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___byte_0_padding_forAlignment[0x0];
      /// @brief Field byte_0, offset: 0x0, size: 0x1, def value: None
      uint8_t ___byte_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___byte_1_padding[0x1];
      /// @brief Field byte_1, offset: 0x1, size: 0x1, def value: None
      uint8_t ___byte_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___byte_1_padding_forAlignment[0x1];
      /// @brief Field byte_1, offset: 0x1, size: 0x1, def value: None
      uint8_t ___byte_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___byte_2_padding[0x2];
      /// @brief Field byte_2, offset: 0x2, size: 0x1, def value: None
      uint8_t ___byte_2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___byte_2_padding_forAlignment[0x2];
      /// @brief Field byte_2, offset: 0x2, size: 0x1, def value: None
      uint8_t ___byte_2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___byte_3_padding[0x3];
      /// @brief Field byte_3, offset: 0x3, size: 0x1, def value: None
      uint8_t ___byte_3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___byte_3_padding_forAlignment[0x3];
      /// @brief Field byte_3, offset: 0x3, size: 0x1, def value: None
      uint8_t ___byte_3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___byte_4_padding[0x4];
      /// @brief Field byte_4, offset: 0x4, size: 0x1, def value: None
      uint8_t ___byte_4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___byte_4_padding_forAlignment[0x4];
      /// @brief Field byte_4, offset: 0x4, size: 0x1, def value: None
      uint8_t ___byte_4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___byte_5_padding[0x5];
      /// @brief Field byte_5, offset: 0x5, size: 0x1, def value: None
      uint8_t ___byte_5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___byte_5_padding_forAlignment[0x5];
      /// @brief Field byte_5, offset: 0x5, size: 0x1, def value: None
      uint8_t ___byte_5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___byte_6_padding[0x6];
      /// @brief Field byte_6, offset: 0x6, size: 0x1, def value: None
      uint8_t ___byte_6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___byte_6_padding_forAlignment[0x6];
      /// @brief Field byte_6, offset: 0x6, size: 0x1, def value: None
      uint8_t ___byte_6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x7
      uint8_t ___byte_7_padding[0x7];
      /// @brief Field byte_7, offset: 0x7, size: 0x1, def value: None
      uint8_t ___byte_7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x7 for alignment
      uint8_t ___byte_7_padding_forAlignment[0x7];
      /// @brief Field byte_7, offset: 0x7, size: 0x1, def value: None
      uint8_t ___byte_7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___byte_8_padding[0x8];
      /// @brief Field byte_8, offset: 0x8, size: 0x1, def value: None
      uint8_t ___byte_8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___byte_8_padding_forAlignment[0x8];
      /// @brief Field byte_8, offset: 0x8, size: 0x1, def value: None
      uint8_t ___byte_8_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x9
      uint8_t ___byte_9_padding[0x9];
      /// @brief Field byte_9, offset: 0x9, size: 0x1, def value: None
      uint8_t ___byte_9;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x9 for alignment
      uint8_t ___byte_9_padding_forAlignment[0x9];
      /// @brief Field byte_9, offset: 0x9, size: 0x1, def value: None
      uint8_t ___byte_9_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___byte_10_padding[0xa];
      /// @brief Field byte_10, offset: 0xa, size: 0x1, def value: None
      uint8_t ___byte_10;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___byte_10_padding_forAlignment[0xa];
      /// @brief Field byte_10, offset: 0xa, size: 0x1, def value: None
      uint8_t ___byte_10_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xb
      uint8_t ___byte_11_padding[0xb];
      /// @brief Field byte_11, offset: 0xb, size: 0x1, def value: None
      uint8_t ___byte_11;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xb for alignment
      uint8_t ___byte_11_padding_forAlignment[0xb];
      /// @brief Field byte_11, offset: 0xb, size: 0x1, def value: None
      uint8_t ___byte_11_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___byte_12_padding[0xc];
      /// @brief Field byte_12, offset: 0xc, size: 0x1, def value: None
      uint8_t ___byte_12;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___byte_12_padding_forAlignment[0xc];
      /// @brief Field byte_12, offset: 0xc, size: 0x1, def value: None
      uint8_t ___byte_12_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xd
      uint8_t ___byte_13_padding[0xd];
      /// @brief Field byte_13, offset: 0xd, size: 0x1, def value: None
      uint8_t ___byte_13;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xd for alignment
      uint8_t ___byte_13_padding_forAlignment[0xd];
      /// @brief Field byte_13, offset: 0xd, size: 0x1, def value: None
      uint8_t ___byte_13_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___byte_14_padding[0xe];
      /// @brief Field byte_14, offset: 0xe, size: 0x1, def value: None
      uint8_t ___byte_14;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___byte_14_padding_forAlignment[0xe];
      /// @brief Field byte_14, offset: 0xe, size: 0x1, def value: None
      uint8_t ___byte_14_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xf
      uint8_t ___byte_15_padding[0xf];
      /// @brief Field byte_15, offset: 0xf, size: 0x1, def value: None
      uint8_t ___byte_15;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xf for alignment
      uint8_t ___byte_15_padding_forAlignment[0xf];
      /// @brief Field byte_15, offset: 0xf, size: 0x1, def value: None
      uint8_t ___byte_15_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___sbyte_0_padding[0x0];
      /// @brief Field sbyte_0, offset: 0x0, size: 0x1, def value: None
      int8_t ___sbyte_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___sbyte_0_padding_forAlignment[0x0];
      /// @brief Field sbyte_0, offset: 0x0, size: 0x1, def value: None
      int8_t ___sbyte_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___sbyte_1_padding[0x1];
      /// @brief Field sbyte_1, offset: 0x1, size: 0x1, def value: None
      int8_t ___sbyte_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___sbyte_1_padding_forAlignment[0x1];
      /// @brief Field sbyte_1, offset: 0x1, size: 0x1, def value: None
      int8_t ___sbyte_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___sbyte_2_padding[0x2];
      /// @brief Field sbyte_2, offset: 0x2, size: 0x1, def value: None
      int8_t ___sbyte_2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___sbyte_2_padding_forAlignment[0x2];
      /// @brief Field sbyte_2, offset: 0x2, size: 0x1, def value: None
      int8_t ___sbyte_2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___sbyte_3_padding[0x3];
      /// @brief Field sbyte_3, offset: 0x3, size: 0x1, def value: None
      int8_t ___sbyte_3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___sbyte_3_padding_forAlignment[0x3];
      /// @brief Field sbyte_3, offset: 0x3, size: 0x1, def value: None
      int8_t ___sbyte_3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___sbyte_4_padding[0x4];
      /// @brief Field sbyte_4, offset: 0x4, size: 0x1, def value: None
      int8_t ___sbyte_4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___sbyte_4_padding_forAlignment[0x4];
      /// @brief Field sbyte_4, offset: 0x4, size: 0x1, def value: None
      int8_t ___sbyte_4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___sbyte_5_padding[0x5];
      /// @brief Field sbyte_5, offset: 0x5, size: 0x1, def value: None
      int8_t ___sbyte_5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___sbyte_5_padding_forAlignment[0x5];
      /// @brief Field sbyte_5, offset: 0x5, size: 0x1, def value: None
      int8_t ___sbyte_5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___sbyte_6_padding[0x6];
      /// @brief Field sbyte_6, offset: 0x6, size: 0x1, def value: None
      int8_t ___sbyte_6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___sbyte_6_padding_forAlignment[0x6];
      /// @brief Field sbyte_6, offset: 0x6, size: 0x1, def value: None
      int8_t ___sbyte_6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x7
      uint8_t ___sbyte_7_padding[0x7];
      /// @brief Field sbyte_7, offset: 0x7, size: 0x1, def value: None
      int8_t ___sbyte_7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x7 for alignment
      uint8_t ___sbyte_7_padding_forAlignment[0x7];
      /// @brief Field sbyte_7, offset: 0x7, size: 0x1, def value: None
      int8_t ___sbyte_7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___sbyte_8_padding[0x8];
      /// @brief Field sbyte_8, offset: 0x8, size: 0x1, def value: None
      int8_t ___sbyte_8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___sbyte_8_padding_forAlignment[0x8];
      /// @brief Field sbyte_8, offset: 0x8, size: 0x1, def value: None
      int8_t ___sbyte_8_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x9
      uint8_t ___sbyte_9_padding[0x9];
      /// @brief Field sbyte_9, offset: 0x9, size: 0x1, def value: None
      int8_t ___sbyte_9;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x9 for alignment
      uint8_t ___sbyte_9_padding_forAlignment[0x9];
      /// @brief Field sbyte_9, offset: 0x9, size: 0x1, def value: None
      int8_t ___sbyte_9_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___sbyte_10_padding[0xa];
      /// @brief Field sbyte_10, offset: 0xa, size: 0x1, def value: None
      int8_t ___sbyte_10;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___sbyte_10_padding_forAlignment[0xa];
      /// @brief Field sbyte_10, offset: 0xa, size: 0x1, def value: None
      int8_t ___sbyte_10_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xb
      uint8_t ___sbyte_11_padding[0xb];
      /// @brief Field sbyte_11, offset: 0xb, size: 0x1, def value: None
      int8_t ___sbyte_11;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xb for alignment
      uint8_t ___sbyte_11_padding_forAlignment[0xb];
      /// @brief Field sbyte_11, offset: 0xb, size: 0x1, def value: None
      int8_t ___sbyte_11_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___sbyte_12_padding[0xc];
      /// @brief Field sbyte_12, offset: 0xc, size: 0x1, def value: None
      int8_t ___sbyte_12;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___sbyte_12_padding_forAlignment[0xc];
      /// @brief Field sbyte_12, offset: 0xc, size: 0x1, def value: None
      int8_t ___sbyte_12_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xd
      uint8_t ___sbyte_13_padding[0xd];
      /// @brief Field sbyte_13, offset: 0xd, size: 0x1, def value: None
      int8_t ___sbyte_13;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xd for alignment
      uint8_t ___sbyte_13_padding_forAlignment[0xd];
      /// @brief Field sbyte_13, offset: 0xd, size: 0x1, def value: None
      int8_t ___sbyte_13_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___sbyte_14_padding[0xe];
      /// @brief Field sbyte_14, offset: 0xe, size: 0x1, def value: None
      int8_t ___sbyte_14;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___sbyte_14_padding_forAlignment[0xe];
      /// @brief Field sbyte_14, offset: 0xe, size: 0x1, def value: None
      int8_t ___sbyte_14_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xf
      uint8_t ___sbyte_15_padding[0xf];
      /// @brief Field sbyte_15, offset: 0xf, size: 0x1, def value: None
      int8_t ___sbyte_15;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xf for alignment
      uint8_t ___sbyte_15_padding_forAlignment[0xf];
      /// @brief Field sbyte_15, offset: 0xf, size: 0x1, def value: None
      int8_t ___sbyte_15_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___uint16_0_padding[0x0];
      /// @brief Field uint16_0, offset: 0x0, size: 0x2, def value: None
      uint16_t ___uint16_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___uint16_0_padding_forAlignment[0x0];
      /// @brief Field uint16_0, offset: 0x0, size: 0x2, def value: None
      uint16_t ___uint16_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___uint16_1_padding[0x2];
      /// @brief Field uint16_1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___uint16_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___uint16_1_padding_forAlignment[0x2];
      /// @brief Field uint16_1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___uint16_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___uint16_2_padding[0x4];
      /// @brief Field uint16_2, offset: 0x4, size: 0x2, def value: None
      uint16_t ___uint16_2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___uint16_2_padding_forAlignment[0x4];
      /// @brief Field uint16_2, offset: 0x4, size: 0x2, def value: None
      uint16_t ___uint16_2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___uint16_3_padding[0x6];
      /// @brief Field uint16_3, offset: 0x6, size: 0x2, def value: None
      uint16_t ___uint16_3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___uint16_3_padding_forAlignment[0x6];
      /// @brief Field uint16_3, offset: 0x6, size: 0x2, def value: None
      uint16_t ___uint16_3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___uint16_4_padding[0x8];
      /// @brief Field uint16_4, offset: 0x8, size: 0x2, def value: None
      uint16_t ___uint16_4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___uint16_4_padding_forAlignment[0x8];
      /// @brief Field uint16_4, offset: 0x8, size: 0x2, def value: None
      uint16_t ___uint16_4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___uint16_5_padding[0xa];
      /// @brief Field uint16_5, offset: 0xa, size: 0x2, def value: None
      uint16_t ___uint16_5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___uint16_5_padding_forAlignment[0xa];
      /// @brief Field uint16_5, offset: 0xa, size: 0x2, def value: None
      uint16_t ___uint16_5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___uint16_6_padding[0xc];
      /// @brief Field uint16_6, offset: 0xc, size: 0x2, def value: None
      uint16_t ___uint16_6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___uint16_6_padding_forAlignment[0xc];
      /// @brief Field uint16_6, offset: 0xc, size: 0x2, def value: None
      uint16_t ___uint16_6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___uint16_7_padding[0xe];
      /// @brief Field uint16_7, offset: 0xe, size: 0x2, def value: None
      uint16_t ___uint16_7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___uint16_7_padding_forAlignment[0xe];
      /// @brief Field uint16_7, offset: 0xe, size: 0x2, def value: None
      uint16_t ___uint16_7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___int16_0_padding[0x0];
      /// @brief Field int16_0, offset: 0x0, size: 0x2, def value: None
      int16_t ___int16_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___int16_0_padding_forAlignment[0x0];
      /// @brief Field int16_0, offset: 0x0, size: 0x2, def value: None
      int16_t ___int16_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___int16_1_padding[0x2];
      /// @brief Field int16_1, offset: 0x2, size: 0x2, def value: None
      int16_t ___int16_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___int16_1_padding_forAlignment[0x2];
      /// @brief Field int16_1, offset: 0x2, size: 0x2, def value: None
      int16_t ___int16_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___int16_2_padding[0x4];
      /// @brief Field int16_2, offset: 0x4, size: 0x2, def value: None
      int16_t ___int16_2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___int16_2_padding_forAlignment[0x4];
      /// @brief Field int16_2, offset: 0x4, size: 0x2, def value: None
      int16_t ___int16_2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___int16_3_padding[0x6];
      /// @brief Field int16_3, offset: 0x6, size: 0x2, def value: None
      int16_t ___int16_3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___int16_3_padding_forAlignment[0x6];
      /// @brief Field int16_3, offset: 0x6, size: 0x2, def value: None
      int16_t ___int16_3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___int16_4_padding[0x8];
      /// @brief Field int16_4, offset: 0x8, size: 0x2, def value: None
      int16_t ___int16_4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___int16_4_padding_forAlignment[0x8];
      /// @brief Field int16_4, offset: 0x8, size: 0x2, def value: None
      int16_t ___int16_4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___int16_5_padding[0xa];
      /// @brief Field int16_5, offset: 0xa, size: 0x2, def value: None
      int16_t ___int16_5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___int16_5_padding_forAlignment[0xa];
      /// @brief Field int16_5, offset: 0xa, size: 0x2, def value: None
      int16_t ___int16_5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___int16_6_padding[0xc];
      /// @brief Field int16_6, offset: 0xc, size: 0x2, def value: None
      int16_t ___int16_6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___int16_6_padding_forAlignment[0xc];
      /// @brief Field int16_6, offset: 0xc, size: 0x2, def value: None
      int16_t ___int16_6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___int16_7_padding[0xe];
      /// @brief Field int16_7, offset: 0xe, size: 0x2, def value: None
      int16_t ___int16_7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___int16_7_padding_forAlignment[0xe];
      /// @brief Field int16_7, offset: 0xe, size: 0x2, def value: None
      int16_t ___int16_7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___uint32_0_padding[0x0];
      /// @brief Field uint32_0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___uint32_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___uint32_0_padding_forAlignment[0x0];
      /// @brief Field uint32_0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___uint32_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___uint32_1_padding[0x4];
      /// @brief Field uint32_1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___uint32_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___uint32_1_padding_forAlignment[0x4];
      /// @brief Field uint32_1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___uint32_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___uint32_2_padding[0x8];
      /// @brief Field uint32_2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___uint32_2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___uint32_2_padding_forAlignment[0x8];
      /// @brief Field uint32_2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___uint32_2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___uint32_3_padding[0xc];
      /// @brief Field uint32_3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___uint32_3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___uint32_3_padding_forAlignment[0xc];
      /// @brief Field uint32_3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___uint32_3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___int32_0_padding[0x0];
      /// @brief Field int32_0, offset: 0x0, size: 0x4, def value: None
      int32_t ___int32_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___int32_0_padding_forAlignment[0x0];
      /// @brief Field int32_0, offset: 0x0, size: 0x4, def value: None
      int32_t ___int32_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___int32_1_padding[0x4];
      /// @brief Field int32_1, offset: 0x4, size: 0x4, def value: None
      int32_t ___int32_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___int32_1_padding_forAlignment[0x4];
      /// @brief Field int32_1, offset: 0x4, size: 0x4, def value: None
      int32_t ___int32_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___int32_2_padding[0x8];
      /// @brief Field int32_2, offset: 0x8, size: 0x4, def value: None
      int32_t ___int32_2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___int32_2_padding_forAlignment[0x8];
      /// @brief Field int32_2, offset: 0x8, size: 0x4, def value: None
      int32_t ___int32_2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___int32_3_padding[0xc];
      /// @brief Field int32_3, offset: 0xc, size: 0x4, def value: None
      int32_t ___int32_3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___int32_3_padding_forAlignment[0xc];
      /// @brief Field int32_3, offset: 0xc, size: 0x4, def value: None
      int32_t ___int32_3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___uint64_0_padding[0x0];
      /// @brief Field uint64_0, offset: 0x0, size: 0x8, def value: None
      uint64_t ___uint64_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___uint64_0_padding_forAlignment[0x0];
      /// @brief Field uint64_0, offset: 0x0, size: 0x8, def value: None
      uint64_t ___uint64_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___uint64_1_padding[0x8];
      /// @brief Field uint64_1, offset: 0x8, size: 0x8, def value: None
      uint64_t ___uint64_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___uint64_1_padding_forAlignment[0x8];
      /// @brief Field uint64_1, offset: 0x8, size: 0x8, def value: None
      uint64_t ___uint64_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___int64_0_padding[0x0];
      /// @brief Field int64_0, offset: 0x0, size: 0x8, def value: None
      int64_t ___int64_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___int64_0_padding_forAlignment[0x0];
      /// @brief Field int64_0, offset: 0x0, size: 0x8, def value: None
      int64_t ___int64_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___int64_1_padding[0x8];
      /// @brief Field int64_1, offset: 0x8, size: 0x8, def value: None
      int64_t ___int64_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___int64_1_padding_forAlignment[0x8];
      /// @brief Field int64_1, offset: 0x8, size: 0x8, def value: None
      int64_t ___int64_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___single_0_padding[0x0];
      /// @brief Field single_0, offset: 0x0, size: 0x4, def value: None
      float_t ___single_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___single_0_padding_forAlignment[0x0];
      /// @brief Field single_0, offset: 0x0, size: 0x4, def value: None
      float_t ___single_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___single_1_padding[0x4];
      /// @brief Field single_1, offset: 0x4, size: 0x4, def value: None
      float_t ___single_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___single_1_padding_forAlignment[0x4];
      /// @brief Field single_1, offset: 0x4, size: 0x4, def value: None
      float_t ___single_1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___single_2_padding[0x8];
      /// @brief Field single_2, offset: 0x8, size: 0x4, def value: None
      float_t ___single_2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___single_2_padding_forAlignment[0x8];
      /// @brief Field single_2, offset: 0x8, size: 0x4, def value: None
      float_t ___single_2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___single_3_padding[0xc];
      /// @brief Field single_3, offset: 0xc, size: 0x4, def value: None
      float_t ___single_3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___single_3_padding_forAlignment[0xc];
      /// @brief Field single_3, offset: 0xc, size: 0x4, def value: None
      float_t ___single_3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___double_0_padding[0x0];
      /// @brief Field double_0, offset: 0x0, size: 0x8, def value: None
      double_t ___double_0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___double_0_padding_forAlignment[0x0];
      /// @brief Field double_0, offset: 0x0, size: 0x8, def value: None
      double_t ___double_0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___double_1_padding[0x8];
      /// @brief Field double_1, offset: 0x8, size: 0x8, def value: None
      double_t ___double_1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___double_1_padding_forAlignment[0x8];
      /// @brief Field double_1, offset: 0x8, size: 0x8, def value: None
      double_t ___double_1_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::Register, 0x10>, "Size mismatch!");

} // namespace System::Numerics
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::Register, "System.Numerics", "Register");
