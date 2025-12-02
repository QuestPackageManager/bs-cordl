#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlReaderDelegator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlReaderDelegator)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Runtime::Serialization {
class ExtensionDataReader;
}
namespace System::Runtime::Serialization {
class IDataNode;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
namespace System::Xml {
struct WhitespaceHandling;
}
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlReaderDelegator);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlReaderDelegator
class CORDL_TYPE XmlReaderDelegator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeCount)) int32_t AttributeCount;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NamespaceURI)) ::StringW NamespaceURI;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Normalized, put = set_Normalized)) bool Normalized;

  __declspec(property(get = get_UnderlyingExtensionDataReader)) ::System::Runtime::Serialization::ExtensionDataReader* UnderlyingExtensionDataReader;

  __declspec(property(get = get_UnderlyingReader)) ::System::Xml::XmlReader* UnderlyingReader;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  __declspec(property(get = get_WhitespaceHandling, put = set_WhitespaceHandling)) ::System::Xml::WhitespaceHandling WhitespaceHandling;

  __declspec(property(get = get_EOF)) bool _cordl_EOF;

  /// @brief Field dictionaryReader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dictionaryReader, put = __cordl_internal_set_dictionaryReader)) ::System::Xml::XmlDictionaryReader* dictionaryReader;

  /// @brief Field isEndOfEmptyElement, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isEndOfEmptyElement, put = __cordl_internal_set_isEndOfEmptyElement)) bool isEndOfEmptyElement;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlReader* reader;

  /// @brief Method CheckActualArrayLength, addr 0x5f59854, size 0x100, virtual false, abstract: false, final false
  inline void CheckActualArrayLength(int32_t expectedLength, int32_t actualLength, ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method CheckExpectedArrayLength, addr 0x5f59770, size 0x1c, virtual false, abstract: false, final false
  inline void CheckExpectedArrayLength(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, int32_t arrayLength);

  /// @brief Method CreateInvalidPrimitiveTypeException, addr 0x5f56f60, size 0x144, virtual false, abstract: false, final false
  inline ::System::Exception* CreateInvalidPrimitiveTypeException(::System::Type* type);

  /// @brief Method GetArrayLengthQuota, addr 0x5f5978c, size 0xc8, virtual false, abstract: false, final false
  inline int32_t GetArrayLengthQuota(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method GetAttribute, addr 0x5f568f4, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetAttribute(int32_t i);

  /// @brief Method GetAttribute, addr 0x5f56894, size 0x30, virtual false, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name);

  /// @brief Method GetAttribute, addr 0x5f568c4, size 0x30, virtual false, abstract: false, final false
  inline ::StringW GetAttribute(::StringW name, ::StringW namespaceUri);

  /// @brief Method GetNamespacesInScope, addr 0x5f5a55c, size 0x118, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method HasLineInfo, addr 0x5f5a674, size 0xb8, virtual false, abstract: false, final false
  inline bool HasLineInfo();

  /// @brief Method IndexOfLocalName, addr 0x5f56ae4, size 0xdc, virtual false, abstract: false, final false
  inline int32_t IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> localNames, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method IsLocalName, addr 0x5f569e8, size 0x54, virtual false, abstract: false, final false
  inline bool IsLocalName(::StringW localName);

  /// @brief Method IsLocalName, addr 0x5f56a90, size 0x54, virtual false, abstract: false, final false
  inline bool IsLocalName(::System::Xml::XmlDictionaryString* localName);

  /// @brief Method IsNamespaceURI, addr 0x5f56994, size 0x54, virtual false, abstract: false, final false
  inline bool IsNamespaceURI(::StringW ns);

  /// @brief Method IsNamespaceUri, addr 0x5f56a3c, size 0x54, virtual false, abstract: false, final false
  inline bool IsNamespaceUri(::System::Xml::XmlDictionaryString* ns);

  /// @brief Method IsStartElement, addr 0x5f56bdc, size 0x30, virtual false, abstract: false, final false
  inline bool IsStartElement();

  /// @brief Method IsStartElement, addr 0x5f56c0c, size 0x30, virtual false, abstract: false, final false
  inline bool IsStartElement(::StringW localname, ::StringW ns);

  /// @brief Method IsStartElement, addr 0x5f56c3c, size 0x68, virtual false, abstract: false, final false
  inline bool IsStartElement(::System::Xml::XmlDictionaryString* localname, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method LookupNamespace, addr 0x5f5ade0, size 0x20, virtual false, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method MoveToAttribute, addr 0x5f56ca4, size 0x30, virtual false, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToAttribute, addr 0x5f56cd4, size 0x30, virtual false, abstract: false, final false
  inline bool MoveToAttribute(::StringW name, ::StringW ns);

  /// @brief Method MoveToAttribute, addr 0x5f56d04, size 0x90, virtual false, abstract: false, final false
  inline void MoveToAttribute(int32_t i);

  /// @brief Method MoveToContent, addr 0x5f56ed4, size 0x30, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType MoveToContent();

  /// @brief Method MoveToElement, addr 0x5f56d94, size 0x30, virtual false, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x5f56dc4, size 0x30, virtual false, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x5f56df4, size 0x30, virtual false, abstract: false, final false
  inline bool MoveToNextAttribute();

  static inline ::System::Runtime::Serialization::XmlReaderDelegator* New_ctor(::System::Xml::XmlReader* reader);

  /// @brief Method ParseQualifiedName, addr 0x5f596a8, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ParseQualifiedName(::StringW str);

  /// @brief Method Read, addr 0x5f56e50, size 0x84, virtual false, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x5f56f04, size 0x30, virtual false, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadContentAsAnyType, addr 0x5f57154, size 0x538, virtual false, abstract: false, final false
  inline ::System::Object* ReadContentAsAnyType(::System::Type* valueType);

  /// @brief Method ReadContentAsBase64, addr 0x5f58d04, size 0xa0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadContentAsBase64();

  /// @brief Method ReadContentAsBase64, addr 0x5f58b78, size 0x18c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadContentAsBase64(::StringW str);

  /// @brief Method ReadContentAsBoolean, addr 0x5f5768c, size 0x80, virtual false, abstract: false, final false
  inline bool ReadContentAsBoolean();

  /// @brief Method ReadContentAsChar, addr 0x5f58a14, size 0x1c, virtual true, abstract: false, final false
  inline char16_t ReadContentAsChar();

  /// @brief Method ReadContentAsDateTime, addr 0x5f58dd4, size 0x80, virtual true, abstract: false, final false
  inline ::System::DateTime ReadContentAsDateTime();

  /// @brief Method ReadContentAsDecimal, addr 0x5f57944, size 0x80, virtual false, abstract: false, final false
  inline ::System::Decimal ReadContentAsDecimal();

  /// @brief Method ReadContentAsDouble, addr 0x5f578c4, size 0x80, virtual false, abstract: false, final false
  inline double_t ReadContentAsDouble();

  /// @brief Method ReadContentAsGuid, addr 0x5f57ad4, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Guid ReadContentAsGuid();

  /// @brief Method ReadContentAsInt, addr 0x5f57744, size 0x80, virtual false, abstract: false, final false
  inline int32_t ReadContentAsInt();

  /// @brief Method ReadContentAsLong, addr 0x5f577c4, size 0x80, virtual false, abstract: false, final false
  inline int64_t ReadContentAsLong();

  /// @brief Method ReadContentAsQName, addr 0x5f5968c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ReadContentAsQName();

  /// @brief Method ReadContentAsShort, addr 0x5f57728, size 0x1c, virtual false, abstract: false, final false
  inline int16_t ReadContentAsShort();

  /// @brief Method ReadContentAsSignedByte, addr 0x5f57a00, size 0x1c, virtual false, abstract: false, final false
  inline int8_t ReadContentAsSignedByte();

  /// @brief Method ReadContentAsSingle, addr 0x5f57844, size 0x80, virtual false, abstract: false, final false
  inline float_t ReadContentAsSingle();

  /// @brief Method ReadContentAsString, addr 0x5f579c4, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW ReadContentAsString();

  /// @brief Method ReadContentAsTimeSpan, addr 0x5f57a54, size 0x80, virtual false, abstract: false, final false
  inline ::System::TimeSpan ReadContentAsTimeSpan();

  /// @brief Method ReadContentAsUnsignedByte, addr 0x5f5770c, size 0x1c, virtual false, abstract: false, final false
  inline uint8_t ReadContentAsUnsignedByte();

  /// @brief Method ReadContentAsUnsignedInt, addr 0x5f57a38, size 0x1c, virtual false, abstract: false, final false
  inline uint32_t ReadContentAsUnsignedInt();

  /// @brief Method ReadContentAsUnsignedLong, addr 0x5f591dc, size 0xbc, virtual true, abstract: false, final false
  inline uint64_t ReadContentAsUnsignedLong();

  /// @brief Method ReadContentAsUnsignedShort, addr 0x5f57a1c, size 0x1c, virtual false, abstract: false, final false
  inline uint16_t ReadContentAsUnsignedShort();

  /// @brief Method ReadContentAsUri, addr 0x5f57c00, size 0x144, virtual false, abstract: false, final false
  inline ::System::Uri* ReadContentAsUri();

  /// @brief Method ReadElementContentAsAnyType, addr 0x5f57118, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* ReadElementContentAsAnyType(::System::Type* valueType);

  /// @brief Method ReadElementContentAsBase64, addr 0x5f58b20, size 0x58, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadElementContentAsBase64();

  /// @brief Method ReadElementContentAsBoolean, addr 0x5f58a60, size 0x30, virtual false, abstract: false, final false
  inline bool ReadElementContentAsBoolean();

  /// @brief Method ReadElementContentAsChar, addr 0x5f58940, size 0x1c, virtual true, abstract: false, final false
  inline char16_t ReadElementContentAsChar();

  /// @brief Method ReadElementContentAsDateTime, addr 0x5f58da4, size 0x30, virtual true, abstract: false, final false
  inline ::System::DateTime ReadElementContentAsDateTime();

  /// @brief Method ReadElementContentAsDecimal, addr 0x5f58af0, size 0x30, virtual false, abstract: false, final false
  inline ::System::Decimal ReadElementContentAsDecimal();

  /// @brief Method ReadElementContentAsDouble, addr 0x5f58ac0, size 0x30, virtual false, abstract: false, final false
  inline double_t ReadElementContentAsDouble();

  /// @brief Method ReadElementContentAsFloat, addr 0x5f58a90, size 0x30, virtual false, abstract: false, final false
  inline float_t ReadElementContentAsFloat();

  /// @brief Method ReadElementContentAsGuid, addr 0x5f593c8, size 0x138, virtual false, abstract: false, final false
  inline ::System::Guid ReadElementContentAsGuid();

  /// @brief Method ReadElementContentAsInt, addr 0x5f5895c, size 0x30, virtual false, abstract: false, final false
  inline int32_t ReadElementContentAsInt();

  /// @brief Method ReadElementContentAsLong, addr 0x5f58e54, size 0x30, virtual false, abstract: false, final false
  inline int64_t ReadElementContentAsLong();

  /// @brief Method ReadElementContentAsQName, addr 0x5f59650, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ReadElementContentAsQName();

  /// @brief Method ReadElementContentAsShort, addr 0x5f58e84, size 0x1c, virtual false, abstract: false, final false
  inline int16_t ReadElementContentAsShort();

  /// @brief Method ReadElementContentAsSignedByte, addr 0x5f58fcc, size 0x1c, virtual false, abstract: false, final false
  inline int8_t ReadElementContentAsSignedByte();

  /// @brief Method ReadElementContentAsString, addr 0x5f58a30, size 0x30, virtual false, abstract: false, final false
  inline ::StringW ReadElementContentAsString();

  /// @brief Method ReadElementContentAsTimeSpan, addr 0x5f5933c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::TimeSpan ReadElementContentAsTimeSpan();

  /// @brief Method ReadElementContentAsUnsignedByte, addr 0x5f58f28, size 0x1c, virtual false, abstract: false, final false
  inline uint8_t ReadElementContentAsUnsignedByte();

  /// @brief Method ReadElementContentAsUnsignedInt, addr 0x5f59070, size 0x1c, virtual false, abstract: false, final false
  inline uint32_t ReadElementContentAsUnsignedInt();

  /// @brief Method ReadElementContentAsUnsignedLong, addr 0x5f59114, size 0xc8, virtual true, abstract: false, final false
  inline uint64_t ReadElementContentAsUnsignedLong();

  /// @brief Method ReadElementContentAsUnsignedShort, addr 0x5f59298, size 0x1c, virtual false, abstract: false, final false
  inline uint16_t ReadElementContentAsUnsignedShort();

  /// @brief Method ReadElementContentAsUri, addr 0x5f59500, size 0x150, virtual false, abstract: false, final false
  inline ::System::Uri* ReadElementContentAsUri();

  /// @brief Method ReadEndElement, addr 0x5f56f34, size 0x2c, virtual false, abstract: false, final false
  inline void ReadEndElement();

  /// @brief Method ReadExtensionData, addr 0x5f57d44, size 0xa88, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::IDataNode* ReadExtensionData(::System::Type* valueType);

  /// @brief Method Skip, addr 0x5f5ae20, size 0x30, virtual false, abstract: false, final false
  inline void Skip();

  /// @brief Method ThrowConversionException, addr 0x5f587cc, size 0xcc, virtual false, abstract: false, final false
  inline void ThrowConversionException(::StringW value, ::StringW type);

  /// @brief Method ThrowNotAtElement, addr 0x5f58898, size 0xa8, virtual false, abstract: false, final false
  inline void ThrowNotAtElement();

  /// @brief Method ToByte, addr 0x5f58f44, size 0x88, virtual false, abstract: false, final false
  inline uint8_t ToByte(int32_t value);

  /// @brief Method ToChar, addr 0x5f5898c, size 0x88, virtual false, abstract: false, final false
  inline char16_t ToChar(int32_t value);

  /// @brief Method ToSByte, addr 0x5f58fe8, size 0x88, virtual false, abstract: false, final false
  inline int8_t ToSByte(int32_t value);

  /// @brief Method ToShort, addr 0x5f58ea0, size 0x88, virtual false, abstract: false, final false
  inline int16_t ToShort(int32_t value);

  /// @brief Method ToUInt16, addr 0x5f592b4, size 0x88, virtual false, abstract: false, final false
  inline uint16_t ToUInt16(int32_t value);

  /// @brief Method ToUInt32, addr 0x5f5908c, size 0x88, virtual false, abstract: false, final false
  inline uint32_t ToUInt32(int64_t value);

  /// @brief Method TryReadBooleanArray, addr 0x5f59954, size 0x1b8, virtual false, abstract: false, final false
  inline bool TryReadBooleanArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, ::System::Xml::XmlDictionaryString* itemName,
                                  ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength, ::ByRef<::ArrayW<bool, ::Array<bool>*>> array);

  /// @brief Method TryReadDateTimeArray, addr 0x5f59b0c, size 0x1b8, virtual false, abstract: false, final false
  inline bool TryReadDateTimeArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, ::System::Xml::XmlDictionaryString* itemName,
                                   ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength, ::ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>> array);

  /// @brief Method TryReadDecimalArray, addr 0x5f59cc4, size 0x1b8, virtual false, abstract: false, final false
  inline bool TryReadDecimalArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, ::System::Xml::XmlDictionaryString* itemName,
                                  ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength, ::ByRef<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>> array);

  /// @brief Method TryReadDoubleArray, addr 0x5f5a3a4, size 0x1b8, virtual false, abstract: false, final false
  inline bool TryReadDoubleArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, ::System::Xml::XmlDictionaryString* itemName,
                                 ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength, ::ByRef<::ArrayW<double_t, ::Array<double_t>*>> array);

  /// @brief Method TryReadInt32Array, addr 0x5f59e7c, size 0x1b8, virtual false, abstract: false, final false
  inline bool TryReadInt32Array(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, ::System::Xml::XmlDictionaryString* itemName,
                                ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> array);

  /// @brief Method TryReadInt64Array, addr 0x5f5a034, size 0x1b8, virtual false, abstract: false, final false
  inline bool TryReadInt64Array(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, ::System::Xml::XmlDictionaryString* itemName,
                                ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength, ::ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> array);

  /// @brief Method TryReadSingleArray, addr 0x5f5a1ec, size 0x1b8, virtual false, abstract: false, final false
  inline bool TryReadSingleArray(::System::Runtime::Serialization::XmlObjectSerializerReadContext* context, ::System::Xml::XmlDictionaryString* itemName,
                                 ::System::Xml::XmlDictionaryString* itemNamespace, int32_t arrayLength, ::ByRef<::ArrayW<float_t, ::Array<float_t>*>> array);

  constexpr ::System::Xml::XmlDictionaryReader* const& __cordl_internal_get_dictionaryReader() const;

  constexpr ::System::Xml::XmlDictionaryReader*& __cordl_internal_get_dictionaryReader();

  constexpr bool const& __cordl_internal_get_isEndOfEmptyElement() const;

  constexpr bool& __cordl_internal_get_isEndOfEmptyElement();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr void __cordl_internal_set_dictionaryReader(::System::Xml::XmlDictionaryReader* value);

  constexpr void __cordl_internal_set_isEndOfEmptyElement(bool value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  /// @brief Method .ctor, addr 0x5f56724, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader);

  /// @brief Method get_AttributeCount, addr 0x5f56864, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_AttributeCount();

  /// @brief Method get_Depth, addr 0x5f5adc4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_EOF, addr 0x5f5ae00, size 0x20, virtual false, abstract: false, final false
  inline bool get_EOF();

  /// @brief Method get_IsEmptyElement, addr 0x5f5698c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LineNumber, addr 0x5f5a72c, size 0xbc, virtual false, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x5f5a7e8, size 0xbc, virtual false, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_LocalName, addr 0x5f56bc0, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x5f5ad50, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NamespaceURI, addr 0x5f5ad6c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x5f56e24, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Normalized, addr 0x5f5a8a4, size 0x118, virtual false, abstract: false, final false
  inline bool get_Normalized();

  /// @brief Method get_UnderlyingExtensionDataReader, addr 0x5f567e4, size 0x80, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ExtensionDataReader* get_UnderlyingExtensionDataReader();

  /// @brief Method get_UnderlyingReader, addr 0x5f567dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* get_UnderlyingReader();

  /// @brief Method get_Value, addr 0x5f5ad88, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_ValueType, addr 0x5f5ada4, size 0x20, virtual false, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_WhitespaceHandling, addr 0x5f5aaf8, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Xml::WhitespaceHandling get_WhitespaceHandling();

  /// @brief Method set_Normalized, addr 0x5f5a9bc, size 0x13c, virtual false, abstract: false, final false
  inline void set_Normalized(bool value);

  /// @brief Method set_WhitespaceHandling, addr 0x5f5ac14, size 0x13c, virtual false, abstract: false, final false
  inline void set_WhitespaceHandling(::System::Xml::WhitespaceHandling value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlReaderDelegator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlReaderDelegator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlReaderDelegator(XmlReaderDelegator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlReaderDelegator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlReaderDelegator(XmlReaderDelegator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17099 };

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field dictionaryReader, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryReader* ___dictionaryReader;

  /// @brief Field isEndOfEmptyElement, offset: 0x20, size: 0x1, def value: None
  bool ___isEndOfEmptyElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlReaderDelegator, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlReaderDelegator, ___dictionaryReader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlReaderDelegator, ___isEndOfEmptyElement) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlReaderDelegator, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlReaderDelegator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlReaderDelegator*, "System.Runtime.Serialization", "XmlReaderDelegator");
