#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Globals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Globals)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class Globals;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Globals);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.Globals
class CORDL_TYPE Globals : public ::System::Object {
public:
  // Declarations
  /// @brief Field NewObjectId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NewObjectId, put = setStaticF_NewObjectId)) ::StringW NewObjectId;

  /// @brief Field dataContractXsdBaseNamespaceUri, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_dataContractXsdBaseNamespaceUri, put = setStaticF_dataContractXsdBaseNamespaceUri)) ::System::Uri* dataContractXsdBaseNamespaceUri;

  /// @brief Field emptyObjectArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_emptyObjectArray, put = setStaticF_emptyObjectArray)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> emptyObjectArray;

  /// @brief Field emptyTypeArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_emptyTypeArray, put = setStaticF_emptyTypeArray)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> emptyTypeArray;

  /// @brief Field typeOfArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfArray, put = setStaticF_typeOfArray)) ::System::Type* typeOfArray;

  /// @brief Field typeOfByteArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfByteArray, put = setStaticF_typeOfByteArray)) ::System::Type* typeOfByteArray;

  /// @brief Field typeOfClassDataNode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfClassDataNode, put = setStaticF_typeOfClassDataNode)) ::System::Type* typeOfClassDataNode;

  /// @brief Field typeOfCollectionDataContractAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfCollectionDataContractAttribute, put = setStaticF_typeOfCollectionDataContractAttribute)) ::System::Type* typeOfCollectionDataContractAttribute;

  /// @brief Field typeOfCollectionDataNode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfCollectionDataNode, put = setStaticF_typeOfCollectionDataNode)) ::System::Type* typeOfCollectionDataNode;

  /// @brief Field typeOfDBNull, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfDBNull, put = setStaticF_typeOfDBNull)) ::System::Type* typeOfDBNull;

  /// @brief Field typeOfDataContractAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfDataContractAttribute, put = setStaticF_typeOfDataContractAttribute)) ::System::Type* typeOfDataContractAttribute;

  /// @brief Field typeOfDataMemberAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfDataMemberAttribute, put = setStaticF_typeOfDataMemberAttribute)) ::System::Type* typeOfDataMemberAttribute;

  /// @brief Field typeOfDateTimeOffset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfDateTimeOffset, put = setStaticF_typeOfDateTimeOffset)) ::System::Type* typeOfDateTimeOffset;

  /// @brief Field typeOfDateTimeOffsetAdapter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfDateTimeOffsetAdapter, put = setStaticF_typeOfDateTimeOffsetAdapter)) ::System::Type* typeOfDateTimeOffsetAdapter;

  /// @brief Field typeOfDictionaryEnumerator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfDictionaryEnumerator, put = setStaticF_typeOfDictionaryEnumerator)) ::System::Type* typeOfDictionaryEnumerator;

  /// @brief Field typeOfDictionaryGeneric, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfDictionaryGeneric, put = setStaticF_typeOfDictionaryGeneric)) ::System::Type* typeOfDictionaryGeneric;

  /// @brief Field typeOfEnumMemberAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfEnumMemberAttribute, put = setStaticF_typeOfEnumMemberAttribute)) ::System::Type* typeOfEnumMemberAttribute;

  /// @brief Field typeOfExtensionDataObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfExtensionDataObject, put = setStaticF_typeOfExtensionDataObject)) ::System::Type* typeOfExtensionDataObject;

  /// @brief Field typeOfFlagsAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfFlagsAttribute, put = setStaticF_typeOfFlagsAttribute)) ::System::Type* typeOfFlagsAttribute;

  /// @brief Field typeOfGenericDictionaryEnumerator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfGenericDictionaryEnumerator, put = setStaticF_typeOfGenericDictionaryEnumerator)) ::System::Type* typeOfGenericDictionaryEnumerator;

  /// @brief Field typeOfGuid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfGuid, put = setStaticF_typeOfGuid)) ::System::Type* typeOfGuid;

  /// @brief Field typeOfHashtable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfHashtable, put = setStaticF_typeOfHashtable)) ::System::Type* typeOfHashtable;

  /// @brief Field typeOfICollection, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfICollection, put = setStaticF_typeOfICollection)) ::System::Type* typeOfICollection;

