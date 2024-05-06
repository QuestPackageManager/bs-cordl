#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapMemberAttribute)
namespace System::Xml::Schema {
struct XmlSchemaForm;
}
namespace System::Xml::Serialization {
class XmlTypeMapping;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMemberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapMemberAttribute);
// Type: System.Xml.Serialization::XmlTypeMapMemberAttribute
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapMemberAttribute*
class CORDL_TYPE XmlTypeMapMemberAttribute : public ::System::Xml::Serialization::XmlTypeMapMember {
public:
  // Declarations
  __declspec(property(get = get_AttributeName, put = set_AttributeName))::StringW AttributeName;

  __declspec(property(put = set_Form))::System::Xml::Schema::XmlSchemaForm Form;

  __declspec(property(get = get_MappedType, put = set_MappedType))::System::Xml::Serialization::XmlTypeMapping* MappedType;

  __declspec(property(get = get_Namespace, put = set_Namespace))::StringW Namespace;

  /// @brief Field _attributeName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeName, put = __cordl_internal_set__attributeName))::StringW _attributeName;

  /// @brief Field _form, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__form, put = __cordl_internal_set__form))::System::Xml::Schema::XmlSchemaForm _form;

  /// @brief Field _mappedType, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__mappedType, put = __cordl_internal_set__mappedType))::System::Xml::Serialization::XmlTypeMapping* _mappedType;

  /// @brief Field _namespace, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__namespace, put = __cordl_internal_set__namespace))::StringW _namespace;

  static inline ::System::Xml::Serialization::XmlTypeMapMemberAttribute* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__attributeName() const;

  constexpr ::StringW& __cordl_internal_get__attributeName();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get__form() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get__form();

  constexpr ::System::Xml::Serialization::XmlTypeMapping*& __cordl_internal_get__mappedType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapping*> const& __cordl_internal_get__mappedType() const;

  constexpr ::StringW const& __cordl_internal_get__namespace() const;

  constexpr ::StringW& __cordl_internal_get__namespace();

  constexpr void __cordl_internal_set__attributeName(::StringW value);

  constexpr void __cordl_internal_set__form(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set__mappedType(::System::Xml::Serialization::XmlTypeMapping* value);

  constexpr void __cordl_internal_set__namespace(::StringW value);

  /// @brief Method .ctor, addr 0x2eed734, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributeName, addr 0x2eed780, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AttributeName();

  /// @brief Method get_MappedType, addr 0x2eed7a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* get_MappedType();

  /// @brief Method get_Namespace, addr 0x2eed790, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method set_AttributeName, addr 0x2eed788, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeName(::StringW value);

  /// @brief Method set_Form, addr 0x2eed7a0, size 0x8, virtual false, abstract: false, final false
  inline void set_Form(::System::Xml::Schema::XmlSchemaForm value);

  /// @brief Method set_MappedType, addr 0x2eed7b0, size 0x8, virtual false, abstract: false, final false
  inline void set_MappedType(::System::Xml::Serialization::XmlTypeMapping* value);

  /// @brief Method set_Namespace, addr 0x2eed798, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMemberAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMemberAttribute(XmlTypeMapMemberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMemberAttribute(XmlTypeMapMemberAttribute const&) = delete;

  /// @brief Field _attributeName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____attributeName;

  /// @brief Field _namespace, offset: 0x60, size: 0x8, def value: None
  ::StringW ____namespace;

  /// @brief Field _form, offset: 0x68, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ____form;

  /// @brief Field _mappedType, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapping* ____mappedType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMemberAttribute, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberAttribute, ____attributeName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberAttribute, ____namespace) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberAttribute, ____form) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberAttribute, ____mappedType) == 0x70, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberAttribute*, "System.Xml.Serialization", "XmlTypeMapMemberAttribute");
