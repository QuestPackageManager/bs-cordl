#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XObjectWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XObjectWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml::Linq {
class XObject;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XObjectWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XObjectWrapper);
// Dependencies Newtonsoft.Json.Converters.IXmlNode, System.Object
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.XObjectWrapper
class CORDL_TYPE XObjectWrapper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Attributes;

  __declspec(property(get = get_ChildNodes)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ChildNodes;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_NamespaceUri)) ::StringW NamespaceUri;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode)) ::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  __declspec(property(get = get_WrappedNode)) ::System::Object* WrappedNode;

  /// @brief Field _xmlObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlObject, put = __cordl_internal_set__xmlObject)) ::System::Xml::Linq::XObject* _xmlObject;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method AppendChild, addr 0x3f53b48, size 0x38, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  static inline ::Newtonsoft::Json::Converters::XObjectWrapper* New_ctor(::System::Xml::Linq::XObject* xmlObject);

  constexpr ::System::Xml::Linq::XObject* const& __cordl_internal_get__xmlObject() const;

  constexpr ::System::Xml::Linq::XObject*& __cordl_internal_get__xmlObject();

  constexpr void __cordl_internal_set__xmlObject(::System::Xml::Linq::XObject* value);

  /// @brief Method .ctor, addr 0x3f52030, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XObject* xmlObject);

  /// @brief Method get_Attributes, addr 0x3f53aa8, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();

  /// @brief Method get_ChildNodes, addr 0x3f53a50, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();

  /// @brief Method get_LocalName, addr 0x3f53a48, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceUri, addr 0x3f53b80, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_NodeType, addr 0x3f53a30, size 0x18, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0x3f53b00, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method get_Value, addr 0x3f53b08, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_WrappedNode, addr 0x3f53a28, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_WrappedNode();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  /// @brief Method set_Value, addr 0x3f53b10, size 0x38, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XObjectWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XObjectWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XObjectWrapper(XObjectWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XObjectWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XObjectWrapper(XObjectWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10501 };

  /// @brief Field _xmlObject, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::XObject* ____xmlObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Converters::XObjectWrapper, ____xmlObject) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XObjectWrapper, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XObjectWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XObjectWrapper*, "Newtonsoft.Json.Converters", "XObjectWrapper");
