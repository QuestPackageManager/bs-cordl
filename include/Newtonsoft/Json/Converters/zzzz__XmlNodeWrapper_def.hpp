#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XmlNodeWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlNodeWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlNodeWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlNodeWrapper);
// Dependencies Newtonsoft.Json.Converters.IXmlNode, System.Object
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.XmlNodeWrapper
class CORDL_TYPE XmlNodeWrapper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Attributes;

  __declspec(property(get = get_ChildNodes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ChildNodes;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  __declspec(property(get = get_HasChildNodes)) bool HasChildNodes;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_NamespaceUri)) ::StringW NamespaceUri;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode)) ::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  __declspec(property(get = get_WrappedNode)) ::System::Object* WrappedNode;

  /// @brief Field _attributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__attributes, put = __cordl_internal_set__attributes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _attributes;

  /// @brief Field _childNodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__childNodes, put = __cordl_internal_set__childNodes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _childNodes;

  /// @brief Field _node, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node)) ::System::Xml::XmlNode* _node;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method AppendChild, addr 0x3f44a64, size 0xa4, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  static inline ::Newtonsoft::Json::Converters::XmlNodeWrapper* New_ctor(::System::Xml::XmlNode* node);

  /// @brief Method WrapNode, addr 0x3f44330, size 0x174, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::XmlNode* node);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* const& __cordl_internal_get__attributes() const;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& __cordl_internal_get__attributes();

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* const& __cordl_internal_get__childNodes() const;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& __cordl_internal_get__childNodes();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get__node() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get__node();

  constexpr void __cordl_internal_set__attributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);

  constexpr void __cordl_internal_set__childNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);

  constexpr void __cordl_internal_set__node(::System::Xml::XmlNode* value);

  /// @brief Method .ctor, addr 0x3f433f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* node);

  /// @brief Method get_Attributes, addr 0x3f444c8, size 0x428, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();

  /// @brief Method get_ChildNodes, addr 0x3f43f00, size 0x430, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();

  /// @brief Method get_HasAttributes, addr 0x3f448f0, size 0xb4, virtual false, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_HasChildNodes, addr 0x3f444a4, size 0x24, virtual true, abstract: false, final false
  inline bool get_HasChildNodes();

  /// @brief Method get_LocalName, addr 0x3f43edc, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceUri, addr 0x3f44b08, size 0x24, virtual true, abstract: false, final true
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_NodeType, addr 0x3f43ebc, size 0x20, virtual true, abstract: false, final true
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0x3f449a4, size 0xa0, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method get_Value, addr 0x3f44a44, size 0x20, virtual true, abstract: false, final true
  inline ::StringW get_Value();

  /// @brief Method get_WrappedNode, addr 0x3f43eb4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_WrappedNode();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  /// @brief Method set_Value, addr 0x3f43ae8, size 0x20, virtual true, abstract: false, final true
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeWrapper(XmlNodeWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeWrapper(XmlNodeWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10488 };

  /// @brief Field _node, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNode* ____node;

  /// @brief Field _childNodes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ____childNodes;

  /// @brief Field _attributes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ____attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeWrapper, ____node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeWrapper, ____childNodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeWrapper, ____attributes) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlNodeWrapper, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlNodeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlNodeWrapper*, "Newtonsoft.Json.Converters", "XmlNodeWrapper");
