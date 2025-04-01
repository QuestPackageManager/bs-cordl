#pragma once
// IWYU pragma private; include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Enum)
namespace GlobalNamespace {
struct Enum_ParseFailureKind;
}
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
struct Enum_EnumResult;
}
namespace System {
class Enum_ValuesAndNames;
}
namespace System {
class Exception;
}
namespace System {
class IFormatProvider;
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
// Forward declare root types
namespace System {
class Enum;
}
namespace System {
class Enum_ValuesAndNames;
}
namespace System {
struct Enum_EnumResult;
}
// Write type traits
MARK_REF_PTR_T(::System::Enum);
MARK_REF_PTR_T(::System::Enum_ValuesAndNames);
MARK_VAL_T(::System::Enum_EnumResult);
// Dependencies System.Enum::ParseFailureKind
namespace System {
// Is value type: true
// CS Name: System.Enum/EnumResult
struct CORDL_TYPE Enum_EnumResult {
public:
  // Declarations
  /// @brief Method GetEnumParseException, addr 0x3e1a854, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Exception* GetEnumParseException();

  /// @brief Method Init, addr 0x3e1a198, size 0x68, virtual false, abstract: false, final false
  inline void Init(bool canMethodThrow);

  /// @brief Method SetFailure, addr 0x3e1a9fc, size 0x40, virtual false, abstract: false, final false
  inline void SetFailure(::GlobalNamespace::Enum_ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument);

  /// @brief Method SetFailure, addr 0x3e1a9c0, size 0x3c, virtual false, abstract: false, final false
  inline void SetFailure(::GlobalNamespace::Enum_ParseFailureKind failure, ::StringW failureParameter);

  /// @brief Method SetFailure, addr 0x3e1affc, size 0x10, virtual false, abstract: false, final false
  inline void SetFailure(::System::Exception* unhandledException);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Enum_EnumResult();

  // Ctor Parameters [CppParam { name: "parsedEnum", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_failure", ty: "::GlobalNamespace::Enum_ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value:
  // None }, CppParam { name: "m_innerException", ty: "::System::Exception*", modifiers: "", def_value: None }]
  constexpr Enum_EnumResult(::System::Object* parsedEnum, bool canThrow, ::GlobalNamespace::Enum_ParseFailureKind m_failure, ::StringW m_failureMessageID, ::StringW m_failureParameter,
                            ::System::Object* m_failureMessageFormatArgument, ::System::Exception* m_innerException) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2558 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field parsedEnum, offset: 0x0, size: 0x8, def value: None
  ::System::Object* parsedEnum;

  /// @brief Field canThrow, offset: 0x8, size: 0x1, def value: None
  bool canThrow;

  /// @brief Field m_failure, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::Enum_ParseFailureKind m_failure;

  /// @brief Field m_failureMessageID, offset: 0x10, size: 0x8, def value: None
  ::StringW m_failureMessageID;

  /// @brief Field m_failureParameter, offset: 0x18, size: 0x8, def value: None
  ::StringW m_failureParameter;

  /// @brief Field m_failureMessageFormatArgument, offset: 0x20, size: 0x8, def value: None
  ::System::Object* m_failureMessageFormatArgument;

  /// @brief Field m_innerException, offset: 0x28, size: 0x8, def value: None
  ::System::Exception* m_innerException;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Enum_EnumResult, parsedEnum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Enum_EnumResult, canThrow) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Enum_EnumResult, m_failure) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Enum_EnumResult, m_failureMessageID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Enum_EnumResult, m_failureParameter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Enum_EnumResult, m_failureMessageFormatArgument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Enum_EnumResult, m_innerException) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Enum_EnumResult, 0x30>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Enum/ValuesAndNames
class CORDL_TYPE Enum_ValuesAndNames : public ::System::Object {
public:
  // Declarations
  /// @brief Field Names, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Names, put = __cordl_internal_set_Names)) ::ArrayW<::StringW, ::Array<::StringW>*> Names;

  /// @brief Field Values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Values, put = __cordl_internal_set_Values)) ::ArrayW<uint64_t, ::Array<uint64_t>*> Values;

  static inline ::System::Enum_ValuesAndNames* New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Names() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Names();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_Values() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_Values();

  constexpr void __cordl_internal_set_Names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_Values(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x3e19634, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enum_ValuesAndNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enum_ValuesAndNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enum_ValuesAndNames(Enum_ValuesAndNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enum_ValuesAndNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enum_ValuesAndNames(Enum_ValuesAndNames const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2559 };

  /// @brief Field Values, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___Values;

  /// @brief Field Names, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Enum_ValuesAndNames, ___Values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Enum_ValuesAndNames, ___Names) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Enum_ValuesAndNames, 0x20>, "Size mismatch!");

} // namespace System
// Dependencies System.IComparable, System.IConvertible, System.IFormattable, System.ValueType
namespace System {
// Is value type: false
// CS Name: System.Enum
class CORDL_TYPE Enum : public ::System::ValueType {
public:
  // Declarations
  using ParseFailureKind = ::GlobalNamespace::Enum_ParseFailureKind;

  using EnumResult = ::System::Enum_EnumResult;

  using ValuesAndNames = ::System::Enum_ValuesAndNames;

  /// @brief Field enumSeperatorCharArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_enumSeperatorCharArray, put = setStaticF_enumSeperatorCharArray)) ::ArrayW<char16_t, ::Array<char16_t>*> enumSeperatorCharArray;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2560 };

  /// @brief Field enumSeperator offset 0xffffffff size 0x8
  static constexpr ::ConstString enumSeperator{ u", " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Enum, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Enum);
DEFINE_IL2CPP_ARG_TYPE(::System::Enum*, "System", "Enum");
NEED_NO_BOX(::System::Enum_ValuesAndNames);
DEFINE_IL2CPP_ARG_TYPE(::System::Enum_ValuesAndNames*, "System", "Enum/ValuesAndNames");
DEFINE_IL2CPP_ARG_TYPE(::System::Enum_EnumResult, "System", "Enum/EnumResult");
