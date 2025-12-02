#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlObjectSerializerWriteContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ObjectReferenceStack_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlObjectSerializerWriteContext)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
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
class IDataNode;
}
namespace System::Runtime::Serialization {
class ISerializableDataNode;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class NetDataContractSerializer;
}
namespace System::Runtime::Serialization {
class ObjectToIdCache;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class XmlDataNode;
}
namespace System::Runtime::Serialization {
class XmlSerializableWriter;
}
namespace System::Runtime::Serialization {
class XmlWriterDelegator;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Array;
}
namespace System {
template <typename T> struct Nullable_1;
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
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlObjectSerializerWriteContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlObjectSerializerWriteContext);
// Dependencies System.Runtime.Serialization.ObjectReferenceStack, System.Runtime.Serialization.XmlObjectSerializerContext
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializerWriteContext
class CORDL_TYPE XmlObjectSerializerWriteContext : public ::System::Runtime::Serialization::XmlObjectSerializerContext {
public:
  // Declarations
  __declspec(property(get = get_IsGetOnlyCollection, put = set_IsGetOnlyCollection)) bool IsGetOnlyCollection;

  __declspec(property(get = get_SerializeReadOnlyTypes)) bool SerializeReadOnlyTypes;

  __declspec(property(get = get_SerializedObjects)) ::System::Runtime::Serialization::ObjectToIdCache* SerializedObjects;

  __declspec(property(get = get_UnsafeTypeForwardingEnabled)) bool UnsafeTypeForwardingEnabled;

  /// @brief Field byValObjectsInScope, offset 0x78, size 0x20
  __declspec(property(get = __cordl_internal_get_byValObjectsInScope, put = __cordl_internal_set_byValObjectsInScope)) ::System::Runtime::Serialization::ObjectReferenceStack byValObjectsInScope;

  /// @brief Field isGetOnlyCollection, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_isGetOnlyCollection, put = __cordl_internal_set_isGetOnlyCollection)) bool isGetOnlyCollection;

  /// @brief Field preserveObjectReferences, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_preserveObjectReferences, put = __cordl_internal_set_preserveObjectReferences)) bool preserveObjectReferences;

  /// @brief Field serializeReadOnlyTypes, offset 0xb2, size 0x1
  __declspec(property(get = __cordl_internal_get_serializeReadOnlyTypes, put = __cordl_internal_set_serializeReadOnlyTypes)) bool serializeReadOnlyTypes;

  /// @brief Field serializedObjects, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedObjects, put = __cordl_internal_set_serializedObjects)) ::System::Runtime::Serialization::ObjectToIdCache* serializedObjects;

  /// @brief Field unsafeTypeForwardingEnabled, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get_unsafeTypeForwardingEnabled, put = __cordl_internal_set_unsafeTypeForwardingEnabled)) bool unsafeTypeForwardingEnabled;

