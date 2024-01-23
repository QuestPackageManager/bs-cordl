#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemberDescriptor)
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class ISite;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class MemberDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::MemberDescriptor);
// Type: System.ComponentModel::MemberDescriptor
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9474))
// CS Name: ::System.ComponentModel::MemberDescriptor*
class CORDL_TYPE MemberDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field displayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName))::StringW displayName;

  /// @brief Field nameHash, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nameHash, put = __cordl_internal_set_nameHash)) int32_t nameHash;

  /// @brief Field attributeCollection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeCollection, put = __cordl_internal_set_attributeCollection))::System::ComponentModel::AttributeCollection* attributeCollection;

  /// @brief Field attributes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes;

  /// @brief Field originalAttributes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_originalAttributes, put = __cordl_internal_set_originalAttributes))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> originalAttributes;

  /// @brief Field attributesFiltered, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_attributesFiltered, put = __cordl_internal_set_attributesFiltered)) bool attributesFiltered;

  /// @brief Field attributesFilled, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_attributesFilled, put = __cordl_internal_set_attributesFilled)) bool attributesFilled;

  /// @brief Field metadataVersion, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_metadataVersion, put = __cordl_internal_set_metadataVersion)) int32_t metadataVersion;

  /// @brief Field category, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_category, put = __cordl_internal_set_category))::StringW category;

  /// @brief Field description, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_description, put = __cordl_internal_set_description))::StringW description;

  /// @brief Field lockCookie, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_lockCookie, put = __cordl_internal_set_lockCookie))::System::Object* lockCookie;

  __declspec(property(get = get_AttributeArray, put = set_AttributeArray))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> AttributeArray;

  __declspec(property(get = get_Attributes))::System::ComponentModel::AttributeCollection* Attributes;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NameHashCode)) int32_t NameHashCode;

  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr int32_t& __cordl_internal_get_nameHash();

  constexpr int32_t const& __cordl_internal_get_nameHash() const;

  constexpr void __cordl_internal_set_nameHash(int32_t value);

  constexpr ::System::ComponentModel::AttributeCollection*& __cordl_internal_get_attributeCollection();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::AttributeCollection*> const& __cordl_internal_get_attributeCollection() const;

  constexpr void __cordl_internal_set_attributeCollection(::System::ComponentModel::AttributeCollection* value);

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get_attributes();

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get_attributes() const;

  constexpr void __cordl_internal_set_attributes(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get_originalAttributes();

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get_originalAttributes() const;

  constexpr void __cordl_internal_set_originalAttributes(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  constexpr bool& __cordl_internal_get_attributesFiltered();

  constexpr bool const& __cordl_internal_get_attributesFiltered() const;

  constexpr void __cordl_internal_set_attributesFiltered(bool value);

  constexpr bool& __cordl_internal_get_attributesFilled();

  constexpr bool const& __cordl_internal_get_attributesFilled() const;

  constexpr void __cordl_internal_set_attributesFilled(bool value);

  constexpr int32_t& __cordl_internal_get_metadataVersion();

  constexpr int32_t const& __cordl_internal_get_metadataVersion() const;

  constexpr void __cordl_internal_set_metadataVersion(int32_t value);

  constexpr ::StringW& __cordl_internal_get_category();

  constexpr ::StringW const& __cordl_internal_get_category() const;

  constexpr void __cordl_internal_set_category(::StringW value);

  constexpr ::StringW& __cordl_internal_get_description();

  constexpr ::StringW const& __cordl_internal_get_description() const;

  constexpr void __cordl_internal_set_description(::StringW value);

  constexpr ::System::Object*& __cordl_internal_get_lockCookie();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_lockCookie() const;

  constexpr void __cordl_internal_set_lockCookie(::System::Object* value);

  static inline ::System::ComponentModel::MemberDescriptor* New_ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method .ctor, addr 0x291d06c, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  static inline ::System::ComponentModel::MemberDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* oldMemberDescriptor,
                                                                     ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> newAttributes);

  /// @brief Method .ctor, addr 0x291d210, size 0x428, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::MemberDescriptor* oldMemberDescriptor, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> newAttributes);

  /// @brief Method get_AttributeArray, addr 0x291d638, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> get_AttributeArray();

  /// @brief Method set_AttributeArray, addr 0x291de50, size 0xc4, virtual true, abstract: false, final false
  inline void set_AttributeArray(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  /// @brief Method get_Attributes, addr 0x291df14, size 0xe8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* get_Attributes();

  /// @brief Method get_Name, addr 0x291dffc, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameHashCode, addr 0x291e04c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_NameHashCode();

  /// @brief Method get_DisplayName, addr 0x291e054, size 0x128, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method CheckAttributesValid, addr 0x291d658, size 0xb0, virtual false, abstract: false, final false
  inline void CheckAttributesValid();

  /// @brief Method CreateAttributeCollection, addr 0x291e17c, size 0x7c, virtual true, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* CreateAttributeCollection();

  /// @brief Method Equals, addr 0x291e1f8, size 0x264, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method FillAttributes, addr 0x29178e8, size 0xf4, virtual true, abstract: false, final false
  inline void FillAttributes(::System::Collections::IList* attributeList);

  /// @brief Method FilterAttributesIfNeeded, addr 0x291d708, size 0x748, virtual false, abstract: false, final false
  inline void FilterAttributesIfNeeded();

  /// @brief Method FindMethod, addr 0x2917e2c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* FindMethod(::System::Type* componentClass, ::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> args, ::System::Type* returnType);

  /// @brief Method FindMethod, addr 0x291e45c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* FindMethod(::System::Type* componentClass, ::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> args, ::System::Type* returnType,
                                                             bool publicOnly);

  /// @brief Method GetHashCode, addr 0x291e500, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInvocationTarget, addr 0x291e508, size 0x110, virtual true, abstract: false, final false
  inline ::System::Object* GetInvocationTarget(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetSite, addr 0x291ecec, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ISite* GetSite(::System::Object* component);

  // Ctor Parameters [CppParam { name: "", ty: "MemberDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberDescriptor(MemberDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberDescriptor(MemberDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberDescriptor();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field nameHash, offset: 0x20, size: 0x4, def value: None
  int32_t ___nameHash;

  /// @brief Field attributeCollection, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::AttributeCollection* ___attributeCollection;

  /// @brief Field attributes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ___attributes;

  /// @brief Field originalAttributes, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ___originalAttributes;

  /// @brief Field attributesFiltered, offset: 0x40, size: 0x1, def value: None
  bool ___attributesFiltered;

  /// @brief Field attributesFilled, offset: 0x41, size: 0x1, def value: None
  bool ___attributesFilled;

  /// @brief Field metadataVersion, offset: 0x44, size: 0x4, def value: None
  int32_t ___metadataVersion;

  /// @brief Field category, offset: 0x48, size: 0x8, def value: None
  ::StringW ___category;

  /// @brief Field description, offset: 0x50, size: 0x8, def value: None
  ::StringW ___description;

  /// @brief Field lockCookie, offset: 0x58, size: 0x8, def value: None
  ::System::Object* ___lockCookie;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::MemberDescriptor, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___nameHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___attributeCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___attributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___originalAttributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___attributesFiltered) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___attributesFilled) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___metadataVersion) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___category) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___description) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MemberDescriptor, ___lockCookie) == 0x58, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::MemberDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MemberDescriptor*, "System.ComponentModel", "MemberDescriptor");
