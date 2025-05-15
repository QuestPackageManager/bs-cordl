#pragma once
// IWYU pragma private; include "System/Xml/XmlEntity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlEntity)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlEntity;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlEntity);
// Dependencies System.Xml.XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlEntity
class CORDL_TYPE XmlEntity : public ::System::Xml::XmlNode {
public:
  // Declarations
  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_InnerText, put = set_InnerText)) ::StringW InnerText;

  __declspec(property(put = set_InnerXml)) ::StringW InnerXml;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_LastNode, put = set_LastNode)) ::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_SystemId)) ::StringW SystemId;

  /// @brief Field baseURI, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_baseURI, put = __cordl_internal_set_baseURI)) ::StringW baseURI;

  /// @brief Field childrenFoliating, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_childrenFoliating, put = __cordl_internal_set_childrenFoliating)) bool childrenFoliating;

  /// @brief Field lastChild, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild)) ::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field notationName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_notationName, put = __cordl_internal_set_notationName)) ::StringW notationName;

  /// @brief Field publicId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicId, put = __cordl_internal_set_publicId)) ::StringW publicId;

  /// @brief Field systemId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_systemId, put = __cordl_internal_set_systemId)) ::StringW systemId;

  /// @brief Field unparsedReplacementStr, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_unparsedReplacementStr, put = __cordl_internal_set_unparsedReplacementStr)) ::StringW unparsedReplacementStr;

  /// @brief Method CloneNode, addr 0x433caf4, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method IsValidChildType, addr 0x433ccac, size 0x24, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  static inline ::System::Xml::XmlEntity* New_ctor(::StringW name, ::StringW strdata, ::StringW publicId, ::StringW systemId, ::StringW notationName, ::System::Xml::XmlDocument* doc);

  /// @brief Method SetBaseURI, addr 0x433cd48, size 0x8, virtual false, abstract: false, final false
  inline void SetBaseURI(::StringW inBaseURI);

  /// @brief Method WriteContentTo, addr 0x433cd3c, size 0x4, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x433cd38, size 0x4, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr ::StringW const& __cordl_internal_get_baseURI() const;

  constexpr ::StringW& __cordl_internal_get_baseURI();

  constexpr bool const& __cordl_internal_get_childrenFoliating() const;

  constexpr bool& __cordl_internal_get_childrenFoliating();

  constexpr ::System::Xml::XmlLinkedNode* const& __cordl_internal_get_lastChild() const;

  constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_lastChild();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_notationName() const;

  constexpr ::StringW& __cordl_internal_get_notationName();

  constexpr ::StringW const& __cordl_internal_get_publicId() const;

  constexpr ::StringW& __cordl_internal_get_publicId();

  constexpr ::StringW const& __cordl_internal_get_systemId() const;

  constexpr ::StringW& __cordl_internal_get_systemId();

  constexpr ::StringW const& __cordl_internal_get_unparsedReplacementStr() const;

  constexpr ::StringW& __cordl_internal_get_unparsedReplacementStr();

  constexpr void __cordl_internal_set_baseURI(::StringW value);

  constexpr void __cordl_internal_set_childrenFoliating(bool value);

  constexpr void __cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_notationName(::StringW value);

  constexpr void __cordl_internal_set_publicId(::StringW value);

  constexpr void __cordl_internal_set_systemId(::StringW value);

  constexpr void __cordl_internal_set_unparsedReplacementStr(::StringW value);

  /// @brief Method .ctor, addr 0x433ca70, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW strdata, ::StringW publicId, ::StringW systemId, ::StringW notationName, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_BaseURI, addr 0x433cd40, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_InnerText, addr 0x433cb64, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method get_IsContainer, addr 0x433cbc4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_IsReadOnly, addr 0x433cb4c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_LastNode, addr 0x433cbcc, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method get_LocalName, addr 0x433cb5c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x433cb54, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x433ccd0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_SystemId, addr 0x433ccd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SystemId();

  /// @brief Method set_InnerText, addr 0x433cb6c, size 0x58, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_InnerXml, addr 0x433cce0, size 0x58, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method set_LastNode, addr 0x433cca4, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlEntity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlEntity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlEntity(XmlEntity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlEntity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlEntity(XmlEntity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7299 };

  /// @brief Field publicId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___publicId;

  /// @brief Field systemId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___systemId;

  /// @brief Field notationName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___notationName;

  /// @brief Field name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field unparsedReplacementStr, offset: 0x38, size: 0x8, def value: None
  ::StringW ___unparsedReplacementStr;

  /// @brief Field baseURI, offset: 0x40, size: 0x8, def value: None
  ::StringW ___baseURI;

  /// @brief Field lastChild, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  /// @brief Field childrenFoliating, offset: 0x50, size: 0x1, def value: None
  bool ___childrenFoliating;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlEntity, ___publicId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___systemId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___notationName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___unparsedReplacementStr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___baseURI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___lastChild) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___childrenFoliating) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlEntity, 0x58>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlEntity);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEntity*, "System.Xml", "XmlEntity");