  /// @brief Field typeOfICollectionGeneric, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfICollectionGeneric, put = setStaticF_typeOfICollectionGeneric)) ::System::Type* typeOfICollectionGeneric;

  /// @brief Field typeOfIDeserializationCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIDeserializationCallback, put = setStaticF_typeOfIDeserializationCallback)) ::System::Type* typeOfIDeserializationCallback;

  /// @brief Field typeOfIDictionary, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIDictionary, put = setStaticF_typeOfIDictionary)) ::System::Type* typeOfIDictionary;

  /// @brief Field typeOfIDictionaryGeneric, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIDictionaryGeneric, put = setStaticF_typeOfIDictionaryGeneric)) ::System::Type* typeOfIDictionaryGeneric;

  /// @brief Field typeOfIEnumerable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIEnumerable, put = setStaticF_typeOfIEnumerable)) ::System::Type* typeOfIEnumerable;

  /// @brief Field typeOfIEnumerableGeneric, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIEnumerableGeneric, put = setStaticF_typeOfIEnumerableGeneric)) ::System::Type* typeOfIEnumerableGeneric;

  /// @brief Field typeOfIEnumerator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIEnumerator, put = setStaticF_typeOfIEnumerator)) ::System::Type* typeOfIEnumerator;

  /// @brief Field typeOfIEnumeratorGeneric, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIEnumeratorGeneric, put = setStaticF_typeOfIEnumeratorGeneric)) ::System::Type* typeOfIEnumeratorGeneric;

  /// @brief Field typeOfIExtensibleDataObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIExtensibleDataObject, put = setStaticF_typeOfIExtensibleDataObject)) ::System::Type* typeOfIExtensibleDataObject;

  /// @brief Field typeOfIList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIList, put = setStaticF_typeOfIList)) ::System::Type* typeOfIList;

  /// @brief Field typeOfIListGeneric, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIListGeneric, put = setStaticF_typeOfIListGeneric)) ::System::Type* typeOfIListGeneric;

  /// @brief Field typeOfIObjectReference, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIObjectReference, put = setStaticF_typeOfIObjectReference)) ::System::Type* typeOfIObjectReference;

  /// @brief Field typeOfISerializable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfISerializable, put = setStaticF_typeOfISerializable)) ::System::Type* typeOfISerializable;

  /// @brief Field typeOfISerializableDataNode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfISerializableDataNode, put = setStaticF_typeOfISerializableDataNode)) ::System::Type* typeOfISerializableDataNode;

  /// @brief Field typeOfIXmlSerializable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfIXmlSerializable, put = setStaticF_typeOfIXmlSerializable)) ::System::Type* typeOfIXmlSerializable;

  /// @brief Field typeOfInt, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfInt, put = setStaticF_typeOfInt)) ::System::Type* typeOfInt;

  /// @brief Field typeOfKeyValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfKeyValue, put = setStaticF_typeOfKeyValue)) ::System::Type* typeOfKeyValue;

  /// @brief Field typeOfKeyValuePair, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfKeyValuePair, put = setStaticF_typeOfKeyValuePair)) ::System::Type* typeOfKeyValuePair;

  /// @brief Field typeOfKnownTypeAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfKnownTypeAttribute, put = setStaticF_typeOfKnownTypeAttribute)) ::System::Type* typeOfKnownTypeAttribute;

  /// @brief Field typeOfNullable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfNullable, put = setStaticF_typeOfNullable)) ::System::Type* typeOfNullable;

  /// @brief Field typeOfObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfObject, put = setStaticF_typeOfObject)) ::System::Type* typeOfObject;

  /// @brief Field typeOfObjectArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfObjectArray, put = setStaticF_typeOfObjectArray)) ::System::Type* typeOfObjectArray;

  /// @brief Field typeOfOnDeserializedAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfOnDeserializedAttribute, put = setStaticF_typeOfOnDeserializedAttribute)) ::System::Type* typeOfOnDeserializedAttribute;

  /// @brief Field typeOfOnDeserializingAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfOnDeserializingAttribute, put = setStaticF_typeOfOnDeserializingAttribute)) ::System::Type* typeOfOnDeserializingAttribute;

