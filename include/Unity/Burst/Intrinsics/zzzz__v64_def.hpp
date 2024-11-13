#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/v64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(v64)
// Forward declare root types
namespace Unity::Burst::Intrinsics {
struct v64;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::Intrinsics::v64);
// Type: Unity.Burst.Intrinsics::v64
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::Unity.Burst.Intrinsics::v64
struct CORDL_TYPE v64 {
public:
  // Declarations
  /// @brief Field Byte0, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte0, put = __cordl_internal_set_Byte0)) uint8_t Byte0;

  /// @brief Field Byte1, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte1, put = __cordl_internal_set_Byte1)) uint8_t Byte1;

  /// @brief Field Byte2, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte2, put = __cordl_internal_set_Byte2)) uint8_t Byte2;

  /// @brief Field Byte3, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte3, put = __cordl_internal_set_Byte3)) uint8_t Byte3;

  /// @brief Field Byte4, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte4, put = __cordl_internal_set_Byte4)) uint8_t Byte4;

  /// @brief Field Byte5, offset 0x5, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte5, put = __cordl_internal_set_Byte5)) uint8_t Byte5;

  /// @brief Field Byte6, offset 0x6, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte6, put = __cordl_internal_set_Byte6)) uint8_t Byte6;

  /// @brief Field Byte7, offset 0x7, size 0x1
  __declspec(property(get = __cordl_internal_get_Byte7, put = __cordl_internal_set_Byte7)) uint8_t Byte7;

  /// @brief Field Double0, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_Double0, put = __cordl_internal_set_Double0)) double_t Double0;

  /// @brief Field Float0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_Float0, put = __cordl_internal_set_Float0)) float_t Float0;

  /// @brief Field Float1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_Float1, put = __cordl_internal_set_Float1)) float_t Float1;

  /// @brief Field SByte0, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte0, put = __cordl_internal_set_SByte0)) int8_t SByte0;

  /// @brief Field SByte1, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte1, put = __cordl_internal_set_SByte1)) int8_t SByte1;

  /// @brief Field SByte2, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte2, put = __cordl_internal_set_SByte2)) int8_t SByte2;

  /// @brief Field SByte3, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte3, put = __cordl_internal_set_SByte3)) int8_t SByte3;

  /// @brief Field SByte4, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte4, put = __cordl_internal_set_SByte4)) int8_t SByte4;

  /// @brief Field SByte5, offset 0x5, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte5, put = __cordl_internal_set_SByte5)) int8_t SByte5;

  /// @brief Field SByte6, offset 0x6, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte6, put = __cordl_internal_set_SByte6)) int8_t SByte6;

  /// @brief Field SByte7, offset 0x7, size 0x1
  __declspec(property(get = __cordl_internal_get_SByte7, put = __cordl_internal_set_SByte7)) int8_t SByte7;

  /// @brief Field SInt0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt0, put = __cordl_internal_set_SInt0)) int32_t SInt0;

  /// @brief Field SInt1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_SInt1, put = __cordl_internal_set_SInt1)) int32_t SInt1;

  /// @brief Field SLong0, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_SLong0, put = __cordl_internal_set_SLong0)) int64_t SLong0;

  /// @brief Field SShort0, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort0, put = __cordl_internal_set_SShort0)) int16_t SShort0;

  /// @brief Field SShort1, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort1, put = __cordl_internal_set_SShort1)) int16_t SShort1;

  /// @brief Field SShort2, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort2, put = __cordl_internal_set_SShort2)) int16_t SShort2;

  /// @brief Field SShort3, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_SShort3, put = __cordl_internal_set_SShort3)) int16_t SShort3;

  /// @brief Field UInt0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt0, put = __cordl_internal_set_UInt0)) uint32_t UInt0;

  /// @brief Field UInt1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_UInt1, put = __cordl_internal_set_UInt1)) uint32_t UInt1;

  /// @brief Field ULong0, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_ULong0, put = __cordl_internal_set_ULong0)) uint64_t ULong0;

  /// @brief Field UShort0, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort0, put = __cordl_internal_set_UShort0)) uint16_t UShort0;

