#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlNodeWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Type: Newtonsoft.Json.Converters::XmlNodeWrapper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11980))
// CS Name: ::Newtonsoft.Json.Converters::XmlNodeWrapper*
class CORDL_TYPE XmlNodeWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _node, offset 0x10, size 0x8
  __declspec(property(get = __get__node, put = __set__node))::System::Xml::XmlNode* _node;

  /// @brief Field _childNodes, offset 0x18, size 0x8
  __declspec(property(get = __get__childNodes, put = __set__childNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _childNodes;

  /// @brief Field _attributes, offset 0x20, size 0x8
  __declspec(property(get = __get__attributes, put = __set__attributes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _attributes;

  __declspec(property(get = get_WrappedNode))::System::Object* WrappedNode;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_ChildNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ChildNodes;

  __declspec(property(get = get_Attributes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Attributes;

  __declspec(property(get = get_ParentNode))::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_NamespaceUri))::StringW NamespaceUri;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  constexpr ::System::Xml::XmlNode*& __get__node();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __get__node() const;

  constexpr void __set__node(::System::Xml::XmlNode* value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& __get__childNodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*> const& __get__childNodes() const;

  constexpr void __set__childNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& __get__attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*> const& __get__attributes() const;

  constexpr void __set__attributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);

  static inline ::Newtonsoft::Json::Converters::XmlNodeWrapper* New_ctor(::System::Xml::XmlNode* node);

  /// @brief Method .ctor addr 0x25550b4 size 0x28 virtual false final false
  inline void _ctor(::System::Xml::XmlNode* node);

  /// @brief Method get_WrappedNode addr 0x2555ba8 size 0x8 virtual true final true
  inline ::System::Object* get_WrappedNode();

  /// @brief Method get_NodeType addr 0x2555bb0 size 0x20 virtual true final true
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_LocalName addr 0x2555bd0 size 0x24 virtual true final false
  inline ::StringW get_LocalName();

  /// @brief Method get_ChildNodes addr 0x2555bf4 size 0x3dc virtual true final true
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();

  /// @brief Method WrapNode addr 0x2555fd0 size 0x184 virtual false final false
  static inline ::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::XmlNode* node);

  /// @brief Method get_Attributes addr 0x2556154 size 0x424 virtual true final true
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();

  /// @brief Method get_ParentNode addr 0x2556578 size 0xa0 virtual true final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method get_Value addr 0x2556618 size 0x20 virtual true final true
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x25557d4 size 0x20 virtual true final true
  inline void set_Value(::StringW value);

  /// @brief Method AppendChild addr 0x2556638 size 0xa4 virtual true final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  /// @brief Method get_NamespaceUri addr 0x25566dc size 0x24 virtual true final true
  inline ::StringW get_NamespaceUri();

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeWrapper(XmlNodeWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeWrapper(XmlNodeWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeWrapper();

public:
  /// @brief Field _node, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNode* ____node;

  /// @brief Field _childNodes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ____childNodes;

  /// @brief Field _attributes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ____attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlNodeWrapper, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeWrapper, ____node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeWrapper, ____childNodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeWrapper, ____attributes) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlNodeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlNodeWrapper*, "Newtonsoft.Json.Converters", "XmlNodeWrapper");
