#pragma once
// IWYU pragma private; include "System/Xml/Linq/XObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XObject)
namespace System::Xml::Linq {
struct SaveOptions;
}
namespace System::Xml::Linq {
class XContainer;
}
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XObject);
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XObject
class CORDL_TYPE XObject : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseUri)) ::StringW BaseUri;

  __declspec(property(get = get_HasBaseUri)) bool HasBaseUri;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Parent)) ::System::Xml::Linq::XElement* Parent;

  __declspec(property(get = System_Xml_IXmlLineInfo_get_LineNumber)) int32_t System_Xml_IXmlLineInfo_LineNumber;

  __declspec(property(get = System_Xml_IXmlLineInfo_get_LinePosition)) int32_t System_Xml_IXmlLineInfo_LinePosition;

  /// @brief Field annotations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_annotations, put = __cordl_internal_set_annotations)) ::System::Object* annotations;

  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::System::Xml::Linq::XContainer* parent;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Method AddAnnotation, addr 0x5ff4e8c, size 0x224, virtual false, abstract: false, final false
  inline void AddAnnotation(::System::Object* annotation);

  /// @brief Method Annotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Annotation();

  /// @brief Method AnnotationForSealedType, addr 0x5ff6c1c, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Object* AnnotationForSealedType(::System::Type* type);

  /// @brief Method GetSaveOptionsFromAnnotations, addr 0x5ff66ec, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::SaveOptions GetSaveOptionsFromAnnotations();

  static inline ::System::Xml::Linq::XObject* New_ctor();

  /// @brief Method NotifyChanged, addr 0x5feefd8, size 0xac, virtual false, abstract: false, final false
  inline bool NotifyChanged(::System::Object* sender, ::System::Xml::Linq::XObjectChangeEventArgs* e);

  /// @brief Method NotifyChanging, addr 0x5feef2c, size 0xac, virtual false, abstract: false, final false
  inline bool NotifyChanging(::System::Object* sender, ::System::Xml::Linq::XObjectChangeEventArgs* e);

  /// @brief Method SetBaseUri, addr 0x5ff2ec4, size 0x64, virtual false, abstract: false, final false
  inline void SetBaseUri(::StringW baseUri);

  /// @brief Method SetLineInfo, addr 0x5ff2f28, size 0x68, virtual false, abstract: false, final false
  inline void SetLineInfo(int32_t lineNumber, int32_t linePosition);

  /// @brief Method SkipNotify, addr 0x5ff034c, size 0x74, virtual false, abstract: false, final false
  inline bool SkipNotify();

  /// @brief Method System.Xml.IXmlLineInfo.HasLineInfo, addr 0x5ff6d48, size 0x58, virtual true, abstract: false, final true
  inline bool System_Xml_IXmlLineInfo_HasLineInfo();

  /// @brief Method System.Xml.IXmlLineInfo.get_LineNumber, addr 0x5ff6da0, size 0x58, virtual true, abstract: false, final true
  inline int32_t System_Xml_IXmlLineInfo_get_LineNumber();

  /// @brief Method System.Xml.IXmlLineInfo.get_LinePosition, addr 0x5ff6df8, size 0x58, virtual true, abstract: false, final true
  inline int32_t System_Xml_IXmlLineInfo_get_LinePosition();

  constexpr ::System::Object* const& __cordl_internal_get_annotations() const;

  constexpr ::System::Object*& __cordl_internal_get_annotations();

  constexpr ::System::Xml::Linq::XContainer* const& __cordl_internal_get_parent() const;

  constexpr ::System::Xml::Linq::XContainer*& __cordl_internal_get_parent();

  constexpr void __cordl_internal_set_annotations(::System::Object* value);

  constexpr void __cordl_internal_set_parent(::System::Xml::Linq::XContainer* value);

  /// @brief Method .ctor, addr 0x5fee724, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseUri, addr 0x5ff3050, size 0x80, virtual false, abstract: false, final false
  inline ::StringW get_BaseUri();

  /// @brief Method get_HasBaseUri, addr 0x5ff2ff8, size 0x58, virtual false, abstract: false, final false
  inline bool get_HasBaseUri();

  /// @brief Method get_NodeType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Parent, addr 0x5ff6b9c, size 0x80, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XElement* get_Parent();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XObject(XObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XObject(XObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21801 };

  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::XContainer* ___parent;

  /// @brief Field annotations, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___annotations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XObject, ___parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XObject, ___annotations) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XObject, 0x20>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObject*, "System.Xml.Linq", "XObject");
