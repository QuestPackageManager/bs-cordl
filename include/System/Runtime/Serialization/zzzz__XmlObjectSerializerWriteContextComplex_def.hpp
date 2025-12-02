#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlObjectSerializerWriteContextComplex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__SerializationMode_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlObjectSerializerWriteContextComplex)
namespace System::Collections {
class Hashtable;
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
class IDataContractSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class NetDataContractSerializer;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct SerializationMode;
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
class XmlObjectSerializerWriteContextComplex;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex);
// Dependencies System.Runtime.Serialization.SerializationMode, System.Runtime.Serialization.StreamingContext, System.Runtime.Serialization.XmlObjectSerializerWriteContext
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializerWriteContextComplex
class CORDL_TYPE XmlObjectSerializerWriteContextComplex : public ::System::Runtime::Serialization::XmlObjectSerializerWriteContext {
public:
  // Declarations
  __declspec(property(get = get_Mode)) ::System::Runtime::Serialization::SerializationMode Mode;

  /// @brief Field binder, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_binder, put = __cordl_internal_set_binder)) ::System::Runtime::Serialization::SerializationBinder* binder;

  /// @brief Field dataContractSurrogate, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_dataContractSurrogate,
                      put = __cordl_internal_set_dataContractSurrogate)) ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate;

  /// @brief Field mode, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::System::Runtime::Serialization::SerializationMode mode;

  /// @brief Field streamingContext, offset 0xd8, size 0x10
  __declspec(property(get = __cordl_internal_get_streamingContext, put = __cordl_internal_set_streamingContext)) ::System::Runtime::Serialization::StreamingContext streamingContext;

  /// @brief Field surrogateDataContracts, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_surrogateDataContracts, put = __cordl_internal_set_surrogateDataContracts)) ::System::Collections::Hashtable* surrogateDataContracts;

  /// @brief Field surrogateSelector, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_surrogateSelector, put = __cordl_internal_set_surrogateSelector)) ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector;

  /// @brief Method CheckIfTypeSerializable, addr 0x5f56404, size 0x140, virtual true, abstract: false, final false
  inline void CheckIfTypeSerializable(::System::Type* memberType, bool isMemberTypeSerializable);

  /// @brief Method CheckIfTypeSerializableForSharedTypeMode, addr 0x5f56330, size 0xd4, virtual false, abstract: false, final false
  inline bool CheckIfTypeSerializableForSharedTypeMode(::System::Type* memberType);

  /// @brief Method GetDataContract, addr 0x5f55208, size 0x1ac, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetDataContract, addr 0x5f5505c, size 0x1ac, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetDataContractSkipValidation, addr 0x5f553b4, size 0x1b4, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContractSkipValidation(int32_t typeId, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetSurrogatedType, addr 0x5f56544, size 0x120, virtual true, abstract: false, final false
  inline ::System::Type* GetSurrogatedType(::System::Type* type);

  /// @brief Method InternalSerialize, addr 0x5f55dd0, size 0x20, virtual true, abstract: false, final false
  inline void InternalSerialize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                ::System::RuntimeTypeHandle declaredTypeHandle);

  /// @brief Method InternalSerializeWithSurrogate, addr 0x5f55df0, size 0x33c, virtual false, abstract: false, final false
  inline void InternalSerializeWithSurrogate(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                             ::System::RuntimeTypeHandle declaredTypeHandle);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex* New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                                   ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                                   ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex* New_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer,
                                                                                                   ::System::Collections::Hashtable* surrogateDataContracts);

  /// @brief Method OnEndHandleReference, addr 0x5f562c8, size 0x68, virtual true, abstract: false, final false
  inline void OnEndHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, bool canContainCyclicReference);

  /// @brief Method OnHandleReference, addr 0x5f5612c, size 0x19c, virtual true, abstract: false, final false
  inline bool OnHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, bool canContainCyclicReference);

  /// @brief Method WriteAnyType, addr 0x5f55734, size 0x54, virtual true, abstract: false, final false
  inline void WriteAnyType(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* value);

  /// @brief Method WriteArraySize, addr 0x5f56664, size 0xc0, virtual true, abstract: false, final false
  inline void WriteArraySize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, int32_t size);

  /// @brief Method WriteBase64, addr 0x5f558d8, size 0x58, virtual true, abstract: false, final false
  inline void WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteBase64, addr 0x5f55930, size 0x11c, virtual true, abstract: false, final false
  inline void WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::System::Xml::XmlDictionaryString* name,
                          ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteClrTypeInfo, addr 0x5f55568, size 0x8c, virtual true, abstract: false, final false
  inline bool WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Runtime::Serialization::DataContract* dataContract);

  /// @brief Method WriteClrTypeInfo, addr 0x5f555f4, size 0xa4, virtual true, abstract: false, final false
  inline bool WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType, ::StringW clrTypeName, ::StringW clrAssemblyName);

  /// @brief Method WriteClrTypeInfo, addr 0x5f55698, size 0x9c, virtual true, abstract: false, final false
  inline bool WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType, ::System::Runtime::Serialization::SerializationInfo* serInfo);

  /// @brief Method WriteQName, addr 0x5f55be4, size 0x5c, virtual true, abstract: false, final false
  inline void WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value);

  /// @brief Method WriteQName, addr 0x5f55c40, size 0x190, virtual true, abstract: false, final false
  inline void WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value, ::System::Xml::XmlDictionaryString* name,
                         ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteString, addr 0x5f55788, size 0x60, virtual true, abstract: false, final false
  inline void WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value);

  /// @brief Method WriteString, addr 0x5f557e8, size 0xf0, virtual true, abstract: false, final false
  inline void WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteUri, addr 0x5f55a4c, size 0x54, virtual true, abstract: false, final false
  inline void WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value);

  /// @brief Method WriteUri, addr 0x5f55aa0, size 0x144, virtual true, abstract: false, final false
  inline void WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  constexpr ::System::Runtime::Serialization::SerializationBinder* const& __cordl_internal_get_binder() const;

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __cordl_internal_get_binder();

  constexpr ::System::Runtime::Serialization::IDataContractSurrogate* const& __cordl_internal_get_dataContractSurrogate() const;

  constexpr ::System::Runtime::Serialization::IDataContractSurrogate*& __cordl_internal_get_dataContractSurrogate();

  constexpr ::System::Runtime::Serialization::SerializationMode const& __cordl_internal_get_mode() const;

  constexpr ::System::Runtime::Serialization::SerializationMode& __cordl_internal_get_mode();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_streamingContext() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_streamingContext();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_surrogateDataContracts() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_surrogateDataContracts();

  constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& __cordl_internal_get_surrogateSelector() const;

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __cordl_internal_get_surrogateSelector();

  constexpr void __cordl_internal_set_binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr void __cordl_internal_set_dataContractSurrogate(::System::Runtime::Serialization::IDataContractSurrogate* value);

  constexpr void __cordl_internal_set_mode(::System::Runtime::Serialization::SerializationMode value);

  constexpr void __cordl_internal_set_streamingContext(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set_surrogateDataContracts(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_surrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value);

  /// @brief Method .ctor, addr 0x5f51590, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::DataContractSerializer* serializer, ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                    ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method .ctor, addr 0x5f51638, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer, ::System::Collections::Hashtable* surrogateDataContracts);

  /// @brief Method get_Mode, addr 0x5f55054, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationMode get_Mode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializerWriteContextComplex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerWriteContextComplex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializerWriteContextComplex(XmlObjectSerializerWriteContextComplex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerWriteContextComplex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializerWriteContextComplex(XmlObjectSerializerWriteContextComplex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17098 };

  /// @brief Field dataContractSurrogate, offset: 0xb8, size: 0x8, def value: None
  ::System::Runtime::Serialization::IDataContractSurrogate* ___dataContractSurrogate;

  /// @brief Field mode, offset: 0xc0, size: 0x4, def value: None
  ::System::Runtime::Serialization::SerializationMode ___mode;

  /// @brief Field binder, offset: 0xc8, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ___binder;

  /// @brief Field surrogateSelector, offset: 0xd0, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ___surrogateSelector;

  /// @brief Field streamingContext, offset: 0xd8, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___streamingContext;

  /// @brief Field surrogateDataContracts, offset: 0xe8, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___surrogateDataContracts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex, ___dataContractSurrogate) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex, ___mode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex, ___binder) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex, ___surrogateSelector) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex, ___streamingContext) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex, ___surrogateDataContracts) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex, 0xf0>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlObjectSerializerWriteContextComplex*, "System.Runtime.Serialization", "XmlObjectSerializerWriteContextComplex");
