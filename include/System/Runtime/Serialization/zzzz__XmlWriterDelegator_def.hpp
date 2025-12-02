#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlWriterDelegator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWriterDelegator)
namespace System::Runtime::Serialization {
class IDataNode;
}
namespace System::Xml {
struct WriteState;
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
struct XmlSpace;
}
namespace System::Xml {
class XmlWriter;
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
class XmlWriterDelegator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlWriterDelegator);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlWriterDelegator
class CORDL_TYPE XmlWriterDelegator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  __declspec(property(get = get_Writer)) ::System::Xml::XmlWriter* Writer;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field depth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field dictionaryWriter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dictionaryWriter, put = __cordl_internal_set_dictionaryWriter)) ::System::Xml::XmlDictionaryWriter* dictionaryWriter;

  /// @brief Field prefixes, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_prefixes, put = __cordl_internal_set_prefixes)) int32_t prefixes;

  /// @brief Field writer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlWriter* writer;

  /// @brief Method CreateInvalidPrimitiveTypeException, addr 0x5f5d380, size 0x100, virtual false, abstract: false, final false
  inline ::System::Exception* CreateInvalidPrimitiveTypeException(::System::Type* type);

  /// @brief Method Flush, addr 0x5f5c98c, size 0x20, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method LookupPrefix, addr 0x5f5c9ac, size 0x20, virtual false, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Runtime::Serialization::XmlWriterDelegator* New_ctor(::System::Xml::XmlWriter* writer);

  /// @brief Method WriteAnyType, addr 0x5f5d480, size 0x3c, virtual false, abstract: false, final false
  inline void WriteAnyType(::System::Object* value);

  /// @brief Method WriteAnyType, addr 0x5f5d4bc, size 0x6ec, virtual false, abstract: false, final false
  inline void WriteAnyType(::System::Object* value, ::System::Type* valueType);

  /// @brief Method WriteAttributeBool, addr 0x5f5cff0, size 0x54, virtual false, abstract: false, final false
  inline void WriteAttributeBool(::StringW prefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs, bool value);

  /// @brief Method WriteAttributeBoolValue, addr 0x5f5d044, size 0x24, virtual false, abstract: false, final false
  inline void WriteAttributeBoolValue(bool value);

  /// @brief Method WriteAttributeInt, addr 0x5f5cf7c, size 0x54, virtual false, abstract: false, final false
  inline void WriteAttributeInt(::StringW prefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs, int32_t value);

  /// @brief Method WriteAttributeIntValue, addr 0x5f5cfd0, size 0x20, virtual false, abstract: false, final false
  inline void WriteAttributeIntValue(int32_t value);

  /// @brief Method WriteAttributeQualifiedName, addr 0x5f5d068, size 0x90, virtual false, abstract: false, final false
  inline void WriteAttributeQualifiedName(::StringW attrPrefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs, ::StringW name, ::StringW ns);

  /// @brief Method WriteAttributeQualifiedName, addr 0x5f5d118, size 0x80, virtual false, abstract: false, final false
  inline void WriteAttributeQualifiedName(::StringW attrPrefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs, ::System::Xml::XmlDictionaryString* name,
                                          ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteAttributeQualifiedNameValue, addr 0x5f5d0f8, size 0x20, virtual false, abstract: false, final false
  inline void WriteAttributeQualifiedNameValue(::StringW name, ::StringW ns);

  /// @brief Method WriteAttributeQualifiedNameValue, addr 0x5f5d198, size 0x50, virtual false, abstract: false, final false
  inline void WriteAttributeQualifiedNameValue(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteAttributeString, addr 0x5f5ce9c, size 0x54, virtual false, abstract: false, final false
  inline void WriteAttributeString(::StringW prefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs, ::StringW value);

  /// @brief Method WriteAttributeString, addr 0x5f5cef0, size 0x44, virtual false, abstract: false, final false
  inline void WriteAttributeString(::StringW prefix, ::System::Xml::XmlDictionaryString* attrName, ::System::Xml::XmlDictionaryString* attrNs, ::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteAttributeString, addr 0x5f5ce18, size 0x64, virtual false, abstract: false, final false
  inline void WriteAttributeString(::StringW prefix, ::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteAttributeStringValue, addr 0x5f5ce7c, size 0x20, virtual false, abstract: false, final false
  inline void WriteAttributeStringValue(::StringW value);

  /// @brief Method WriteAttributeStringValue, addr 0x5f5cf34, size 0x48, virtual false, abstract: false, final false
  inline void WriteAttributeStringValue(::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteBase64, addr 0x5f5ebc0, size 0x30, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteBoolean, addr 0x5f5e8b4, size 0x24, virtual true, abstract: false, final false
  inline void WriteBoolean(bool value);

  /// @brief Method WriteBoolean, addr 0x5f5e8d8, size 0x50, virtual false, abstract: false, final false
  inline void WriteBoolean(bool value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteBooleanArray, addr 0x5f5f174, size 0xc8, virtual false, abstract: false, final false
  inline void WriteBooleanArray(::ArrayW<bool, ::Array<bool>*> value, ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method WriteChar, addr 0x5f5ef3c, size 0x24, virtual true, abstract: false, final false
  inline void WriteChar(char16_t value);

  /// @brief Method WriteChar, addr 0x5f5ef60, size 0x54, virtual false, abstract: false, final false
  inline void WriteChar(char16_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteDateTime, addr 0x5f5e928, size 0x20, virtual true, abstract: false, final false
  inline void WriteDateTime(::System::DateTime value);

  /// @brief Method WriteDateTime, addr 0x5f5e948, size 0x50, virtual false, abstract: false, final false
  inline void WriteDateTime(::System::DateTime value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteDateTimeArray, addr 0x5f5f23c, size 0xc8, virtual false, abstract: false, final false
  inline void WriteDateTimeArray(::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> value, ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method WriteDecimal, addr 0x5f5e998, size 0x20, virtual true, abstract: false, final false
  inline void WriteDecimal(::System::Decimal value);

  /// @brief Method WriteDecimal, addr 0x5f5e9b8, size 0x58, virtual false, abstract: false, final false
  inline void WriteDecimal(::System::Decimal value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteDecimalArray, addr 0x5f5f304, size 0xcc, virtual false, abstract: false, final false
  inline void WriteDecimalArray(::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> value, ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method WriteDouble, addr 0x5f5ea10, size 0x20, virtual true, abstract: false, final false
  inline void WriteDouble(double_t value);

  /// @brief Method WriteDouble, addr 0x5f5ea30, size 0x48, virtual false, abstract: false, final false
  inline void WriteDouble(double_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteDoubleArray, addr 0x5f5f628, size 0xc8, virtual false, abstract: false, final false
  inline void WriteDoubleArray(::ArrayW<double_t, ::Array<double_t>*> value, ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method WriteEndAttribute, addr 0x5f5c9cc, size 0x20, virtual false, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x5f5c9ec, size 0x34, virtual false, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEndElementPrimitive, addr 0x5f5d300, size 0x1c, virtual false, abstract: false, final false
  inline void WriteEndElementPrimitive();

  /// @brief Method WriteExtensionData, addr 0x5f5dd00, size 0xbb4, virtual false, abstract: false, final false
  inline void WriteExtensionData(::System::Runtime::Serialization::IDataNode* dataNode);

  /// @brief Method WriteFloat, addr 0x5f5eb58, size 0x20, virtual true, abstract: false, final false
  inline void WriteFloat(float_t value);

  /// @brief Method WriteFloat, addr 0x5f5eb78, size 0x48, virtual false, abstract: false, final false
  inline void WriteFloat(float_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteGuid, addr 0x5f5dc78, size 0x44, virtual false, abstract: false, final false
  inline void WriteGuid(::System::Guid value);

  /// @brief Method WriteGuid, addr 0x5f5effc, size 0x50, virtual false, abstract: false, final false
  inline void WriteGuid(::System::Guid value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteInt, addr 0x5f5ea78, size 0x20, virtual true, abstract: false, final false
  inline void WriteInt(int32_t value);

  /// @brief Method WriteInt, addr 0x5f5ea98, size 0x50, virtual false, abstract: false, final false
  inline void WriteInt(int32_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteInt32Array, addr 0x5f5f3d0, size 0xc8, virtual false, abstract: false, final false
  inline void WriteInt32Array(::ArrayW<int32_t, ::Array<int32_t>*> value, ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method WriteInt64Array, addr 0x5f5f498, size 0xc8, virtual false, abstract: false, final false
  inline void WriteInt64Array(::ArrayW<int64_t, ::Array<int64_t>*> value, ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method WriteLong, addr 0x5f5eae8, size 0x20, virtual true, abstract: false, final false
  inline void WriteLong(int64_t value);

  /// @brief Method WriteLong, addr 0x5f5eb08, size 0x50, virtual false, abstract: false, final false
  inline void WriteLong(int64_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteNamespaceDecl, addr 0x5f5d37c, size 0x4, virtual false, abstract: false, final false
  inline void WriteNamespaceDecl(::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteQName, addr 0x5f5f04c, size 0xb8, virtual true, abstract: false, final false
  inline void WriteQName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method WriteQualifiedName, addr 0x5f5f104, size 0x20, virtual false, abstract: false, final false
  inline void WriteQualifiedName(::StringW localName, ::StringW ns);

  /// @brief Method WriteQualifiedName, addr 0x5f5f124, size 0x50, virtual false, abstract: false, final false
  inline void WriteQualifiedName(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteRaw, addr 0x5f5ca20, size 0x20, virtual false, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x5f5ca40, size 0x20, virtual false, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteShort, addr 0x5f5ebf0, size 0x24, virtual true, abstract: false, final false
  inline void WriteShort(int16_t value);

  /// @brief Method WriteShort, addr 0x5f5ec14, size 0x54, virtual false, abstract: false, final false
  inline void WriteShort(int16_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteSignedByte, addr 0x5f5ece0, size 0x24, virtual true, abstract: false, final false
  inline void WriteSignedByte(int8_t value);

  /// @brief Method WriteSignedByte, addr 0x5f5ed04, size 0x54, virtual false, abstract: false, final false
  inline void WriteSignedByte(int8_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteSingleArray, addr 0x5f5f560, size 0xc8, virtual false, abstract: false, final false
  inline void WriteSingleArray(::ArrayW<float_t, ::Array<float_t>*> value, ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method WriteStartAttribute, addr 0x5f5cdb4, size 0x1c, virtual false, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute, addr 0x5f5cdd0, size 0x48, virtual false, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteStartElement, addr 0x5f5d1e8, size 0x18, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x5f5d238, size 0x10, virtual false, abstract: false, final false
  inline void WriteStartElement(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteStartElement, addr 0x5f5d200, size 0x38, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x5f5d248, size 0x60, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteStartElementPrimitive, addr 0x5f5d2a8, size 0x58, virtual false, abstract: false, final false
  inline void WriteStartElementPrimitive(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteString, addr 0x5f5dba8, size 0x20, virtual false, abstract: false, final false
  inline void WriteString(::StringW value);

  /// @brief Method WriteTimeSpan, addr 0x5f5dbc8, size 0xb0, virtual false, abstract: false, final false
  inline void WriteTimeSpan(::System::TimeSpan value);

  /// @brief Method WriteTimeSpan, addr 0x5f5efb4, size 0x48, virtual false, abstract: false, final false
  inline void WriteTimeSpan(::System::TimeSpan value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteUnsignedByte, addr 0x5f5ec68, size 0x24, virtual true, abstract: false, final false
  inline void WriteUnsignedByte(uint8_t value);

  /// @brief Method WriteUnsignedByte, addr 0x5f5ec8c, size 0x54, virtual false, abstract: false, final false
  inline void WriteUnsignedByte(uint8_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteUnsignedInt, addr 0x5f5ed58, size 0x24, virtual true, abstract: false, final false
  inline void WriteUnsignedInt(uint32_t value);

  /// @brief Method WriteUnsignedInt, addr 0x5f5ed7c, size 0x54, virtual false, abstract: false, final false
  inline void WriteUnsignedInt(uint32_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteUnsignedLong, addr 0x5f5edd0, size 0xa0, virtual true, abstract: false, final false
  inline void WriteUnsignedLong(uint64_t value);

  /// @brief Method WriteUnsignedLong, addr 0x5f5ee70, size 0x54, virtual false, abstract: false, final false
  inline void WriteUnsignedLong(uint64_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteUnsignedShort, addr 0x5f5eec4, size 0x24, virtual true, abstract: false, final false
  inline void WriteUnsignedShort(uint16_t value);

  /// @brief Method WriteUnsignedShort, addr 0x5f5eee8, size 0x54, virtual false, abstract: false, final false
  inline void WriteUnsignedShort(uint16_t value, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteUri, addr 0x5f5dcbc, size 0x44, virtual false, abstract: false, final false
  inline void WriteUri(::System::Uri* value);

  /// @brief Method WriteXmlnsAttribute, addr 0x5f5caa4, size 0x238, virtual false, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW ns);

  /// @brief Method WriteXmlnsAttribute, addr 0x5f5ca60, size 0x44, virtual false, abstract: false, final false
  inline void WriteXmlnsAttribute(::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteXmlnsAttribute, addr 0x5f5ccdc, size 0xd8, virtual false, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns);

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::System::Xml::XmlDictionaryWriter* const& __cordl_internal_get_dictionaryWriter() const;

  constexpr ::System::Xml::XmlDictionaryWriter*& __cordl_internal_get_dictionaryWriter();

  constexpr int32_t const& __cordl_internal_get_prefixes() const;

  constexpr int32_t& __cordl_internal_get_prefixes();

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_writer();

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_dictionaryWriter(::System::Xml::XmlDictionaryWriter* value);

  constexpr void __cordl_internal_set_prefixes(int32_t value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x5f5c8cc, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriter* writer);

  /// @brief Method get_WriteState, addr 0x5f5d31c, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method get_Writer, addr 0x5f5c984, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlWriter* get_Writer();

  /// @brief Method get_XmlLang, addr 0x5f5d33c, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5f5d35c, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWriterDelegator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlWriterDelegator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWriterDelegator(XmlWriterDelegator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWriterDelegator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWriterDelegator(XmlWriterDelegator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17103 };

  /// @brief Field writer, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___writer;

  /// @brief Field dictionaryWriter, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryWriter* ___dictionaryWriter;

  /// @brief Field depth, offset: 0x20, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field prefixes, offset: 0x24, size: 0x4, def value: None
  int32_t ___prefixes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlWriterDelegator, ___writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlWriterDelegator, ___dictionaryWriter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlWriterDelegator, ___depth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlWriterDelegator, ___prefixes) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlWriterDelegator, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlWriterDelegator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlWriterDelegator*, "System.Runtime.Serialization", "XmlWriterDelegator");
