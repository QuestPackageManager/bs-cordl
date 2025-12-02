#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataContractAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class DataContractAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataContractAttribute);
// Dependencies System.Attribute
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataContractAttribute
class CORDL_TYPE DataContractAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_IsNameSetExplicitly)) bool IsNameSetExplicitly;

  __declspec(property(get = get_IsNamespaceSetExplicitly)) bool IsNamespaceSetExplicitly;

  __declspec(property(get = get_IsReference)) bool IsReference;

  __declspec(property(get = get_IsReferenceSetExplicitly)) bool IsReferenceSetExplicitly;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  /// @brief Field isNameSetExplicitly, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isNameSetExplicitly, put = __cordl_internal_set_isNameSetExplicitly)) bool isNameSetExplicitly;

  /// @brief Field isNamespaceSetExplicitly, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_isNamespaceSetExplicitly, put = __cordl_internal_set_isNamespaceSetExplicitly)) bool isNamespaceSetExplicitly;

  /// @brief Field isReference, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_isReference, put = __cordl_internal_set_isReference)) bool isReference;

  /// @brief Field isReferenceSetExplicitly, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_isReferenceSetExplicitly, put = __cordl_internal_set_isReferenceSetExplicitly)) bool isReferenceSetExplicitly;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  static inline ::System::Runtime::Serialization::DataContractAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get_isNameSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isNameSetExplicitly();

  constexpr bool const& __cordl_internal_get_isNamespaceSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isNamespaceSetExplicitly();

  constexpr bool const& __cordl_internal_get_isReference() const;

  constexpr bool& __cordl_internal_get_isReference();

  constexpr bool const& __cordl_internal_get_isReferenceSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isReferenceSetExplicitly();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr void __cordl_internal_set_isNameSetExplicitly(bool value);

  constexpr void __cordl_internal_set_isNamespaceSetExplicitly(bool value);

  constexpr void __cordl_internal_set_isReference(bool value);

  constexpr void __cordl_internal_set_isReferenceSetExplicitly(bool value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  /// @brief Method .ctor, addr 0x5f2ee44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNameSetExplicitly, addr 0x5f2ee90, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNameSetExplicitly();

  /// @brief Method get_IsNamespaceSetExplicitly, addr 0x5f2ee70, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNamespaceSetExplicitly();

  /// @brief Method get_IsReference, addr 0x5f2ee48, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method get_IsReferenceSetExplicitly, addr 0x5f2ee50, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReferenceSetExplicitly();

  /// @brief Method get_Name, addr 0x5f2ee78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x5f2ee58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method set_Name, addr 0x5f2ee80, size 0x10, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Namespace, addr 0x5f2ee60, size 0x10, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataContractAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataContractAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataContractAttribute(DataContractAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataContractAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataContractAttribute(DataContractAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16976 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field isNameSetExplicitly, offset: 0x20, size: 0x1, def value: None
  bool ___isNameSetExplicitly;

  /// @brief Field isNamespaceSetExplicitly, offset: 0x21, size: 0x1, def value: None
  bool ___isNamespaceSetExplicitly;

  /// @brief Field isReference, offset: 0x22, size: 0x1, def value: None
  bool ___isReference;

  /// @brief Field isReferenceSetExplicitly, offset: 0x23, size: 0x1, def value: None
  bool ___isReferenceSetExplicitly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::DataContractAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractAttribute, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractAttribute, ___isNameSetExplicitly) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractAttribute, ___isNamespaceSetExplicitly) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractAttribute, ___isReference) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractAttribute, ___isReferenceSetExplicitly) == 0x23, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataContractAttribute, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataContractAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContractAttribute*, "System.Runtime.Serialization", "DataContractAttribute");
