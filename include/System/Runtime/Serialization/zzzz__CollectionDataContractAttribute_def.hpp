#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CollectionDataContractAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CollectionDataContractAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class CollectionDataContractAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::CollectionDataContractAttribute);
// Dependencies System.Attribute
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.CollectionDataContractAttribute
class CORDL_TYPE CollectionDataContractAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_IsItemNameSetExplicitly)) bool IsItemNameSetExplicitly;

  __declspec(property(get = get_IsKeyNameSetExplicitly)) bool IsKeyNameSetExplicitly;

  __declspec(property(get = get_IsNameSetExplicitly)) bool IsNameSetExplicitly;

  __declspec(property(get = get_IsNamespaceSetExplicitly)) bool IsNamespaceSetExplicitly;

  __declspec(property(get = get_IsReference)) bool IsReference;

  __declspec(property(get = get_IsValueNameSetExplicitly)) bool IsValueNameSetExplicitly;

  __declspec(property(get = get_ItemName)) ::StringW ItemName;

  __declspec(property(get = get_KeyName)) ::StringW KeyName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_ValueName)) ::StringW ValueName;

  /// @brief Field isItemNameSetExplicitly, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get_isItemNameSetExplicitly, put = __cordl_internal_set_isItemNameSetExplicitly)) bool isItemNameSetExplicitly;

  /// @brief Field isKeyNameSetExplicitly, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_isKeyNameSetExplicitly, put = __cordl_internal_set_isKeyNameSetExplicitly)) bool isKeyNameSetExplicitly;

  /// @brief Field isNameSetExplicitly, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_isNameSetExplicitly, put = __cordl_internal_set_isNameSetExplicitly)) bool isNameSetExplicitly;

  /// @brief Field isNamespaceSetExplicitly, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_isNamespaceSetExplicitly, put = __cordl_internal_set_isNamespaceSetExplicitly)) bool isNamespaceSetExplicitly;

  /// @brief Field isReference, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isReference, put = __cordl_internal_set_isReference)) bool isReference;

  /// @brief Field isValueNameSetExplicitly, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_isValueNameSetExplicitly, put = __cordl_internal_set_isValueNameSetExplicitly)) bool isValueNameSetExplicitly;

  /// @brief Field itemName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_itemName, put = __cordl_internal_set_itemName)) ::StringW itemName;

  /// @brief Field keyName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_keyName, put = __cordl_internal_set_keyName)) ::StringW keyName;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field valueName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_valueName, put = __cordl_internal_set_valueName)) ::StringW valueName;

  constexpr bool const& __cordl_internal_get_isItemNameSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isItemNameSetExplicitly();

  constexpr bool const& __cordl_internal_get_isKeyNameSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isKeyNameSetExplicitly();

  constexpr bool const& __cordl_internal_get_isNameSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isNameSetExplicitly();

  constexpr bool const& __cordl_internal_get_isNamespaceSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isNamespaceSetExplicitly();

  constexpr bool const& __cordl_internal_get_isReference() const;

  constexpr bool& __cordl_internal_get_isReference();

  constexpr bool const& __cordl_internal_get_isValueNameSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isValueNameSetExplicitly();

  constexpr ::StringW const& __cordl_internal_get_itemName() const;

  constexpr ::StringW& __cordl_internal_get_itemName();

  constexpr ::StringW const& __cordl_internal_get_keyName() const;

  constexpr ::StringW& __cordl_internal_get_keyName();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_valueName() const;

  constexpr ::StringW& __cordl_internal_get_valueName();

  constexpr void __cordl_internal_set_isItemNameSetExplicitly(bool value);

  constexpr void __cordl_internal_set_isKeyNameSetExplicitly(bool value);

  constexpr void __cordl_internal_set_isNameSetExplicitly(bool value);

  constexpr void __cordl_internal_set_isNamespaceSetExplicitly(bool value);

  constexpr void __cordl_internal_set_isReference(bool value);

  constexpr void __cordl_internal_set_isValueNameSetExplicitly(bool value);

  constexpr void __cordl_internal_set_itemName(::StringW value);

  constexpr void __cordl_internal_set_keyName(::StringW value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_valueName(::StringW value);

  /// @brief Method get_IsItemNameSetExplicitly, addr 0x5f22b08, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsItemNameSetExplicitly();

  /// @brief Method get_IsKeyNameSetExplicitly, addr 0x5f22b20, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsKeyNameSetExplicitly();

  /// @brief Method get_IsNameSetExplicitly, addr 0x5f22af8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNameSetExplicitly();

  /// @brief Method get_IsNamespaceSetExplicitly, addr 0x5f22ae8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNamespaceSetExplicitly();

  /// @brief Method get_IsReference, addr 0x5f22b18, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method get_IsValueNameSetExplicitly, addr 0x5f22b30, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsValueNameSetExplicitly();

  /// @brief Method get_ItemName, addr 0x5f22b00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ItemName();

  /// @brief Method get_KeyName, addr 0x5f22b10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KeyName();

  /// @brief Method get_Name, addr 0x5f22af0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x5f22ae0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_ValueName, addr 0x5f22b28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ValueName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionDataContractAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContractAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionDataContractAttribute(CollectionDataContractAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContractAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionDataContractAttribute(CollectionDataContractAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16966 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field itemName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___itemName;

  /// @brief Field keyName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___keyName;

  /// @brief Field valueName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___valueName;

  /// @brief Field isReference, offset: 0x38, size: 0x1, def value: None
  bool ___isReference;

  /// @brief Field isNameSetExplicitly, offset: 0x39, size: 0x1, def value: None
  bool ___isNameSetExplicitly;

  /// @brief Field isNamespaceSetExplicitly, offset: 0x3a, size: 0x1, def value: None
  bool ___isNamespaceSetExplicitly;

  /// @brief Field isItemNameSetExplicitly, offset: 0x3b, size: 0x1, def value: None
  bool ___isItemNameSetExplicitly;

  /// @brief Field isKeyNameSetExplicitly, offset: 0x3c, size: 0x1, def value: None
  bool ___isKeyNameSetExplicitly;

  /// @brief Field isValueNameSetExplicitly, offset: 0x3d, size: 0x1, def value: None
  bool ___isValueNameSetExplicitly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___itemName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___keyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___valueName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___isReference) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___isNameSetExplicitly) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___isNamespaceSetExplicitly) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___isItemNameSetExplicitly) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___isKeyNameSetExplicitly) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContractAttribute, ___isValueNameSetExplicitly) == 0x3d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CollectionDataContractAttribute, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::CollectionDataContractAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CollectionDataContractAttribute*, "System.Runtime.Serialization", "CollectionDataContractAttribute");