  /// @brief Field typeOfOnSerializedAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfOnSerializedAttribute, put = setStaticF_typeOfOnSerializedAttribute)) ::System::Type* typeOfOnSerializedAttribute;

  /// @brief Field typeOfOnSerializingAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfOnSerializingAttribute, put = setStaticF_typeOfOnSerializingAttribute)) ::System::Type* typeOfOnSerializingAttribute;

  /// @brief Field typeOfOptionalFieldAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfOptionalFieldAttribute, put = setStaticF_typeOfOptionalFieldAttribute)) ::System::Type* typeOfOptionalFieldAttribute;

  /// @brief Field typeOfReflectionPointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfReflectionPointer, put = setStaticF_typeOfReflectionPointer)) ::System::Type* typeOfReflectionPointer;

  /// @brief Field typeOfStreamingContext, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfStreamingContext, put = setStaticF_typeOfStreamingContext)) ::System::Type* typeOfStreamingContext;

  /// @brief Field typeOfString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfString, put = setStaticF_typeOfString)) ::System::Type* typeOfString;

  /// @brief Field typeOfTimeSpan, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfTimeSpan, put = setStaticF_typeOfTimeSpan)) ::System::Type* typeOfTimeSpan;

  /// @brief Field typeOfTypeEnumerable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfTypeEnumerable, put = setStaticF_typeOfTypeEnumerable)) ::System::Type* typeOfTypeEnumerable;

  /// @brief Field typeOfULong, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfULong, put = setStaticF_typeOfULong)) ::System::Type* typeOfULong;

  /// @brief Field typeOfUri, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfUri, put = setStaticF_typeOfUri)) ::System::Type* typeOfUri;

  /// @brief Field typeOfValueType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfValueType, put = setStaticF_typeOfValueType)) ::System::Type* typeOfValueType;

  /// @brief Field typeOfVoid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfVoid, put = setStaticF_typeOfVoid)) ::System::Type* typeOfVoid;

  /// @brief Field typeOfXmlDataNode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfXmlDataNode, put = setStaticF_typeOfXmlDataNode)) ::System::Type* typeOfXmlDataNode;

  /// @brief Field typeOfXmlElement, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfXmlElement, put = setStaticF_typeOfXmlElement)) ::System::Type* typeOfXmlElement;

  /// @brief Field typeOfXmlNodeArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfXmlNodeArray, put = setStaticF_typeOfXmlNodeArray)) ::System::Type* typeOfXmlNodeArray;

  /// @brief Field typeOfXmlQualifiedName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfXmlQualifiedName, put = setStaticF_typeOfXmlQualifiedName)) ::System::Type* typeOfXmlQualifiedName;

  /// @brief Field typeOfXmlRootAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfXmlRootAttribute, put = setStaticF_typeOfXmlRootAttribute)) ::System::Type* typeOfXmlRootAttribute;

  /// @brief Field typeOfXmlSchemaProviderAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfXmlSchemaProviderAttribute, put = setStaticF_typeOfXmlSchemaProviderAttribute)) ::System::Type* typeOfXmlSchemaProviderAttribute;

  /// @brief Field typeOfXmlSchemaType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeOfXmlSchemaType, put = setStaticF_typeOfXmlSchemaType)) ::System::Type* typeOfXmlSchemaType;

  static inline ::StringW getStaticF_NewObjectId();

  static inline ::System::Uri* getStaticF_dataContractXsdBaseNamespaceUri();

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_emptyObjectArray();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_emptyTypeArray();

  static inline ::System::Type* getStaticF_typeOfArray();

  static inline ::System::Type* getStaticF_typeOfByteArray();

  static inline ::System::Type* getStaticF_typeOfClassDataNode();

  static inline ::System::Type* getStaticF_typeOfCollectionDataContractAttribute();

  static inline ::System::Type* getStaticF_typeOfCollectionDataNode();

  static inline ::System::Type* getStaticF_typeOfDBNull();

  static inline ::System::Type* getStaticF_typeOfDataContractAttribute();

  static inline ::System::Type* getStaticF_typeOfDataMemberAttribute();

  static inline ::System::Type* getStaticF_typeOfDateTimeOffset();

