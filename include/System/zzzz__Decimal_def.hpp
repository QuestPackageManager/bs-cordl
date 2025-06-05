#pragma once
// IWYU pragma private; include "System/Decimal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Decimal)
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
struct DateTime;
}
namespace System {
struct DecCalc_Decimal_Buf12;
}
namespace System {
struct DecCalc_Decimal_Buf16;
}
namespace System {
struct DecCalc_Decimal_Buf24;
}
namespace System {
struct DecCalc_Decimal_PowerOvfl;
}
namespace System {
struct DecCalc_Decimal_RoundingMode;
}
namespace System {
struct Decimal_DecCalc;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct MidpointRounding;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct DecCalc_Decimal_RoundingMode;
}
namespace System {
struct DecCalc_Decimal_Buf12;
}
namespace System {
struct DecCalc_Decimal_Buf16;
}
namespace System {
struct DecCalc_Decimal_Buf24;
}
namespace System {
struct DecCalc_Decimal_PowerOvfl;
}
namespace System {
struct Decimal;
}
namespace System {
struct Decimal_DecCalc;
}
// Write type traits
MARK_VAL_T(::System::DecCalc_Decimal_RoundingMode);
MARK_VAL_T(::System::DecCalc_Decimal_Buf12);
MARK_VAL_T(::System::DecCalc_Decimal_Buf16);
MARK_VAL_T(::System::DecCalc_Decimal_Buf24);
MARK_VAL_T(::System::DecCalc_Decimal_PowerOvfl);
MARK_VAL_T(::System::Decimal);
MARK_VAL_T(::System::Decimal_DecCalc);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Decimal/DecCalc/RoundingMode
struct CORDL_TYPE DecCalc_Decimal_RoundingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DecCalc_Decimal_RoundingMode_Unwrapped
  enum struct __DecCalc_Decimal_RoundingMode_Unwrapped : int32_t {
    __E_ToEven = static_cast<int32_t>(0x0),
    __E_AwayFromZero = static_cast<int32_t>(0x1),
    __E_Truncate = static_cast<int32_t>(0x2),
    __E_Floor = static_cast<int32_t>(0x3),
    __E_Ceiling = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DecCalc_Decimal_RoundingMode_Unwrapped() const noexcept {
    return static_cast<__DecCalc_Decimal_RoundingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecCalc_Decimal_RoundingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DecCalc_Decimal_RoundingMode(int32_t value__) noexcept;

  /// @brief Field AwayFromZero value: I32(1)
  static ::System::DecCalc_Decimal_RoundingMode const AwayFromZero;

  /// @brief Field Ceiling value: I32(4)
  static ::System::DecCalc_Decimal_RoundingMode const Ceiling;

  /// @brief Field Floor value: I32(3)
  static ::System::DecCalc_Decimal_RoundingMode const Floor;

  /// @brief Field ToEven value: I32(0)
  static ::System::DecCalc_Decimal_RoundingMode const ToEven;

  /// @brief Field Truncate value: I32(2)
  static ::System::DecCalc_Decimal_RoundingMode const Truncate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2653 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::DecCalc_Decimal_RoundingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DecCalc_Decimal_RoundingMode, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Decimal/DecCalc/PowerOvfl
struct CORDL_TYPE DecCalc_Decimal_PowerOvfl {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3e4d08c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint32_t hi, uint32_t mid, uint32_t lo);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecCalc_Decimal_PowerOvfl();

  // Ctor Parameters [CppParam { name: "Hi", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "MidLo", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr DecCalc_Decimal_PowerOvfl(uint32_t Hi, uint64_t MidLo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2654 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Hi, offset: 0x0, size: 0x4, def value: None
  uint32_t Hi;

  /// @brief Field MidLo, offset: 0x8, size: 0x8, def value: None
  uint64_t MidLo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::DecCalc_Decimal_PowerOvfl, Hi) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::DecCalc_Decimal_PowerOvfl, MidLo) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DecCalc_Decimal_PowerOvfl, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Decimal/DecCalc/Buf12
struct CORDL_TYPE DecCalc_Decimal_Buf12 {
public:
  // Declarations
  __declspec(property(get = get_High64, put = set_High64)) uint64_t High64;

  __declspec(property(get = get_Low64, put = set_Low64)) uint64_t Low64;

  /// @brief Field U0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_U0, put = __cordl_internal_set_U0)) uint32_t U0;

  /// @brief Field U1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_U1, put = __cordl_internal_set_U1)) uint32_t U1;

  /// @brief Field U2, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_U2, put = __cordl_internal_set_U2)) uint32_t U2;

  /// @brief Field uhigh64LE, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_uhigh64LE, put = __cordl_internal_set_uhigh64LE)) uint64_t uhigh64LE;

  /// @brief Field ulo64LE, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_ulo64LE, put = __cordl_internal_set_ulo64LE)) uint64_t ulo64LE;

  constexpr uint32_t const& __cordl_internal_get_U0() const;

  constexpr uint32_t& __cordl_internal_get_U0();

  constexpr uint32_t const& __cordl_internal_get_U1() const;

  constexpr uint32_t& __cordl_internal_get_U1();

  constexpr uint32_t const& __cordl_internal_get_U2() const;

  constexpr uint32_t& __cordl_internal_get_U2();

  constexpr uint64_t const& __cordl_internal_get_uhigh64LE() const;

  constexpr uint64_t& __cordl_internal_get_uhigh64LE();

  constexpr uint64_t const& __cordl_internal_get_ulo64LE() const;

  constexpr uint64_t& __cordl_internal_get_ulo64LE();

  constexpr void __cordl_internal_set_U0(uint32_t value);

  constexpr void __cordl_internal_set_U1(uint32_t value);

  constexpr void __cordl_internal_set_U2(uint32_t value);

