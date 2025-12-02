#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataContractSerializer)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class DataContractResolver;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class IDataContractSurrogate;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Runtime::Serialization {
class XmlWriterDelegator;
}
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DataContractSerializer;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataContractSerializer);
// Dependencies System.Runtime.Serialization.XmlObjectSerializer
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataContractSerializer
class CORDL_TYPE DataContractSerializer : public ::System::Runtime::Serialization::XmlObjectSerializer {
public:
  // Declarations
  __declspec(property(get = get_DataContractResolver)) ::System::Runtime::Serialization::DataContractResolver* DataContractResolver;

  __declspec(property(get = get_DataContractSurrogate)) ::System::Runtime::Serialization::IDataContractSurrogate* DataContractSurrogate;

  __declspec(property(get = get_IgnoreExtensionDataObject)) bool IgnoreExtensionDataObject;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  __declspec(property(get = get_MaxItemsInObjectGraph)) int32_t MaxItemsInObjectGraph;

  __declspec(property(get = get_PreserveObjectReferences)) bool PreserveObjectReferences;

  __declspec(property(get = get_RootContract)) ::System::Runtime::Serialization::DataContract* RootContract;

  __declspec(property(get = get_SerializeReadOnlyTypes)) bool SerializeReadOnlyTypes;

  /// @brief Field dataContractResolver, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_dataContractResolver, put = __cordl_internal_set_dataContractResolver)) ::System::Runtime::Serialization::DataContractResolver* dataContractResolver;

