#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CodeTypeReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__CodeTypeReferenceOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodeTypeReference)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::Serialization {
struct CodeTypeReferenceOptions;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class CodeTypeReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::CodeTypeReference);
// Dependencies System.Object, System.Runtime.Serialization.CodeTypeReferenceOptions
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.CodeTypeReference
class CORDL_TYPE CodeTypeReference : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseType)) ::StringW BaseType;

  __declspec(property(get = get_Options, put = set_Options)) ::System::Runtime::Serialization::CodeTypeReferenceOptions Options;

  __declspec(property(get = get_TypeArguments)) ::System::Collections::Generic::List_1<::System::Runtime::Serialization::CodeTypeReference*>* TypeArguments;

  /// @brief Field arrayElementType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_arrayElementType, put = __cordl_internal_set_arrayElementType)) ::System::Runtime::Serialization::CodeTypeReference* arrayElementType;

  /// @brief Field arrayRank, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_arrayRank, put = __cordl_internal_set_arrayRank)) int32_t arrayRank;

  /// @brief Field baseType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseType, put = __cordl_internal_set_baseType)) ::StringW baseType;

  /// @brief Field needsFixup, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_needsFixup, put = __cordl_internal_set_needsFixup)) bool needsFixup;

  /// @brief Field referenceOptions, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_referenceOptions, put = __cordl_internal_set_referenceOptions)) ::System::Runtime::Serialization::CodeTypeReferenceOptions referenceOptions;

  /// @brief Field typeArguments, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_typeArguments,
                      put = __cordl_internal_set_typeArguments)) ::System::Collections::Generic::List_1<::System::Runtime::Serialization::CodeTypeReference*>* typeArguments;

  /// @brief Method Initialize, addr 0x5f60558, size 0x8, virtual false, abstract: false, final false
  inline void Initialize(::StringW typeName);

  /// @brief Method Initialize, addr 0x5f5fd18, size 0x838, virtual false, abstract: false, final false
  inline void Initialize(::StringW typeName, ::System::Runtime::Serialization::CodeTypeReferenceOptions options);

  static inline ::System::Runtime::Serialization::CodeTypeReference* New_ctor(::System::Runtime::Serialization::CodeTypeReference* arrayType, int32_t rank);

  static inline ::System::Runtime::Serialization::CodeTypeReference* New_ctor(::StringW typeName);

  static inline ::System::Runtime::Serialization::CodeTypeReference* New_ctor(::StringW typeName, ::System::Runtime::Serialization::CodeTypeReferenceOptions codeTypeReferenceOption);

  /// @brief Method RipOffAssemblyInformationFromTypeName, addr 0x5f60560, size 0x1e0, virtual false, abstract: false, final false
  inline ::StringW RipOffAssemblyInformationFromTypeName(::StringW typeName);

  constexpr ::System::Runtime::Serialization::CodeTypeReference* const& __cordl_internal_get_arrayElementType() const;

  constexpr ::System::Runtime::Serialization::CodeTypeReference*& __cordl_internal_get_arrayElementType();

  constexpr int32_t const& __cordl_internal_get_arrayRank() const;

  constexpr int32_t& __cordl_internal_get_arrayRank();

  constexpr ::StringW const& __cordl_internal_get_baseType() const;

  constexpr ::StringW& __cordl_internal_get_baseType();

  constexpr bool const& __cordl_internal_get_needsFixup() const;

  constexpr bool& __cordl_internal_get_needsFixup();

  constexpr ::System::Runtime::Serialization::CodeTypeReferenceOptions const& __cordl_internal_get_referenceOptions() const;

  constexpr ::System::Runtime::Serialization::CodeTypeReferenceOptions& __cordl_internal_get_referenceOptions();

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::CodeTypeReference*>* const& __cordl_internal_get_typeArguments() const;

  constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::CodeTypeReference*>*& __cordl_internal_get_typeArguments();

  constexpr void __cordl_internal_set_arrayElementType(::System::Runtime::Serialization::CodeTypeReference* value);

  constexpr void __cordl_internal_set_arrayRank(int32_t value);

  constexpr void __cordl_internal_set_baseType(::StringW value);

  constexpr void __cordl_internal_set_needsFixup(bool value);

  constexpr void __cordl_internal_set_referenceOptions(::System::Runtime::Serialization::CodeTypeReferenceOptions value);

  constexpr void __cordl_internal_set_typeArguments(::System::Collections::Generic::List_1<::System::Runtime::Serialization::CodeTypeReference*>* value);

  /// @brief Method .ctor, addr 0x5f607e8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::CodeTypeReference* arrayType, int32_t rank);

  /// @brief Method .ctor, addr 0x5f60550, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName);

  /// @brief Method .ctor, addr 0x5f5fd14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName, ::System::Runtime::Serialization::CodeTypeReferenceOptions codeTypeReferenceOption);

  /// @brief Method get_BaseType, addr 0x5f607f8, size 0x144, virtual false, abstract: false, final false
  inline ::StringW get_BaseType();

  /// @brief Method get_Options, addr 0x5f6093c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::CodeTypeReferenceOptions get_Options();

  /// @brief Method get_TypeArguments, addr 0x5f60740, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::CodeTypeReference*>* get_TypeArguments();

  /// @brief Method set_Options, addr 0x5f60944, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::System::Runtime::Serialization::CodeTypeReferenceOptions value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeTypeReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeTypeReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeTypeReference(CodeTypeReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeTypeReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeTypeReference(CodeTypeReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17111 };

  /// @brief Field baseType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___baseType;

  /// @brief Field arrayRank, offset: 0x18, size: 0x4, def value: None
  int32_t ___arrayRank;

  /// @brief Field arrayElementType, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::CodeTypeReference* ___arrayElementType;

  /// @brief Field typeArguments, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Runtime::Serialization::CodeTypeReference*>* ___typeArguments;

  /// @brief Field referenceOptions, offset: 0x30, size: 0x4, def value: None
  ::System::Runtime::Serialization::CodeTypeReferenceOptions ___referenceOptions;

  /// @brief Field needsFixup, offset: 0x34, size: 0x1, def value: None
  bool ___needsFixup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CodeTypeReference, ___baseType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CodeTypeReference, ___arrayRank) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CodeTypeReference, ___arrayElementType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CodeTypeReference, ___typeArguments) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CodeTypeReference, ___referenceOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CodeTypeReference, ___needsFixup) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CodeTypeReference, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::CodeTypeReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CodeTypeReference*, "System.Runtime.Serialization", "CodeTypeReference");
