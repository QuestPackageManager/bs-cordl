#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Enum)
namespace System {
class Array;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System {
struct __Enum__EnumResult;
}
namespace System {
struct __Enum__ParseFailureKind;
}
namespace System {
class __Enum__ValuesAndNames;
}
// Forward declare root types
namespace System {
class Enum;
}
namespace System {
class __Enum__ValuesAndNames;
}
namespace System {
struct __Enum__EnumResult;
}
// Write type traits
MARK_REF_PTR_T(::System::Enum);
MARK_REF_PTR_T(::System::__Enum__ValuesAndNames);
MARK_VAL_T(::System::__Enum__EnumResult);
// Type: ::EnumResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Enum::EnumResult
struct CORDL_TYPE __Enum__EnumResult {
public:
  // Declarations
  /// @brief Method GetEnumParseException, addr 0x2869758, size 0x17c, virtual false, abstract: false, final false
  inline ::System::Exception* GetEnumParseException();

  /// @brief Method Init, addr 0x286907c, size 0x64, virtual false, abstract: false, final false
  inline void Init(bool canMethodThrow);

  /// @brief Method SetFailure, addr 0x2869910, size 0x40, virtual false, abstract: false, final false
  inline void SetFailure(::System::__Enum__ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument);

  /// @brief Method SetFailure, addr 0x28698d4, size 0x3c, virtual false, abstract: false, final false
  inline void SetFailure(::System::__Enum__ParseFailureKind failure, ::StringW failureParameter);

  /// @brief Method SetFailure, addr 0x2869ed4, size 0x10, virtual false, abstract: false, final false
  inline void SetFailure(::System::Exception* unhandledException);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Enum__EnumResult();

  // Ctor Parameters [CppParam { name: "parsedEnum", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_failure", ty: "::System::__Enum__ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None },
  // CppParam { name: "m_innerException", ty: "::System::Exception*", modifiers: "", def_value: None }]
  constexpr __Enum__EnumResult(::System::Object* parsedEnum, bool canThrow, ::System::__Enum__ParseFailureKind m_failure, ::StringW m_failureMessageID, ::StringW m_failureParameter,
                               ::System::Object* m_failureMessageFormatArgument, ::System::Exception* m_innerException) noexcept;

  /// @brief Field parsedEnum, offset: 0x0, size: 0x8, def value: None
  ::System::Object* parsedEnum;

  /// @brief Field canThrow, offset: 0x8, size: 0x1, def value: None
  bool canThrow;

  /// @brief Field m_failure, offset: 0xc, size: 0x4, def value: None
  ::System::__Enum__ParseFailureKind m_failure;

  /// @brief Field m_failureMessageID, offset: 0x10, size: 0x8, def value: None
  ::StringW m_failureMessageID;

  /// @brief Field m_failureParameter, offset: 0x18, size: 0x8, def value: None
  ::StringW m_failureParameter;

  /// @brief Field m_failureMessageFormatArgument, offset: 0x20, size: 0x8, def value: None
  ::System::Object* m_failureMessageFormatArgument;

  /// @brief Field m_innerException, offset: 0x28, size: 0x8, def value: None
  ::System::Exception* m_innerException;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Enum__EnumResult, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::__Enum__EnumResult, parsedEnum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__Enum__EnumResult, canThrow) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__Enum__EnumResult, m_failure) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::__Enum__EnumResult, m_failureMessageID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__Enum__EnumResult, m_failureParameter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__Enum__EnumResult, m_failureMessageFormatArgument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::__Enum__EnumResult, m_innerException) == 0x28, "Offset mismatch!");

} // namespace System
// Type: ::ValuesAndNames
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::Enum::ValuesAndNames*
class CORDL_TYPE __Enum__ValuesAndNames : public ::System::Object {
public:
  // Declarations
  /// @brief Field Names, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Names, put = __cordl_internal_set_Names))::ArrayW<::StringW, ::Array<::StringW>*> Names;

  /// @brief Field Values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Values, put = __cordl_internal_set_Values))::ArrayW<uint64_t, ::Array<uint64_t>*> Values;

  static inline ::System::__Enum__ValuesAndNames* New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Names() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Names();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_Values() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_Values();

  constexpr void __cordl_internal_set_Names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_Values(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x2868518, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Enum__ValuesAndNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Enum__ValuesAndNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Enum__ValuesAndNames(__Enum__ValuesAndNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Enum__ValuesAndNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Enum__ValuesAndNames(__Enum__ValuesAndNames const&) = delete;

  /// @brief Field Values, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___Values;

  /// @brief Field Names, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Enum__ValuesAndNames, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::__Enum__ValuesAndNames, ___Values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__Enum__ValuesAndNames, ___Names) == 0x18, "Offset mismatch!");

} // namespace System
// Type: System::Enum
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Enum*
class CORDL_TYPE Enum : public ::System::ValueType {
public:
  // Declarations
  using EnumResult = ::System::__Enum__EnumResult;

  using ParseFailureKind = ::System::__Enum__ParseFailureKind;

  using ValuesAndNames = ::System::__Enum__ValuesAndNames;

  /// @brief Field enumSeperatorCharArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_enumSeperatorCharArray, put = setStaticF_enumSeperatorCharArray))::ArrayW<char16_t, ::Array<char16_t>*> enumSeperatorCharArray;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enum() {}

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enum(Enum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enum(Enum const&) = delete;

  /// @brief Field enumSeperator offset 0xffffffff size 0x8
  static constexpr ::ConstString enumSeperator{ u", " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Enum, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Enum);
DEFINE_IL2CPP_ARG_TYPE(::System::Enum*, "System", "Enum");
NEED_NO_BOX(::System::__Enum__ValuesAndNames);
DEFINE_IL2CPP_ARG_TYPE(::System::__Enum__ValuesAndNames*, "System", "Enum/ValuesAndNames");
DEFINE_IL2CPP_ARG_TYPE(::System::__Enum__EnumResult, "System", "Enum/EnumResult");