  static inline ::System::Type* getStaticF_typeOfDateTimeOffsetAdapter();

  static inline ::System::Type* getStaticF_typeOfDictionaryEnumerator();

  static inline ::System::Type* getStaticF_typeOfDictionaryGeneric();

  static inline ::System::Type* getStaticF_typeOfEnumMemberAttribute();

  static inline ::System::Type* getStaticF_typeOfExtensionDataObject();

  static inline ::System::Type* getStaticF_typeOfFlagsAttribute();

  static inline ::System::Type* getStaticF_typeOfGenericDictionaryEnumerator();

  static inline ::System::Type* getStaticF_typeOfGuid();

  static inline ::System::Type* getStaticF_typeOfHashtable();

  static inline ::System::Type* getStaticF_typeOfICollection();

  static inline ::System::Type* getStaticF_typeOfICollectionGeneric();

  static inline ::System::Type* getStaticF_typeOfIDeserializationCallback();

  static inline ::System::Type* getStaticF_typeOfIDictionary();

  static inline ::System::Type* getStaticF_typeOfIDictionaryGeneric();

  static inline ::System::Type* getStaticF_typeOfIEnumerable();

  static inline ::System::Type* getStaticF_typeOfIEnumerableGeneric();

  static inline ::System::Type* getStaticF_typeOfIEnumerator();

  static inline ::System::Type* getStaticF_typeOfIEnumeratorGeneric();

  static inline ::System::Type* getStaticF_typeOfIExtensibleDataObject();

  static inline ::System::Type* getStaticF_typeOfIList();

  static inline ::System::Type* getStaticF_typeOfIListGeneric();

  static inline ::System::Type* getStaticF_typeOfIObjectReference();

  static inline ::System::Type* getStaticF_typeOfISerializable();

  static inline ::System::Type* getStaticF_typeOfISerializableDataNode();

  static inline ::System::Type* getStaticF_typeOfIXmlSerializable();

  static inline ::System::Type* getStaticF_typeOfInt();

  static inline ::System::Type* getStaticF_typeOfKeyValue();

  static inline ::System::Type* getStaticF_typeOfKeyValuePair();

  static inline ::System::Type* getStaticF_typeOfKnownTypeAttribute();

  static inline ::System::Type* getStaticF_typeOfNullable();

  static inline ::System::Type* getStaticF_typeOfObject();

  static inline ::System::Type* getStaticF_typeOfObjectArray();

  static inline ::System::Type* getStaticF_typeOfOnDeserializedAttribute();

  static inline ::System::Type* getStaticF_typeOfOnDeserializingAttribute();

  static inline ::System::Type* getStaticF_typeOfOnSerializedAttribute();

  static inline ::System::Type* getStaticF_typeOfOnSerializingAttribute();

  static inline ::System::Type* getStaticF_typeOfOptionalFieldAttribute();

  static inline ::System::Type* getStaticF_typeOfReflectionPointer();

  static inline ::System::Type* getStaticF_typeOfStreamingContext();

  static inline ::System::Type* getStaticF_typeOfString();

  static inline ::System::Type* getStaticF_typeOfTimeSpan();

  static inline ::System::Type* getStaticF_typeOfTypeEnumerable();

  static inline ::System::Type* getStaticF_typeOfULong();

  static inline ::System::Type* getStaticF_typeOfUri();

  static inline ::System::Type* getStaticF_typeOfValueType();

  static inline ::System::Type* getStaticF_typeOfVoid();

  static inline ::System::Type* getStaticF_typeOfXmlDataNode();

  static inline ::System::Type* getStaticF_typeOfXmlElement();

  static inline ::System::Type* getStaticF_typeOfXmlNodeArray();

  static inline ::System::Type* getStaticF_typeOfXmlQualifiedName();

  static inline ::System::Type* getStaticF_typeOfXmlRootAttribute();

  static inline ::System::Type* getStaticF_typeOfXmlSchemaProviderAttribute();

  static inline ::System::Type* getStaticF_typeOfXmlSchemaType();

  /// @brief Method get_DataContractXsdBaseNamespaceUri, addr 0x5f28868, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Uri* get_DataContractXsdBaseNamespaceUri();

  /// @brief Method get_EmptyObjectArray, addr 0x5f2b048, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_EmptyObjectArray();

