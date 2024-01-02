#pragma once
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
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlLinkedNode;
}
// Forward declare root types
namespace System::Xml {
class XmlEntity;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlEntity);
// Type: System.Xml::XmlEntity
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11520))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11509))
// CS Name: ::System.Xml::XmlEntity*
class CORDL_TYPE XmlEntity : public ::System::Xml::XmlNode {
public:
  // Declarations
  /// @brief Field publicId, offset 0x18, size 0x8
  __declspec(property(get = __get_publicId, put = __set_publicId))::StringW publicId;

  /// @brief Field systemId, offset 0x20, size 0x8
  __declspec(property(get = __get_systemId, put = __set_systemId))::StringW systemId;

  /// @brief Field notationName, offset 0x28, size 0x8
  __declspec(property(get = __get_notationName, put = __set_notationName))::StringW notationName;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field unparsedReplacementStr, offset 0x38, size 0x8
  __declspec(property(get = __get_unparsedReplacementStr, put = __set_unparsedReplacementStr))::StringW unparsedReplacementStr;

  /// @brief Field baseURI, offset 0x40, size 0x8
  __declspec(property(get = __get_baseURI, put = __set_baseURI))::StringW baseURI;

  /// @brief Field lastChild, offset 0x48, size 0x8
  __declspec(property(get = __get_lastChild, put = __set_lastChild))::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Field childrenFoliating, offset 0x50, size 0x1
  __declspec(property(get = __get_childrenFoliating, put = __set_childrenFoliating)) bool childrenFoliating;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_InnerText, put = set_InnerText))::StringW InnerText;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_LastNode, put = set_LastNode))::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_SystemId))::StringW SystemId;

  __declspec(property(put = set_InnerXml))::StringW InnerXml;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  constexpr ::StringW& __get_publicId();

  constexpr ::StringW const& __get_publicId() const;

  constexpr void __set_publicId(::StringW value);

  constexpr ::StringW& __get_systemId();

  constexpr ::StringW const& __get_systemId() const;

  constexpr void __set_systemId(::StringW value);

  constexpr ::StringW& __get_notationName();

  constexpr ::StringW const& __get_notationName() const;

  constexpr void __set_notationName(::StringW value);

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::StringW& __get_unparsedReplacementStr();

  constexpr ::StringW const& __get_unparsedReplacementStr() const;

  constexpr void __set_unparsedReplacementStr(::StringW value);

  constexpr ::StringW& __get_baseURI();

  constexpr ::StringW const& __get_baseURI() const;

  constexpr void __set_baseURI(::StringW value);

  constexpr ::System::Xml::XmlLinkedNode*& __get_lastChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& __get_lastChild() const;

  constexpr void __set_lastChild(::System::Xml::XmlLinkedNode* value);

  constexpr bool& __get_childrenFoliating();

  constexpr bool const& __get_childrenFoliating() const;

  constexpr void __set_childrenFoliating(bool value);

  static inline ::System::Xml::XmlEntity* New_ctor(::StringW name, ::StringW strdata, ::StringW publicId, ::StringW systemId, ::StringW notationName, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x28893b4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW strdata, ::StringW publicId, ::StringW systemId, ::StringW notationName, ::System::Xml::XmlDocument* doc);

  /// @brief Method CloneNode, addr 0x28894b8, size 0x60, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_IsReadOnly, addr 0x2889518, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x2889520, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x2889528, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_InnerText, addr 0x2889530, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method set_InnerText, addr 0x2889534, size 0x60, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method get_IsContainer, addr 0x2889594, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_LastNode, addr 0x288959c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method set_LastNode, addr 0x2889674, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method IsValidChildType, addr 0x288967c, size 0x3c, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  /// @brief Method get_NodeType, addr 0x28896b8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_SystemId, addr 0x28896c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SystemId();

  /// @brief Method set_InnerXml, addr 0x28896c8, size 0x60, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method get_BaseURI, addr 0x2889728, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method SetBaseURI, addr 0x2889730, size 0x8, virtual false, abstract: false, final false
  inline void SetBaseURI(::StringW inBaseURI);

  // Ctor Parameters [CppParam { name: "", ty: "XmlEntity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlEntity(XmlEntity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlEntity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlEntity(XmlEntity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlEntity();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlEntity, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___publicId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___systemId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___notationName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___unparsedReplacementStr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___baseURI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___lastChild) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntity, ___childrenFoliating) == 0x50, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlEntity);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEntity*, "System.Xml", "XmlEntity");