  /// @brief Field UShort1, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort1, put = __cordl_internal_set_UShort1)) uint16_t UShort1;

  /// @brief Field UShort2, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort2, put = __cordl_internal_set_UShort2)) uint16_t UShort2;

  /// @brief Field UShort3, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_UShort3, put = __cordl_internal_set_UShort3)) uint16_t UShort3;

  constexpr uint8_t const& __cordl_internal_get_Byte0() const;

  constexpr uint8_t& __cordl_internal_get_Byte0();

  constexpr uint8_t const& __cordl_internal_get_Byte1() const;

  constexpr uint8_t& __cordl_internal_get_Byte1();

  constexpr uint8_t const& __cordl_internal_get_Byte2() const;

  constexpr uint8_t& __cordl_internal_get_Byte2();

  constexpr uint8_t const& __cordl_internal_get_Byte3() const;

  constexpr uint8_t& __cordl_internal_get_Byte3();

  constexpr uint8_t const& __cordl_internal_get_Byte4() const;

  constexpr uint8_t& __cordl_internal_get_Byte4();

  constexpr uint8_t const& __cordl_internal_get_Byte5() const;

  constexpr uint8_t& __cordl_internal_get_Byte5();

  constexpr uint8_t const& __cordl_internal_get_Byte6() const;

  constexpr uint8_t& __cordl_internal_get_Byte6();

  constexpr uint8_t const& __cordl_internal_get_Byte7() const;

  constexpr uint8_t& __cordl_internal_get_Byte7();

  constexpr double_t const& __cordl_internal_get_Double0() const;

  constexpr double_t& __cordl_internal_get_Double0();

  constexpr float_t const& __cordl_internal_get_Float0() const;

  constexpr float_t& __cordl_internal_get_Float0();

  constexpr float_t const& __cordl_internal_get_Float1() const;

  constexpr float_t& __cordl_internal_get_Float1();

  constexpr int8_t const& __cordl_internal_get_SByte0() const;

  constexpr int8_t& __cordl_internal_get_SByte0();

  constexpr int8_t const& __cordl_internal_get_SByte1() const;

  constexpr int8_t& __cordl_internal_get_SByte1();

  constexpr int8_t const& __cordl_internal_get_SByte2() const;

  constexpr int8_t& __cordl_internal_get_SByte2();

  constexpr int8_t const& __cordl_internal_get_SByte3() const;

  constexpr int8_t& __cordl_internal_get_SByte3();

  constexpr int8_t const& __cordl_internal_get_SByte4() const;

  constexpr int8_t& __cordl_internal_get_SByte4();

  constexpr int8_t const& __cordl_internal_get_SByte5() const;

  constexpr int8_t& __cordl_internal_get_SByte5();

  constexpr int8_t const& __cordl_internal_get_SByte6() const;

  constexpr int8_t& __cordl_internal_get_SByte6();

  constexpr int8_t const& __cordl_internal_get_SByte7() const;

  constexpr int8_t& __cordl_internal_get_SByte7();

  constexpr int32_t const& __cordl_internal_get_SInt0() const;

  constexpr int32_t& __cordl_internal_get_SInt0();

  constexpr int32_t const& __cordl_internal_get_SInt1() const;

  constexpr int32_t& __cordl_internal_get_SInt1();

  constexpr int64_t const& __cordl_internal_get_SLong0() const;

  constexpr int64_t& __cordl_internal_get_SLong0();

  constexpr int16_t const& __cordl_internal_get_SShort0() const;

  constexpr int16_t& __cordl_internal_get_SShort0();

  constexpr int16_t const& __cordl_internal_get_SShort1() const;

  constexpr int16_t& __cordl_internal_get_SShort1();

  constexpr int16_t const& __cordl_internal_get_SShort2() const;

  constexpr int16_t& __cordl_internal_get_SShort2();

  constexpr int16_t const& __cordl_internal_get_SShort3() const;

  constexpr int16_t& __cordl_internal_get_SShort3();

  constexpr uint32_t const& __cordl_internal_get_UInt0() const;

  constexpr uint32_t& __cordl_internal_get_UInt0();