  /// @brief Method get_EmptyTypeArray, addr 0x5f2ae84, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_EmptyTypeArray();

  /// @brief Method get_TypeOfArray, addr 0x5f21ab4, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfArray();

  /// @brief Method get_TypeOfByteArray, addr 0x5f38ca0, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfByteArray();

  /// @brief Method get_TypeOfClassDataNode, addr 0x5f33eb0, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfClassDataNode();

  /// @brief Method get_TypeOfCollectionDataContractAttribute, addr 0x5f27c6c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfCollectionDataContractAttribute();

  /// @brief Method get_TypeOfCollectionDataNode, addr 0x5f3408c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfCollectionDataNode();

  /// @brief Method get_TypeOfDBNull, addr 0x5f3ae04, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfDBNull();

  /// @brief Method get_TypeOfDataContractAttribute, addr 0x5f25dfc, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfDataContractAttribute();

  /// @brief Method get_TypeOfDataMemberAttribute, addr 0x5f33ccc, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfDataMemberAttribute();

  /// @brief Method get_TypeOfDateTimeOffset, addr 0x5f2c510, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfDateTimeOffset();

  /// @brief Method get_TypeOfDateTimeOffsetAdapter, addr 0x5f2c60c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfDateTimeOffsetAdapter();

  /// @brief Method get_TypeOfDictionaryEnumerator, addr 0x5f3a918, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfDictionaryEnumerator();

  /// @brief Method get_TypeOfDictionaryGeneric, addr 0x5f3ab10, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfDictionaryGeneric();

  /// @brief Method get_TypeOfEnumMemberAttribute, addr 0x5f33bd0, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfEnumMemberAttribute();

  /// @brief Method get_TypeOfExtensionDataObject, addr 0x5f3a42c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfExtensionDataObject();

  /// @brief Method get_TypeOfFlagsAttribute, addr 0x5f33214, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfFlagsAttribute();

  /// @brief Method get_TypeOfGenericDictionaryEnumerator, addr 0x5f3aa14, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfGenericDictionaryEnumerator();

  /// @brief Method get_TypeOfGuid, addr 0x5f38e98, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfGuid();

  /// @brief Method get_TypeOfHashtable, addr 0x5f3ac0c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfHashtable();

  /// @brief Method get_TypeOfICollection, addr 0x5f20e90, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfICollection();

  /// @brief Method get_TypeOfICollectionGeneric, addr 0x5f20b9c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfICollectionGeneric();

  /// @brief Method get_TypeOfIDeserializationCallback, addr 0x5f39760, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIDeserializationCallback();

  /// @brief Method get_TypeOfIDictionary, addr 0x5f209a4, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIDictionary();

  /// @brief Method get_TypeOfIDictionaryGeneric, addr 0x5f208a8, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIDictionaryGeneric();

  /// @brief Method get_TypeOfIEnumerable, addr 0x5f20f8c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIEnumerable();

  /// @brief Method get_TypeOfIEnumerableGeneric, addr 0x5f20d94, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIEnumerableGeneric();

  /// @brief Method get_TypeOfIEnumerator, addr 0x5f3a624, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIEnumerator();

  /// @brief Method get_TypeOfIEnumeratorGeneric, addr 0x5f3a528, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIEnumeratorGeneric();

  /// @brief Method get_TypeOfIExtensibleDataObject, addr 0x5f3a330, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIExtensibleDataObject();

  /// @brief Method get_TypeOfIList, addr 0x5f20c98, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIList();

  /// @brief Method get_TypeOfIListGeneric, addr 0x5f20aa0, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIListGeneric();

  /// @brief Method get_TypeOfIObjectReference, addr 0x5f3985c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIObjectReference();

  /// @brief Method get_TypeOfISerializable, addr 0x5f39664, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfISerializable();

  /// @brief Method get_TypeOfISerializableDataNode, addr 0x5f34678, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfISerializableDataNode();

  /// @brief Method get_TypeOfIXmlSerializable, addr 0x5f25ef8, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfIXmlSerializable();

  /// @brief Method get_TypeOfInt, addr 0x5f2e56c, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfInt();

