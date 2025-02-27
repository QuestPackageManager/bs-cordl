#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumber)
namespace System::Globalization {
struct HebrewNumberParsingContext;
}
namespace System::Globalization {
struct HebrewNumberParsingState;
}
namespace System::Globalization {
struct HebrewNumber_HS;
}
namespace System::Globalization {
struct HebrewNumber_HebrewToken;
}
namespace System::Globalization {
struct HebrewNumber_HebrewValue;
}
// Forward declare root types
namespace System::Globalization {
struct HebrewNumber_HS;
}
namespace System::Globalization {
struct HebrewNumber_HebrewToken;
}
namespace System::Globalization {
class HebrewNumber;
}
namespace System::Globalization {
struct HebrewNumber_HebrewValue;
}
// Write type traits
MARK_VAL_T(::System::Globalization::HebrewNumber_HS);
MARK_VAL_T(::System::Globalization::HebrewNumber_HebrewToken);
MARK_REF_PTR_T(::System::Globalization::HebrewNumber);
MARK_VAL_T(::System::Globalization::HebrewNumber_HebrewValue);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.HebrewNumber/HebrewToken
struct CORDL_TYPE HebrewNumber_HebrewToken {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int16_t;

  /// @brief Nested struct __HebrewNumber_HebrewToken_Unwrapped
  enum struct __HebrewNumber_HebrewToken_Unwrapped : int16_t {
    __E_Invalid = static_cast<int16_t>(0xffff),
    __E_Digit400 = static_cast<int16_t>(0x0),
    __E_Digit200_300 = static_cast<int16_t>(0x1),
    __E_Digit100 = static_cast<int16_t>(0x2),
    __E_Digit10 = static_cast<int16_t>(0x3),
    __E_Digit1 = static_cast<int16_t>(0x4),
    __E_Digit6_7 = static_cast<int16_t>(0x5),
    __E_Digit7 = static_cast<int16_t>(0x6),
    __E_Digit9 = static_cast<int16_t>(0x7),
    __E_SingleQuote = static_cast<int16_t>(0x8),
    __E_DoubleQuote = static_cast<int16_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HebrewNumber_HebrewToken_Unwrapped() const noexcept {
    return static_cast<__HebrewNumber_HebrewToken_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int16_t() const noexcept {
    return static_cast<int16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HebrewNumber_HebrewToken();

  // Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr HebrewNumber_HebrewToken(int16_t value__) noexcept;

  /// @brief Field Digit1 value: I16(4)
  static ::System::Globalization::HebrewNumber_HebrewToken const Digit1;

  /// @brief Field Digit10 value: I16(3)
  static ::System::Globalization::HebrewNumber_HebrewToken const Digit10;

  /// @brief Field Digit100 value: I16(2)
  static ::System::Globalization::HebrewNumber_HebrewToken const Digit100;

  /// @brief Field Digit200_300 value: I16(1)
  static ::System::Globalization::HebrewNumber_HebrewToken const Digit200_300;

  /// @brief Field Digit400 value: I16(0)
  static ::System::Globalization::HebrewNumber_HebrewToken const Digit400;

  /// @brief Field Digit6_7 value: I16(5)
  static ::System::Globalization::HebrewNumber_HebrewToken const Digit6_7;

  /// @brief Field Digit7 value: I16(6)
  static ::System::Globalization::HebrewNumber_HebrewToken const Digit7;

  /// @brief Field Digit9 value: I16(7)
  static ::System::Globalization::HebrewNumber_HebrewToken const Digit9;

  /// @brief Field DoubleQuote value: I16(9)
  static ::System::Globalization::HebrewNumber_HebrewToken const DoubleQuote;

  /// @brief Field Invalid value: I16(-1)
  static ::System::Globalization::HebrewNumber_HebrewToken const Invalid;

  /// @brief Field SingleQuote value: I16(8)
  static ::System::Globalization::HebrewNumber_HebrewToken const SingleQuote;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3681 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  int16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::HebrewNumber_HebrewToken, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumber_HebrewToken, 0x2>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.Globalization.HebrewNumber::HebrewToken
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.HebrewNumber/HebrewValue
struct CORDL_TYPE HebrewNumber_HebrewValue {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3da0e44, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::HebrewNumber_HebrewToken token, int16_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HebrewNumber_HebrewValue();

  // Ctor Parameters [CppParam { name: "token", ty: "::System::Globalization::HebrewNumber_HebrewToken", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int16_t", modifiers: "",
  // def_value: None }]
  constexpr HebrewNumber_HebrewValue(::System::Globalization::HebrewNumber_HebrewToken token, int16_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3682 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field token, offset: 0x0, size: 0x2, def value: None
  ::System::Globalization::HebrewNumber_HebrewToken token;

  /// @brief Field value, offset: 0x2, size: 0x2, def value: None
  int16_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::HebrewNumber_HebrewValue, token) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::HebrewNumber_HebrewValue, value) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumber_HebrewValue, 0x4>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.HebrewNumber/HS
struct CORDL_TYPE HebrewNumber_HS {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int8_t;

  /// @brief Nested struct __HebrewNumber_HS_Unwrapped
  enum struct __HebrewNumber_HS_Unwrapped : int8_t {
    __E__err = static_cast<int8_t>(0xff),
    __E_Start = static_cast<int8_t>(0x0),
    __E_S400 = static_cast<int8_t>(0x1),
    __E_S400_400 = static_cast<int8_t>(0x2),
    __E_S400_X00 = static_cast<int8_t>(0x3),
    __E_S400_X0 = static_cast<int8_t>(0x4),
    __E_X00_DQ = static_cast<int8_t>(0x5),
    __E_S400_X00_X0 = static_cast<int8_t>(0x6),
    __E_X0_DQ = static_cast<int8_t>(0x7),
    __E_X = static_cast<int8_t>(0x8),
    __E_X0 = static_cast<int8_t>(0x9),
    __E_X00 = static_cast<int8_t>(0xa),
    __E_S400_DQ = static_cast<int8_t>(0xb),
    __E_S400_400_DQ = static_cast<int8_t>(0xc),
    __E_S400_400_100 = static_cast<int8_t>(0xd),
    __E_S9 = static_cast<int8_t>(0xe),
    __E_X00_S9 = static_cast<int8_t>(0xf),
    __E_S9_DQ = static_cast<int8_t>(0x10),
    __E_END = static_cast<int8_t>(0x64),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HebrewNumber_HS_Unwrapped() const noexcept {
    return static_cast<__HebrewNumber_HS_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int8_t() const noexcept {
    return static_cast<int8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HebrewNumber_HS();

  // Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr HebrewNumber_HS(int8_t value__) noexcept;

  /// @brief Field END value: I8(100)
  static ::System::Globalization::HebrewNumber_HS const END;

  /// @brief Field S400 value: I8(1)
  static ::System::Globalization::HebrewNumber_HS const S400;

  /// @brief Field S400_400 value: I8(2)
  static ::System::Globalization::HebrewNumber_HS const S400_400;

  /// @brief Field S400_400_100 value: I8(13)
  static ::System::Globalization::HebrewNumber_HS const S400_400_100;

  /// @brief Field S400_400_DQ value: I8(12)
  static ::System::Globalization::HebrewNumber_HS const S400_400_DQ;

  /// @brief Field S400_DQ value: I8(11)
  static ::System::Globalization::HebrewNumber_HS const S400_DQ;

  /// @brief Field S400_X0 value: I8(4)
  static ::System::Globalization::HebrewNumber_HS const S400_X0;

  /// @brief Field S400_X00 value: I8(3)
  static ::System::Globalization::HebrewNumber_HS const S400_X00;

  /// @brief Field S400_X00_X0 value: I8(6)
  static ::System::Globalization::HebrewNumber_HS const S400_X00_X0;

  /// @brief Field S9 value: I8(14)
  static ::System::Globalization::HebrewNumber_HS const S9;

  /// @brief Field S9_DQ value: I8(16)
  static ::System::Globalization::HebrewNumber_HS const S9_DQ;

  /// @brief Field Start value: I8(0)
  static ::System::Globalization::HebrewNumber_HS const Start;

  /// @brief Field X value: I8(8)
  static ::System::Globalization::HebrewNumber_HS const X;

  /// @brief Field X0 value: I8(9)
  static ::System::Globalization::HebrewNumber_HS const X0;

  /// @brief Field X00 value: I8(10)
  static ::System::Globalization::HebrewNumber_HS const X00;

  /// @brief Field X00_DQ value: I8(5)
  static ::System::Globalization::HebrewNumber_HS const X00_DQ;

  /// @brief Field X00_S9 value: I8(15)
  static ::System::Globalization::HebrewNumber_HS const X00_S9;

  /// @brief Field X0_DQ value: I8(7)
  static ::System::Globalization::HebrewNumber_HS const X0_DQ;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3683 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field _err value: I8(-1)
  static ::System::Globalization::HebrewNumber_HS const _err;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  int8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::HebrewNumber_HS, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumber_HS, 0x1>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.HebrewNumber
class CORDL_TYPE HebrewNumber : public ::System::Object {
public:
  // Declarations
  using HS = ::System::Globalization::HebrewNumber_HS;

  using HebrewToken = ::System::Globalization::HebrewNumber_HebrewToken;

  using HebrewValue = ::System::Globalization::HebrewNumber_HebrewValue;

  /// @brief Field s_hebrewValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_hebrewValues,
                      put = setStaticF_s_hebrewValues)) ::ArrayW<::System::Globalization::HebrewNumber_HebrewValue, ::Array<::System::Globalization::HebrewNumber_HebrewValue>*>
      s_hebrewValues;

  /// @brief Field s_maxHebrewNumberCh, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_s_maxHebrewNumberCh, put = setStaticF_s_maxHebrewNumberCh)) char16_t s_maxHebrewNumberCh;

  /// @brief Field s_numberPasingState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_numberPasingState,
                      put = setStaticF_s_numberPasingState)) ::ArrayW<::System::Globalization::HebrewNumber_HS, ::Array<::System::Globalization::HebrewNumber_HS>*>
      s_numberPasingState;

  /// @brief Method IsDigit, addr 0x3d9ea84, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t ch);

  /// @brief Method ParseByChar, addr 0x3d9eb60, size 0x198, virtual false, abstract: false, final false
  static inline ::System::Globalization::HebrewNumberParsingState ParseByChar(char16_t ch, ::ByRef<::System::Globalization::HebrewNumberParsingContext> context);

  /// @brief Method ToString, addr 0x3da0910, size 0x284, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t Number);

  static inline ::ArrayW<::System::Globalization::HebrewNumber_HebrewValue, ::Array<::System::Globalization::HebrewNumber_HebrewValue>*> getStaticF_s_hebrewValues();

  static inline char16_t getStaticF_s_maxHebrewNumberCh();

  static inline ::ArrayW<::System::Globalization::HebrewNumber_HS, ::Array<::System::Globalization::HebrewNumber_HS>*> getStaticF_s_numberPasingState();

  static inline void setStaticF_s_hebrewValues(::ArrayW<::System::Globalization::HebrewNumber_HebrewValue, ::Array<::System::Globalization::HebrewNumber_HebrewValue>*> value);

  static inline void setStaticF_s_maxHebrewNumberCh(char16_t value);

  static inline void setStaticF_s_numberPasingState(::ArrayW<::System::Globalization::HebrewNumber_HS, ::Array<::System::Globalization::HebrewNumber_HS>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HebrewNumber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HebrewNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HebrewNumber(HebrewNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HebrewNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HebrewNumber(HebrewNumber const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumber, 0x10>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumber_HS, "System.Globalization", "HebrewNumber/HS");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumber_HebrewToken, "System.Globalization", "HebrewNumber/HebrewToken");
NEED_NO_BOX(::System::Globalization::HebrewNumber);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumber*, "System.Globalization", "HebrewNumber");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumber_HebrewValue, "System.Globalization", "HebrewNumber/HebrewValue");
