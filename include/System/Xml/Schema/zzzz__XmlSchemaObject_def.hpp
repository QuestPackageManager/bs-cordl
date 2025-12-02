#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaObject)
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Serialization {
class XmlSerializerNamespaces;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaObject);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObject
class CORDL_TYPE XmlSchemaObject : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IdAttribute, put = set_IdAttribute)) ::StringW IdAttribute;

  __declspec(property(get = get_IsProcessing, put = set_IsProcessing)) bool IsProcessing;

  __declspec(property(get = get_LineNumber, put = set_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition, put = set_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_NameAttribute, put = set_NameAttribute)) ::StringW NameAttribute;

  __declspec(property(get = get_Namespaces, put = set_Namespaces)) ::System::Xml::Serialization::XmlSerializerNamespaces* Namespaces;

  __declspec(property(get = get_Parent, put = set_Parent)) ::System::Xml::Schema::XmlSchemaObject* Parent;

  __declspec(property(get = get_SourceUri, put = set_SourceUri)) ::StringW SourceUri;

  /// @brief Field isProcessing, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isProcessing, put = __cordl_internal_set_isProcessing)) bool isProcessing;

  /// @brief Field lineNum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNum, put = __cordl_internal_set_lineNum)) int32_t lineNum;

  /// @brief Field linePos, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_linePos, put = __cordl_internal_set_linePos)) int32_t linePos;

  /// @brief Field namespaces, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces)) ::System::Xml::Serialization::XmlSerializerNamespaces* namespaces;

  /// @brief Field parent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::System::Xml::Schema::XmlSchemaObject* parent;

  /// @brief Field sourceUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceUri, put = __cordl_internal_set_sourceUri)) ::StringW sourceUri;

  /// @brief Method AddAnnotation, addr 0x60156b4, size 0x4, virtual true, abstract: false, final false
  inline void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);

  /// @brief Method Clone, addr 0x60156d4, size 0x80, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  static inline ::System::Xml::Schema::XmlSchemaObject* New_ctor();

  /// @brief Method OnAdd, addr 0x6015698, size 0x4, virtual true, abstract: false, final false
  inline void OnAdd(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::System::Object* item);

  /// @brief Method OnClear, addr 0x60156a0, size 0x4, virtual true, abstract: false, final false
  inline void OnClear(::System::Xml::Schema::XmlSchemaObjectCollection* container);

  /// @brief Method OnRemove, addr 0x601569c, size 0x4, virtual true, abstract: false, final false
  inline void OnRemove(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::System::Object* item);

  /// @brief Method SetUnhandledAttributes, addr 0x60156b0, size 0x4, virtual true, abstract: false, final false
  inline void SetUnhandledAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> moreAttributes);

  constexpr bool const& __cordl_internal_get_isProcessing() const;

  constexpr bool& __cordl_internal_get_isProcessing();

  constexpr int32_t const& __cordl_internal_get_lineNum() const;

  constexpr int32_t& __cordl_internal_get_lineNum();

  constexpr int32_t const& __cordl_internal_get_linePos() const;

  constexpr int32_t& __cordl_internal_get_linePos();

  constexpr ::System::Xml::Serialization::XmlSerializerNamespaces* const& __cordl_internal_get_namespaces() const;

  constexpr ::System::Xml::Serialization::XmlSerializerNamespaces*& __cordl_internal_get_namespaces();

  constexpr ::System::Xml::Schema::XmlSchemaObject* const& __cordl_internal_get_parent() const;

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_parent();

  constexpr ::StringW const& __cordl_internal_get_sourceUri() const;

  constexpr ::StringW& __cordl_internal_get_sourceUri();

  constexpr void __cordl_internal_set_isProcessing(bool value);

  constexpr void __cordl_internal_set_lineNum(int32_t value);

  constexpr void __cordl_internal_set_linePos(int32_t value);

  constexpr void __cordl_internal_set_namespaces(::System::Xml::Serialization::XmlSerializerNamespaces* value);

  constexpr void __cordl_internal_set_parent(::System::Xml::Schema::XmlSchemaObject* value);

  constexpr void __cordl_internal_set_sourceUri(::StringW value);

  /// @brief Method .ctor, addr 0x600dbfc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IdAttribute, addr 0x60156a4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_IdAttribute();

  /// @brief Method get_IsProcessing, addr 0x60156c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsProcessing();

  /// @brief Method get_LineNumber, addr 0x6015650, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x6015660, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_NameAttribute, addr 0x60156b8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameAttribute();

  /// @brief Method get_Namespaces, addr 0x600e484, size 0x58, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializerNamespaces* get_Namespaces();

  /// @brief Method get_Parent, addr 0x6015680, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* get_Parent();

  /// @brief Method get_SourceUri, addr 0x6015670, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceUri();

  /// @brief Method set_IdAttribute, addr 0x60156ac, size 0x4, virtual true, abstract: false, final false
  inline void set_IdAttribute(::StringW value);

  /// @brief Method set_IsProcessing, addr 0x60156cc, size 0x8, virtual false, abstract: false, final false
  inline void set_IsProcessing(bool value);

  /// @brief Method set_LineNumber, addr 0x6015658, size 0x8, virtual false, abstract: false, final false
  inline void set_LineNumber(int32_t value);

  /// @brief Method set_LinePosition, addr 0x6015668, size 0x8, virtual false, abstract: false, final false
  inline void set_LinePosition(int32_t value);

  /// @brief Method set_NameAttribute, addr 0x60156c0, size 0x4, virtual true, abstract: false, final false
  inline void set_NameAttribute(::StringW value);

  /// @brief Method set_Namespaces, addr 0x6015690, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespaces(::System::Xml::Serialization::XmlSerializerNamespaces* value);

  /// @brief Method set_Parent, addr 0x6015688, size 0x8, virtual false, abstract: false, final false
  inline void set_Parent(::System::Xml::Schema::XmlSchemaObject* value);

  /// @brief Method set_SourceUri, addr 0x6015678, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceUri(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaObject(XmlSchemaObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaObject(XmlSchemaObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9770 };

  /// @brief Field lineNum, offset: 0x10, size: 0x4, def value: None
  int32_t ___lineNum;

  /// @brief Field linePos, offset: 0x14, size: 0x4, def value: None
  int32_t ___linePos;

  /// @brief Field sourceUri, offset: 0x18, size: 0x8, def value: None
  ::StringW ___sourceUri;

  /// @brief Field namespaces, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializerNamespaces* ___namespaces;

  /// @brief Field parent, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___parent;

  /// @brief Field isProcessing, offset: 0x30, size: 0x1, def value: None
  bool ___isProcessing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObject, ___lineNum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObject, ___linePos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObject, ___sourceUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObject, ___namespaces) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObject, ___parent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObject, ___isProcessing) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaObject, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaObject*, "System.Xml.Schema", "XmlSchemaObject");