  /// @brief Method get_TypeOfKeyValue, addr 0x5f3a81c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfKeyValue();

  /// @brief Method get_TypeOfKeyValuePair, addr 0x5f3a720, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfKeyValuePair();

  /// @brief Method get_TypeOfKnownTypeAttribute, addr 0x5f2aa80, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfKnownTypeAttribute();

  /// @brief Method get_TypeOfNullable, addr 0x5f2652c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfNullable();

  /// @brief Method get_TypeOfObject, addr 0x5f2c7a4, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfObject();

  /// @brief Method get_TypeOfObjectArray, addr 0x5f21ba0, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfObjectArray();

  /// @brief Method get_TypeOfOnDeserializedAttribute, addr 0x5f39d48, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfOnDeserializedAttribute();

  /// @brief Method get_TypeOfOnDeserializingAttribute, addr 0x5f39c4c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfOnDeserializingAttribute();

  /// @brief Method get_TypeOfOnSerializedAttribute, addr 0x5f39b50, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfOnSerializedAttribute();

  /// @brief Method get_TypeOfOnSerializingAttribute, addr 0x5f39a54, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfOnSerializingAttribute();

  /// @brief Method get_TypeOfOptionalFieldAttribute, addr 0x5f39958, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfOptionalFieldAttribute();

  /// @brief Method get_TypeOfReflectionPointer, addr 0x5f2c414, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfReflectionPointer();

  /// @brief Method get_TypeOfStreamingContext, addr 0x5f39568, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfStreamingContext();

  /// @brief Method get_TypeOfString, addr 0x5f39390, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfString();

  /// @brief Method get_TypeOfTimeSpan, addr 0x5f38d9c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfTimeSpan();

  /// @brief Method get_TypeOfTypeEnumerable, addr 0x5f2af4c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfTypeEnumerable();

  /// @brief Method get_TypeOfULong, addr 0x5f33ae4, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfULong();

  /// @brief Method get_TypeOfUri, addr 0x5f38f94, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfUri();

  /// @brief Method get_TypeOfValueType, addr 0x5f392a4, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfValueType();

  /// @brief Method get_TypeOfVoid, addr 0x5f3947c, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfVoid();

  /// @brief Method get_TypeOfXmlDataNode, addr 0x5f34480, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfXmlDataNode();

  /// @brief Method get_TypeOfXmlElement, addr 0x5f3ad08, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfXmlElement();

  /// @brief Method get_TypeOfXmlNodeArray, addr 0x5f3a234, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfXmlNodeArray();

  /// @brief Method get_TypeOfXmlQualifiedName, addr 0x5f3a03c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfXmlQualifiedName();

  /// @brief Method get_TypeOfXmlRootAttribute, addr 0x5f39f40, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfXmlRootAttribute();

  /// @brief Method get_TypeOfXmlSchemaProviderAttribute, addr 0x5f39e44, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfXmlSchemaProviderAttribute();

  /// @brief Method get_TypeOfXmlSchemaType, addr 0x5f3a138, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Type* get_TypeOfXmlSchemaType();

  static inline void setStaticF_NewObjectId(::StringW value);

  static inline void setStaticF_dataContractXsdBaseNamespaceUri(::System::Uri* value);

