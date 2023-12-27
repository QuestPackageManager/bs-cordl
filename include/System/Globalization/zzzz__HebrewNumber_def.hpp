#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__HebrewNumber_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumber)
namespace System::Globalization {
struct __HebrewNumber__HebrewValue;
}
namespace System::Globalization {
struct __HebrewNumber__HS;
}
namespace System::Globalization {
struct __HebrewNumber__HebrewToken;
}
namespace System::Globalization {
struct HebrewNumberParsingState;
}
namespace System::Globalization {
struct HebrewNumberParsingContext;
}
// Forward declare root types
namespace System::Globalization {
struct __HebrewNumber__HS;
}
namespace System::Globalization {
struct __HebrewNumber__HebrewToken;
}
namespace System::Globalization {
class HebrewNumber;
}
namespace System::Globalization {
struct __HebrewNumber__HebrewValue;
}
// Write type traits
MARK_VAL_T(::System::Globalization::__HebrewNumber__HS);
MARK_VAL_T(::System::Globalization::__HebrewNumber__HebrewToken);
MARK_REF_PTR_T(::System::Globalization::HebrewNumber);
MARK_VAL_T(::System::Globalization::__HebrewNumber__HebrewValue);
// Type: ::HebrewToken
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3675))
// CS Name: ::HebrewNumber::HebrewToken
struct CORDL_TYPE __HebrewNumber__HebrewToken {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int16_t;

  /// @brief Nested struct ____HebrewNumber__HebrewToken_Unwrapped
  enum struct ____HebrewNumber__HebrewToken_Unwrapped : int16_t {
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
  constexpr operator ____HebrewNumber__HebrewToken_Unwrapped() const noexcept {
    return static_cast<____HebrewNumber__HebrewToken_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr __HebrewNumber__HebrewToken(int16_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HebrewNumber__HebrewToken();

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  int16_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field Invalid value: static_cast<int16_t>(0xffff)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Invalid;

  /// @brief Field Digit400 value: static_cast<int16_t>(0x0)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Digit400;

  /// @brief Field Digit200_300 value: static_cast<int16_t>(0x1)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Digit200_300;

  /// @brief Field Digit100 value: static_cast<int16_t>(0x2)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Digit100;

  /// @brief Field Digit10 value: static_cast<int16_t>(0x3)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Digit10;

  /// @brief Field Digit1 value: static_cast<int16_t>(0x4)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Digit1;

  /// @brief Field Digit6_7 value: static_cast<int16_t>(0x5)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Digit6_7;

  /// @brief Field Digit7 value: static_cast<int16_t>(0x6)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Digit7;

  /// @brief Field Digit9 value: static_cast<int16_t>(0x7)
  static ::System::Globalization::__HebrewNumber__HebrewToken const Digit9;

  /// @brief Field SingleQuote value: static_cast<int16_t>(0x8)
  static ::System::Globalization::__HebrewNumber__HebrewToken const SingleQuote;

  /// @brief Field DoubleQuote value: static_cast<int16_t>(0x9)
  static ::System::Globalization::__HebrewNumber__HebrewToken const DoubleQuote;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__HebrewNumber__HebrewToken, 0x2>, "Size mismatch!");

} // namespace System::Globalization
// Type: ::HebrewValue
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3676))
// CS Name: ::HebrewNumber::HebrewValue
struct CORDL_TYPE __HebrewNumber__HebrewValue {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2555154 size 0xc virtual false final false
  inline void _ctor(::System::Globalization::__HebrewNumber__HebrewToken token, int16_t value);

  // Ctor Parameters [CppParam { name: "token", ty: "::System::Globalization::__HebrewNumber__HebrewToken", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int16_t", modifiers: "",
  // def_value: None }]
  constexpr __HebrewNumber__HebrewValue(::System::Globalization::__HebrewNumber__HebrewToken token, int16_t value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HebrewNumber__HebrewValue();

  /// @brief Field token, offset: 0x0, size: 0x2, def value: None
  ::System::Globalization::__HebrewNumber__HebrewToken token;

  /// @brief Field value, offset: 0x2, size: 0x2, def value: None
  int16_t value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__HebrewNumber__HebrewValue, 0x4>, "Size mismatch!");

} // namespace System::Globalization
// Type: ::HS
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3677))
// CS Name: ::HebrewNumber::HS
struct CORDL_TYPE __HebrewNumber__HS {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int8_t;

