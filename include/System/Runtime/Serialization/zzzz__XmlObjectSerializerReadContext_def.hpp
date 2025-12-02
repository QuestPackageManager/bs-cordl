#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlObjectSerializerReadContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlObjectSerializerReadContext)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class Attributes;
}
namespace System::Runtime::Serialization {
class ClassDataNode;
}
namespace System::Runtime::Serialization {
class CollectionDataNode;
}
namespace System::Runtime::Serialization {
class DataContractResolver;
}
namespace System::Runtime::Serialization {
class DataContractSerializer;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class ExtensionDataMember;
}
namespace System::Runtime::Serialization {
class ExtensionDataObject;
}
namespace System::Runtime::Serialization {
class HybridObjectCache;
}
namespace System::Runtime::Serialization {
class IDataNode;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Runtime::Serialization {
class ISerializableDataNode;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class XmlDataContract;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Runtime::Serialization {
class XmlSerializableReader;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlDictionaryString;
}
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
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlObjectSerializerReadContext);
// Dependencies System.Runtime.Serialization.XmlObjectSerializerContext
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializerReadContext
class CORDL_TYPE XmlObjectSerializerReadContext : public ::System::Runtime::Serialization::XmlObjectSerializerContext {
public:
  // Declarations
  __declspec(property(get = get_DeserializedObjects)) ::System::Runtime::Serialization::HybridObjectCache* DeserializedObjects;

  __declspec(property(get = get_Document)) ::System::Xml::XmlDocument* Document;

  __declspec(property(get = get_IsGetOnlyCollection, put = set_IsGetOnlyCollection)) bool IsGetOnlyCollection;

  /// @brief Field attributes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Runtime::Serialization::Attributes* attributes;

  /// @brief Field attributesInXmlData, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_attributesInXmlData, put = __cordl_internal_set_attributesInXmlData)) ::System::Runtime::Serialization::Attributes* attributesInXmlData;

  /// @brief Field deserializedObjects, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_deserializedObjects, put = __cordl_internal_set_deserializedObjects)) ::System::Runtime::Serialization::HybridObjectCache* deserializedObjects;

  /// @brief Field extensionDataReader, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_extensionDataReader, put = __cordl_internal_set_extensionDataReader)) ::System::Runtime::Serialization::XmlReaderDelegator* extensionDataReader;

  /// @brief Field getOnlyCollectionValue, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_getOnlyCollectionValue, put = __cordl_internal_set_getOnlyCollectionValue)) ::System::Object* getOnlyCollectionValue;

  /// @brief Field isGetOnlyCollection, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_isGetOnlyCollection, put = __cordl_internal_set_isGetOnlyCollection)) bool isGetOnlyCollection;

  /// @brief Field xmlDocument, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlDocument, put = __cordl_internal_set_xmlDocument)) ::System::Xml::XmlDocument* xmlDocument;

