#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IXmlNode)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::IXmlNode);
// Type: Newtonsoft.Json.Converters::IXmlNode
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12057))
// CS Name: ::Newtonsoft.Json.Converters::IXmlNode*
class CORDL_TYPE IXmlNode {
public:
  // Declarations
  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_ChildNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ChildNodes;

  __declspec(property(get = get_Attributes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Attributes;

  __declspec(property(get = get_ParentNode))::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_NamespaceUri))::StringW NamespaceUri;

  __declspec(property(get = get_WrappedNode))::System::Object* WrappedNode;

  /// @brief Method get_NodeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_LocalName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_ChildNodes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();

  /// @brief Method get_Attributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();

  /// @brief Method get_ParentNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Value(::StringW value);

  /// @brief Method AppendChild, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  /// @brief Method get_NamespaceUri, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_WrappedNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_WrappedNode();

  // Ctor Parameters [CppParam { name: "", ty: "IXmlNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXmlNode(IXmlNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlNode(IXmlNode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::IXmlNode);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IXmlNode*, "Newtonsoft.Json.Converters", "IXmlNode");
