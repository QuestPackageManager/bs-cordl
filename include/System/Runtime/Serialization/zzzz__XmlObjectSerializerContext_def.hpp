#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlObjectSerializerContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ScopedKnownTypes_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlObjectSerializerContext)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Reflection {
class MethodInfo;
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
class KnownTypeDataContractResolver;
}
namespace System::Runtime::Serialization {
class NetDataContractSerializer;
}
namespace System::Runtime::Serialization {
struct SerializationMode;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializer;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlObjectSerializerContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlObjectSerializerContext);
// Dependencies System.Object, System.Runtime.Serialization.ScopedKnownTypes, System.Runtime.Serialization.StreamingContext
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializerContext
class CORDL_TYPE XmlObjectSerializerContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DataContractResolver)) ::System::Runtime::Serialization::DataContractResolver* DataContractResolver;

  __declspec(property(get = get_IgnoreExtensionDataObject)) bool IgnoreExtensionDataObject;

  __declspec(property(get = get_IsGetOnlyCollection, put = set_IsGetOnlyCollection)) bool IsGetOnlyCollection;

  __declspec(property(get = get_KnownTypeResolver)) ::System::Runtime::Serialization::KnownTypeDataContractResolver* KnownTypeResolver;

  __declspec(property(get = get_Mode)) ::System::Runtime::Serialization::SerializationMode Mode;

  __declspec(property(get = get_RemainingItemCount)) int32_t RemainingItemCount;

  __declspec(property(get = get_SerializerKnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
      SerializerKnownDataContracts;

  /// @brief Field dataContractResolver, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_dataContractResolver, put = __cordl_internal_set_dataContractResolver)) ::System::Runtime::Serialization::DataContractResolver* dataContractResolver;

  /// @brief Field ignoreExtensionDataObject, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreExtensionDataObject, put = __cordl_internal_set_ignoreExtensionDataObject)) bool ignoreExtensionDataObject;

  /// @brief Field incrementItemCountMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_incrementItemCountMethod, put = setStaticF_incrementItemCountMethod)) ::System::Reflection::MethodInfo* incrementItemCountMethod;

  /// @brief Field isSerializerKnownDataContractsSetExplicit, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isSerializerKnownDataContractsSetExplicit,
                      put = __cordl_internal_set_isSerializerKnownDataContractsSetExplicit)) bool isSerializerKnownDataContractsSetExplicit;

  /// @brief Field itemCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_itemCount, put = __cordl_internal_set_itemCount)) int32_t itemCount;

  /// @brief Field knownTypeResolver, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_knownTypeResolver, put = __cordl_internal_set_knownTypeResolver)) ::System::Runtime::Serialization::KnownTypeDataContractResolver* knownTypeResolver;

  /// @brief Field maxItemsInObjectGraph, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxItemsInObjectGraph, put = __cordl_internal_set_maxItemsInObjectGraph)) int32_t maxItemsInObjectGraph;

  /// @brief Field rootTypeDataContract, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rootTypeDataContract, put = __cordl_internal_set_rootTypeDataContract)) ::System::Runtime::Serialization::DataContract* rootTypeDataContract;

  /// @brief Field scopedKnownTypes, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_scopedKnownTypes, put = __cordl_internal_set_scopedKnownTypes)) ::System::Runtime::Serialization::ScopedKnownTypes scopedKnownTypes;

  /// @brief Field serializer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializer, put = __cordl_internal_set_serializer)) ::System::Runtime::Serialization::XmlObjectSerializer* serializer;

  /// @brief Field serializerKnownDataContracts, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_serializerKnownDataContracts, put = __cordl_internal_set_serializerKnownDataContracts)) ::System::Collections::Generic::Dictionary_2<
      ::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* serializerKnownDataContracts;

  /// @brief Field serializerKnownTypeList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_serializerKnownTypeList,
                      put = __cordl_internal_set_serializerKnownTypeList)) ::System::Collections::Generic::IList_1<::System::Type*>* serializerKnownTypeList;

  /// @brief Field streamingContext, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_streamingContext, put = __cordl_internal_set_streamingContext)) ::System::Runtime::Serialization::StreamingContext streamingContext;

  /// @brief Method CheckIfTypeSerializable, addr 0x5fb1eec, size 0x9c, virtual true, abstract: false, final false
  inline void CheckIfTypeSerializable(::System::Type* memberType, bool isMemberTypeSerializable);

  /// @brief Method DemandMemberAccessPermission, addr 0x5fb1b08, size 0x4, virtual false, abstract: false, final false
  inline void DemandMemberAccessPermission();

  /// @brief Method DemandSerializationFormatterPermission, addr 0x5fb1b04, size 0x4, virtual false, abstract: false, final false
  inline void DemandSerializationFormatterPermission();

  /// @brief Method GetDataContract, addr 0x5fb1e70, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetDataContract, addr 0x5fb1d20, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::Type* type);

  /// @brief Method GetDataContract, addr 0x5fb1d6c, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetDataContractFromSerializerKnownTypes, addr 0x5fb1fd4, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContractFromSerializerKnownTypes(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetDataContractSkipValidation, addr 0x5fb1e10, size 0x60, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContractSkipValidation(int32_t typeId, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetDataContractsForKnownTypes, addr 0x5fb2050, size 0x2f8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
  GetDataContractsForKnownTypes(::System::Collections::Generic::IList_1<::System::Type*>* knownTypeList);

  /// @brief Method GetStreamingContext, addr 0x5fb1b0c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::StreamingContext GetStreamingContext();

  /// @brief Method GetSurrogatedType, addr 0x5fb1f88, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* GetSurrogatedType(::System::Type* type);

  /// @brief Method IncrementItemCount, addr 0x5fb1bec, size 0xbc, virtual false, abstract: false, final false
  inline void IncrementItemCount(int32_t count);

  /// @brief Method IsKnownType, addr 0x5fb2348, size 0x78, virtual false, abstract: false, final false
  inline bool IsKnownType(::System::Runtime::Serialization::DataContract* dataContract, ::System::Type* declaredType);

  /// @brief Method IsKnownType, addr 0x5fa3440, size 0x68, virtual false, abstract: false, final false
  inline bool IsKnownType(::System::Runtime::Serialization::DataContract* dataContract,
                          ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* knownDataContracts,
                          ::System::Type* declaredType);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerContext* New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                       ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                       ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerContext* New_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerContext* New_ctor(::System::Runtime::Serialization::XmlObjectSerializer* serializer, int32_t maxItemsInObjectGraph,
                                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext, bool ignoreExtensionDataObject);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerContext* New_ctor(::System::Runtime::Serialization::XmlObjectSerializer* serializer, int32_t maxItemsInObjectGraph,
                                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext, bool ignoreExtensionDataObject,
                                                                                       ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method ResolveDataContractFromDataContractResolver, addr 0x5fb2550, size 0x140, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* ResolveDataContractFromDataContractResolver(::System::Xml::XmlQualifiedName* typeName, ::System::Type* declaredType);

  /// @brief Method ResolveDataContractFromKnownTypes, addr 0x5fb23c0, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* ResolveDataContractFromKnownTypes(::StringW typeName, ::StringW typeNs, ::System::Runtime::Serialization::DataContract* memberTypeContract,
                                                                                           ::System::Type* declaredType);

  /// @brief Method ResolveDataContractFromKnownTypes, addr 0x5fb24fc, size 0x54, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* ResolveDataContractFromKnownTypes(::System::Xml::XmlQualifiedName* typeName);

  /// @brief Method ResolveDataContractFromRootDataContract, addr 0x5fb2690, size 0x130, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* ResolveDataContractFromRootDataContract(::System::Xml::XmlQualifiedName* typeQName);

  /// @brief Method ResolveNameFromKnownTypes, addr 0x5fa353c, size 0x28, virtual false, abstract: false, final false
  inline ::System::Type* ResolveNameFromKnownTypes(::System::Xml::XmlQualifiedName* typeName);

  constexpr ::System::Runtime::Serialization::DataContractResolver* const& __cordl_internal_get_dataContractResolver() const;

  constexpr ::System::Runtime::Serialization::DataContractResolver*& __cordl_internal_get_dataContractResolver();

  constexpr bool const& __cordl_internal_get_ignoreExtensionDataObject() const;

  constexpr bool& __cordl_internal_get_ignoreExtensionDataObject();

  constexpr bool const& __cordl_internal_get_isSerializerKnownDataContractsSetExplicit() const;

  constexpr bool& __cordl_internal_get_isSerializerKnownDataContractsSetExplicit();

  constexpr int32_t const& __cordl_internal_get_itemCount() const;

  constexpr int32_t& __cordl_internal_get_itemCount();

  constexpr ::System::Runtime::Serialization::KnownTypeDataContractResolver* const& __cordl_internal_get_knownTypeResolver() const;

  constexpr ::System::Runtime::Serialization::KnownTypeDataContractResolver*& __cordl_internal_get_knownTypeResolver();

  constexpr int32_t const& __cordl_internal_get_maxItemsInObjectGraph() const;

  constexpr int32_t& __cordl_internal_get_maxItemsInObjectGraph();

  constexpr ::System::Runtime::Serialization::DataContract* const& __cordl_internal_get_rootTypeDataContract() const;

  constexpr ::System::Runtime::Serialization::DataContract*& __cordl_internal_get_rootTypeDataContract();

  constexpr ::System::Runtime::Serialization::ScopedKnownTypes const& __cordl_internal_get_scopedKnownTypes() const;

  constexpr ::System::Runtime::Serialization::ScopedKnownTypes& __cordl_internal_get_scopedKnownTypes();

  constexpr ::System::Runtime::Serialization::XmlObjectSerializer* const& __cordl_internal_get_serializer() const;

  constexpr ::System::Runtime::Serialization::XmlObjectSerializer*& __cordl_internal_get_serializer();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const&
  __cordl_internal_get_serializerKnownDataContracts() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*& __cordl_internal_get_serializerKnownDataContracts();

  constexpr ::System::Collections::Generic::IList_1<::System::Type*>* const& __cordl_internal_get_serializerKnownTypeList() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Type*>*& __cordl_internal_get_serializerKnownTypeList();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_streamingContext() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_streamingContext();

  constexpr void __cordl_internal_set_dataContractResolver(::System::Runtime::Serialization::DataContractResolver* value);

  constexpr void __cordl_internal_set_ignoreExtensionDataObject(bool value);

  constexpr void __cordl_internal_set_isSerializerKnownDataContractsSetExplicit(bool value);

  constexpr void __cordl_internal_set_itemCount(int32_t value);

  constexpr void __cordl_internal_set_knownTypeResolver(::System::Runtime::Serialization::KnownTypeDataContractResolver* value);

  constexpr void __cordl_internal_set_maxItemsInObjectGraph(int32_t value);

  constexpr void __cordl_internal_set_rootTypeDataContract(::System::Runtime::Serialization::DataContract* value);

  constexpr void __cordl_internal_set_scopedKnownTypes(::System::Runtime::Serialization::ScopedKnownTypes value);

  constexpr void __cordl_internal_set_serializer(::System::Runtime::Serialization::XmlObjectSerializer* value);

  constexpr void
  __cordl_internal_set_serializerKnownDataContracts(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value);

  constexpr void __cordl_internal_set_serializerKnownTypeList(::System::Collections::Generic::IList_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_streamingContext(::System::Runtime::Serialization::StreamingContext value);

  /// @brief Method .ctor, addr 0x5fb1a78, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::DataContractSerializer* serializer, ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                    ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method .ctor, addr 0x5fb1ab8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer);

  /// @brief Method .ctor, addr 0x5fb1a5c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::XmlObjectSerializer* serializer, int32_t maxItemsInObjectGraph, ::System::Runtime::Serialization::StreamingContext streamingContext,
                    bool ignoreExtensionDataObject);

  /// @brief Method .ctor, addr 0x5fb1a40, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::XmlObjectSerializer* serializer, int32_t maxItemsInObjectGraph, ::System::Runtime::Serialization::StreamingContext streamingContext,
                    bool ignoreExtensionDataObject, ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  static inline ::System::Reflection::MethodInfo* getStaticF_incrementItemCountMethod();

  /// @brief Method get_DataContractResolver, addr 0x5fb1cbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContractResolver* get_DataContractResolver();

  /// @brief Method get_IgnoreExtensionDataObject, addr 0x5fb1cb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreExtensionDataObject();

  /// @brief Method get_IncrementItemCountMethod, addr 0x5fb1b18, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_IncrementItemCountMethod();

  /// @brief Method get_IsGetOnlyCollection, addr 0x5fb1af8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGetOnlyCollection();

  /// @brief Method get_KnownTypeResolver, addr 0x5fb1cc4, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::KnownTypeDataContractResolver* get_KnownTypeResolver();

  /// @brief Method get_Mode, addr 0x5fb1af0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationMode get_Mode();

  /// @brief Method get_RemainingItemCount, addr 0x5fb1ca8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_RemainingItemCount();

  /// @brief Method get_SerializerKnownDataContracts, addr 0x5fb1f90, size 0x44, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_SerializerKnownDataContracts();

  static inline void setStaticF_incrementItemCountMethod(::System::Reflection::MethodInfo* value);

  /// @brief Method set_IsGetOnlyCollection, addr 0x5fb1b00, size 0x4, virtual true, abstract: false, final false
  inline void set_IsGetOnlyCollection(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializerContext(XmlObjectSerializerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializerContext(XmlObjectSerializerContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17105 };

  /// @brief Field serializer, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlObjectSerializer* ___serializer;

  /// @brief Field rootTypeDataContract, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContract* ___rootTypeDataContract;

  /// @brief Field scopedKnownTypes, offset: 0x20, size: 0x10, def value: None
  ::System::Runtime::Serialization::ScopedKnownTypes ___scopedKnownTypes;

  /// @brief Field serializerKnownDataContracts, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* ___serializerKnownDataContracts;

  /// @brief Field isSerializerKnownDataContractsSetExplicit, offset: 0x38, size: 0x1, def value: None
  bool ___isSerializerKnownDataContractsSetExplicit;

  /// @brief Field serializerKnownTypeList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Type*>* ___serializerKnownTypeList;

  /// @brief Field itemCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___itemCount;

  /// @brief Field maxItemsInObjectGraph, offset: 0x4c, size: 0x4, def value: None
  int32_t ___maxItemsInObjectGraph;

  /// @brief Field streamingContext, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___streamingContext;

  /// @brief Field ignoreExtensionDataObject, offset: 0x60, size: 0x1, def value: None
  bool ___ignoreExtensionDataObject;

  /// @brief Field dataContractResolver, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContractResolver* ___dataContractResolver;

  /// @brief Field knownTypeResolver, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Serialization::KnownTypeDataContractResolver* ___knownTypeResolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___serializer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___rootTypeDataContract) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___scopedKnownTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___serializerKnownDataContracts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___isSerializerKnownDataContractsSetExplicit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___serializerKnownTypeList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___itemCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___maxItemsInObjectGraph) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___streamingContext) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___ignoreExtensionDataObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___dataContractResolver) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerContext, ___knownTypeResolver) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlObjectSerializerContext, 0x78>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlObjectSerializerContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlObjectSerializerContext*, "System.Runtime.Serialization", "XmlObjectSerializerContext");
