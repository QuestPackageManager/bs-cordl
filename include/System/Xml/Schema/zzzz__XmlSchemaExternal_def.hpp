#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaExternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Compositor_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaExternal)
namespace System::Xml::Schema {
struct Compositor;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaExternal;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaExternal);
// Type: System.Xml.Schema::XmlSchemaExternal
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaExternal*
class CORDL_TYPE XmlSchemaExternal : public ::System::Xml::Schema::XmlSchemaObject {
public:
  // Declarations
  __declspec(property(get = get_BaseUri, put = set_BaseUri)) ::System::Uri* BaseUri;

  __declspec(property(get = get_Compositor, put = set_Compositor)) ::System::Xml::Schema::Compositor Compositor;

  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  __declspec(property(get = get_IdAttribute, put = set_IdAttribute)) ::StringW IdAttribute;

  __declspec(property(get = get_Schema, put = set_Schema)) ::System::Xml::Schema::XmlSchema* Schema;

  __declspec(property(get = get_SchemaLocation, put = set_SchemaLocation)) ::StringW SchemaLocation;

  /// @brief Field baseUri, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_baseUri, put = __cordl_internal_set_baseUri)) ::System::Uri* baseUri;

  /// @brief Field compositor, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_compositor, put = __cordl_internal_set_compositor)) ::System::Xml::Schema::Compositor compositor;

  /// @brief Field id, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field location, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_location, put = __cordl_internal_set_location)) ::StringW location;

  /// @brief Field moreAttributes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_moreAttributes, put = __cordl_internal_set_moreAttributes)) ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>
      moreAttributes;

  /// @brief Field schema, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_schema, put = __cordl_internal_set_schema)) ::System::Xml::Schema::XmlSchema* schema;

  static inline ::System::Xml::Schema::XmlSchemaExternal* New_ctor();

  /// @brief Method SetUnhandledAttributes, addr 0x425c0d0, size 0x8, virtual true, abstract: false, final false
  inline void SetUnhandledAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> moreAttributes);

  constexpr ::System::Uri*& __cordl_internal_get_baseUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_baseUri() const;

  constexpr ::System::Xml::Schema::Compositor const& __cordl_internal_get_compositor() const;

  constexpr ::System::Xml::Schema::Compositor& __cordl_internal_get_compositor();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::StringW const& __cordl_internal_get_location() const;

  constexpr ::StringW& __cordl_internal_get_location();

  constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> const& __cordl_internal_get_moreAttributes() const;

  constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>& __cordl_internal_get_moreAttributes();

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schema();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchema*> const& __cordl_internal_get_schema() const;

  constexpr void __cordl_internal_set_baseUri(::System::Uri* value);

  constexpr void __cordl_internal_set_compositor(::System::Xml::Schema::Compositor value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_location(::StringW value);

  constexpr void __cordl_internal_set_moreAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> value);

  constexpr void __cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value);

  /// @brief Method .ctor, addr 0x425c0e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseUri, addr 0x425c0b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_BaseUri();

  /// @brief Method get_Compositor, addr 0x425c0d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::Compositor get_Compositor();

  /// @brief Method get_Id, addr 0x425c0a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_IdAttribute, addr 0x425c0c0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_IdAttribute();

  /// @brief Method get_Schema, addr 0x425c090, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* get_Schema();

  /// @brief Method get_SchemaLocation, addr 0x425c080, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SchemaLocation();

  /// @brief Method set_BaseUri, addr 0x425c0b8, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseUri(::System::Uri* value);

  /// @brief Method set_Compositor, addr 0x425c0e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Compositor(::System::Xml::Schema::Compositor value);

  /// @brief Method set_Id, addr 0x425c0a8, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_IdAttribute, addr 0x425c0c8, size 0x8, virtual true, abstract: false, final false
  inline void set_IdAttribute(::StringW value);

  /// @brief Method set_Schema, addr 0x425c098, size 0x8, virtual false, abstract: false, final false
  inline void set_Schema(::System::Xml::Schema::XmlSchema* value);

  /// @brief Method set_SchemaLocation, addr 0x425c088, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaLocation(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaExternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaExternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaExternal(XmlSchemaExternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaExternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaExternal(XmlSchemaExternal const&) = delete;

  /// @brief Field location, offset: 0x38, size: 0x8, def value: None
  ::StringW ___location;

  /// @brief Field baseUri, offset: 0x40, size: 0x8, def value: None
  ::System::Uri* ___baseUri;

  /// @brief Field schema, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schema;

  /// @brief Field id, offset: 0x50, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field moreAttributes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> ___moreAttributes;

  /// @brief Field compositor, offset: 0x60, size: 0x4, def value: None
  ::System::Xml::Schema::Compositor ___compositor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7647 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaExternal, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaExternal, ___location) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaExternal, ___baseUri) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaExternal, ___schema) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaExternal, ___id) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaExternal, ___moreAttributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaExternal, ___compositor) == 0x60, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaExternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaExternal*, "System.Xml.Schema", "XmlSchemaExternal");
