#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlNodeConverter)
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlNodeConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlNodeConverter);
// Type: Newtonsoft.Json.Converters::XmlNodeConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11728))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11966))
// CS Name: ::Newtonsoft.Json.Converters::XmlNodeConverter*
class CORDL_TYPE XmlNodeConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Field <DeserializeRootElementName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DeserializeRootElementName_k__BackingField,
                      put = __cordl_internal_set__DeserializeRootElementName_k__BackingField))::StringW _DeserializeRootElementName_k__BackingField;

  /// @brief Field <WriteArrayAttribute>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__WriteArrayAttribute_k__BackingField, put = __cordl_internal_set__WriteArrayAttribute_k__BackingField)) bool _WriteArrayAttribute_k__BackingField;

  /// @brief Field <OmitRootObject>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__OmitRootObject_k__BackingField, put = __cordl_internal_set__OmitRootObject_k__BackingField)) bool _OmitRootObject_k__BackingField;

  __declspec(property(get = get_DeserializeRootElementName, put = set_DeserializeRootElementName))::StringW DeserializeRootElementName;

  __declspec(property(get = get_WriteArrayAttribute, put = set_WriteArrayAttribute)) bool WriteArrayAttribute;

  __declspec(property(get = get_OmitRootObject, put = set_OmitRootObject)) bool OmitRootObject;

  constexpr ::StringW& __cordl_internal_get__DeserializeRootElementName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__DeserializeRootElementName_k__BackingField() const;

  constexpr void __cordl_internal_set__DeserializeRootElementName_k__BackingField(::StringW value);

  constexpr bool& __cordl_internal_get__WriteArrayAttribute_k__BackingField();

  constexpr bool const& __cordl_internal_get__WriteArrayAttribute_k__BackingField() const;

  constexpr void __cordl_internal_set__WriteArrayAttribute_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__OmitRootObject_k__BackingField();

  constexpr bool const& __cordl_internal_get__OmitRootObject_k__BackingField() const;

  constexpr void __cordl_internal_set__OmitRootObject_k__BackingField(bool value);

  /// @brief Method get_DeserializeRootElementName, addr 0x26df908, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DeserializeRootElementName();

  /// @brief Method set_DeserializeRootElementName, addr 0x26df910, size 0x8, virtual false, abstract: false, final false
  inline void set_DeserializeRootElementName(::StringW value);

  /// @brief Method get_WriteArrayAttribute, addr 0x26df918, size 0x8, virtual false, abstract: false, final false
  inline bool get_WriteArrayAttribute();

  /// @brief Method set_WriteArrayAttribute, addr 0x26df920, size 0xc, virtual false, abstract: false, final false
  inline void set_WriteArrayAttribute(bool value);

  /// @brief Method get_OmitRootObject, addr 0x26df92c, size 0x8, virtual false, abstract: false, final false
  inline bool get_OmitRootObject();

  /// @brief Method set_OmitRootObject, addr 0x26df934, size 0xc, virtual false, abstract: false, final false
  inline void set_OmitRootObject(bool value);

  /// @brief Method WriteJson, addr 0x26df940, size 0x124, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WrapXml, addr 0x26dfa64, size 0x11c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* WrapXml(::System::Object* value);

  /// @brief Method PushParentNamespaces, addr 0x26dfb80, size 0x668, virtual false, abstract: false, final false
  inline void PushParentNamespaces(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager);

  /// @brief Method ResolveFullName, addr 0x26e18d0, size 0x31c, virtual false, abstract: false, final false
  inline ::StringW ResolveFullName(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager);

  /// @brief Method GetPropertyName, addr 0x26e1bec, size 0x428, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager);

  /// @brief Method IsArray, addr 0x26e2014, size 0x3ec, virtual false, abstract: false, final false
  inline bool IsArray(::Newtonsoft::Json::Converters::IXmlNode* node);

  /// @brief Method SerializeGroupedNodes, addr 0x26e2400, size 0x578, virtual false, abstract: false, final false
  inline void SerializeGroupedNodes(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager, bool writePropertyName);

  /// @brief Method SerializeNode, addr 0x26e01e8, size 0x16e8, virtual false, abstract: false, final false
  inline void SerializeNode(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Converters::IXmlNode* node, ::System::Xml::XmlNamespaceManager* manager, bool writePropertyName);

  /// @brief Method AllSameName, addr 0x26e2978, size 0x2ac, virtual false, abstract: false, final false
  static inline bool AllSameName(::Newtonsoft::Json::Converters::IXmlNode* node);

  /// @brief Method ReadJson, addr 0x26e2e38, size 0x658, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method DeserializeValue, addr 0x26e3e2c, size 0x590, virtual false, abstract: false, final false
  inline void DeserializeValue(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::System::Xml::XmlNamespaceManager* manager, ::StringW propertyName,
                               ::Newtonsoft::Json::Converters::IXmlNode* currentNode);

  /// @brief Method ReadElement, addr 0x26e3490, size 0x2d8, virtual false, abstract: false, final false
  inline void ReadElement(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::StringW propertyName,
                          ::System::Xml::XmlNamespaceManager* manager);

  /// @brief Method CreateElement, addr 0x26e5838, size 0x680, virtual false, abstract: false, final false
  inline void CreateElement(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode,
                            ::StringW elementName, ::System::Xml::XmlNamespaceManager* manager, ::StringW elementPrefix,
                            ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributeNameValues);

  /// @brief Method AddAttribute, addr 0x26e55ac, size 0x28c, virtual false, abstract: false, final false
  static inline void AddAttribute(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode,
                                  ::StringW attributeName, ::System::Xml::XmlNamespaceManager* manager, ::StringW attributePrefix);

  /// @brief Method ConvertTokenToXmlValue, addr 0x26e6060, size 0x5d8, virtual false, abstract: false, final false
  inline ::StringW ConvertTokenToXmlValue(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadArrayElements, addr 0x26e4bb0, size 0x38c, virtual false, abstract: false, final false
  inline void ReadArrayElements(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::StringW propertyName,
                                ::Newtonsoft::Json::Converters::IXmlNode* currentNode, ::System::Xml::XmlNamespaceManager* manager);

  /// @brief Method AddJsonArrayAttribute, addr 0x26e6638, size 0x340, virtual false, abstract: false, final false
  inline void AddJsonArrayAttribute(::Newtonsoft::Json::Converters::IXmlElement* element, ::Newtonsoft::Json::Converters::IXmlDocument* document);

  /// @brief Method ReadAttributeElements, addr 0x26e4f3c, size 0x670, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ReadAttributeElements(::Newtonsoft::Json::JsonReader* reader, ::System::Xml::XmlNamespaceManager* manager);

  /// @brief Method CreateInstruction, addr 0x26e43bc, size 0x44c, virtual false, abstract: false, final false
  inline void CreateInstruction(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode,
                                ::StringW propertyName);

  /// @brief Method CreateDocumentType, addr 0x26e4808, size 0x3a8, virtual false, abstract: false, final false
  inline void CreateDocumentType(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::Newtonsoft::Json::Converters::IXmlNode* currentNode);

  /// @brief Method CreateElement, addr 0x26e5eb8, size 0x1a8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW elementName, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::StringW elementPrefix,
                                                                    ::System::Xml::XmlNamespaceManager* manager);

  /// @brief Method DeserializeNode, addr 0x26e3768, size 0x6c4, virtual false, abstract: false, final false
  inline void DeserializeNode(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Converters::IXmlDocument* document, ::System::Xml::XmlNamespaceManager* manager,
                              ::Newtonsoft::Json::Converters::IXmlNode* currentNode);

  /// @brief Method IsNamespaceAttribute, addr 0x26e6978, size 0xe4, virtual false, abstract: false, final false
  inline bool IsNamespaceAttribute(::StringW attributeName, ByRef<::StringW> prefix);

  /// @brief Method ValueAttributes, addr 0x26e2c24, size 0x214, virtual false, abstract: false, final false
  inline bool ValueAttributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* c);

  /// @brief Method CanConvert, addr 0x26e6a5c, size 0xf8, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* valueType);

  static inline ::Newtonsoft::Json::Converters::XmlNodeConverter* New_ctor();

  /// @brief Method .ctor, addr 0x26e6b54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeConverter(XmlNodeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeConverter(XmlNodeConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeConverter();

