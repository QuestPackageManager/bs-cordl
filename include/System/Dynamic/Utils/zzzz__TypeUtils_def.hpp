#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/TypeUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeUtils)
namespace System::Dynamic::Utils {
class TypeUtils___c;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic::Utils {
class TypeUtils;
}
namespace System::Dynamic::Utils {
class TypeUtils___c;
}
// Write type traits
MARK_REF_T(::System::Dynamic::Utils::TypeUtils*);
MARK_REF_T(::System::Dynamic::Utils::TypeUtils___c*);
DEFINE_IL2CPP_CLASS(::System::Dynamic::Utils::TypeUtils*, "System.Dynamic.Utils", "TypeUtils");
DEFINE_IL2CPP_CLASS(::System::Dynamic::Utils::TypeUtils___c*, "System.Dynamic.Utils", "TypeUtils/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: System.Dynamic.Utils.TypeUtils/<>c
class CORDL_TYPE TypeUtils___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Dynamic::Utils::TypeUtils___c* __9;

  static inline ::System::Dynamic::Utils::TypeUtils___c* New_ctor();

  /// @brief Method <.cctor>b__44_0, addr 0x63e983c, size 0x24, virtual false, abstract: false, final false
  inline bool __cctor_b__44_0(::System::Type* i);

  /// @brief Method <.cctor>b__44_1, addr 0x63e9860, size 0x24, virtual false, abstract: false, final false
  inline ::System::Type* __cctor_b__44_1(::System::Type* i);

  /// @brief Method .ctor, addr 0x63e9838, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Dynamic::Utils::TypeUtils___c* getStaticF___9();

  static inline void setStaticF___9(::System::Dynamic::Utils::TypeUtils___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtils___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeUtils___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeUtils___c(TypeUtils___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtils___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtils___c(TypeUtils___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17202 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Dynamic::Utils::TypeUtils___c) == 0x10, "Size mismatch!");

} // namespace System::Dynamic::Utils
// [Extension]
// Dependencies System.Object, System.Type
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: System.Dynamic.Utils.TypeUtils
class CORDL_TYPE TypeUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Dynamic::Utils::TypeUtils___c;

  /// @brief Field s_arrayAssignableInterfaces, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_arrayAssignableInterfaces, put = setStaticF_s_arrayAssignableInterfaces)) ::ArrayW<::System::Type*> s_arrayAssignableInterfaces;

  /// @brief Method AreEquivalent, addr 0x63e3e8c, size 0x60, virtual false, abstract: false, final false
  static inline bool AreEquivalent(::System::Type* t1, ::System::Type* t2);

  /// @brief Method AreReferenceAssignable, addr 0x63e58c4, size 0xdc, virtual false, abstract: false, final false
  static inline bool AreReferenceAssignable(::System::Type* dest, ::System::Type* src);

  /// @brief Method FindConversionOperator, addr 0x63e8c78, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* FindConversionOperator(::ArrayW<::System::Reflection::MethodInfo*> methods, ::System::Type* typeFrom, ::System::Type* typeTo);

  /// @brief Method FindGenericType, addr 0x63e8e4c, size 0x44c, virtual false, abstract: false, final false
  static inline ::System::Type* FindGenericType(::System::Type* definition, ::System::Type* type);

  /// @brief Method GetBooleanOperator, addr 0x63e9298, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetBooleanOperator(::System::Type* type, ::StringW name);

  /// [Extension]
  /// @brief Method GetInvokeMethod, addr 0x63e9588, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Type* delegateType);

  /// [Extension]
  /// @brief Method GetNonNullableType, addr 0x63e67bc, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Type* GetNonNullableType(::System::Type* type);

  /// [Extension]
  /// @brief Method GetNonRefType, addr 0x63e93f0, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Type* GetNonRefType(::System::Type* type);

  /// [Extension]
  /// @brief Method GetNullableType, addr 0x63e6904, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Type* GetNullableType(::System::Type* type);

  /// @brief Method GetUserDefinedCoercionMethod, addr 0x63e8a50, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetUserDefinedCoercionMethod(::System::Type* convertFrom, ::System::Type* convertToType);

  /// @brief Method HasArrayToInterfaceConversion, addr 0x63e7e7c, size 0x1c4, virtual false, abstract: false, final false
  static inline bool HasArrayToInterfaceConversion(::System::Type* source, ::System::Type* dest);

  /// @brief Method HasBuiltInEqualityOperator, addr 0x63e8430, size 0x200, virtual false, abstract: false, final false
  static inline bool HasBuiltInEqualityOperator(::System::Type* left, ::System::Type* right);

  /// [Extension]
  /// @brief Method HasIdentityPrimitiveOrNullableConversionTo, addr 0x63e73c0, size 0x1f4, virtual false, abstract: false, final false
  static inline bool HasIdentityPrimitiveOrNullableConversionTo(::System::Type* source, ::System::Type* dest);

  /// @brief Method HasInterfaceToArrayConversion, addr 0x63e8040, size 0x1c8, virtual false, abstract: false, final false
  static inline bool HasInterfaceToArrayConversion(::System::Type* source, ::System::Type* dest);

  /// [Extension]
  /// @brief Method HasReferenceConversionTo, addr 0x63e7674, size 0x1c4, virtual false, abstract: false, final false
  static inline bool HasReferenceConversionTo(::System::Type* source, ::System::Type* dest);

  /// @brief Method HasReferenceEquality, addr 0x63e8330, size 0x100, virtual false, abstract: false, final false
  static inline bool HasReferenceEquality(::System::Type* left, ::System::Type* right);

  /// [Extension]
  /// @brief Method IsArithmetic, addr 0x63e6cf0, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsArithmetic(::System::Type* type);

  /// [Extension]
  /// @brief Method IsBool, addr 0x63e6ad4, size 0x94, virtual false, abstract: false, final false
  static inline bool IsBool(::System::Type* type);

  /// @brief Method IsContravariant, addr 0x63e8258, size 0x28, virtual false, abstract: false, final false
  static inline bool IsContravariant(::System::Type* t);

  /// [Extension]
  /// @brief Method IsConvertible, addr 0x63e75b4, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsConvertible(::System::Type* type);

  /// @brief Method IsCovariant, addr 0x63e8230, size 0x28, virtual false, abstract: false, final false
  static inline bool IsCovariant(::System::Type* t);

  /// @brief Method IsDelegate, addr 0x63e82ac, size 0x84, virtual false, abstract: false, final false
  static inline bool IsDelegate(::System::Type* t);

  /// @brief Method IsImplicitBoxingConversion, addr 0x63e88b4, size 0xf0, virtual false, abstract: false, final false
  static inline bool IsImplicitBoxingConversion(::System::Type* source, ::System::Type* destination);

  /// @brief Method IsImplicitNullableConversion, addr 0x63e89a4, size 0xac, virtual false, abstract: false, final false
  static inline bool IsImplicitNullableConversion(::System::Type* source, ::System::Type* destination);

  /// @brief Method IsImplicitNumericConversion, addr 0x63e8740, size 0x174, virtual false, abstract: false, final false
  static inline bool IsImplicitNumericConversion(::System::Type* source, ::System::Type* destination);

  /// @brief Method IsImplicitReferenceConversion, addr 0x63e8208, size 0x28, virtual false, abstract: false, final false
  static inline bool IsImplicitReferenceConversion(::System::Type* source, ::System::Type* destination);

  /// [Extension]
  /// @brief Method IsImplicitlyConvertibleTo, addr 0x63e8630, size 0x110, virtual false, abstract: false, final false
  static inline bool IsImplicitlyConvertibleTo(::System::Type* source, ::System::Type* destination);

  /// [Extension]
  /// @brief Method IsInteger, addr 0x63e6c2c, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsInteger(::System::Type* type);

  /// [Extension]
  /// @brief Method IsIntegerOrBool, addr 0x63e6e7c, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsIntegerOrBool(::System::Type* type);

  /// @brief Method IsInvariant, addr 0x63e8280, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsInvariant(::System::Type* t);

  /// @brief Method IsLegalExplicitVariantDelegateConversion, addr 0x63e7838, size 0x2f0, virtual false, abstract: false, final false
  static inline bool IsLegalExplicitVariantDelegateConversion(::System::Type* source, ::System::Type* dest);

  /// [Extension]
  /// @brief Method IsNullableOrReferenceType, addr 0x63e6a4c, size 0x88, virtual false, abstract: false, final false
  static inline bool IsNullableOrReferenceType(::System::Type* type);

  /// [Extension]
  /// @brief Method IsNullableType, addr 0x63e6850, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsNullableType(::System::Type* type);

  /// [Extension]
  /// @brief Method IsNumeric, addr 0x63e6b68, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsNumeric(::System::Type* type);

  /// [Extension]
  /// @brief Method IsNumericOrBool, addr 0x63e6f44, size 0x84, virtual false, abstract: false, final false
  static inline bool IsNumericOrBool(::System::Type* type);

  /// @brief Method IsSameOrSubclass, addr 0x63e5acc, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsSameOrSubclass(::System::Type* type, ::System::Type* subType);

  /// [Extension]
  /// @brief Method IsUnsignedInt, addr 0x63e6db4, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsUnsignedInt(::System::Type* type);

  /// @brief Method IsValidInstanceType, addr 0x63e6fc8, size 0x3f8, virtual false, abstract: false, final false
  static inline bool IsValidInstanceType(::System::Reflection::MemberInfo* member, ::System::Type* instanceType);

  /// [Extension]
  /// @brief Method StrictHasReferenceConversionTo, addr 0x63e7b28, size 0x354, virtual false, abstract: false, final false
  static inline bool StrictHasReferenceConversionTo(::System::Type* source, ::System::Type* dest, bool skipNonArray);

  /// @brief Method ValidateType, addr 0x63e94a8, size 0xe0, virtual false, abstract: false, final false
  static inline bool ValidateType(::System::Type* type, ::StringW paramName, int32_t index);

  /// @brief Method ValidateType, addr 0x63e9438, size 0x70, virtual false, abstract: false, final false
  static inline void ValidateType(::System::Type* type, ::StringW paramName);

  /// @brief Method ValidateType, addr 0x63e57c4, size 0x100, virtual false, abstract: false, final false
  static inline void ValidateType(::System::Type* type, ::StringW paramName, bool allowByRef, bool allowPointer);

  static inline ::ArrayW<::System::Type*> getStaticF_s_arrayAssignableInterfaces();

  static inline void setStaticF_s_arrayAssignableInterfaces(::ArrayW<::System::Type*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeUtils(TypeUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtils(TypeUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17203 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Dynamic::Utils::TypeUtils) == 0x10, "Size mismatch!");

} // namespace System::Dynamic::Utils
