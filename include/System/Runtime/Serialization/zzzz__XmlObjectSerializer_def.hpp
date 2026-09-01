#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlObjectSerializer.hpp"
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

  /// @brief Method CheckIfNeedsContractNsAtRoot, addr 0x6165788, size 0x114, virtual false, abstract: false, final false
  inline bool CheckIfNeedsContractNsAtRoot(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns, ::System::Runtime::Serialization::DataContract* contract);

  /// @brief Method CheckNull, addr 0x6164e28, size 0x4c, virtual false, abstract: false, final false
  static inline void CheckNull(::System::Object* obj, ::StringW name);

  /// @brief Method CreateSerializationException, addr 0x61577e8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationException* CreateSerializationException(::StringW errorMessage);

  /// @brief Method CreateSerializationException, addr 0x615e58c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationException* CreateSerializationException(::StringW errorMessage, ::System::Exception* innerException);

  /// @brief Method CreateSerializationExceptionWithReaderDetails, addr 0x61663b8, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateSerializationExceptionWithReaderDetails(::StringW errorMessage, ::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method GetDeserializeType, addr 0x616658c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* GetDeserializeType();

  /// @brief Method GetSerializeType, addr 0x6166574, size 0x18, virtual true, abstract: false, final false
  inline ::System::Type* GetSerializeType(::System::Object* graph);

  /// @brief Method GetTypeInfo, addr 0x6165398, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetTypeInfo(::System::Type* type);

  /// @brief Method GetTypeInfoError, addr 0x61653e8, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW GetTypeInfoError(::StringW errorMessage, ::System::Type* type, ::System::Exception* innerException);

  /// @brief Method InternalIsStartObject, addr 0x6165c1c, size 0x38, virtual true, abstract: false, final false
  inline bool InternalIsStartObject(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  /// @brief Method InternalReadObject, addr 0x6165be8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName);

  /// @brief Method InternalReadObject, addr 0x6165c0c, size 0x10, virtual true, abstract: false, final false
  inline ::System::Object* InternalReadObject(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName,
                                              ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method InternalWriteEndObject, addr 0x6165670, size 0x38, virtual true, abstract: false, final false
  inline void InternalWriteEndObject(::System::Runtime::Serialization::XmlWriterDelegator* writer);

  /// @brief Method InternalWriteObject, addr 0x6165590, size 0x60, virtual true, abstract: false, final false
  inline void InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method InternalWriteObject, addr 0x61655f0, size 0x10, virtual true, abstract: false, final false
  inline void InternalWriteObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph, ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method InternalWriteObjectContent, addr 0x6165638, size 0x38, virtual true, abstract: false, final false
  inline void InternalWriteObjectContent(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method InternalWriteStartObject, addr 0x6165600, size 0x38, virtual true, abstract: false, final false
  inline void InternalWriteStartObject(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method IsContractDeclared, addr 0x6165930, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsContractDeclared(::System::Runtime::Serialization::DataContract* contract, ::System::Runtime::Serialization::DataContract* declaredContract);

  /// @brief Method IsRootElement, addr 0x6165ff0, size 0x1dc, virtual false, abstract: false, final false
  inline bool IsRootElement(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::System::Runtime::Serialization::DataContract* contract, ::System::Xml::XmlDictionaryString* name,
                            ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method IsRootXmlAny, addr 0x6165f7c, size 0x38, virtual false, abstract: false, final false
  inline bool IsRootXmlAny(::System::Xml::XmlDictionaryString* rootName, ::System::Runtime::Serialization::DataContract* contract);

  /// @brief Method IsStartElement, addr 0x6165fb4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsStartElement(::System::Runtime::Serialization::XmlReaderDelegator* reader);

  static inline ::System::Runtime::Serialization::XmlObjectSerializer* New_ctor();

  /// @brief Method ReadObject, addr 0x6165aec, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ReadObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlDictionaryReader* reader, bool verifyObjectName);

  /// @brief Method ReadObject, addr 0x6165b64, size 0x84, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::XmlReader* reader, bool verifyObjectName);

  /// @brief Method ReadObject, addr 0x6165a00, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::IO::Stream* stream);

  /// @brief Method ReadObjectHandleExceptions, addr 0x61593f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* ReadObjectHandleExceptions(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName);

  /// @brief Method ReadObjectHandleExceptions, addr 0x6165c54, size 0x328, virtual false, abstract: false, final false
  inline ::System::Object* ReadObjectHandleExceptions(::System::Runtime::Serialization::XmlReaderDelegator* reader, bool verifyObjectName,
                                                      ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method TryAddLineInfo, addr 0x61661cc, size 0x1ec, virtual false, abstract: false, final false
  static inline ::StringW TryAddLineInfo(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::StringW errorMessage);

  /// @brief Method WriteEndObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteEndObject(::System::Xml::XmlDictionaryWriter* writer);

  /// @brief Method WriteEndObject, addr 0x6164f74, size 0x78, virtual true, abstract: false, final false
  inline void WriteEndObject(::System::Xml::XmlWriter* writer);

  /// @brief Method WriteEndObjectHandleExceptions, addr 0x615922c, size 0x148, virtual false, abstract: false, final false
  inline void WriteEndObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer);

  /// @brief Method WriteNull, addr 0x616589c, size 0x94, virtual false, abstract: false, final false
  static inline void WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* writer);

  /// @brief Method WriteObject, addr 0x6164d78, size 0xb0, virtual true, abstract: false, final false
  inline void WriteObject(::System::IO::Stream* stream, ::System::Object* graph);

  /// @brief Method WriteObject, addr 0x6164fec, size 0x7c, virtual true, abstract: false, final false
  inline void WriteObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteObjectContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteObjectContent(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteObjectContent, addr 0x6164ef4, size 0x80, virtual true, abstract: false, final false
  inline void WriteObjectContent(::System::Xml::XmlWriter* writer, ::System::Object* graph);

  /// @brief Method WriteObjectContentHandleExceptions, addr 0x6158424, size 0x54c, virtual false, abstract: false, final false
  inline void WriteObjectContentHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method WriteObjectHandleExceptions, addr 0x6165068, size 0x8, virtual false, abstract: false, final false
  inline void WriteObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method WriteObjectHandleExceptions, addr 0x6165070, size 0x328, virtual false, abstract: false, final false
  inline void WriteObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph,
                                          ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method WriteRootElement, addr 0x61656a8, size 0xe0, virtual false, abstract: false, final false
  inline void WriteRootElement(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Runtime::Serialization::DataContract* contract, ::System::Xml::XmlDictionaryString* name,
                               ::System::Xml::XmlDictionaryString* ns, bool needsContractNsAtRoot);

  /// @brief Method WriteStartObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteStartObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph);

  /// @brief Method WriteStartObject, addr 0x6164e74, size 0x80, virtual true, abstract: false, final false
  inline void WriteStartObject(::System::Xml::XmlWriter* writer, ::System::Object* graph);

  /// @brief Method WriteStartObjectHandleExceptions, addr 0x6158240, size 0x16c, virtual false, abstract: false, final false
  inline void WriteStartObjectHandleExceptions(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* graph);

  /// @brief Method .ctor, addr 0x6166594, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::IFormatterConverter* getStaticF_formatterConverter();

  /// @brief Method get_FormatterConverter, addr 0x6160ce0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::IFormatterConverter* get_FormatterConverter();

  /// @brief Method get_KnownDataContracts, addr 0x6165588, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  static inline void setStaticF_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializer(XmlObjectSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializer(XmlObjectSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17136 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::XmlObjectSerializer) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Serialization