public:
  /// @brief Field <DeserializeRootElementName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DeserializeRootElementName_k__BackingField;

  /// @brief Field <WriteArrayAttribute>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____WriteArrayAttribute_k__BackingField;

  /// @brief Field <OmitRootObject>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____OmitRootObject_k__BackingField;

  /// @brief Field TextName offset 0xffffffff size 0x8
  static constexpr ::ConstString TextName{ u"#text" };

  /// @brief Field CommentName offset 0xffffffff size 0x8
  static constexpr ::ConstString CommentName{ u"#comment" };

  /// @brief Field CDataName offset 0xffffffff size 0x8
  static constexpr ::ConstString CDataName{ u"#cdata-section" };

  /// @brief Field WhitespaceName offset 0xffffffff size 0x8
  static constexpr ::ConstString WhitespaceName{ u"#whitespace" };

  /// @brief Field SignificantWhitespaceName offset 0xffffffff size 0x8
  static constexpr ::ConstString SignificantWhitespaceName{ u"#significant-whitespace" };

  /// @brief Field DeclarationName offset 0xffffffff size 0x8
  static constexpr ::ConstString DeclarationName{ u"?xml" };

  /// @brief Field JsonNamespaceUri offset 0xffffffff size 0x8
  static constexpr ::ConstString JsonNamespaceUri{ u"http://james.newtonking.com/projects/json" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlNodeConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeConverter, ____DeserializeRootElementName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeConverter, ____WriteArrayAttribute_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlNodeConverter, ____OmitRootObject_k__BackingField) == 0x19, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlNodeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlNodeConverter*, "Newtonsoft.Json.Converters", "XmlNodeConverter");