  /// @brief Field xmlSerializableReader, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlSerializableReader,
                      put = __cordl_internal_set_xmlSerializableReader)) ::System::Runtime::Serialization::XmlSerializableReader* xmlSerializableReader;

  /// @brief Method AddNamespaceDeclaration, addr 0x5f4f408, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* AddNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method AddNewObject, addr 0x5f3ebfc, size 0x1c, virtual false, abstract: false, final false
  inline void AddNewObject(::System::Object* obj);

  /// @brief Method AddNewObjectWithId, addr 0x5f4c804, size 0xc4, virtual false, abstract: false, final false
  inline void AddNewObjectWithId(::StringW id, ::System::Object* obj);

  /// @brief Method CheckEndOfArray, addr 0x5f4cd2c, size 0x18c, virtual false, abstract: false, final false
  inline void CheckEndOfArray(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t arraySize, ::System::Xml::XmlDictionaryString* itemName,
                              ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method CreateContext, addr 0x5f4ae78, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::XmlObjectSerializerReadContext* CreateContext(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                                ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                                ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method CreateReaderDelegatorForReader, addr 0x5f4f8fc, size 0x60, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlReaderDelegator* CreateReaderDelegatorForReader(::System::Xml::XmlReader* xmlReader);

  /// @brief Method CreateReaderOverChildNodes, addr 0x5f4f508, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlReaderDelegator* CreateReaderOverChildNodes(::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* xmlAttributes,
                                                                                          ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* xmlChildNodes);

  /// @brief Method CreateUnexpectedStateException, addr 0x5f4c13c, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateUnexpectedStateException(::System::Xml::XmlNodeType expectedState, ::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method CreateWrapperXmlElement, addr 0x5f4f5d4, size 0x300, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlNode* CreateWrapperXmlElement(::System::Xml::XmlDocument* document, ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* xmlAttributes,
                                                                ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* xmlChildNodes, ::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method DeserializeFromExtensionData, addr 0x5f4c8c8, size 0x1a8, virtual false, abstract: false, final false
  inline ::System::Object* DeserializeFromExtensionData(::System::Runtime::Serialization::IDataNode* dataNode, ::System::Type* type, ::StringW name, ::StringW ns);

  /// @brief Method EnsureArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> EnsureArraySize(::ArrayW<T, ::Array<T>*> array, int32_t index);

  /// @brief Method GetArraySize, addr 0x5f4c7fc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetArraySize();

  /// @brief Method GetCollectionMember, addr 0x5f4ad04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* GetCollectionMember();

  /// @brief Method GetExistingObject, addr 0x5f4b980, size 0x28c, virtual false, abstract: false, final false
  inline ::System::Object* GetExistingObject(::StringW id, ::System::Type* type, ::StringW name, ::StringW ns);

  /// @brief Method GetExistingObjectOrExtensionData, addr 0x5f4ca70, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Object* GetExistingObjectOrExtensionData(::StringW id);

  /// @brief Method GetMemberIndex, addr 0x5f4bc68, size 0xe0, virtual false, abstract: false, final false
  inline int32_t GetMemberIndex(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNames,
                                ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNamespaces, int32_t memberIndex,
                                ::System::Runtime::Serialization::ExtensionDataObject* extensionData);

  /// @brief Method GetMemberIndexWithRequiredMembers, addr 0x5f4bdf8, size 0xfc, virtual false, abstract: false, final false
  inline int32_t GetMemberIndexWithRequiredMembers(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                   ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNames,
                                                   ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNamespaces, int32_t memberIndex,
                                                   int32_t requiredIndex, ::System::Runtime::Serialization::ExtensionDataObject* extensionData);

  /// @brief Method GetObjectId, addr 0x5f44e98, size 0x18, virtual false, abstract: false, final false
  inline ::StringW GetObjectId();

  /// @brief Method GetRealObject, addr 0x5f4cb10, size 0xec, virtual false, abstract: false, final false
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::IObjectReference* obj, ::StringW id);

  /// @brief Method HandleMemberNotFound, addr 0x5f4bd48, size 0xb0, virtual false, abstract: false, final false
  inline void HandleMemberNotFound(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::ExtensionDataObject* extensionData, int32_t memberIndex);

  /// @brief Method HandleUnknownElement, addr 0x5f4c3ec, size 0x140, virtual false, abstract: false, final false
  inline void HandleUnknownElement(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::ExtensionDataObject* extensionData, int32_t memberIndex);

  /// @brief Method InitializeExtensionDataNode, addr 0x5f4e78c, size 0x274, virtual false, abstract: false, final false
  inline void InitializeExtensionDataNode(::System::Runtime::Serialization::IDataNode* dataNode, ::StringW dataContractName, ::StringW dataContractNamespace);

  /// @brief Method InternalDeserialize, addr 0x5f4b0c0, size 0x618, virtual false, abstract: false, final false
  inline ::System::Object* InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::StringW name, ::StringW ns, ::System::Type* declaredType,
                                               ::ByRef<::System::Runtime::Serialization::DataContract*> dataContract);

  /// @brief Method InternalDeserialize, addr 0x5f4b738, size 0x68, virtual true, abstract: false, final false
  inline ::System::Object* InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* declaredType,
                                               ::System::Runtime::Serialization::DataContract* dataContract, ::StringW name, ::StringW ns);

  /// @brief Method InternalDeserialize, addr 0x5f4b6d8, size 0x60, virtual true, abstract: false, final false
  inline ::System::Object* InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* declaredType, ::StringW name, ::StringW ns);

  /// @brief Method InternalDeserialize, addr 0x5f4b030, size 0x90, virtual true, abstract: false, final false
  inline ::System::Object* InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t id, ::System::RuntimeTypeHandle declaredTypeHandle, ::StringW name,
                                               ::StringW ns);

  /// @brief Method IsContentNode, addr 0x5f4f4ec, size 0x1c, virtual false, abstract: false, final false
  inline bool IsContentNode(::System::Xml::XmlNodeType nodeType);

  /// @brief Method IsReadingClassExtensionData, addr 0x5f4f97c, size 0x8, virtual true, abstract: false, final false
  inline bool IsReadingClassExtensionData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method IsReadingCollectionExtensionData, addr 0x5f4f95c, size 0x20, virtual true, abstract: false, final false
  inline bool IsReadingCollectionExtensionData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method MoveToNextElement, addr 0x5f4bc44, size 0x24, virtual false, abstract: false, final false
  static inline bool MoveToNextElement(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerReadContext* New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                           ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                           ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method ParseQualifiedName, addr 0x5f4cc48, size 0xe4, virtual false, abstract: false, final false
  static inline void ParseQualifiedName(::StringW qname, ::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::ByRef<::StringW> name, ::ByRef<::StringW> ns, ::ByRef<::StringW> prefix);

  /// @brief Method Read, addr 0x5f4cbfc, size 0x4c, virtual false, abstract: false, final false
  static inline void Read(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method ReadAndResolveUnknownXmlData, addr 0x5f4ea04, size 0x814, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* ReadAndResolveUnknownXmlData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                   ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* namespaces, ::StringW dataContractName,
                                                                                   ::StringW dataContractNamespace);

  /// @brief Method ReadAttributes, addr 0x5f4c774, size 0x74, virtual true, abstract: false, final false
  inline void ReadAttributes(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method ReadDataContractValue, addr 0x5f4f8d4, size 0x28, virtual true, abstract: false, final false
  inline ::System::Object* ReadDataContractValue(::System::Runtime::Serialization::DataContract* dataContract, ::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method ReadExtensionDataMember, addr 0x5f4c52c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ExtensionDataMember* ReadExtensionDataMember(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t memberIndex);

  /// @brief Method ReadExtensionDataValue, addr 0x5f4d1f0, size 0x56c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* ReadExtensionDataValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method ReadExtensionDataValue, addr 0x5f4e054, size 0x2b4, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* ReadExtensionDataValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                             ::StringW dataContractNamespace);

  /// @brief Method ReadIXmlSerializable, addr 0x5f46050, size 0x90, virtual false, abstract: false, final false
  inline ::System::Object* ReadIXmlSerializable(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlDataContract* xmlDataContract, bool isMemberType);

  /// @brief Method ReadIXmlSerializable, addr 0x5f4ceb8, size 0x308, virtual false, abstract: false, final false
  static inline ::System::Object* ReadIXmlSerializable(::System::Runtime::Serialization::XmlSerializableReader* xmlSerializableReader, ::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                       ::System::Runtime::Serialization::XmlDataContract* xmlDataContract, bool isMemberType);

  /// @brief Method ReadIfNullOrRef, addr 0x5f4c628, size 0x14c, virtual false, abstract: false, final false
  inline ::StringW ReadIfNullOrRef(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* memberType, bool isMemberTypeSerializable);

  /// @brief Method ReadPrimitiveExtensionDataValue, addr 0x5f4f218, size 0x1f0, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* ReadPrimitiveExtensionDataValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                                      ::StringW dataContractNamespace);

  /// @brief Method ReadRootIXmlSerializable, addr 0x5f45fd8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Object* ReadRootIXmlSerializable(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlDataContract* xmlDataContract,
                                                           bool isMemberType);

  /// @brief Method ReadSerializationInfo, addr 0x5f44eb0, size 0x2b0, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationInfo* ReadSerializationInfo(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* type);

  /// @brief Method ReadUnknownClassData, addr 0x5f4de64, size 0x1f0, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ClassDataNode* ReadUnknownClassData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                               ::StringW dataContractNamespace);

  /// @brief Method ReadUnknownCollectionData, addr 0x5f4d75c, size 0x4b4, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::CollectionDataNode* ReadUnknownCollectionData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                                         ::StringW dataContractNamespace);

  /// @brief Method ReadUnknownISerializableData, addr 0x5f4dc10, size 0x254, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ISerializableDataNode* ReadUnknownISerializableData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                                               ::StringW dataContractNamespace);

  /// @brief Method ReadUnknownPrimitiveData, addr 0x5f4e730, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* ReadUnknownPrimitiveData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* type, ::StringW dataContractName,
                                                                               ::StringW dataContractNamespace);

  /// @brief Method ReadUnknownXmlData, addr 0x5f4e308, size 0x428, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* ReadUnknownXmlData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName, ::StringW dataContractNamespace);

  /// @brief Method ReplaceDeserializedObject, addr 0x5f45160, size 0x1f4, virtual false, abstract: false, final false
  inline void ReplaceDeserializedObject(::StringW id, ::System::Object* oldObj, ::System::Object* newObj);

  /// @brief Method ReplaceScopedKnownTypesTop, addr 0x5f4bc0c, size 0x38, virtual false, abstract: false, final false
  inline bool ReplaceScopedKnownTypesTop(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* knownDataContracts,
                                         bool knownTypesAddedInCurrentScope);

  /// @brief Method ResetAttributes, addr 0x5f4c7e8, size 0x14, virtual false, abstract: false, final false
  inline void ResetAttributes();

  /// @brief Method ResolveDataContractFromTypeName, addr 0x5f4d1c0, size 0x30, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* ResolveDataContractFromTypeName();

  /// @brief Method SkipUnknownElement, addr 0x5f4c230, size 0x1bc, virtual false, abstract: false, final false
  inline void SkipUnknownElement(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method StartReadExtensionDataValue, addr 0x5f4ea00, size 0x4, virtual true, abstract: false, final false
  inline void StartReadExtensionDataValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader);

  /// @brief Method StoreCollectionMemberInfo, addr 0x5f4ad0c, size 0x10, virtual false, abstract: false, final false
  inline void StoreCollectionMemberInfo(::System::Object* collectionMember);

  /// @brief Method ThrowArrayExceededSizeException, addr 0x5f4adac, size 0xcc, virtual false, abstract: false, final false
  static inline void ThrowArrayExceededSizeException(int32_t arraySize, ::System::Type* type);

  /// @brief Method ThrowNullValueReturnedForGetOnlyCollectionException, addr 0x5f4ad1c, size 0x90, virtual false, abstract: false, final false
  static inline void ThrowNullValueReturnedForGetOnlyCollectionException(::System::Type* type);

  /// @brief Method ThrowRequiredMemberMissingException, addr 0x5f4bef4, size 0x248, virtual false, abstract: false, final false
  static inline void ThrowRequiredMemberMissingException(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t memberIndex, int32_t requiredIndex,
                                                         ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNames);

  /// @brief Method TrimArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> TrimArraySize(::ArrayW<T, ::Array<T>*> array, int32_t size);

  /// @brief Method TryHandleNullOrRef, addr 0x5f4b7a0, size 0x1e0, virtual false, abstract: false, final false
  inline bool TryHandleNullOrRef(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::System::Type* declaredType, ::StringW name, ::StringW ns, ::ByRef<::System::Object*> retObj);

  constexpr ::System::Runtime::Serialization::Attributes* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Runtime::Serialization::Attributes*& __cordl_internal_get_attributes();

  constexpr ::System::Runtime::Serialization::Attributes* const& __cordl_internal_get_attributesInXmlData() const;

  constexpr ::System::Runtime::Serialization::Attributes*& __cordl_internal_get_attributesInXmlData();

  constexpr ::System::Runtime::Serialization::HybridObjectCache* const& __cordl_internal_get_deserializedObjects() const;

  constexpr ::System::Runtime::Serialization::HybridObjectCache*& __cordl_internal_get_deserializedObjects();

  constexpr ::System::Runtime::Serialization::XmlReaderDelegator* const& __cordl_internal_get_extensionDataReader() const;

  constexpr ::System::Runtime::Serialization::XmlReaderDelegator*& __cordl_internal_get_extensionDataReader();

  constexpr ::System::Object* const& __cordl_internal_get_getOnlyCollectionValue() const;

  constexpr ::System::Object*& __cordl_internal_get_getOnlyCollectionValue();

  constexpr bool const& __cordl_internal_get_isGetOnlyCollection() const;

  constexpr bool& __cordl_internal_get_isGetOnlyCollection();

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_xmlDocument() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_xmlDocument();

  constexpr ::System::Runtime::Serialization::XmlSerializableReader* const& __cordl_internal_get_xmlSerializableReader() const;

  constexpr ::System::Runtime::Serialization::XmlSerializableReader*& __cordl_internal_get_xmlSerializableReader();

  constexpr void __cordl_internal_set_attributes(::System::Runtime::Serialization::Attributes* value);

  constexpr void __cordl_internal_set_attributesInXmlData(::System::Runtime::Serialization::Attributes* value);

  constexpr void __cordl_internal_set_deserializedObjects(::System::Runtime::Serialization::HybridObjectCache* value);

  constexpr void __cordl_internal_set_extensionDataReader(::System::Runtime::Serialization::XmlReaderDelegator* value);

  constexpr void __cordl_internal_set_getOnlyCollectionValue(::System::Object* value);

  constexpr void __cordl_internal_set_isGetOnlyCollection(bool value);

  constexpr void __cordl_internal_set_xmlDocument(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_xmlSerializableReader(::System::Runtime::Serialization::XmlSerializableReader* value);

  /// @brief Method .ctor, addr 0x5f4af50, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::DataContractSerializer* serializer, ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                    ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method get_DeserializedObjects, addr 0x5f4ac34, size 0x58, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::HybridObjectCache* get_DeserializedObjects();

  /// @brief Method get_Document, addr 0x5f4ac8c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_Document();

  /// @brief Method get_IsGetOnlyCollection, addr 0x5f4acf4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGetOnlyCollection();

  /// @brief Method set_IsGetOnlyCollection, addr 0x5f4acfc, size 0x8, virtual true, abstract: false, final false
  inline void set_IsGetOnlyCollection(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializerReadContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializerReadContext(XmlObjectSerializerReadContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializerReadContext(XmlObjectSerializerReadContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17092 };

  /// @brief Field attributes, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::Serialization::Attributes* ___attributes;

  /// @brief Field deserializedObjects, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::Serialization::HybridObjectCache* ___deserializedObjects;

  /// @brief Field xmlSerializableReader, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlSerializableReader* ___xmlSerializableReader;

  /// @brief Field xmlDocument, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___xmlDocument;

  /// @brief Field attributesInXmlData, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::Serialization::Attributes* ___attributesInXmlData;

  /// @brief Field extensionDataReader, offset: 0xa0, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlReaderDelegator* ___extensionDataReader;

  /// @brief Field getOnlyCollectionValue, offset: 0xa8, size: 0x8, def value: None
  ::System::Object* ___getOnlyCollectionValue;

  /// @brief Field isGetOnlyCollection, offset: 0xb0, size: 0x1, def value: None
  bool ___isGetOnlyCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContext, ___attributes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContext, ___deserializedObjects) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContext, ___xmlSerializableReader) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContext, ___xmlDocument) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContext, ___attributesInXmlData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContext, ___extensionDataReader) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContext, ___getOnlyCollectionValue) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContext, ___isGetOnlyCollection) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlObjectSerializerReadContext, 0xb8>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlObjectSerializerReadContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlObjectSerializerReadContext*, "System.Runtime.Serialization", "XmlObjectSerializerReadContext");