  /// @brief Field dataContractSurrogate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_dataContractSurrogate,
                      put = __cordl_internal_set_dataContractSurrogate)) ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate;

  /// @brief Field ignoreExtensionDataObject, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreExtensionDataObject, put = __cordl_internal_set_ignoreExtensionDataObject)) bool ignoreExtensionDataObject;

  /// @brief Field knownDataContracts, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get_knownDataContracts,
      put =
          __cordl_internal_set_knownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* knownDataContracts;

  /// @brief Field knownTypeList, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_knownTypeList, put = __cordl_internal_set_knownTypeList)) ::System::Collections::Generic::IList_1<::System::Type*>* knownTypeList;

  /// @brief Field maxItemsInObjectGraph, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_maxItemsInObjectGraph, put = __cordl_internal_set_maxItemsInObjectGraph)) int32_t maxItemsInObjectGraph;

  /// @brief Field needsContractNsAtRoot, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_needsContractNsAtRoot, put = __cordl_internal_set_needsContractNsAtRoot)) bool needsContractNsAtRoot;

  /// @brief Field preserveObjectReferences, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_preserveObjectReferences, put = __cordl_internal_set_preserveObjectReferences)) bool preserveObjectReferences;

  /// @brief Field rootContract, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rootContract, put = __cordl_internal_set_rootContract)) ::System::Runtime::Serialization::DataContract* rootContract;

  /// @brief Field rootName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rootName, put = __cordl_internal_set_rootName)) ::System::Xml::XmlDictionaryString* rootName;

  /// @brief Field rootNamespace, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rootNamespace, put = __cordl_internal_set_rootNamespace)) ::System::Xml::XmlDictionaryString* rootNamespace;

  /// @brief Field rootType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rootType, put = __cordl_internal_set_rootType)) ::System::Type* rootType;

  /// @brief Field serializeReadOnlyTypes, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_serializeReadOnlyTypes, put = __cordl_internal_set_serializeReadOnlyTypes)) bool serializeReadOnlyTypes;

  /// @brief Method GetDataContract, addr 0x5f2fdac, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::Runtime::Serialization::DataContract* declaredTypeContract, ::System::Type* declaredType,
                                                                                ::System::Type* objectType);

  /// @brief Method GetDeserializeType, addr 0x5f30254, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* GetDeserializeType();

  /// @brief Method GetSerializeType, addr 0x5f3023c, size 0x18, virtual true, abstract: false, final false
  inline ::System::Type* GetSerializeType(::System::Object* graph);

  /// @brief Method GetSurrogatedType, addr 0x5f2f45c, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Type* GetSurrogatedType(::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate, ::System::Type* type);

  /// @brief Method Initialize, addr 0x5f2ef3c, size 0x458, virtual false, abstract: false, final false
  inline void Initialize(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes, int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject,
                         bool preserveObjectReferences, ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate,
                         ::System::Runtime::Serialization::DataContractResolver* dataContractResolver, bool serializeReadOnlyTypes);

  /// @brief Method InternalIsStartObject, addr 0x5f30208, size 0x34, virtual true, abstract: false, final false
  inline bool InternalIsStartObject(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method InternalReadObject, addr 0x5f2fe98, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, bool verifyObjectName);

  /// @brief Method InternalReadObject, addr 0x5f2feac, size 0x35c, virtual true, abstract: false, final false
  inline ::System::Object* InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, bool verifyObjectName,
                                              ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method InternalWriteEndObject, addr 0x5f2fe44, size 0x54, virtual true, abstract: false, final false
  inline void InternalWriteEndObject(::System::Runtime::Serialization::XmlWriterDelegator* writer);

  /// @brief Method InternalWriteObject, addr 0x5f2f480, size 0x14, virtual true, abstract: false, final false
  inline void InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method InternalWriteObject, addr 0x5f2f494, size 0x64, virtual true, abstract: false, final false
  inline void InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph, ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method InternalWriteObjectContent, addr 0x5f2fcf0, size 0x8, virtual true, abstract: false, final false
  inline void InternalWriteObjectContent(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method InternalWriteObjectContent, addr 0x5f2f4f8, size 0x3f0, virtual false, abstract: false, final false
  inline void InternalWriteObjectContent(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph,
                                         ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method InternalWriteStartObject, addr 0x5f2fcb8, size 0x38, virtual true, abstract: false, final false
  inline void InternalWriteStartObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  static inline ::System::Runtime::Serialization::DataContractSerializer* New_ctor(::System::Type* type);

  static inline ::System::Runtime::Serialization::DataContractSerializer* New_ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes);

  static inline ::System::Runtime::Serialization::DataContractSerializer* New_ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes,
                                                                                   int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject, bool preserveObjectReferences,
                                                                                   ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate);

  static inline ::System::Runtime::Serialization::DataContractSerializer* New_ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes,
                                                                                   int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject, bool preserveObjectReferences,
                                                                                   ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate,
                                                                                   ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method ReadObject, addr 0x5f2fc3c, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlDictionaryReader* reader, bool verifyObjectName);

  /// @brief Method ReadObject, addr 0x5f2fbc0, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlReader* reader, bool verifyObjectName);

  /// @brief Method SurrogateToDataContractType, addr 0x5f2fcf8, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Object* SurrogateToDataContractType(::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate, ::System::Object* oldObj,
                                                              ::System::Type* surrogatedDeclaredType, ::ByRef<::System::Type*> objType);

  /// @brief Method WriteEndObject, addr 0x5f2fb4c, size 0x74, virtual true, abstract: false, final false
  inline void WriteEndObject(::System::Xml::XmlDictionaryWriter* writer);

  /// @brief Method WriteEndObject, addr 0x5f2f9e0, size 0x74, virtual true, abstract: false, final false
  inline void WriteEndObject(::System::Xml::XmlWriter* writer);

  /// @brief Method WriteObjectContent, addr 0x5f2fad0, size 0x7c, virtual true, abstract: false, final false
  inline void WriteObjectContent(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteObjectContent, addr 0x5f2f964, size 0x7c, virtual true, abstract: false, final false
  inline void WriteObjectContent(::System::Xml::XmlWriter* writer, ::System::Object* graph);

  /// @brief Method WriteStartObject, addr 0x5f2fa54, size 0x7c, virtual true, abstract: false, final false
  inline void WriteStartObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteStartObject, addr 0x5f2f8e8, size 0x7c, virtual true, abstract: false, final false
  inline void WriteStartObject(::System::Xml::XmlWriter* writer, ::System::Object* graph);

  constexpr ::System::Runtime::Serialization::DataContractResolver* const& __cordl_internal_get_dataContractResolver() const;

  constexpr ::System::Runtime::Serialization::DataContractResolver*& __cordl_internal_get_dataContractResolver();

  constexpr ::System::Runtime::Serialization::IDataContractSurrogate* const& __cordl_internal_get_dataContractSurrogate() const;

  constexpr ::System::Runtime::Serialization::IDataContractSurrogate*& __cordl_internal_get_dataContractSurrogate();

  constexpr bool const& __cordl_internal_get_ignoreExtensionDataObject() const;

  constexpr bool& __cordl_internal_get_ignoreExtensionDataObject();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const& __cordl_internal_get_knownDataContracts() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*& __cordl_internal_get_knownDataContracts();

  constexpr ::System::Collections::Generic::IList_1<::System::Type*>* const& __cordl_internal_get_knownTypeList() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Type*>*& __cordl_internal_get_knownTypeList();

  constexpr int32_t const& __cordl_internal_get_maxItemsInObjectGraph() const;

  constexpr int32_t& __cordl_internal_get_maxItemsInObjectGraph();

  constexpr bool const& __cordl_internal_get_needsContractNsAtRoot() const;

  constexpr bool& __cordl_internal_get_needsContractNsAtRoot();

  constexpr bool const& __cordl_internal_get_preserveObjectReferences() const;

  constexpr bool& __cordl_internal_get_preserveObjectReferences();

  constexpr ::System::Runtime::Serialization::DataContract* const& __cordl_internal_get_rootContract() const;

  constexpr ::System::Runtime::Serialization::DataContract*& __cordl_internal_get_rootContract();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_rootName() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_rootName();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_rootNamespace() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_rootNamespace();

  constexpr ::System::Type* const& __cordl_internal_get_rootType() const;

  constexpr ::System::Type*& __cordl_internal_get_rootType();

  constexpr bool const& __cordl_internal_get_serializeReadOnlyTypes() const;

  constexpr bool& __cordl_internal_get_serializeReadOnlyTypes();

  constexpr void __cordl_internal_set_dataContractResolver(::System::Runtime::Serialization::DataContractResolver* value);

  constexpr void __cordl_internal_set_dataContractSurrogate(::System::Runtime::Serialization::IDataContractSurrogate* value);

  constexpr void __cordl_internal_set_ignoreExtensionDataObject(bool value);

  constexpr void __cordl_internal_set_knownDataContracts(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value);

  constexpr void __cordl_internal_set_knownTypeList(::System::Collections::Generic::IList_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_maxItemsInObjectGraph(int32_t value);

  constexpr void __cordl_internal_set_needsContractNsAtRoot(bool value);

  constexpr void __cordl_internal_set_preserveObjectReferences(bool value);

  constexpr void __cordl_internal_set_rootContract(::System::Runtime::Serialization::DataContract* value);

  constexpr void __cordl_internal_set_rootName(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_rootNamespace(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_rootType(::System::Type* value);

  constexpr void __cordl_internal_set_serializeReadOnlyTypes(bool value);

  /// @brief Method .ctor, addr 0x5f2ee9c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x5f2eed0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes);

  /// @brief Method .ctor, addr 0x5f2ef00, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes, int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject,
                    bool preserveObjectReferences, ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate);

  /// @brief Method .ctor, addr 0x5f2ef20, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* knownTypes, int32_t maxItemsInObjectGraph, bool ignoreExtensionDataObject,
                    bool preserveObjectReferences, ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate,
                    ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method get_DataContractResolver, addr 0x5f2f3e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContractResolver* get_DataContractResolver();

  /// @brief Method get_DataContractSurrogate, addr 0x5f2f3c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataContractSurrogate* get_DataContractSurrogate();

  /// @brief Method get_IgnoreExtensionDataObject, addr 0x5f2f3d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreExtensionDataObject();

  /// @brief Method get_KnownDataContracts, addr 0x5f2f394, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_MaxItemsInObjectGraph, addr 0x5f2f3c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxItemsInObjectGraph();

  /// @brief Method get_PreserveObjectReferences, addr 0x5f2f3d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_PreserveObjectReferences();

  /// @brief Method get_RootContract, addr 0x5f2f3f0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* get_RootContract();

  /// @brief Method get_SerializeReadOnlyTypes, addr 0x5f2f3e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_SerializeReadOnlyTypes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataContractSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataContractSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataContractSerializer(DataContractSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataContractSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataContractSerializer(DataContractSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16978 };

  /// @brief Field rootType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___rootType;

  /// @brief Field rootContract, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContract* ___rootContract;

  /// @brief Field needsContractNsAtRoot, offset: 0x20, size: 0x1, def value: None
  bool ___needsContractNsAtRoot;

  /// @brief Field rootName, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___rootName;

  /// @brief Field rootNamespace, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___rootNamespace;

  /// @brief Field maxItemsInObjectGraph, offset: 0x38, size: 0x4, def value: None
  int32_t ___maxItemsInObjectGraph;

  /// @brief Field ignoreExtensionDataObject, offset: 0x3c, size: 0x1, def value: None
  bool ___ignoreExtensionDataObject;

  /// @brief Field preserveObjectReferences, offset: 0x3d, size: 0x1, def value: None
  bool ___preserveObjectReferences;

  /// @brief Field dataContractSurrogate, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::IDataContractSurrogate* ___dataContractSurrogate;

  /// @brief Field knownTypeList, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Type*>* ___knownTypeList;

  /// @brief Field knownDataContracts, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* ___knownDataContracts;

  /// @brief Field dataContractResolver, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContractResolver* ___dataContractResolver;

  /// @brief Field serializeReadOnlyTypes, offset: 0x60, size: 0x1, def value: None
  bool ___serializeReadOnlyTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___rootType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___rootContract) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___needsContractNsAtRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___rootName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___rootNamespace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___maxItemsInObjectGraph) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___ignoreExtensionDataObject) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___preserveObjectReferences) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___dataContractSurrogate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___knownTypeList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___knownDataContracts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___dataContractResolver) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractSerializer, ___serializeReadOnlyTypes) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataContractSerializer, 0x68>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataContractSerializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContractSerializer*, "System.Runtime.Serialization", "DataContractSerializer");
