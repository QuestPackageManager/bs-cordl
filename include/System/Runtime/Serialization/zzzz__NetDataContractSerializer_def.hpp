#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/NetDataContractSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetDataContractSerializer)
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class TypeInformation;
}
namespace System::Runtime::Serialization {
class XmlWriterDelegator;
}
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
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
class NetDataContractSerializer;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::NetDataContractSerializer);
// Dependencies System.Nullable`1<T>, System.Runtime.Serialization.StreamingContext, System.Runtime.Serialization.XmlObjectSerializer
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.NetDataContractSerializer
class CORDL_TYPE NetDataContractSerializer : public ::System::Runtime::Serialization::XmlObjectSerializer {
public:
  // Declarations
  __declspec(property(get = get_Binder)) ::System::Runtime::Serialization::SerializationBinder* Binder;

  __declspec(property(get = get_Context)) ::System::Runtime::Serialization::StreamingContext Context;

  __declspec(property(get = get_IgnoreExtensionDataObject)) bool IgnoreExtensionDataObject;

  __declspec(property(get = get_MaxItemsInObjectGraph)) int32_t MaxItemsInObjectGraph;

  __declspec(property(get = get_SurrogateSelector)) ::System::Runtime::Serialization::ISurrogateSelector* SurrogateSelector;

  /// @brief Field binder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_binder, put = __cordl_internal_set_binder)) ::System::Runtime::Serialization::SerializationBinder* binder;

  /// @brief Field context, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Runtime::Serialization::StreamingContext context;

  /// @brief Field ignoreExtensionDataObject, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreExtensionDataObject, put = __cordl_internal_set_ignoreExtensionDataObject)) bool ignoreExtensionDataObject;

  /// @brief Field maxItemsInObjectGraph, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxItemsInObjectGraph, put = __cordl_internal_set_maxItemsInObjectGraph)) int32_t maxItemsInObjectGraph;

  /// @brief Field surrogateSelector, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_surrogateSelector, put = __cordl_internal_set_surrogateSelector)) ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector;

  /// @brief Field typeNameCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeNameCache, put = setStaticF_typeNameCache)) ::System::Collections::Hashtable* typeNameCache;

  /// @brief Field unsafeTypeForwardingEnabled, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_unsafeTypeForwardingEnabled, put = setStaticF_unsafeTypeForwardingEnabled)) ::System::Nullable_1<bool> unsafeTypeForwardingEnabled;