  constexpr void __cordl_internal_set_uhigh64LE(uint64_t value);

  constexpr void __cordl_internal_set_ulo64LE(uint64_t value);

  /// @brief Method get_High64, addr 0x3e4b704, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_High64();

  /// @brief Method get_Low64, addr 0x3e4b714, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Low64();

  /// @brief Method set_High64, addr 0x3e4b70c, size 0x8, virtual false, abstract: false, final false
  inline void set_High64(uint64_t value);

  /// @brief Method set_Low64, addr 0x3e4b71c, size 0x8, virtual false, abstract: false, final false
  inline void set_Low64(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecCalc_Decimal_Buf12();

  // Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U2", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value:
  // None }]
  constexpr DecCalc_Decimal_Buf12(uint32_t U0, uint32_t U1, uint32_t U2, uint64_t ulo64LE, uint64_t uhigh64LE) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___U0_padding[0x0];
      /// @brief Field U0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___U0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___U0_padding_forAlignment[0x0];
      /// @brief Field U0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___U0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___U1_padding[0x4];
      /// @brief Field U1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___U1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___U1_padding_forAlignment[0x4];
      /// @brief Field U1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___U1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___U2_padding[0x8];
      /// @brief Field U2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___U2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___U2_padding_forAlignment[0x8];
      /// @brief Field U2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___U2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ulo64LE_padding[0x0];
      /// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulo64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ulo64LE_padding_forAlignment[0x0];
      /// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulo64LE_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___uhigh64LE_padding[0x8];
      /// @brief Field uhigh64LE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___uhigh64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___uhigh64LE_padding_forAlignment[0x8];
      /// @brief Field uhigh64LE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___uhigh64LE_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2655 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DecCalc_Decimal_Buf12, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Decimal/DecCalc/Buf16
struct CORDL_TYPE DecCalc_Decimal_Buf16 {
public:
  // Declarations
  __declspec(property(get = get_High64, put = set_High64)) uint64_t High64;

  __declspec(property(get = get_Low64, put = set_Low64)) uint64_t Low64;

  /// @brief Field U0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_U0, put = __cordl_internal_set_U0)) uint32_t U0;

  /// @brief Field U1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_U1, put = __cordl_internal_set_U1)) uint32_t U1;

  /// @brief Field U2, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_U2, put = __cordl_internal_set_U2)) uint32_t U2;

  /// @brief Field U3, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_U3, put = __cordl_internal_set_U3)) uint32_t U3;

  /// @brief Field uhigh64LE, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_uhigh64LE, put = __cordl_internal_set_uhigh64LE)) uint64_t uhigh64LE;

  /// @brief Field ulo64LE, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_ulo64LE, put = __cordl_internal_set_ulo64LE)) uint64_t ulo64LE;

  constexpr uint32_t const& __cordl_internal_get_U0() const;

  constexpr uint32_t& __cordl_internal_get_U0();

  constexpr uint32_t const& __cordl_internal_get_U1() const;

  constexpr uint32_t& __cordl_internal_get_U1();

  constexpr uint32_t const& __cordl_internal_get_U2() const;

  constexpr uint32_t& __cordl_internal_get_U2();

  constexpr uint32_t const& __cordl_internal_get_U3() const;

  constexpr uint32_t& __cordl_internal_get_U3();

  constexpr uint64_t const& __cordl_internal_get_uhigh64LE() const;

  constexpr uint64_t& __cordl_internal_get_uhigh64LE();

  constexpr uint64_t const& __cordl_internal_get_ulo64LE() const;

  constexpr uint64_t& __cordl_internal_get_ulo64LE();

  constexpr void __cordl_internal_set_U0(uint32_t value);

  constexpr void __cordl_internal_set_U1(uint32_t value);

  constexpr void __cordl_internal_set_U2(uint32_t value);

  constexpr void __cordl_internal_set_U3(uint32_t value);

  constexpr void __cordl_internal_set_uhigh64LE(uint64_t value);

  constexpr void __cordl_internal_set_ulo64LE(uint64_t value);

  /// @brief Method get_High64, addr 0x3e4bbe8, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_High64();

  /// @brief Method get_Low64, addr 0x3e4bbf0, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Low64();

  /// @brief Method set_High64, addr 0x3e4ce68, size 0x8, virtual false, abstract: false, final false
  inline void set_High64(uint64_t value);

  /// @brief Method set_Low64, addr 0x3e4bbf8, size 0x8, virtual false, abstract: false, final false
  inline void set_Low64(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecCalc_Decimal_Buf16();

  // Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U2", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: None
  // }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr DecCalc_Decimal_Buf16(uint32_t U0, uint32_t U1, uint32_t U2, uint32_t U3, uint64_t ulo64LE, uint64_t uhigh64LE) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___U0_padding[0x0];
      /// @brief Field U0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___U0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___U0_padding_forAlignment[0x0];
      /// @brief Field U0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___U0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___U1_padding[0x4];
      /// @brief Field U1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___U1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___U1_padding_forAlignment[0x4];
      /// @brief Field U1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___U1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___U2_padding[0x8];
      /// @brief Field U2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___U2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___U2_padding_forAlignment[0x8];
      /// @brief Field U2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___U2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___U3_padding[0xc];
      /// @brief Field U3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___U3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___U3_padding_forAlignment[0xc];
      /// @brief Field U3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___U3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ulo64LE_padding[0x0];
      /// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulo64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ulo64LE_padding_forAlignment[0x0];
      /// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulo64LE_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___uhigh64LE_padding[0x8];
      /// @brief Field uhigh64LE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___uhigh64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___uhigh64LE_padding_forAlignment[0x8];
      /// @brief Field uhigh64LE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___uhigh64LE_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DecCalc_Decimal_Buf16, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Decimal/DecCalc/Buf24
struct CORDL_TYPE DecCalc_Decimal_Buf24 {
public:
  // Declarations
  __declspec(property(put = set_High64)) uint64_t High64;

  __declspec(property(get = get_Low64, put = set_Low64)) uint64_t Low64;

  __declspec(property(put = set_Mid64)) uint64_t Mid64;

  /// @brief Field U0, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_U0, put = __cordl_internal_set_U0)) uint32_t U0;

  /// @brief Field U1, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_U1, put = __cordl_internal_set_U1)) uint32_t U1;

  /// @brief Field U2, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_U2, put = __cordl_internal_set_U2)) uint32_t U2;

  /// @brief Field U3, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_U3, put = __cordl_internal_set_U3)) uint32_t U3;

  /// @brief Field U4, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_U4, put = __cordl_internal_set_U4)) uint32_t U4;

  /// @brief Field U5, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_U5, put = __cordl_internal_set_U5)) uint32_t U5;

  /// @brief Field uhigh64LE, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_uhigh64LE, put = __cordl_internal_set_uhigh64LE)) uint64_t uhigh64LE;

  /// @brief Field ulo64LE, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_ulo64LE, put = __cordl_internal_set_ulo64LE)) uint64_t ulo64LE;

  /// @brief Field umid64LE, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_umid64LE, put = __cordl_internal_set_umid64LE)) uint64_t umid64LE;

  constexpr uint32_t const& __cordl_internal_get_U0() const;

  constexpr uint32_t& __cordl_internal_get_U0();

  constexpr uint32_t const& __cordl_internal_get_U1() const;

  constexpr uint32_t& __cordl_internal_get_U1();

  constexpr uint32_t const& __cordl_internal_get_U2() const;

  constexpr uint32_t& __cordl_internal_get_U2();

  constexpr uint32_t const& __cordl_internal_get_U3() const;

  constexpr uint32_t& __cordl_internal_get_U3();

  constexpr uint32_t const& __cordl_internal_get_U4() const;

  constexpr uint32_t& __cordl_internal_get_U4();

  constexpr uint32_t const& __cordl_internal_get_U5() const;

  constexpr uint32_t& __cordl_internal_get_U5();

  constexpr uint64_t const& __cordl_internal_get_uhigh64LE() const;

  constexpr uint64_t& __cordl_internal_get_uhigh64LE();

  constexpr uint64_t const& __cordl_internal_get_ulo64LE() const;

  constexpr uint64_t& __cordl_internal_get_ulo64LE();

  constexpr uint64_t const& __cordl_internal_get_umid64LE() const;

  constexpr uint64_t& __cordl_internal_get_umid64LE();

  constexpr void __cordl_internal_set_U0(uint32_t value);

  constexpr void __cordl_internal_set_U1(uint32_t value);

  constexpr void __cordl_internal_set_U2(uint32_t value);

  constexpr void __cordl_internal_set_U3(uint32_t value);

  constexpr void __cordl_internal_set_U4(uint32_t value);

  constexpr void __cordl_internal_set_U5(uint32_t value);

  constexpr void __cordl_internal_set_uhigh64LE(uint64_t value);

  constexpr void __cordl_internal_set_ulo64LE(uint64_t value);

  constexpr void __cordl_internal_set_umid64LE(uint64_t value);

  /// @brief Method get_Low64, addr 0x3e4cc98, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Low64();

  /// @brief Method set_High64, addr 0x3e4ce60, size 0x8, virtual false, abstract: false, final false
  inline void set_High64(uint64_t value);

  /// @brief Method set_Low64, addr 0x3e4cc88, size 0x8, virtual false, abstract: false, final false
  inline void set_Low64(uint64_t value);

  /// @brief Method set_Mid64, addr 0x3e4cc90, size 0x8, virtual false, abstract: false, final false
  inline void set_Mid64(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecCalc_Decimal_Buf24();

  // Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U2", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "U4", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "U5", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "umid64LE", ty: "uint64_t",
  // modifiers: "", def_value: None }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr DecCalc_Decimal_Buf24(uint32_t U0, uint32_t U1, uint32_t U2, uint32_t U3, uint32_t U4, uint32_t U5, uint64_t ulo64LE, uint64_t umid64LE, uint64_t uhigh64LE) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___U0_padding[0x0];
      /// @brief Field U0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___U0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___U0_padding_forAlignment[0x0];
      /// @brief Field U0, offset: 0x0, size: 0x4, def value: None
      uint32_t ___U0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___U1_padding[0x4];
      /// @brief Field U1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___U1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___U1_padding_forAlignment[0x4];
      /// @brief Field U1, offset: 0x4, size: 0x4, def value: None
      uint32_t ___U1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___U2_padding[0x8];
      /// @brief Field U2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___U2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___U2_padding_forAlignment[0x8];
      /// @brief Field U2, offset: 0x8, size: 0x4, def value: None
      uint32_t ___U2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___U3_padding[0xc];
      /// @brief Field U3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___U3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___U3_padding_forAlignment[0xc];
      /// @brief Field U3, offset: 0xc, size: 0x4, def value: None
      uint32_t ___U3_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___U4_padding[0x10];
      /// @brief Field U4, offset: 0x10, size: 0x4, def value: None
      uint32_t ___U4;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___U4_padding_forAlignment[0x10];
      /// @brief Field U4, offset: 0x10, size: 0x4, def value: None
      uint32_t ___U4_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___U5_padding[0x14];
      /// @brief Field U5, offset: 0x14, size: 0x4, def value: None
      uint32_t ___U5;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___U5_padding_forAlignment[0x14];
      /// @brief Field U5, offset: 0x14, size: 0x4, def value: None
      uint32_t ___U5_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ulo64LE_padding[0x0];
      /// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulo64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ulo64LE_padding_forAlignment[0x0];
      /// @brief Field ulo64LE, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulo64LE_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___umid64LE_padding[0x8];
      /// @brief Field umid64LE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___umid64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___umid64LE_padding_forAlignment[0x8];
      /// @brief Field umid64LE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___umid64LE_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___uhigh64LE_padding[0x10];
      /// @brief Field uhigh64LE, offset: 0x10, size: 0x8, def value: None
      uint64_t ___uhigh64LE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___uhigh64LE_padding_forAlignment[0x10];
      /// @brief Field uhigh64LE, offset: 0x10, size: 0x8, def value: None
      uint64_t ___uhigh64LE_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2657 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DecCalc_Decimal_Buf24, 0x18>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Decimal/DecCalc
struct CORDL_TYPE Decimal_DecCalc {
public:
  // Declarations
  using Buf12 = ::System::DecCalc_Decimal_Buf12;

  using Buf16 = ::System::DecCalc_Decimal_Buf16;

  using Buf24 = ::System::DecCalc_Decimal_Buf24;

  using PowerOvfl = ::System::DecCalc_Decimal_PowerOvfl;

  using RoundingMode = ::System::DecCalc_Decimal_RoundingMode;

  __declspec(property(get = get_High, put = set_High)) uint32_t High;

  __declspec(property(get = get_IsNegative)) bool IsNegative;

  __declspec(property(get = get_Low, put = set_Low)) uint32_t Low;

  __declspec(property(get = get_Low64, put = set_Low64)) uint64_t Low64;

  __declspec(property(get = get_Mid, put = set_Mid)) uint32_t Mid;

  /// @brief Field PowerOvflValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PowerOvflValues, put = setStaticF_PowerOvflValues)) ::ArrayW<::System::DecCalc_Decimal_PowerOvfl, ::Array<::System::DecCalc_Decimal_PowerOvfl>*> PowerOvflValues;

  /// @brief Field s_doublePowers10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_doublePowers10, put = setStaticF_s_doublePowers10)) ::ArrayW<double_t, ::Array<double_t>*> s_doublePowers10;

  /// @brief Field s_powers10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_powers10, put = setStaticF_s_powers10)) ::ArrayW<uint32_t, ::Array<uint32_t>*> s_powers10;

  /// @brief Field s_ulongPowers10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ulongPowers10, put = setStaticF_s_ulongPowers10)) ::ArrayW<uint64_t, ::Array<uint64_t>*> s_ulongPowers10;

  /// @brief Field uflags, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_uflags, put = __cordl_internal_set_uflags)) uint32_t uflags;

  /// @brief Field uhi, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_uhi, put = __cordl_internal_set_uhi)) uint32_t uhi;

  /// @brief Field ulo, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_ulo, put = __cordl_internal_set_ulo)) uint32_t ulo;

  /// @brief Field ulomidLE, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_ulomidLE, put = __cordl_internal_set_ulomidLE)) uint64_t ulomidLE;

  /// @brief Field umid, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_umid, put = __cordl_internal_set_umid)) uint32_t umid;

  /// @brief Method Add32To96, addr 0x3e4ca68, size 0x30, virtual false, abstract: false, final false
  static inline bool Add32To96(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t value);

  /// @brief Method DecAddSub, addr 0x3e46e10, size 0x668, virtual false, abstract: false, final false
  static inline void DecAddSub(::ByRef<::System::Decimal_DecCalc> d1, ::ByRef<::System::Decimal_DecCalc> d2, bool sign);

  /// @brief Method DecDivMod1E9, addr 0x3e4608c, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t DecDivMod1E9(::ByRef<::System::Decimal_DecCalc> value);

  /// @brief Method Div128By96, addr 0x3e4bacc, size 0x11c, virtual false, abstract: false, final false
  static inline uint32_t Div128By96(::ByRef<::System::DecCalc_Decimal_Buf16> bufNum, ::ByRef<::System::DecCalc_Decimal_Buf12> bufDen);

  /// @brief Method Div96By32, addr 0x3e4b6a8, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t Div96By32(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t den);

  /// @brief Method Div96By64, addr 0x3e4b9d8, size 0xf4, virtual false, abstract: false, final false
  static inline uint32_t Div96By64(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint64_t den);

  /// @brief Method Div96ByConst, addr 0x3e4b724, size 0x40, virtual false, abstract: false, final false
  static inline bool Div96ByConst(::ByRef<uint64_t> high64, ::ByRef<uint32_t> low, uint32_t pow);

  /// @brief Method DivByConst, addr 0x3e4c888, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t DivByConst(::cordl_internals::Ptr<uint32_t> result, uint32_t hiRes, ::ByRef<uint32_t> quotient, ::ByRef<uint32_t> remainder, uint32_t power);

  /// @brief Method GetExponent, addr 0x3e4b578, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t GetExponent(double_t d);

  /// @brief Method GetExponent, addr 0x3e4b56c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t GetExponent(float_t f);

  /// @brief Method GetHashCode, addr 0x3e48234, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ByRef<::System::Decimal> d);

  /// @brief Method IncreaseScale, addr 0x3e4bc00, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t IncreaseScale(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t power);

  /// @brief Method IncreaseScale64, addr 0x3e4bc88, size 0x7c, virtual false, abstract: false, final false
  static inline void IncreaseScale64(::ByRef<::System::DecCalc_Decimal_Buf12> bufNum, uint32_t power);

  /// @brief Method InternalRound, addr 0x3e49218, size 0x2c4, virtual false, abstract: false, final false
  static inline void InternalRound(::ByRef<::System::Decimal_DecCalc> d, uint32_t scale, ::System::DecCalc_Decimal_RoundingMode mode);

  /// @brief Method LeadingZeroCount, addr 0x3e4c8dc, size 0x64, virtual false, abstract: false, final false
  static inline int32_t LeadingZeroCount(uint32_t value);

  /// @brief Method OverflowUnscale, addr 0x3e4c940, size 0x128, virtual false, abstract: false, final false
  static inline int32_t OverflowUnscale(::ByRef<::System::DecCalc_Decimal_Buf12> bufQuo, int32_t scale, bool sticky);

  /// @brief Method ScaleResult, addr 0x3e4bd04, size 0xb84, virtual false, abstract: false, final false
  static inline int32_t ScaleResult(::cordl_internals::Ptr<::System::DecCalc_Decimal_Buf24> bufRes, uint32_t hiRes, int32_t scale);

  /// @brief Method SearchScale, addr 0x3e4ca98, size 0x1f0, virtual false, abstract: false, final false
  static inline int32_t SearchScale(::ByRef<::System::DecCalc_Decimal_Buf12> bufQuo, int32_t scale);

  /// @brief Method UInt32x32To64, addr 0x3e4b584, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t UInt32x32To64(uint32_t a, uint32_t b);

  /// @brief Method UInt64x64To128, addr 0x3e4b58c, size 0x11c, virtual false, abstract: false, final false
  static inline void UInt64x64To128(uint64_t a, uint64_t b, ::ByRef<::System::Decimal_DecCalc> result);

  /// @brief Method Unscale, addr 0x3e4b764, size 0x274, virtual false, abstract: false, final false
  static inline void Unscale(::ByRef<uint32_t> low, ::ByRef<uint64_t> high64, ::ByRef<int32_t> scale);

  /// @brief Method VarDecCmp, addr 0x3e47500, size 0x110, virtual false, abstract: false, final false
  static inline int32_t VarDecCmp(::ByRef<::System::Decimal> d1, ::ByRef<::System::Decimal> d2);

  /// @brief Method VarDecCmpSub, addr 0x3e4cca0, size 0x1c0, virtual false, abstract: false, final false
  static inline int32_t VarDecCmpSub(::ByRef<::System::Decimal> d1, ::ByRef<::System::Decimal> d2);

  /// @brief Method VarDecDiv, addr 0x3e47868, size 0x808, virtual false, abstract: false, final false
  static inline void VarDecDiv(::ByRef<::System::Decimal_DecCalc> d1, ::ByRef<::System::Decimal_DecCalc> d2);

  /// @brief Method VarDecFromR4, addr 0x3e461d4, size 0x41c, virtual false, abstract: false, final false
  static inline void VarDecFromR4(float_t input, ::ByRef<::System::Decimal_DecCalc> result);

  /// @brief Method VarDecFromR8, addr 0x3e46678, size 0x41c, virtual false, abstract: false, final false
  static inline void VarDecFromR8(double_t input, ::ByRef<::System::Decimal_DecCalc> result);

  /// @brief Method VarDecMul, addr 0x3e48b68, size 0x454, virtual false, abstract: false, final false
  static inline void VarDecMul(::ByRef<::System::Decimal_DecCalc> d1, ::ByRef<::System::Decimal_DecCalc> d2);

  /// @brief Method VarR4FromDec, addr 0x3e4a2e0, size 0x5c, virtual false, abstract: false, final false
  static inline float_t VarR4FromDec(::ByRef<::System::Decimal> value);

  /// @brief Method VarR8FromDec, addr 0x3e49cc4, size 0x100, virtual false, abstract: false, final false
  static inline double_t VarR8FromDec(::ByRef<::System::Decimal> value);

  constexpr uint32_t const& __cordl_internal_get_uflags() const;

  constexpr uint32_t& __cordl_internal_get_uflags();

  constexpr uint32_t const& __cordl_internal_get_uhi() const;

  constexpr uint32_t& __cordl_internal_get_uhi();

  constexpr uint32_t const& __cordl_internal_get_ulo() const;

  constexpr uint32_t& __cordl_internal_get_ulo();

  constexpr uint64_t const& __cordl_internal_get_ulomidLE() const;

  constexpr uint64_t& __cordl_internal_get_ulomidLE();

  constexpr uint32_t const& __cordl_internal_get_umid() const;

  constexpr uint32_t& __cordl_internal_get_umid();

  constexpr void __cordl_internal_set_uflags(uint32_t value);

  constexpr void __cordl_internal_set_uhi(uint32_t value);

  constexpr void __cordl_internal_set_ulo(uint32_t value);

  constexpr void __cordl_internal_set_ulomidLE(uint64_t value);

  constexpr void __cordl_internal_set_umid(uint32_t value);

  static inline ::ArrayW<::System::DecCalc_Decimal_PowerOvfl, ::Array<::System::DecCalc_Decimal_PowerOvfl>*> getStaticF_PowerOvflValues();

  static inline ::ArrayW<double_t, ::Array<double_t>*> getStaticF_s_doublePowers10();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_powers10();

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_s_ulongPowers10();

  /// @brief Method get_High, addr 0x3e4b520, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_High();

  /// @brief Method get_IsNegative, addr 0x3e4b550, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsNegative();

  /// @brief Method get_Low, addr 0x3e4b530, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Low();

  /// @brief Method get_Low64, addr 0x3e4b55c, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Low64();

  /// @brief Method get_Mid, addr 0x3e4b540, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Mid();

  static inline void setStaticF_PowerOvflValues(::ArrayW<::System::DecCalc_Decimal_PowerOvfl, ::Array<::System::DecCalc_Decimal_PowerOvfl>*> value);

  static inline void setStaticF_s_doublePowers10(::ArrayW<double_t, ::Array<double_t>*> value);

  static inline void setStaticF_s_powers10(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_s_ulongPowers10(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method set_High, addr 0x3e4b528, size 0x8, virtual false, abstract: false, final false
  inline void set_High(uint32_t value);

  /// @brief Method set_Low, addr 0x3e4b538, size 0x8, virtual false, abstract: false, final false
  inline void set_Low(uint32_t value);

  /// @brief Method set_Low64, addr 0x3e4b564, size 0x8, virtual false, abstract: false, final false
  inline void set_Low64(uint64_t value);

  /// @brief Method set_Mid, addr 0x3e4b548, size 0x8, virtual false, abstract: false, final false
  inline void set_Mid(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Decimal_DecCalc();

  // Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulo", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value:
  // None }]
  constexpr Decimal_DecCalc(uint32_t uflags, uint32_t uhi, uint32_t ulo, uint32_t umid, uint64_t ulomidLE) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___uflags_padding[0x0];
      /// @brief Field uflags, offset: 0x0, size: 0x4, def value: None
      uint32_t ___uflags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___uflags_padding_forAlignment[0x0];
      /// @brief Field uflags, offset: 0x0, size: 0x4, def value: None
      uint32_t ___uflags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___uhi_padding[0x4];
      /// @brief Field uhi, offset: 0x4, size: 0x4, def value: None
      uint32_t ___uhi;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___uhi_padding_forAlignment[0x4];
      /// @brief Field uhi, offset: 0x4, size: 0x4, def value: None
      uint32_t ___uhi_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ulo_padding[0x8];
      /// @brief Field ulo, offset: 0x8, size: 0x4, def value: None
      uint32_t ___ulo;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ulo_padding_forAlignment[0x8];
      /// @brief Field ulo, offset: 0x8, size: 0x4, def value: None
      uint32_t ___ulo_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___umid_padding[0xc];
      /// @brief Field umid, offset: 0xc, size: 0x4, def value: None
      uint32_t ___umid;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___umid_padding_forAlignment[0xc];
      /// @brief Field umid, offset: 0xc, size: 0x4, def value: None
      uint32_t ___umid_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ulomidLE_padding[0x8];
      /// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulomidLE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ulomidLE_padding_forAlignment[0x8];
      /// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulomidLE_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2658 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Decimal_DecCalc, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies System.IComparable, System.IComparable`1<T>, System.IConvertible, System.IEquatable`1<T>, System.IFormattable, System.ISpanFormattable,
// System.Runtime.Serialization.IDeserializationCallback
namespace System {
// Is value type: true
// CS Name: System.Decimal
struct CORDL_TYPE Decimal {
public:
  // Declarations
  using DecCalc = ::System::Decimal_DecCalc;

  __declspec(property(get = get_High)) uint32_t High;

  __declspec(property(get = get_IsNegative)) bool IsNegative;

  __declspec(property(get = get_Low)) uint32_t Low;

  __declspec(property(get = get_Low64)) uint64_t Low64;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::Decimal MaxValue;

  __declspec(property(get = get_Mid)) uint32_t Mid;

  /// @brief Field MinValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::Decimal MinValue;

  /// @brief Field MinusOne, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MinusOne, put = setStaticF_MinusOne)) ::System::Decimal MinusOne;

  /// @brief Field One, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_One, put = setStaticF_One)) ::System::Decimal One;

  __declspec(property(get = get_Scale)) int32_t Scale;

  /// @brief Field Zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::Decimal Zero;

  /// @brief Field flags, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) int32_t flags;

  /// @brief Field hi, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_hi, put = __cordl_internal_set_hi)) int32_t hi;

  /// @brief Field lo, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_lo, put = __cordl_internal_set_lo)) int32_t lo;

  /// @brief Field mid, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_mid, put = __cordl_internal_set_mid)) int32_t mid;

  /// @brief Field ulomidLE, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_ulomidLE, put = __cordl_internal_set_ulomidLE)) uint64_t ulomidLE;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::Decimal>"
  constexpr operator ::System::IComparable_1<::System::Decimal>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::Decimal>"
  constexpr operator ::System::IEquatable_1<::System::Decimal>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*();

  /// @brief Method Abs, addr 0x3e46d48, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Decimal Abs(::ByRef<::System::Decimal> d);

  /// @brief Method Add, addr 0x3e46d5c, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Decimal Add(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method AsMutable, addr 0x3e45fb8, size 0x4, virtual false, abstract: false, final false
  static inline ::ByRef<::System::Decimal_DecCalc> AsMutable(::ByRef<::System::Decimal> d);

  /// @brief Method Compare, addr 0x3e47478, size 0x88, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method CompareTo, addr 0x3e47728, size 0x90, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Decimal value);

  /// @brief Method CompareTo, addr 0x3e47610, size 0x118, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method DecDivMod1E9, addr 0x3e45fbc, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t DecDivMod1E9(::ByRef<::System::Decimal> value);

  /// @brief Method Divide, addr 0x3e477b8, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Decimal Divide(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method Equals, addr 0x3e48148, size 0x98, virtual true, abstract: false, final true
  inline bool Equals(::System::Decimal value);

  /// @brief Method Equals, addr 0x3e48070, size 0xd8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetBits, addr 0x3e4893c, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetBits(::System::Decimal d);

  /// @brief Method GetHashCode, addr 0x3e481e0, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeCode, addr 0x3e4ae84, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method IsValid, addr 0x3e46a94, size 0x20, virtual false, abstract: false, final false
  static inline bool IsValid(int32_t flags);

  /// @brief Method Max, addr 0x3e489d8, size 0x70, virtual false, abstract: false, final false
  static inline ::ByRef<::System::Decimal> Max(::ByRef<::System::Decimal> d1, ::ByRef<::System::Decimal> d2);

  /// @brief Method Min, addr 0x3e48a48, size 0x70, virtual false, abstract: false, final false
  static inline ::ByRef<::System::Decimal> Min(::ByRef<::System::Decimal> d1, ::ByRef<::System::Decimal> d2);

  /// @brief Method Multiply, addr 0x3e48ab8, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Decimal Multiply(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method Negate, addr 0x3e48fbc, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Decimal Negate(::System::Decimal d);

  /// @brief Method Parse, addr 0x3e4868c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Decimal Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x3e48760, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Decimal Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method Round, addr 0x3e49058, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Decimal Round(::ByRef<::System::Decimal> d, int32_t decimals, ::System::MidpointRounding mode);

  /// @brief Method Round, addr 0x3e48fc4, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Decimal Round(::System::Decimal d, int32_t decimals);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x3e4ae8c, size 0x60, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x3e4afd0, size 0x60, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x3e4aeec, size 0x84, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x3e4b33c, size 0x84, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x3e4b330, size 0xc, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x3e4b2d0, size 0x60, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x3e4b030, size 0x60, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x3e4b0f0, size 0x60, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x3e4b1b0, size 0x60, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x3e4af70, size 0x60, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x3e4b270, size 0x60, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x3e4b3c0, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x3e4b090, size 0x60, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x3e4b150, size 0x60, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x3e4b210, size 0x60, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x3e46c84, size 0xb4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method ToByte, addr 0x3e494dc, size 0x178, virtual false, abstract: false, final false
  static inline uint8_t ToByte(::System::Decimal value);

  /// @brief Method ToDouble, addr 0x3e49c44, size 0x80, virtual false, abstract: false, final false
  static inline double_t ToDouble(::System::Decimal d);

  /// @brief Method ToInt16, addr 0x3e49acc, size 0x178, virtual false, abstract: false, final false
  static inline int16_t ToInt16(::System::Decimal value);

  /// @brief Method ToInt32, addr 0x3e49944, size 0x188, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::System::Decimal d);

  /// @brief Method ToInt64, addr 0x3e49dc4, size 0x198, virtual false, abstract: false, final false
  static inline int64_t ToInt64(::System::Decimal d);

  /// @brief Method ToSByte, addr 0x3e497cc, size 0x178, virtual false, abstract: false, final false
  static inline int8_t ToSByte(::System::Decimal value);

  /// @brief Method ToSingle, addr 0x3e4a260, size 0x80, virtual false, abstract: false, final false
  static inline float_t ToSingle(::System::Decimal d);

  /// @brief Method ToString, addr 0x3e48380, size 0xac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3e484e8, size 0xd8, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x3e4842c, size 0xbc, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToUInt16, addr 0x3e49f5c, size 0x178, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::System::Decimal value);

  /// @brief Method ToUInt32, addr 0x3e49654, size 0x178, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::System::Decimal d);

  /// @brief Method ToUInt64, addr 0x3e4a0d4, size 0x18c, virtual false, abstract: false, final false
  static inline uint64_t ToUInt64(::System::Decimal d);

  /// @brief Method Truncate, addr 0x3e4a33c, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Decimal Truncate(::System::Decimal d);

  /// @brief Method Truncate, addr 0x3e4a43c, size 0x98, virtual false, abstract: false, final false
  static inline void Truncate(::ByRef<::System::Decimal> d);

  /// @brief Method TryFormat, addr 0x3e485c0, size 0xcc, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x3e48844, size 0xf8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ::ByRef<::System::Decimal> result);

  constexpr int32_t const& __cordl_internal_get_flags() const;

  constexpr int32_t& __cordl_internal_get_flags();

  constexpr int32_t const& __cordl_internal_get_hi() const;

  constexpr int32_t& __cordl_internal_get_hi();

  constexpr int32_t const& __cordl_internal_get_lo() const;

  constexpr int32_t& __cordl_internal_get_lo();

  constexpr int32_t const& __cordl_internal_get_mid() const;

  constexpr int32_t& __cordl_internal_get_mid();

  constexpr uint64_t const& __cordl_internal_get_ulomidLE() const;

  constexpr uint64_t& __cordl_internal_get_ulomidLE();

  constexpr void __cordl_internal_set_flags(int32_t value);

  constexpr void __cordl_internal_set_hi(int32_t value);

  constexpr void __cordl_internal_set_lo(int32_t value);

  constexpr void __cordl_internal_set_mid(int32_t value);

  constexpr void __cordl_internal_set_ulomidLE(uint64_t value);

  /// @brief Method .ctor, addr 0x3e46ab4, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> bits);

  /// @brief Method .ctor, addr 0x3e46d38, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Decimal> d, int32_t flags);

  /// @brief Method .ctor, addr 0x3e46bec, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale);

  /// @brief Method .ctor, addr 0x3e465f0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method .ctor, addr 0x3e4614c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x3e460f0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x3e46120, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x3e46114, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t value);

  /// @brief Method .ctor, addr 0x3e46144, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  static inline ::System::Decimal getStaticF_MaxValue();

  static inline ::System::Decimal getStaticF_MinValue();

  static inline ::System::Decimal getStaticF_MinusOne();

  static inline ::System::Decimal getStaticF_One();

  static inline ::System::Decimal getStaticF_Zero();

  /// @brief Method get_High, addr 0x3e45f50, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_High();

  /// @brief Method get_IsNegative, addr 0x3e45f68, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsNegative();

  /// @brief Method get_Low, addr 0x3e45f58, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Low();

  /// @brief Method get_Low64, addr 0x3e45f7c, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_Low64();

  /// @brief Method get_Mid, addr 0x3e45f60, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Mid();

  /// @brief Method get_Scale, addr 0x3e45f74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Scale();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::Decimal>"
  constexpr ::System::IComparable_1<::System::Decimal>* i___System__IComparable_1___System__Decimal_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<::System::Decimal>"
  constexpr ::System::IEquatable_1<::System::Decimal>* i___System__IEquatable_1___System__Decimal_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback();

  /// @brief Method op_Addition, addr 0x3e4a860, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Addition(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Division, addr 0x3e4aa78, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Division(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Equality, addr 0x3e4ab28, size 0x90, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Explicit, addr 0x3e4a5b0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(double_t value);

  /// @brief Method op_Explicit, addr 0x3e4a56c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(float_t value);

  /// @brief Method op_Explicit, addr 0x3e4a784, size 0x64, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::System::Decimal value);

  /// @brief Method op_Explicit, addr 0x3e4a720, size 0x64, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::System::Decimal value);

  /// @brief Method op_Explicit, addr 0x3e4a5f4, size 0x64, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::System::Decimal value);

  /// @brief Method op_Explicit, addr 0x3e4a658, size 0x64, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::System::Decimal value);

  /// @brief Method op_Explicit, addr 0x3e4a6bc, size 0x64, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::System::Decimal value);

  /// @brief Method op_GreaterThan, addr 0x3e4ad64, size 0x90, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3e4adf4, size 0x90, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Implicit, addr 0x3e4a51c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(char16_t value);

  /// @brief Method op_Implicit, addr 0x3e4a4f8, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(int16_t value);

  /// @brief Method op_Implicit, addr 0x3e4a528, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(int32_t value);

  /// @brief Method op_Implicit, addr 0x3e4a548, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(int64_t value);

  /// @brief Method op_Implicit, addr 0x3e4a4e0, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(int8_t value);

  /// @brief Method op_Implicit, addr 0x3e4a510, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(uint16_t value);

  /// @brief Method op_Implicit, addr 0x3e4a53c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(uint32_t value);

  /// @brief Method op_Implicit, addr 0x3e4a560, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(uint64_t value);

  /// @brief Method op_Implicit, addr 0x3e4a4d4, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Implicit___System__Decimal(uint8_t value);

  /// @brief Method op_Increment, addr 0x3e4a7f0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Increment(::System::Decimal d);

  /// @brief Method op_Inequality, addr 0x3e4abb8, size 0x90, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_LessThan, addr 0x3e4ac48, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_LessThan(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_LessThanOrEqual, addr 0x3e4acd4, size 0x90, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Multiply, addr 0x3e4a9c8, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Multiply(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_Subtraction, addr 0x3e4a914, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Subtraction(::System::Decimal d1, ::System::Decimal d2);

  /// @brief Method op_UnaryNegation, addr 0x3e4a7e8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Decimal op_UnaryNegation(::System::Decimal d);

  static inline void setStaticF_MaxValue(::System::Decimal value);

  static inline void setStaticF_MinValue(::System::Decimal value);

  static inline void setStaticF_MinusOne(::System::Decimal value);

  static inline void setStaticF_One(::System::Decimal value);

  static inline void setStaticF_Zero(::System::Decimal value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Decimal();

  // Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hi", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lo", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "mid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: None
  // }]
  constexpr Decimal(int32_t flags, int32_t hi, int32_t lo, int32_t mid, uint64_t ulomidLE) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___flags_padding[0x0];
      /// @brief Field flags, offset: 0x0, size: 0x4, def value: None
      int32_t ___flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___flags_padding_forAlignment[0x0];
      /// @brief Field flags, offset: 0x0, size: 0x4, def value: None
      int32_t ___flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___hi_padding[0x4];
      /// @brief Field hi, offset: 0x4, size: 0x4, def value: None
      int32_t ___hi;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___hi_padding_forAlignment[0x4];
      /// @brief Field hi, offset: 0x4, size: 0x4, def value: None
      int32_t ___hi_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___lo_padding[0x8];
      /// @brief Field lo, offset: 0x8, size: 0x4, def value: None
      int32_t ___lo;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___lo_padding_forAlignment[0x8];
      /// @brief Field lo, offset: 0x8, size: 0x4, def value: None
      int32_t ___lo_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___mid_padding[0xc];
      /// @brief Field mid, offset: 0xc, size: 0x4, def value: None
      int32_t ___mid;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___mid_padding_forAlignment[0xc];
      /// @brief Field mid, offset: 0xc, size: 0x4, def value: None
      int32_t ___mid_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ulomidLE_padding[0x8];
      /// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulomidLE;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ulomidLE_padding_forAlignment[0x8];
      /// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulomidLE_forAlignment;
    };
  };

public:
  /// @brief Field ScaleMask offset 0xffffffff size 0x4
  static constexpr int32_t ScaleMask{ static_cast<int32_t>(0xff0000) };

  /// @brief Field ScaleShift offset 0xffffffff size 0x4
  static constexpr int32_t ScaleShift{ static_cast<int32_t>(0x10) };

  /// @brief Field SignMask offset 0xffffffff size 0x4
  static constexpr int32_t SignMask{ static_cast<int32_t>(0x80000000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2659 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Decimal, 0x10>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DecCalc_Decimal_RoundingMode, "System", "Decimal/DecCalc/RoundingMode");
DEFINE_IL2CPP_ARG_TYPE(::System::DecCalc_Decimal_Buf12, "System", "Decimal/DecCalc/Buf12");
DEFINE_IL2CPP_ARG_TYPE(::System::DecCalc_Decimal_Buf16, "System", "Decimal/DecCalc/Buf16");
DEFINE_IL2CPP_ARG_TYPE(::System::DecCalc_Decimal_Buf24, "System", "Decimal/DecCalc/Buf24");
DEFINE_IL2CPP_ARG_TYPE(::System::DecCalc_Decimal_PowerOvfl, "System", "Decimal/DecCalc/PowerOvfl");
DEFINE_IL2CPP_ARG_TYPE(::System::Decimal, "System", "Decimal");
DEFINE_IL2CPP_ARG_TYPE(::System::Decimal_DecCalc, "System", "Decimal/DecCalc");
