#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/TypeUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeUtils)
namespace System::Dynamic::Utils {
class __TypeUtils____c;
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
class __TypeUtils____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::Utils::TypeUtils);
MARK_REF_PTR_T(::System::Dynamic::Utils::__TypeUtils____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: ::TypeUtils::<>c*
class CORDL_TYPE __TypeUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Dynamic::Utils::__TypeUtils____c* __9;

  static inline ::System::Dynamic::Utils::__TypeUtils____c* New_ctor();

  /// @brief Method <.cctor>b__44_0, addr 0x2c7aae0, size 0x24, virtual false, abstract: false, final false
  inline bool __cctor_b__44_0(::System::Type* i);

  /// @brief Method <.cctor>b__44_1, addr 0x2c7ab04, size 0x24, virtual false, abstract: false, final false
  inline ::System::Type* __cctor_b__44_1(::System::Type* i);

  /// @brief Method .ctor, addr 0x2c7aad8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Dynamic::Utils::__TypeUtils____c* getStaticF___9();

  static inline void setStaticF___9(::System::Dynamic::Utils::__TypeUtils____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeUtils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeUtils____c(__TypeUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeUtils____c(__TypeUtils____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::Utils::__TypeUtils____c, 0x10>, "Size mismatch!");

} // namespace System::Dynamic::Utils
// Type: System.Dynamic.Utils::TypeUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: ::System.Dynamic.Utils::TypeUtils*
class CORDL_TYPE TypeUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Dynamic::Utils::__TypeUtils____c;

  /// @brief Field s_arrayAssignableInterfaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_arrayAssignableInterfaces,
                             put = setStaticF_s_arrayAssignableInterfaces))::ArrayW<::System::Type*, ::Array<::System::Type*>*> s_arrayAssignableInterfaces;

  /// @brief Method AreEquivalent, addr 0x2c74e54, size 0xa0, virtual false, abstract: false, final false
  static inline bool AreEquivalent(::System::Type* t1, ::System::Type* t2);

  /// @brief Method AreReferenceAssignable, addr 0x2c7697c, size 0xc8, virtual false, abstract: false, final false
  static inline bool AreReferenceAssignable(::System::Type* dest, ::System::Type* src);

  /// @brief Method FindConversionOperator, addr 0x2c79e68, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* FindConversionOperator(::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> methods, ::System::Type* typeFrom,
                                                                         ::System::Type* typeTo);

  /// @brief Method FindGenericType, addr 0x2c7a034, size 0x4a4, virtual false, abstract: false, final false
  static inline ::System::Type* FindGenericType(::System::Type* definition, ::System::Type* type);

  /// @brief Method GetBooleanOperator, addr 0x2c7a4d8, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetBooleanOperator(::System::Type* type, ::StringW name);

  /// @brief Method GetInvokeMethod, addr 0x2c7a824, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Type* delegateType);

  /// @brief Method GetNonNullableType, addr 0x2c77848, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Type* GetNonNullableType(::System::Type* type);

  /// @brief Method GetNonRefType, addr 0x2c7a64c, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Type* GetNonRefType(::System::Type* type);

  /// @brief Method GetNullableType, addr 0x2c779a4, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Type* GetNullableType(::System::Type* type);

  /// @brief Method GetUserDefinedCoercionMethod, addr 0x2c79c50, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetUserDefinedCoercionMethod(::System::Type* convertFrom, ::System::Type* convertToType);

  /// @brief Method HasArrayToInterfaceConversion, addr 0x2c7906c, size 0x1c0, virtual false, abstract: false, final false
  static inline bool HasArrayToInterfaceConversion(::System::Type* source, ::System::Type* dest);

  /// @brief Method HasBuiltInEqualityOperator, addr 0x2c79610, size 0x1e8, virtual false, abstract: false, final false
  static inline bool HasBuiltInEqualityOperator(::System::Type* left, ::System::Type* right);

  /// @brief Method HasIdentityPrimitiveOrNullableConversionTo, addr 0x2c78588, size 0x22c, virtual false, abstract: false, final false
  static inline bool HasIdentityPrimitiveOrNullableConversionTo(::System::Type* source, ::System::Type* dest);

  /// @brief Method HasInterfaceToArrayConversion, addr 0x2c7922c, size 0x1c4, virtual false, abstract: false, final false
  static inline bool HasInterfaceToArrayConversion(::System::Type* source, ::System::Type* dest);

  /// @brief Method HasReferenceConversionTo, addr 0x2c7886c, size 0x1e8, virtual false, abstract: false, final false
  static inline bool HasReferenceConversionTo(::System::Type* source, ::System::Type* dest);

  /// @brief Method HasReferenceEquality, addr 0x2c79530, size 0xe0, virtual false, abstract: false, final false
  static inline bool HasReferenceEquality(::System::Type* left, ::System::Type* right);

  /// @brief Method IsArithmetic, addr 0x2c77d90, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsArithmetic(::System::Type* type);

  /// @brief Method IsBool, addr 0x2c77b64, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsBool(::System::Type* type);

  /// @brief Method IsContravariant, addr 0x2c79444, size 0x28, virtual false, abstract: false, final false
  static inline bool IsContravariant(::System::Type* t);

  /// @brief Method IsConvertible, addr 0x2c787b4, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsConvertible(::System::Type* type);

  /// @brief Method IsCovariant, addr 0x2c7941c, size 0x28, virtual false, abstract: false, final false
  static inline bool IsCovariant(::System::Type* t);

  /// @brief Method IsDelegate, addr 0x2c79498, size 0x98, virtual false, abstract: false, final false
  static inline bool IsDelegate(::System::Type* t);

  /// @brief Method IsImplicitBoxingConversion, addr 0x2c79a40, size 0x168, virtual false, abstract: false, final false
  static inline bool IsImplicitBoxingConversion(::System::Type* source, ::System::Type* destination);

  /// @brief Method IsImplicitNullableConversion, addr 0x2c79ba8, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsImplicitNullableConversion(::System::Type* source, ::System::Type* destination);

  /// @brief Method IsImplicitNumericConversion, addr 0x2c79904, size 0x13c, virtual false, abstract: false, final false
  static inline bool IsImplicitNumericConversion(::System::Type* source, ::System::Type* destination);

  /// @brief Method IsImplicitReferenceConversion, addr 0x2c793f0, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsImplicitReferenceConversion(::System::Type* source, ::System::Type* destination);

  /// @brief Method IsImplicitlyConvertibleTo, addr 0x2c797f8, size 0x10c, virtual false, abstract: false, final false
  static inline bool IsImplicitlyConvertibleTo(::System::Type* source, ::System::Type* destination);

  /// @brief Method IsInteger, addr 0x2c77cd4, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsInteger(::System::Type* type);

  /// @brief Method IsIntegerOrBool, addr 0x2c77f0c, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsIntegerOrBool(::System::Type* type);

  /// @brief Method IsInvariant, addr 0x2c7946c, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsInvariant(::System::Type* t);

  /// @brief Method IsLegalExplicitVariantDelegateConversion, addr 0x2c78a54, size 0x308, virtual false, abstract: false, final false
  static inline bool IsLegalExplicitVariantDelegateConversion(::System::Type* source, ::System::Type* dest);

  /// @brief Method IsNullableOrReferenceType, addr 0x2c77ae8, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsNullableOrReferenceType(::System::Type* type);

  /// @brief Method IsNullableType, addr 0x2c778d8, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsNullableType(::System::Type* type);

  /// @brief Method IsNumeric, addr 0x2c77c18, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsNumeric(::System::Type* type);

  /// @brief Method IsNumericOrBool, addr 0x2c77fd0, size 0x80, virtual false, abstract: false, final false
  static inline bool IsNumericOrBool(::System::Type* type);

  /// @brief Method IsSameOrSubclass, addr 0x2c76b70, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsSameOrSubclass(::System::Type* type, ::System::Type* subType);

  /// @brief Method IsUnsignedInt, addr 0x2c77e4c, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsUnsignedInt(::System::Type* type);

  /// @brief Method IsValidInstanceType, addr 0x2c78050, size 0x538, virtual false, abstract: false, final false
  static inline bool IsValidInstanceType(::System::Reflection::MemberInfo* member, ::System::Type* instanceType);

  /// @brief Method StrictHasReferenceConversionTo, addr 0x2c78d5c, size 0x310, virtual false, abstract: false, final false
  static inline bool StrictHasReferenceConversionTo(::System::Type* source, ::System::Type* dest, bool skipNonArray);

  /// @brief Method ValidateType, addr 0x2c7a6f8, size 0x12c, virtual false, abstract: false, final false
  static inline bool ValidateType(::System::Type* type, ::StringW paramName, int32_t index);

  /// @brief Method ValidateType, addr 0x2c7a68c, size 0x6c, virtual false, abstract: false, final false
  static inline void ValidateType(::System::Type* type, ::StringW paramName);

  /// @brief Method ValidateType, addr 0x2c76890, size 0xec, virtual false, abstract: false, final false
  static inline void ValidateType(::System::Type* type, ::StringW paramName, bool allowByRef, bool allowPointer);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_s_arrayAssignableInterfaces();

  static inline void setStaticF_s_arrayAssignableInterfaces(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeUtils(TypeUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtils(TypeUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::Utils::TypeUtils, 0x10>, "Size mismatch!");

} // namespace System::Dynamic::Utils
NEED_NO_BOX(::System::Dynamic::Utils::TypeUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::TypeUtils*, "System.Dynamic.Utils", "TypeUtils");
NEED_NO_BOX(::System::Dynamic::Utils::__TypeUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::__TypeUtils____c*, "System.Dynamic.Utils", "TypeUtils/<>c");