  static inline void setStaticF_emptyObjectArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline void setStaticF_emptyTypeArray(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_typeOfArray(::System::Type* value);

  static inline void setStaticF_typeOfByteArray(::System::Type* value);

  static inline void setStaticF_typeOfClassDataNode(::System::Type* value);

  static inline void setStaticF_typeOfCollectionDataContractAttribute(::System::Type* value);

  static inline void setStaticF_typeOfCollectionDataNode(::System::Type* value);

  static inline void setStaticF_typeOfDBNull(::System::Type* value);

  static inline void setStaticF_typeOfDataContractAttribute(::System::Type* value);

  static inline void setStaticF_typeOfDataMemberAttribute(::System::Type* value);

  static inline void setStaticF_typeOfDateTimeOffset(::System::Type* value);

  static inline void setStaticF_typeOfDateTimeOffsetAdapter(::System::Type* value);

  static inline void setStaticF_typeOfDictionaryEnumerator(::System::Type* value);

  static inline void setStaticF_typeOfDictionaryGeneric(::System::Type* value);

  static inline void setStaticF_typeOfEnumMemberAttribute(::System::Type* value);

  static inline void setStaticF_typeOfExtensionDataObject(::System::Type* value);

  static inline void setStaticF_typeOfFlagsAttribute(::System::Type* value);

  static inline void setStaticF_typeOfGenericDictionaryEnumerator(::System::Type* value);

  static inline void setStaticF_typeOfGuid(::System::Type* value);

  static inline void setStaticF_typeOfHashtable(::System::Type* value);

  static inline void setStaticF_typeOfICollection(::System::Type* value);

  static inline void setStaticF_typeOfICollectionGeneric(::System::Type* value);

  static inline void setStaticF_typeOfIDeserializationCallback(::System::Type* value);

  static inline void setStaticF_typeOfIDictionary(::System::Type* value);

  static inline void setStaticF_typeOfIDictionaryGeneric(::System::Type* value);

  static inline void setStaticF_typeOfIEnumerable(::System::Type* value);

  static inline void setStaticF_typeOfIEnumerableGeneric(::System::Type* value);

  static inline void setStaticF_typeOfIEnumerator(::System::Type* value);

  static inline void setStaticF_typeOfIEnumeratorGeneric(::System::Type* value);

  static inline void setStaticF_typeOfIExtensibleDataObject(::System::Type* value);

  static inline void setStaticF_typeOfIList(::System::Type* value);

  static inline void setStaticF_typeOfIListGeneric(::System::Type* value);

  static inline void setStaticF_typeOfIObjectReference(::System::Type* value);

  static inline void setStaticF_typeOfISerializable(::System::Type* value);

  static inline void setStaticF_typeOfISerializableDataNode(::System::Type* value);

  static inline void setStaticF_typeOfIXmlSerializable(::System::Type* value);

  static inline void setStaticF_typeOfInt(::System::Type* value);

  static inline void setStaticF_typeOfKeyValue(::System::Type* value);

  static inline void setStaticF_typeOfKeyValuePair(::System::Type* value);

  static inline void setStaticF_typeOfKnownTypeAttribute(::System::Type* value);

  static inline void setStaticF_typeOfNullable(::System::Type* value);

  static inline void setStaticF_typeOfObject(::System::Type* value);

  static inline void setStaticF_typeOfObjectArray(::System::Type* value);

  static inline void setStaticF_typeOfOnDeserializedAttribute(::System::Type* value);

  static inline void setStaticF_typeOfOnDeserializingAttribute(::System::Type* value);

  static inline void setStaticF_typeOfOnSerializedAttribute(::System::Type* value);

  static inline void setStaticF_typeOfOnSerializingAttribute(::System::Type* value);

  static inline void setStaticF_typeOfOptionalFieldAttribute(::System::Type* value);

  static inline void setStaticF_typeOfReflectionPointer(::System::Type* value);

  static inline void setStaticF_typeOfStreamingContext(::System::Type* value);

  static inline void setStaticF_typeOfString(::System::Type* value);

  static inline void setStaticF_typeOfTimeSpan(::System::Type* value);

  static inline void setStaticF_typeOfTypeEnumerable(::System::Type* value);

  static inline void setStaticF_typeOfULong(::System::Type* value);

  static inline void setStaticF_typeOfUri(::System::Type* value);

  static inline void setStaticF_typeOfValueType(::System::Type* value);

  static inline void setStaticF_typeOfVoid(::System::Type* value);

  static inline void setStaticF_typeOfXmlDataNode(::System::Type* value);

  static inline void setStaticF_typeOfXmlElement(::System::Type* value);

  static inline void setStaticF_typeOfXmlNodeArray(::System::Type* value);

  static inline void setStaticF_typeOfXmlQualifiedName(::System::Type* value);

  static inline void setStaticF_typeOfXmlRootAttribute(::System::Type* value);

  static inline void setStaticF_typeOfXmlSchemaProviderAttribute(::System::Type* value);

  static inline void setStaticF_typeOfXmlSchemaType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Globals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Globals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Globals(Globals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Globals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Globals(Globals const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17002 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Globals, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::Globals);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Globals*, "System.Runtime.Serialization", "Globals");
