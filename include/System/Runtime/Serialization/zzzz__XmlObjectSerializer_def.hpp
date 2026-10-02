#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlObjectSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlObjectSerializer)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization {
class DataContractResolver;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
class SerializationException;
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
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlObjectSerializer;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::XmlObjectSerializer*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::XmlObjectSerializer*, "System.Runtime.Serialization", "XmlObjectSerializer");
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializer
class CORDL_TYPE XmlObjectSerializer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  /// @brief Field formatterConverter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_formatterConverter, put = setStaticF_formatterConverter)) ::System::Runtime::Serialization::IFormatterConverter* formatterConverter;

  /// @brief Method CheckIfNeedsContractNsAtRoot, addr 0x658cf68, size 0x114, virtual false, abstract: false, final false
  inline bool CheckIfNeedsContractNsAtRoot(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns, ::System::Runtime::Serialization::DataContract* contract);

  /// @brief Method CheckNull, addr 0x658c608, size 0x4c, virtual false, abstract: false, final false
  static inline void CheckNull(::System::Object* obj, ::StringW name);

  /// @brief Method CreateSerializationException, addr 0x6574c68, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationException* CreateSerializationException(::StringW errorMessage);

  /// @brief Method CreateSerializationException, addr 0x6586164, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationException* CreateSerializationException(::StringW errorMessage, ::System::Exception* innerException);

  /// @brief Method CreateSerializationExceptionWithReaderDetails, addr 0x658db94, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateSerializationExceptionWithReaderDetails(::StringW errorMessage, ::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method GetDeserializeType, addr 0x658dd68, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* GetDeserializeType();

  /// @brief Method GetSerializeType, addr 0x658dd50, size 0x18, virtual true, abstract: false, final false
  inline ::System::Type* GetSerializeType(::System::Object* graph);

  /// @brief Method GetTypeInfo, addr 0x658cb78, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetTypeInfo(::System::Type* type);

  /// @brief Method GetTypeInfoError, addr 0x658cbc8, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW GetTypeInfoError(::StringW errorMessage, ::System::Type* type, ::System::Exception* innerException);

  /// @brief Method InternalIsStartObject, addr 0x658d3fc, size 0x38, virtual true, abstract: false, final false
  inline bool InternalIsStartObject(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method InternalReadObject, addr 0x658d3c8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName);

  /// @brief Method InternalReadObject, addr 0x658d3ec, size 0x10, virtual true, abstract: false, final false
  inline ::System::Object* InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName,
                                              ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method InternalWriteEndObject, addr 0x658ce50, size 0x38, virtual true, abstract: false, final false
  inline void InternalWriteEndObject(::System::Runtime::Serialization::XmlWriterDelegator* writer);

  /// @brief Method InternalWriteObject, addr 0x658cd70, size 0x60, virtual true, abstract: false, final false
  inline void InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method InternalWriteObject, addr 0x658cdd0, size 0x10, virtual true, abstract: false, final false
  inline void InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph, ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method InternalWriteObjectContent, addr 0x658ce18, size 0x38, virtual true, abstract: false, final false
  inline void InternalWriteObjectContent(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method InternalWriteStartObject, addr 0x658cde0, size 0x38, virtual true, abstract: false, final false
  inline void InternalWriteStartObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method IsContractDeclared, addr 0x658d110, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsContractDeclared(::System::Runtime::Serialization::DataContract* contract, ::System::Runtime::Serialization::DataContract* declaredContract);

  /// @brief Method IsRootElement, addr 0x658d7d0, size 0x1d8, virtual false, abstract: false, final false
  inline bool IsRootElement(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::System::Runtime::Serialization::DataContract* contract, ::System::Xml::XmlDictionaryString* name,
                            ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method IsRootXmlAny, addr 0x658d75c, size 0x38, virtual false, abstract: false, final false
  inline bool IsRootXmlAny(::System::Xml::XmlDictionaryString* rootName, ::System::Runtime::Serialization::DataContract* contract);

  /// @brief Method IsStartElement, addr 0x658d794, size 0x3c, virtual false, abstract: false, final false
  inline bool IsStartElement(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  static inline ::System::Runtime::Serialization::XmlObjectSerializer* New_ctor();

  /// @brief Method ReadObject, addr 0x658d2cc, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ReadObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlDictionaryReader* reader, bool verifyObjectName);

  /// @brief Method ReadObject, addr 0x658d344, size 0x84, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlReader* reader, bool verifyObjectName);

  /// @brief Method ReadObject, addr 0x658d1e0, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::IO::Stream* stream);

  /// @brief Method ReadObjectHandleExceptions, addr 0x6580fe4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* ReadObjectHandleExceptions(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName);

  /// @brief Method ReadObjectHandleExceptions, addr 0x658d434, size 0x328, virtual false, abstract: false, final false
  inline ::System::Object* ReadObjectHandleExceptions(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName,
                                                      ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method TryAddLineInfo, addr 0x658d9a8, size 0x1ec, virtual false, abstract: false, final false
  static inline ::StringW TryAddLineInfo(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::StringW errorMessage);

  /// @brief Method WriteEndObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteEndObject(::System::Xml::XmlDictionaryWriter* writer);

  /// @brief Method WriteEndObject, addr 0x658c754, size 0x78, virtual true, abstract: false, final false
  inline void WriteEndObject(::System::Xml::XmlWriter* writer);

  /// @brief Method WriteEndObjectHandleExceptions, addr 0x6580e20, size 0x148, virtual false, abstract: false, final false
  inline void WriteEndObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer);

  /// @brief Method WriteNull, addr 0x658d07c, size 0x94, virtual false, abstract: false, final false
  static inline void WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* writer);

  /// @brief Method WriteObject, addr 0x658c558, size 0xb0, virtual true, abstract: false, final false
  inline void WriteObject(::System::IO::Stream* stream, ::System::Object* graph);

  /// @brief Method WriteObject, addr 0x658c7cc, size 0x7c, virtual true, abstract: false, final false
  inline void WriteObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteObjectContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteObjectContent(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteObjectContent, addr 0x658c6d4, size 0x80, virtual true, abstract: false, final false
  inline void WriteObjectContent(::System::Xml::XmlWriter* writer, ::System::Object* graph);

  /// @brief Method WriteObjectContentHandleExceptions, addr 0x6580018, size 0x54c, virtual false, abstract: false, final false
  inline void WriteObjectContentHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method WriteObjectHandleExceptions, addr 0x658c848, size 0x8, virtual false, abstract: false, final false
  inline void WriteObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method WriteObjectHandleExceptions, addr 0x658c850, size 0x328, virtual false, abstract: false, final false
  inline void WriteObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph,
                                          ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method WriteRootElement, addr 0x658ce88, size 0xe0, virtual false, abstract: false, final false
  inline void WriteRootElement(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Runtime::Serialization::DataContract* contract, ::System::Xml::XmlDictionaryString* name,
                               ::System::Xml::XmlDictionaryString* ns, bool needsContractNsAtRoot);

  /// @brief Method WriteStartObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteStartObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteStartObject, addr 0x658c654, size 0x80, virtual true, abstract: false, final false
  inline void WriteStartObject(::System::Xml::XmlWriter* writer, ::System::Object* graph);

  /// @brief Method WriteStartObjectHandleExceptions, addr 0x657fe34, size 0x16c, virtual false, abstract: false, final false
  inline void WriteStartObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method .ctor, addr 0x658dd70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::IFormatterConverter* getStaticF_formatterConverter();

  /// @brief Method get_FormatterConverter, addr 0x65888a0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::IFormatterConverter* get_FormatterConverter();

  /// @brief Method get_KnownDataContracts, addr 0x658cd68, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  static inline void setStaticF_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializer(XmlObjectSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializer(XmlObjectSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16514 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::XmlObjectSerializer) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Serialization