  /// @brief Method GetDataContractFromSurrogateSelector, addr 0x5f3cde8, size 0x2f0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractFromSurrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                                     ::System::Runtime::Serialization::StreamingContext context, ::System::RuntimeTypeHandle typeHandle,
                                                                                                     ::System::Type* type, ::ByRef<::System::Collections::Hashtable*> surrogateDataContracts);

  /// @brief Method GetSurrogate, addr 0x5f3cd14, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                        ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetTypeInformation, addr 0x5f3c420, size 0x204, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::TypeInformation* GetTypeInformation(::System::Type* type);

  /// @brief Method IsAssemblyNameForwardingSafe, addr 0x5f3c624, size 0x16c, virtual false, abstract: false, final false
  static inline bool IsAssemblyNameForwardingSafe(::StringW originalAssemblyName, ::StringW newAssemblyName);

  /// @brief Method IsPublicKeyTokenForwardingSafe, addr 0x5f3d19c, size 0x74, virtual false, abstract: false, final false
  static inline bool IsPublicKeyTokenForwardingSafe(::ArrayW<uint8_t, ::Array<uint8_t>*> sourceToken, ::ArrayW<uint8_t, ::Array<uint8_t>*> destinationToken);

  /// @brief Method ReadObject, addr 0x5f3cc90, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlDictionaryReader* reader, bool verifyObjectName);

  /// @brief Method WriteClrTypeInfo, addr 0x5f3c790, size 0x128, virtual false, abstract: false, final false
  static inline void WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::StringW clrTypeName, ::StringW clrAssemblyName);

  /// @brief Method WriteClrTypeInfo, addr 0x5f3c28c, size 0x194, virtual false, abstract: false, final false
  static inline void WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Runtime::Serialization::DataContract* dataContract,
                                      ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method WriteClrTypeInfo, addr 0x5f3c8b8, size 0xd0, virtual false, abstract: false, final false
  static inline void WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Type* dataContractType, ::System::Runtime::Serialization::SerializationBinder* binder,
                                      ::StringW defaultClrTypeName, ::StringW defaultClrAssemblyName);

  /// @brief Method WriteClrTypeInfo, addr 0x5f3c988, size 0x150, virtual false, abstract: false, final false
  static inline void WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Type* dataContractType, ::System::Runtime::Serialization::SerializationBinder* binder,
                                      ::System::Runtime::Serialization::SerializationInfo* serInfo);

  /// @brief Method WriteEndObject, addr 0x5f3cad8, size 0x70, virtual true, abstract: false, final false
  inline void WriteEndObject(::System::Xml::XmlDictionaryWriter* writer);

  /// @brief Method WriteObjectContent, addr 0x5f3bcc8, size 0x78, virtual true, abstract: false, final false
  inline void WriteObjectContent(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteStartObject, addr 0x5f3bae4, size 0x78, virtual true, abstract: false, final false
  inline void WriteStartObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  constexpr ::System::Runtime::Serialization::SerializationBinder* const& __cordl_internal_get_binder() const;

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __cordl_internal_get_binder();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_context() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_context();

  constexpr bool const& __cordl_internal_get_ignoreExtensionDataObject() const;

  constexpr bool& __cordl_internal_get_ignoreExtensionDataObject();

  constexpr int32_t const& __cordl_internal_get_maxItemsInObjectGraph() const;

  constexpr int32_t& __cordl_internal_get_maxItemsInObjectGraph();

  constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& __cordl_internal_get_surrogateSelector() const;

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __cordl_internal_get_surrogateSelector();

  constexpr void __cordl_internal_set_binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr void __cordl_internal_set_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set_ignoreExtensionDataObject(bool value);

  constexpr void __cordl_internal_set_maxItemsInObjectGraph(int32_t value);

  constexpr void __cordl_internal_set_surrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value);

  static inline ::System::Collections::Hashtable* getStaticF_typeNameCache();

  static inline ::System::Nullable_1<bool> getStaticF_unsafeTypeForwardingEnabled();

  /// @brief Method get_Binder, addr 0x5f3bac4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Serialization::SerializationBinder* get_Binder();

  /// @brief Method get_Context, addr 0x5f3bab8, size 0xc, virtual true, abstract: false, final true
  inline ::System::Runtime::Serialization::StreamingContext get_Context();

  /// @brief Method get_IgnoreExtensionDataObject, addr 0x5f3badc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreExtensionDataObject();

  /// @brief Method get_MaxItemsInObjectGraph, addr 0x5f3bad4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxItemsInObjectGraph();

  /// @brief Method get_SurrogateSelector, addr 0x5f3bacc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Serialization::ISurrogateSelector* get_SurrogateSelector();

  /// @brief Method get_UnsafeTypeForwardingEnabled, addr 0x5f3b9d8, size 0xe0, virtual false, abstract: false, final false
  static inline bool get_UnsafeTypeForwardingEnabled();

  static inline void setStaticF_typeNameCache(::System::Collections::Hashtable* value);

  static inline void setStaticF_unsafeTypeForwardingEnabled(::System::Nullable_1<bool> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetDataContractSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetDataContractSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetDataContractSerializer(NetDataContractSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetDataContractSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetDataContractSerializer(NetDataContractSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17011 };

  /// @brief Field context, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___context;

  /// @brief Field binder, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ___binder;

  /// @brief Field surrogateSelector, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ___surrogateSelector;

  /// @brief Field maxItemsInObjectGraph, offset: 0x30, size: 0x4, def value: None
  int32_t ___maxItemsInObjectGraph;

  /// @brief Field ignoreExtensionDataObject, offset: 0x34, size: 0x1, def value: None
  bool ___ignoreExtensionDataObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::NetDataContractSerializer, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::NetDataContractSerializer, ___binder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::NetDataContractSerializer, ___surrogateSelector) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::NetDataContractSerializer, ___maxItemsInObjectGraph) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::NetDataContractSerializer, ___ignoreExtensionDataObject) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::NetDataContractSerializer, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::NetDataContractSerializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::NetDataContractSerializer*, "System.Runtime.Serialization", "NetDataContractSerializer");
