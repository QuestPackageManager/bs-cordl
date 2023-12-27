#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XObjectWrapper)
namespace System::Xml::Linq {
class XObject;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XObjectWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XObjectWrapper);
// Type: Newtonsoft.Json.Converters::XObjectWrapper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12065))
// CS Name: ::Newtonsoft.Json.Converters::XObjectWrapper*
class CORDL_TYPE XObjectWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _xmlObject, offset 0x10, size 0x8
  __declspec(property(get = __get__xmlObject, put = __set__xmlObject))::System::Xml::Linq::XObject* _xmlObject;

  /// @brief Field EmptyChildNodes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyChildNodes, put = setStaticF_EmptyChildNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* EmptyChildNodes;

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

  constexpr ::System::Xml::Linq::XObject*& __get__xmlObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XObject*> const& __get__xmlObject() const;

  constexpr void __set__xmlObject(::System::Xml::Linq::XObject* value);

  static inline void setStaticF_EmptyChildNodes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);

  static inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* getStaticF_EmptyChildNodes();

  static inline ::Newtonsoft::Json::Converters::XObjectWrapper* New_ctor(::System::Xml::Linq::XObject* xmlObject);

  /// @brief Method .ctor addr 0x26baec0 size 0x28 virtual false final false
  inline void _ctor(::System::Xml::Linq::XObject* xmlObject);

  /// @brief Method get_WrappedNode addr 0x26bca34 size 0x8 virtual true final true
  inline ::System::Object* get_WrappedNode();

  /// @brief Method get_NodeType addr 0x26bca3c size 0x20 virtual true final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_LocalName addr 0x26bca5c size 0x8 virtual true final false
  inline ::StringW get_LocalName();

  /// @brief Method get_ChildNodes addr 0x26bca64 size 0x58 virtual true final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();

  /// @brief Method get_Attributes addr 0x26bcabc size 0x8 virtual true final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();

  /// @brief Method get_ParentNode addr 0x26bcac4 size 0x8 virtual true final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method get_Value addr 0x26bcacc size 0x8 virtual true final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x26bcad4 size 0x40 virtual true final false
  inline void set_Value(::StringW value);

  /// @brief Method AppendChild addr 0x26bcb14 size 0x40 virtual true final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  /// @brief Method get_NamespaceUri addr 0x26bcb54 size 0x8 virtual true final false
  inline ::StringW get_NamespaceUri();

  // Ctor Parameters [CppParam { name: "", ty: "XObjectWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XObjectWrapper(XObjectWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XObjectWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XObjectWrapper(XObjectWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XObjectWrapper();

public:
  /// @brief Field _xmlObject, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::XObject* ____xmlObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XObjectWrapper, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XObjectWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XObjectWrapper*, "Newtonsoft.Json.Converters", "XObjectWrapper");