  /// @brief Field xmlSerializableWriter, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlSerializableWriter,
                      put = __cordl_internal_set_xmlSerializableWriter)) ::System::Runtime::Serialization::XmlSerializableWriter* xmlSerializableWriter;

  /// @brief Method CreateContext, addr 0x5f51440, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* CreateContext(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                                 ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                                 ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method CreateContext, addr 0x5f515cc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* CreateContext(::System::Runtime::Serialization::NetDataContractSerializer* serializer,
                                                                                                 ::System::Collections::Hashtable* surrogateDataContracts);

  /// @brief Method GetDefaultValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetDefaultValue();

  /// @brief Method GetHasValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool GetHasValue(::System::Nullable_1<T> value);

  /// @brief Method GetNullableValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetNullableValue(::System::Nullable_1<T> value);

  /// @brief Method GetObjectData, addr 0x5f53150, size 0xc8, virtual false, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::ISerializable* obj, ::System::Runtime::Serialization::SerializationInfo* serInfo,
                            ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method HandleGraphAtTopLevel, addr 0x5f52954, size 0x124, virtual false, abstract: false, final false
  inline void HandleGraphAtTopLevel(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj, ::System::Runtime::Serialization::DataContract* contract);

  /// @brief Method IncrementArrayCount, addr 0x5f52c9c, size 0x58, virtual false, abstract: false, final false
  inline void IncrementArrayCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Array* array);

  /// @brief Method IncrementCollectionCount, addr 0x5f52d34, size 0xe0, virtual false, abstract: false, final false
  inline void IncrementCollectionCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Collections::ICollection* collection);

  /// @brief Method IncrementCollectionCount, addr 0x5f52cf4, size 0x40, virtual false, abstract: false, final false
  inline void IncrementCollectionCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, int32_t size);

  /// @brief Method IncrementCollectionCountGeneric, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void IncrementCollectionCountGeneric(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Collections::Generic::ICollection_1<T>* collection);

  /// @brief Method InternalSerialize, addr 0x5f5182c, size 0x1fc, virtual true, abstract: false, final false
  inline void InternalSerialize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                ::System::RuntimeTypeHandle declaredTypeHandle);

  /// @brief Method InternalSerializeReference, addr 0x5f5178c, size 0xa0, virtual false, abstract: false, final false
  inline void InternalSerializeReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                         ::System::RuntimeTypeHandle declaredTypeHandle);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                            ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                            ::System::Runtime::Serialization::DataContractResolver* resolver);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* New_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer);

  /// @brief Method OnEndHandleReference, addr 0x5f52c28, size 0x2c, virtual true, abstract: false, final false
  inline void OnEndHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, bool canContainCyclicReference);

  /// @brief Method OnHandleIsReference, addr 0x5f51b00, size 0x298, virtual false, abstract: false, final false
  inline bool OnHandleIsReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::DataContract* contract, ::System::Object* obj);

  /// @brief Method OnHandleReference, addr 0x5f52a78, size 0x1b0, virtual true, abstract: false, final false
  inline bool OnHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, bool canContainCyclicReference);

  /// @brief Method ResolveType, addr 0x5f533a0, size 0x1e8, virtual false, abstract: false, final false
  inline bool ResolveType(::System::Type* objectType, ::System::Type* declaredType, ::ByRef<::System::Xml::XmlDictionaryString*> typeName, ::ByRef<::System::Xml::XmlDictionaryString*> typeNamespace);

  /// @brief Method SerializeAndVerifyType, addr 0x5f51ef0, size 0x1c4, virtual false, abstract: false, final false
  inline void SerializeAndVerifyType(::System::Runtime::Serialization::DataContract* dataContract, ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                     bool verifyKnownType, ::System::RuntimeTypeHandle declaredTypeHandle, ::System::Type* declaredType);

  /// @brief Method SerializeWithXsiType, addr 0x5f520b4, size 0x304, virtual true, abstract: false, final false
  inline void SerializeWithXsiType(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::RuntimeTypeHandle objectTypeHandle, ::System::Type* objectType,
                                   int32_t declaredTypeID, ::System::RuntimeTypeHandle declaredTypeHandle, ::System::Type* declaredType);

  /// @brief Method SerializeWithXsiTypeAtTopLevel, addr 0x5f51d98, size 0xf4, virtual true, abstract: false, final false
  inline void SerializeWithXsiTypeAtTopLevel(::System::Runtime::Serialization::DataContract* dataContract, ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                             ::System::RuntimeTypeHandle originalDeclaredTypeHandle, ::System::Type* graphType);

  /// @brief Method SerializeWithoutXsiType, addr 0x5f51a28, size 0xd8, virtual false, abstract: false, final false
  inline void SerializeWithoutXsiType(::System::Runtime::Serialization::DataContract* dataContract, ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                      ::System::RuntimeTypeHandle declaredTypeHandle);

  /// @brief Method StoreIsGetOnlyCollection, addr 0x5f51780, size 0xc, virtual false, abstract: false, final false
  inline void StoreIsGetOnlyCollection();

  /// @brief Method ThrowRequiredMemberMustBeEmitted, addr 0x5f52e18, size 0xd8, virtual false, abstract: false, final false
  static inline void ThrowRequiredMemberMustBeEmitted(::StringW memberName, ::System::Type* type);

  /// @brief Method TryWriteDeserializedExtensionData, addr 0x5f54c64, size 0x1a8, virtual false, abstract: false, final false
  inline bool TryWriteDeserializedExtensionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::IDataNode* dataNode);

  /// @brief Method WriteAnyType, addr 0x5f523d0, size 0x1c, virtual true, abstract: false, final false
  inline void WriteAnyType(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* value);

  /// @brief Method WriteArraySize, addr 0x5f52e14, size 0x4, virtual true, abstract: false, final false
  inline void WriteArraySize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, int32_t size);

  /// @brief Method WriteBase64, addr 0x5f52568, size 0x24, virtual true, abstract: false, final false
  inline void WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteBase64, addr 0x5f5258c, size 0xf8, virtual true, abstract: false, final false
  inline void WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::System::Xml::XmlDictionaryString* name,
                          ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteClrTypeInfo, addr 0x5f523b8, size 0x8, virtual true, abstract: false, final false
  inline bool WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::DataContract* dataContract);

  /// @brief Method WriteClrTypeInfo, addr 0x5f523c0, size 0x8, virtual true, abstract: false, final false
  inline bool WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType, ::StringW clrTypeName, ::StringW clrAssemblyName);

  /// @brief Method WriteClrTypeInfo, addr 0x5f523c8, size 0x8, virtual true, abstract: false, final false
  inline bool WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType, ::System::Runtime::Serialization::SerializationInfo* serInfo);

  /// @brief Method WriteDataContractValue, addr 0x5f54e0c, size 0x2c, virtual true, abstract: false, final false
  inline void WriteDataContractValue(::System::Runtime::Serialization::DataContract* dataContract, ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                     ::System::RuntimeTypeHandle declaredTypeHandle);

  /// @brief Method WriteExtensionClassData, addr 0x5f54144, size 0x18c, virtual false, abstract: false, final false
  inline void WriteExtensionClassData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::ClassDataNode* dataNode);

  /// @brief Method WriteExtensionCollectionData, addr 0x5f542d0, size 0x1d0, virtual false, abstract: false, final false
  inline void WriteExtensionCollectionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::CollectionDataNode* dataNode);

  /// @brief Method WriteExtensionData, addr 0x5f53588, size 0x18c, virtual false, abstract: false, final false
  inline void WriteExtensionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::ExtensionDataObject* extensionData, int32_t memberIndex);

  /// @brief Method WriteExtensionDataMember, addr 0x5f53714, size 0x5c, virtual false, abstract: false, final false
  inline void WriteExtensionDataMember(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::ExtensionDataMember* member);

  /// @brief Method WriteExtensionDataTypeInfo, addr 0x5f53e74, size 0x2d0, virtual true, abstract: false, final false
  inline void WriteExtensionDataTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::IDataNode* dataNode);

  /// @brief Method WriteExtensionDataValue, addr 0x5f53770, size 0x704, virtual false, abstract: false, final false
  inline void WriteExtensionDataValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::IDataNode* dataNode);

  /// @brief Method WriteExtensionISerializableData, addr 0x5f54a20, size 0x244, virtual false, abstract: false, final false
  inline void WriteExtensionISerializableData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::ISerializableDataNode* dataNode);

  /// @brief Method WriteExtensionXmlData, addr 0x5f544a0, size 0x580, virtual false, abstract: false, final false
  inline void WriteExtensionXmlData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::XmlDataNode* dataNode);

  /// @brief Method WriteISerializable, addr 0x5f53218, size 0x188, virtual false, abstract: false, final false
  inline void WriteISerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::ISerializable* obj);

  /// @brief Method WriteIXmlSerializable, addr 0x5f45ef0, size 0x74, virtual false, abstract: false, final false
  inline void WriteIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj);

  /// @brief Method WriteIXmlSerializable, addr 0x5f52ef0, size 0x260, virtual false, abstract: false, final false
  static inline void WriteIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                           ::System::Runtime::Serialization::XmlSerializableWriter* xmlSerializableWriter);

  /// @brief Method WriteNull, addr 0x5f54e38, size 0x8, virtual true, abstract: false, final false
  inline void WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter);

  /// @brief Method WriteNull, addr 0x5f52c54, size 0x48, virtual false, abstract: false, final false
  inline void WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* memberType, bool isMemberTypeSerializable);

  /// @brief Method WriteNull, addr 0x5f524e8, size 0x80, virtual false, abstract: false, final false
  inline void WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* memberType, bool isMemberTypeSerializable, ::System::Xml::XmlDictionaryString* name,
                        ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteQName, addr 0x5f527c0, size 0x28, virtual true, abstract: false, final false
  inline void WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value);

  /// @brief Method WriteQName, addr 0x5f527e8, size 0x16c, virtual true, abstract: false, final false
  inline void WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value, ::System::Xml::XmlDictionaryString* name,
                         ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteResolvedTypeInfo, addr 0x5f51e8c, size 0x64, virtual false, abstract: false, final false
  inline void WriteResolvedTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Type* objectType, ::System::Type* declaredType);

  /// @brief Method WriteRootIXmlSerializable, addr 0x5f45e8c, size 0x64, virtual false, abstract: false, final false
  static inline void WriteRootIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj);

  /// @brief Method WriteSerializationInfo, addr 0x5f44760, size 0x2ec, virtual false, abstract: false, final false
  inline void WriteSerializationInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* objType, ::System::Runtime::Serialization::SerializationInfo* serInfo);

  /// @brief Method WriteString, addr 0x5f523ec, size 0x30, virtual true, abstract: false, final false
  inline void WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value);

  /// @brief Method WriteString, addr 0x5f5241c, size 0xcc, virtual true, abstract: false, final false
  inline void WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteTypeInfo, addr 0x5f54e40, size 0xc4, virtual true, abstract: false, final false
  inline bool WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Runtime::Serialization::DataContract* contract,
                            ::System::Runtime::Serialization::DataContract* declaredContract);

  /// @brief Method WriteTypeInfo, addr 0x5f54f04, size 0xa8, virtual true, abstract: false, final false
  inline void WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::StringW dataContractName, ::StringW dataContractNamespace);

  /// @brief Method WriteTypeInfo, addr 0x5f54fac, size 0xa8, virtual true, abstract: false, final false
  inline void WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Xml::XmlDictionaryString* dataContractName,
                            ::System::Xml::XmlDictionaryString* dataContractNamespace);

  /// @brief Method WriteUri, addr 0x5f52684, size 0x1c, virtual true, abstract: false, final false
  inline void WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value);

  /// @brief Method WriteUri, addr 0x5f526a0, size 0x120, virtual true, abstract: false, final false
  inline void WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  constexpr ::System::Runtime::Serialization::ObjectReferenceStack const& __cordl_internal_get_byValObjectsInScope() const;

  constexpr ::System::Runtime::Serialization::ObjectReferenceStack& __cordl_internal_get_byValObjectsInScope();

  constexpr bool const& __cordl_internal_get_isGetOnlyCollection() const;

  constexpr bool& __cordl_internal_get_isGetOnlyCollection();

  constexpr bool const& __cordl_internal_get_preserveObjectReferences() const;

  constexpr bool& __cordl_internal_get_preserveObjectReferences();

  constexpr bool const& __cordl_internal_get_serializeReadOnlyTypes() const;

  constexpr bool& __cordl_internal_get_serializeReadOnlyTypes();

  constexpr ::System::Runtime::Serialization::ObjectToIdCache* const& __cordl_internal_get_serializedObjects() const;

  constexpr ::System::Runtime::Serialization::ObjectToIdCache*& __cordl_internal_get_serializedObjects();

  constexpr bool const& __cordl_internal_get_unsafeTypeForwardingEnabled() const;

  constexpr bool& __cordl_internal_get_unsafeTypeForwardingEnabled();

  constexpr ::System::Runtime::Serialization::XmlSerializableWriter* const& __cordl_internal_get_xmlSerializableWriter() const;

  constexpr ::System::Runtime::Serialization::XmlSerializableWriter*& __cordl_internal_get_xmlSerializableWriter();

  constexpr void __cordl_internal_set_byValObjectsInScope(::System::Runtime::Serialization::ObjectReferenceStack value);

  constexpr void __cordl_internal_set_isGetOnlyCollection(bool value);

  constexpr void __cordl_internal_set_preserveObjectReferences(bool value);

  constexpr void __cordl_internal_set_serializeReadOnlyTypes(bool value);

  constexpr void __cordl_internal_set_serializedObjects(::System::Runtime::Serialization::ObjectToIdCache* value);

  constexpr void __cordl_internal_set_unsafeTypeForwardingEnabled(bool value);

  constexpr void __cordl_internal_set_xmlSerializableWriter(::System::Runtime::Serialization::XmlSerializableWriter* value);

  /// @brief Method .ctor, addr 0x5f51544, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::DataContractSerializer* serializer, ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                    ::System::Runtime::Serialization::DataContractResolver* resolver);

  /// @brief Method .ctor, addr 0x5f51684, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer);

  /// @brief Method get_IsGetOnlyCollection, addr 0x5f51760, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGetOnlyCollection();

  /// @brief Method get_SerializeReadOnlyTypes, addr 0x5f51770, size 0x8, virtual false, abstract: false, final false
  inline bool get_SerializeReadOnlyTypes();

  /// @brief Method get_SerializedObjects, addr 0x5f516fc, size 0x64, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ObjectToIdCache* get_SerializedObjects();

  /// @brief Method get_UnsafeTypeForwardingEnabled, addr 0x5f51778, size 0x8, virtual false, abstract: false, final false
  inline bool get_UnsafeTypeForwardingEnabled();

  /// @brief Method set_IsGetOnlyCollection, addr 0x5f51768, size 0x8, virtual true, abstract: false, final false
  inline void set_IsGetOnlyCollection(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializerWriteContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerWriteContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializerWriteContext(XmlObjectSerializerWriteContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerWriteContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializerWriteContext(XmlObjectSerializerWriteContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17097 };

  /// @brief Field byValObjectsInScope, offset: 0x78, size: 0x20, def value: None
  ::System::Runtime::Serialization::ObjectReferenceStack ___byValObjectsInScope;

  /// @brief Field xmlSerializableWriter, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlSerializableWriter* ___xmlSerializableWriter;

  /// @brief Field preserveObjectReferences, offset: 0xa0, size: 0x1, def value: None
  bool ___preserveObjectReferences;

  /// @brief Field serializedObjects, offset: 0xa8, size: 0x8, def value: None
  ::System::Runtime::Serialization::ObjectToIdCache* ___serializedObjects;

  /// @brief Field isGetOnlyCollection, offset: 0xb0, size: 0x1, def value: None
  bool ___isGetOnlyCollection;

  /// @brief Field unsafeTypeForwardingEnabled, offset: 0xb1, size: 0x1, def value: None
  bool ___unsafeTypeForwardingEnabled;

  /// @brief Field serializeReadOnlyTypes, offset: 0xb2, size: 0x1, def value: None
  bool ___serializeReadOnlyTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContext, ___byValObjectsInScope) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContext, ___xmlSerializableWriter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContext, ___preserveObjectReferences) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContext, ___serializedObjects) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContext, ___isGetOnlyCollection) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContext, ___unsafeTypeForwardingEnabled) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContext, ___serializeReadOnlyTypes) == 0xb2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlObjectSerializerWriteContext, 0xb8>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlObjectSerializerWriteContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlObjectSerializerWriteContext*, "System.Runtime.Serialization", "XmlObjectSerializerWriteContext");