  constexpr uint32_t const& __cordl_internal_get_UInt1() const;

  constexpr uint32_t& __cordl_internal_get_UInt1();

  constexpr uint64_t const& __cordl_internal_get_ULong0() const;

  constexpr uint64_t& __cordl_internal_get_ULong0();

  constexpr uint16_t const& __cordl_internal_get_UShort0() const;

  constexpr uint16_t& __cordl_internal_get_UShort0();

  constexpr uint16_t const& __cordl_internal_get_UShort1() const;

  constexpr uint16_t& __cordl_internal_get_UShort1();

  constexpr uint16_t const& __cordl_internal_get_UShort2() const;

  constexpr uint16_t& __cordl_internal_get_UShort2();

  constexpr uint16_t const& __cordl_internal_get_UShort3() const;

  constexpr uint16_t& __cordl_internal_get_UShort3();

  constexpr void __cordl_internal_set_Byte0(uint8_t value);

  constexpr void __cordl_internal_set_Byte1(uint8_t value);

  constexpr void __cordl_internal_set_Byte2(uint8_t value);

  constexpr void __cordl_internal_set_Byte3(uint8_t value);

  constexpr void __cordl_internal_set_Byte4(uint8_t value);

  constexpr void __cordl_internal_set_Byte5(uint8_t value);

  constexpr void __cordl_internal_set_Byte6(uint8_t value);

  constexpr void __cordl_internal_set_Byte7(uint8_t value);

  constexpr void __cordl_internal_set_Double0(double_t value);

  constexpr void __cordl_internal_set_Float0(float_t value);

  constexpr void __cordl_internal_set_Float1(float_t value);

  constexpr void __cordl_internal_set_SByte0(int8_t value);

  constexpr void __cordl_internal_set_SByte1(int8_t value);

  constexpr void __cordl_internal_set_SByte2(int8_t value);

  constexpr void __cordl_internal_set_SByte3(int8_t value);

  constexpr void __cordl_internal_set_SByte4(int8_t value);

  constexpr void __cordl_internal_set_SByte5(int8_t value);

  constexpr void __cordl_internal_set_SByte6(int8_t value);

  constexpr void __cordl_internal_set_SByte7(int8_t value);

  constexpr void __cordl_internal_set_SInt0(int32_t value);

  constexpr void __cordl_internal_set_SInt1(int32_t value);

  constexpr void __cordl_internal_set_SLong0(int64_t value);

  constexpr void __cordl_internal_set_SShort0(int16_t value);

  constexpr void __cordl_internal_set_SShort1(int16_t value);

  constexpr void __cordl_internal_set_SShort2(int16_t value);

  constexpr void __cordl_internal_set_SShort3(int16_t value);

  constexpr void __cordl_internal_set_UInt0(uint32_t value);

  constexpr void __cordl_internal_set_UInt1(uint32_t value);

  constexpr void __cordl_internal_set_ULong0(uint64_t value);

  constexpr void __cordl_internal_set_UShort0(uint16_t value);

  constexpr void __cordl_internal_set_UShort1(uint16_t value);

  constexpr void __cordl_internal_set_UShort2(uint16_t value);

  constexpr void __cordl_internal_set_UShort3(uint16_t value);

  /// @brief Method .ctor, addr 0x44c6f80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(double_t a);

  /// @brief Method .ctor, addr 0x44c6f78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t a, float_t b);

  /// @brief Method .ctor, addr 0x44c6f1c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int16_t a, int16_t b, int16_t c, int16_t d);

  /// @brief Method .ctor, addr 0x44c6f58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int32_t b);

  /// @brief Method .ctor, addr 0x44c6f88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t a);

  /// @brief Method .ctor, addr 0x44c6ee8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int8_t a, int8_t b, int8_t c, int8_t d, int8_t e, int8_t f, int8_t g, int8_t h);

  /// @brief Method .ctor, addr 0x44c6f3c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint16_t a, uint16_t b, uint16_t c, uint16_t d);

  /// @brief Method .ctor, addr 0x44c6f68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t a, uint32_t b);

  /// @brief Method .ctor, addr 0x44c6f90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t a);

