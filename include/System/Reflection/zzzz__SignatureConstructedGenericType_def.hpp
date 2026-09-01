#pragma once
// IWYU pragma private; include "System\Reflection\SignatureConstructedGenericType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__SignatureType_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureConstructedGenericType)
namespace System::Reflection {
class SignatureType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class SignatureConstructedGenericType;
}
// Write type traits
MARK_REF_T(::System::Reflection::SignatureConstructedGenericType*);
DEFINE_IL2CPP_CLASS(::System::Reflection::SignatureConstructedGenericType*, "System.Reflection", "SignatureConstructedGenericType");
// Dependencies System.Reflection.SignatureType, System.Type
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.SignatureConstructedGenericType
class CORDL_TYPE SignatureConstructedGenericType : public ::System::Reflection::SignatureType {
public:
  // Declarations
  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_ElementType)) ::System::Reflection::SignatureType* ElementType;

  __declspec(property(get = get_GenericParameterPosition)) int32_t GenericParameterPosition;

  __declspec(property(get = get_GenericTypeArguments)) ::ArrayW<::System::Type*> GenericTypeArguments;

  __declspec(property(get = get_IsConstructedGenericType)) bool IsConstructedGenericType;

  __declspec(property(get = get_IsGenericMethodParameter)) bool IsGenericMethodParameter;

  __declspec(property(get = get_IsGenericParameter)) bool IsGenericParameter;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  /// @brief Field _genericTypeArguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__genericTypeArguments, put = __cordl_internal_set__genericTypeArguments)) ::ArrayW<::System::Type*> _genericTypeArguments;

  /// @brief Field _genericTypeDefinition, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__genericTypeDefinition, put = __cordl_internal_set__genericTypeDefinition)) ::System::Type* _genericTypeDefinition;

  /// @brief Method GetArrayRank, addr 0x5b81a08, size 0x4c, virtual true, abstract: false, final true
  inline int32_t GetArrayRank();

  /// @brief Method GetGenericArguments, addr 0x5b81a5c, size 0x10, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Type*> GetGenericArguments();

  /// @brief Method GetGenericTypeDefinition, addr 0x5b81a54, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method HasElementTypeImpl, addr 0x5b81950, size 0x8, virtual true, abstract: false, final true
  inline bool HasElementTypeImpl();

  /// @brief Method IsArrayImpl, addr 0x5b81958, size 0x8, virtual true, abstract: false, final true
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl, addr 0x5b81960, size 0x8, virtual true, abstract: false, final true
  inline bool IsByRefImpl();

  /// @brief Method IsPointerImpl, addr 0x5b81968, size 0x8, virtual true, abstract: false, final true
  inline bool IsPointerImpl();

  static inline ::System::Reflection::SignatureConstructedGenericType* New_ctor(::System::Type* genericTypeDefinition, ::ArrayW<::System::Type*> typeArguments);

  /// @brief Method ToString, addr 0x5b81b6c, size 0x120, virtual true, abstract: false, final true
  inline ::StringW ToString();

  constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__genericTypeArguments() const;

  constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__genericTypeArguments();

  constexpr ::System::Type* const& __cordl_internal_get__genericTypeDefinition() const;

  constexpr ::System::Type*& __cordl_internal_get__genericTypeDefinition();

  constexpr void __cordl_internal_set__genericTypeArguments(::ArrayW<::System::Type*> value);

  constexpr void __cordl_internal_set__genericTypeDefinition(::System::Type* value);

  /// @brief Method .ctor, addr 0x5b817bc, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* genericTypeDefinition, ::ArrayW<::System::Type*> typeArguments);

  /// @brief Method get_ContainsGenericParameters, addr 0x5b81998, size 0x68, virtual true, abstract: false, final true
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_ElementType, addr 0x5b81a00, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::SignatureType* get_ElementType();

  /// @brief Method get_GenericParameterPosition, addr 0x5b81ae4, size 0x4c, virtual true, abstract: false, final true
  inline int32_t get_GenericParameterPosition();

  /// @brief Method get_GenericTypeArguments, addr 0x5b81a6c, size 0x78, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Type*> get_GenericTypeArguments();

  /// @brief Method get_IsConstructedGenericType, addr 0x5b81980, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsGenericMethodParameter, addr 0x5b81990, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsGenericMethodParameter();

  /// @brief Method get_IsGenericParameter, addr 0x5b81988, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsGenericParameter();

  /// @brief Method get_IsGenericTypeDefinition, addr 0x5b81948, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsSZArray, addr 0x5b81970, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray, addr 0x5b81978, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsVariableBoundArray();

  /// @brief Method get_Name, addr 0x5b81b30, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x5b81b4c, size 0x20, virtual true, abstract: false, final true
  inline ::StringW get_Namespace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureConstructedGenericType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureConstructedGenericType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureConstructedGenericType(SignatureConstructedGenericType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureConstructedGenericType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureConstructedGenericType(SignatureConstructedGenericType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3517 };

  /// @brief Field _genericTypeDefinition, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____genericTypeDefinition;

  /// @brief Field _genericTypeArguments, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Type*> ____genericTypeArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::SignatureConstructedGenericType, ____genericTypeDefinition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::SignatureConstructedGenericType, ____genericTypeArguments) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Reflection::SignatureConstructedGenericType) == 0x28, "Size mismatch!");

} // namespace System::Reflection