  /// @brief Nested struct ____HebrewNumber__HS_Unwrapped
  enum struct ____HebrewNumber__HS_Unwrapped : int8_t {
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
  constexpr operator ____HebrewNumber__HS_Unwrapped() const noexcept {
    return static_cast<____HebrewNumber__HS_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr __HebrewNumber__HS(int8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HebrewNumber__HS();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  int8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field _err value: static_cast<int8_t>(0xff)
  static ::System::Globalization::__HebrewNumber__HS const _err;

  /// @brief Field Start value: static_cast<int8_t>(0x0)
  static ::System::Globalization::__HebrewNumber__HS const Start;

  /// @brief Field S400 value: static_cast<int8_t>(0x1)
  static ::System::Globalization::__HebrewNumber__HS const S400;

  /// @brief Field S400_400 value: static_cast<int8_t>(0x2)
  static ::System::Globalization::__HebrewNumber__HS const S400_400;

  /// @brief Field S400_X00 value: static_cast<int8_t>(0x3)
  static ::System::Globalization::__HebrewNumber__HS const S400_X00;

  /// @brief Field S400_X0 value: static_cast<int8_t>(0x4)
  static ::System::Globalization::__HebrewNumber__HS const S400_X0;

  /// @brief Field X00_DQ value: static_cast<int8_t>(0x5)
  static ::System::Globalization::__HebrewNumber__HS const X00_DQ;

  /// @brief Field S400_X00_X0 value: static_cast<int8_t>(0x6)
  static ::System::Globalization::__HebrewNumber__HS const S400_X00_X0;

  /// @brief Field X0_DQ value: static_cast<int8_t>(0x7)
  static ::System::Globalization::__HebrewNumber__HS const X0_DQ;

  /// @brief Field X value: static_cast<int8_t>(0x8)
  static ::System::Globalization::__HebrewNumber__HS const X;

  /// @brief Field X0 value: static_cast<int8_t>(0x9)
  static ::System::Globalization::__HebrewNumber__HS const X0;

  /// @brief Field X00 value: static_cast<int8_t>(0xa)
  static ::System::Globalization::__HebrewNumber__HS const X00;

  /// @brief Field S400_DQ value: static_cast<int8_t>(0xb)
  static ::System::Globalization::__HebrewNumber__HS const S400_DQ;

  /// @brief Field S400_400_DQ value: static_cast<int8_t>(0xc)
  static ::System::Globalization::__HebrewNumber__HS const S400_400_DQ;

  /// @brief Field S400_400_100 value: static_cast<int8_t>(0xd)
  static ::System::Globalization::__HebrewNumber__HS const S400_400_100;

  /// @brief Field S9 value: static_cast<int8_t>(0xe)
  static ::System::Globalization::__HebrewNumber__HS const S9;

  /// @brief Field X00_S9 value: static_cast<int8_t>(0xf)
  static ::System::Globalization::__HebrewNumber__HS const X00_S9;

  /// @brief Field S9_DQ value: static_cast<int8_t>(0x10)
  static ::System::Globalization::__HebrewNumber__HS const S9_DQ;

  /// @brief Field END value: static_cast<int8_t>(0x64)
  static ::System::Globalization::__HebrewNumber__HS const END;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__HebrewNumber__HS, 0x1>, "Size mismatch!");

} // namespace System::Globalization
// Type: System.Globalization::HebrewNumber
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3678))
// CS Name: ::System.Globalization::HebrewNumber*
class CORDL_TYPE HebrewNumber : public ::System::Object {
public:
  // Declarations
  using HS = ::System::Globalization::__HebrewNumber__HS;

  using HebrewValue = ::System::Globalization::__HebrewNumber__HebrewValue;

  using HebrewToken = ::System::Globalization::__HebrewNumber__HebrewToken;

  /// @brief Field s_hebrewValues, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_hebrewValues,
               put = setStaticF_s_hebrewValues))::ArrayW<::System::Globalization::__HebrewNumber__HebrewValue, ::Array<::System::Globalization::__HebrewNumber__HebrewValue>*> s_hebrewValues;

  /// @brief Field s_maxHebrewNumberCh, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_s_maxHebrewNumberCh, put = setStaticF_s_maxHebrewNumberCh)) char16_t s_maxHebrewNumberCh;

  /// @brief Field s_numberPasingState, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_numberPasingState,
                             put = setStaticF_s_numberPasingState))::ArrayW<::System::Globalization::__HebrewNumber__HS, ::Array<::System::Globalization::__HebrewNumber__HS>*> s_numberPasingState;

  static inline void setStaticF_s_hebrewValues(::ArrayW<::System::Globalization::__HebrewNumber__HebrewValue, ::Array<::System::Globalization::__HebrewNumber__HebrewValue>*> value);

  static inline ::ArrayW<::System::Globalization::__HebrewNumber__HebrewValue, ::Array<::System::Globalization::__HebrewNumber__HebrewValue>*> getStaticF_s_hebrewValues();

  static inline void setStaticF_s_maxHebrewNumberCh(char16_t value);

  static inline char16_t getStaticF_s_maxHebrewNumberCh();

  static inline void setStaticF_s_numberPasingState(::ArrayW<::System::Globalization::__HebrewNumber__HS, ::Array<::System::Globalization::__HebrewNumber__HS>*> value);

  static inline ::ArrayW<::System::Globalization::__HebrewNumber__HS, ::Array<::System::Globalization::__HebrewNumber__HS>*> getStaticF_s_numberPasingState();

  /// @brief Method ToString addr 0x2554c4c size 0x258 virtual false final false
  static inline ::StringW ToString(int32_t Number);

  /// @brief Method ParseByChar addr 0x2552e6c size 0x190 virtual false final false
  static inline ::System::Globalization::HebrewNumberParsingState ParseByChar(char16_t ch, ByRef<::System::Globalization::HebrewNumberParsingContext> context);

  /// @brief Method IsDigit addr 0x2552d90 size 0xd0 virtual false final false
  static inline bool IsDigit(char16_t ch);

  // Ctor Parameters [CppParam { name: "", ty: "HebrewNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HebrewNumber(HebrewNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HebrewNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HebrewNumber(HebrewNumber const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HebrewNumber();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumber, 0x10>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__HebrewNumber__HS, "System.Globalization", "HebrewNumber/HS");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__HebrewNumber__HebrewToken, "System.Globalization", "HebrewNumber/HebrewToken");
NEED_NO_BOX(::System::Globalization::HebrewNumber);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumber*, "System.Globalization", "HebrewNumber");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__HebrewNumber__HebrewValue, "System.Globalization", "HebrewNumber/HebrewValue");