  /// @brief Method .ctor, addr 0x44c6eb4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h);

  /// @brief Method .ctor, addr 0x44c6edc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int8_t b);

  /// @brief Method .ctor, addr 0x44c6ea8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint8_t b);

  /// @brief Method .ctor, addr 0x44c6f70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t f);

  /// @brief Method .ctor, addr 0x44c6f10, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int16_t v);

  /// @brief Method .ctor, addr 0x44c6f50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x44c6f30, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint16_t v);

  /// @brief Method .ctor, addr 0x44c6f60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr v64();

  // Ctor Parameters [CppParam { name: "Byte0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte2",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte4", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "Byte5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte7", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "SByte0", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte1", ty: "int8_t", modifiers: "", def_value: None }, CppParam {
  // name: "SByte2", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte3", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte4", ty: "int8_t", modifiers: "",
  // def_value: None }, CppParam { name: "SByte5", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte6", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte7",
  // ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "UShort0", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort1", ty: "uint16_t", modifiers: "", def_value:
  // None }, CppParam { name: "UShort2", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort3", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "SShort0", ty:
  // "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort1", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort2", ty: "int16_t", modifiers: "", def_value: None
  // }, CppParam { name: "SShort3", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "UInt0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt1", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "SInt0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SInt1", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "ULong0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "SLong0", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Float0", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "Float1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Double0", ty: "double_t", modifiers: "", def_value: None }]
  constexpr v64(uint8_t Byte0, uint8_t Byte1, uint8_t Byte2, uint8_t Byte3, uint8_t Byte4, uint8_t Byte5, uint8_t Byte6, uint8_t Byte7, int8_t SByte0, int8_t SByte1, int8_t SByte2, int8_t SByte3,
                int8_t SByte4, int8_t SByte5, int8_t SByte6, int8_t SByte7, uint16_t UShort0, uint16_t UShort1, uint16_t UShort2, uint16_t UShort3, int16_t SShort0, int16_t SShort1, int16_t SShort2,
                int16_t SShort3, uint32_t UInt0, uint32_t UInt1, int32_t SInt0, int32_t SInt1, uint64_t ULong0, int64_t SLong0, float_t Float0, float_t Float1, double_t Double0) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Byte0_padding[0x0];
      /// @brief Field Byte0, offset: 0x0, size: 0x1, def value: None
      uint8_t ___Byte0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Byte0_padding_forAlignment[0x0];
      /// @brief Field Byte0, offset: 0x0, size: 0x1, def value: None
      uint8_t ___Byte0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___Byte1_padding[0x1];
      /// @brief Field Byte1, offset: 0x1, size: 0x1, def value: None
      uint8_t ___Byte1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___Byte1_padding_forAlignment[0x1];
      /// @brief Field Byte1, offset: 0x1, size: 0x1, def value: None
      uint8_t ___Byte1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___Byte2_padding[0x2];
      /// @brief Field Byte2, offset: 0x2, size: 0x1, def value: None
      uint8_t ___Byte2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___Byte2_padding_forAlignment[0x2];
      /// @brief Field Byte2, offset: 0x2, size: 0x1, def value: None
      uint8_t ___Byte2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___Byte3_padding[0x3];
      /// @brief Field Byte3, offset: 0x3, size: 0x1, def value: None
      uint8_t ___Byte3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___Byte3_padding_forAlignment[0x3];
      /// @brief Field Byte3, offset: 0x3, size: 0x1, def value: None
      uint8_t ___Byte3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___Byte4_padding[0x4];
      /// @brief Field Byte4, offset: 0x4, size: 0x1, def value: None
      uint8_t ___Byte4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___Byte4_padding_forAlignment[0x4];
      /// @brief Field Byte4, offset: 0x4, size: 0x1, def value: None
      uint8_t ___Byte4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___Byte5_padding[0x5];
      /// @brief Field Byte5, offset: 0x5, size: 0x1, def value: None
      uint8_t ___Byte5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___Byte5_padding_forAlignment[0x5];
      /// @brief Field Byte5, offset: 0x5, size: 0x1, def value: None
      uint8_t ___Byte5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___Byte6_padding[0x6];
      /// @brief Field Byte6, offset: 0x6, size: 0x1, def value: None
      uint8_t ___Byte6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___Byte6_padding_forAlignment[0x6];
      /// @brief Field Byte6, offset: 0x6, size: 0x1, def value: None
      uint8_t ___Byte6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x7
      uint8_t ___Byte7_padding[0x7];
      /// @brief Field Byte7, offset: 0x7, size: 0x1, def value: None
      uint8_t ___Byte7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x7 for alignment
      uint8_t ___Byte7_padding_forAlignment[0x7];
      /// @brief Field Byte7, offset: 0x7, size: 0x1, def value: None
      uint8_t ___Byte7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___SByte0_padding[0x0];
      /// @brief Field SByte0, offset: 0x0, size: 0x1, def value: None
      int8_t ___SByte0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___SByte0_padding_forAlignment[0x0];
      /// @brief Field SByte0, offset: 0x0, size: 0x1, def value: None
      int8_t ___SByte0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___SByte1_padding[0x1];
      /// @brief Field SByte1, offset: 0x1, size: 0x1, def value: None
      int8_t ___SByte1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___SByte1_padding_forAlignment[0x1];
      /// @brief Field SByte1, offset: 0x1, size: 0x1, def value: None
      int8_t ___SByte1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___SByte2_padding[0x2];
      /// @brief Field SByte2, offset: 0x2, size: 0x1, def value: None
      int8_t ___SByte2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___SByte2_padding_forAlignment[0x2];
      /// @brief Field SByte2, offset: 0x2, size: 0x1, def value: None
      int8_t ___SByte2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___SByte3_padding[0x3];
      /// @brief Field SByte3, offset: 0x3, size: 0x1, def value: None
      int8_t ___SByte3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___SByte3_padding_forAlignment[0x3];
      /// @brief Field SByte3, offset: 0x3, size: 0x1, def value: None
      int8_t ___SByte3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___SByte4_padding[0x4];
      /// @brief Field SByte4, offset: 0x4, size: 0x1, def value: None
      int8_t ___SByte4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___SByte4_padding_forAlignment[0x4];
      /// @brief Field SByte4, offset: 0x4, size: 0x1, def value: None
      int8_t ___SByte4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___SByte5_padding[0x5];
      /// @brief Field SByte5, offset: 0x5, size: 0x1, def value: None
      int8_t ___SByte5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___SByte5_padding_forAlignment[0x5];
      /// @brief Field SByte5, offset: 0x5, size: 0x1, def value: None
      int8_t ___SByte5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___SByte6_padding[0x6];
      /// @brief Field SByte6, offset: 0x6, size: 0x1, def value: None
      int8_t ___SByte6;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___SByte6_padding_forAlignment[0x6];
      /// @brief Field SByte6, offset: 0x6, size: 0x1, def value: None
      int8_t ___SByte6_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x7
      uint8_t ___SByte7_padding[0x7];
      /// @brief Field SByte7, offset: 0x7, size: 0x1, def value: None
      int8_t ___SByte7;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x7 for alignment
      uint8_t ___SByte7_padding_forAlignment[0x7];
      /// @brief Field SByte7, offset: 0x7, size: 0x1, def value: None
      int8_t ___SByte7_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___UShort0_padding[0x0];
      /// @brief Field UShort0, offset: 0x0, size: 0x2, def value: None
      uint16_t ___UShort0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___UShort0_padding_forAlignment[0x0];
      /// @brief Field UShort0, offset: 0x0, size: 0x2, def value: None
      uint16_t ___UShort0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___UShort1_padding[0x2];
      /// @brief Field UShort1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___UShort1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___UShort1_padding_forAlignment[0x2];
      /// @brief Field UShort1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___UShort1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___UShort2_padding[0x4];
      /// @brief Field UShort2, offset: 0x4, size: 0x2, def value: None
      uint16_t ___UShort2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___UShort2_padding_forAlignment[0x4];
      /// @brief Field UShort2, offset: 0x4, size: 0x2, def value: None
      uint16_t ___UShort2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___UShort3_padding[0x6];
      /// @brief Field UShort3, offset: 0x6, size: 0x2, def value: None
      uint16_t ___UShort3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___UShort3_padding_forAlignment[0x6];
      /// @brief Field UShort3, offset: 0x6, size: 0x2, def value: None
      uint16_t ___UShort3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___SShort0_padding[0x0];
      /// @brief Field SShort0, offset: 0x0, size: 0x2, def value: None
      int16_t ___SShort0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___SShort0_padding_forAlignment[0x0];
      /// @brief Field SShort0, offset: 0x0, size: 0x2, def value: None
      int16_t ___SShort0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___SShort1_padding[0x2];
      /// @brief Field SShort1, offset: 0x2, size: 0x2, def value: None
      int16_t ___SShort1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___SShort1_padding_forAlignment[0x2];
      /// @brief Field SShort1, offset: 0x2, size: 0x2, def value: None
      int16_t ___SShort1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___SShort2_padding[0x4];
      /// @brief Field SShort2, offset: 0x4, size: 0x2, def value: None
      int16_t ___SShort2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___SShort2_padding_forAlignment[0x4];
      /// @brief Field SShort2, offset: 0x4, size: 0x2, def value: None
      int16_t ___SShort2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___SShort3_padding[0x6];
      /// @brief Field SShort3, offset: 0x6, size: 0x2, def value: None
      int16_t ___SShort3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___SShort3_padding_forAlignment[0x6];
      /// @brief Field SShort3, offset: 0x6, size: 0x2, def value: None
      int16_t ___SShort3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___UInt0_padding[0x0];
      /// @brief Field UInt0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___UInt0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___UInt0_padding_forAlignment[0x0];
      /// @brief Field UInt0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___UInt0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___UInt1_padding[0x4];
      /// @brief Field UInt1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___UInt1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___UInt1_padding_forAlignment[0x4];
      /// @brief Field UInt1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___UInt1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___SInt0_padding[0x0];
      /// @brief Field SInt0, offset: 0x0, size: 0x4, def value: None
      int32_t ___SInt0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___SInt0_padding_forAlignment[0x0];
      /// @brief Field SInt0, offset: 0x0, size: 0x4, def value: None
      int32_t ___SInt0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___SInt1_padding[0x4];
      /// @brief Field SInt1, offset: 0x4, size: 0x4, def value: None
      int32_t ___SInt1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___SInt1_padding_forAlignment[0x4];
      /// @brief Field SInt1, offset: 0x4, size: 0x4, def value: None
      int32_t ___SInt1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ULong0_padding[0x0];
      /// @brief Field ULong0, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ULong0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ULong0_padding_forAlignment[0x0];
      /// @brief Field ULong0, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ULong0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___SLong0_padding[0x0];
      /// @brief Field SLong0, offset: 0x0, size: 0x8, def value: None
      int64_t ___SLong0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___SLong0_padding_forAlignment[0x0];
      /// @brief Field SLong0, offset: 0x0, size: 0x8, def value: None
      int64_t ___SLong0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Float0_padding[0x0];
      /// @brief Field Float0, offset: 0x0, size: 0x4, def value: None
      float_t ___Float0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Float0_padding_forAlignment[0x0];
      /// @brief Field Float0, offset: 0x0, size: 0x4, def value: None
      float_t ___Float0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___Float1_padding[0x4];
      /// @brief Field Float1, offset: 0x4, size: 0x4, def value: None
      float_t ___Float1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___Float1_padding_forAlignment[0x4];
      /// @brief Field Float1, offset: 0x4, size: 0x4, def value: None
      float_t ___Float1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Double0_padding[0x0];
      /// @brief Field Double0, offset: 0x0, size: 0x8, def value: None
      double_t ___Double0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Double0_padding_forAlignment[0x0];
      /// @brief Field Double0, offset: 0x0, size: 0x8, def value: None
      double_t ___Double0_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14609 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::v64, 0x8>, "Size mismatch!");

} // namespace Unity::Burst::Intrinsics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::v64, "Unity.Burst.Intrinsics", "v64");
