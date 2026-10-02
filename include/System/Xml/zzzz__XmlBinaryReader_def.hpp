#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlBaseReader_def.hpp"
#include "System/Xml/zzzz__XmlBinaryNodeType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBinaryReader)
namespace System::IO {
class Stream;
}
namespace System::Xml {
class IXmlDictionary;
}
namespace System::Xml {
class OnXmlDictionaryReaderClose;
}
namespace System::Xml {
class PrefixHandle;
}
namespace System::Xml {
class StringHandle;
}
namespace System::Xml {
struct ValueHandleType;
}
namespace System::Xml {
class ValueHandle;
}
namespace System::Xml {
class XmlBaseReader_XmlAtomicTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlAttributeTextNode;
}
namespace System::Xml {
class XmlBaseReader_XmlTextNode;
}
namespace System::Xml {
struct XmlBinaryNodeType;
}
namespace System::Xml {
class XmlBinaryReaderSession;
}
namespace System::Xml {
struct XmlBinaryReader_ArrayState;
}
namespace System::Xml {
class XmlDictionaryReaderQuotas;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
class Array;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
struct XmlBinaryReader_ArrayState;
}
namespace System::Xml {
class XmlBinaryReader;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlBinaryReader_ArrayState);
MARK_REF_T(::System::Xml::XmlBinaryReader*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlBinaryReader_ArrayState, "System.Xml", "XmlBinaryReader/ArrayState");
DEFINE_IL2CPP_CLASS(::System::Xml::XmlBinaryReader*, "System.Xml", "XmlBinaryReader");
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlBinaryReader/ArrayState
struct CORDL_TYPE XmlBinaryReader_ArrayState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlBinaryReader_ArrayState_Unwrapped
  enum struct __XmlBinaryReader_ArrayState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Element = static_cast<int32_t>(0x1),
    __E_Content = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlBinaryReader_ArrayState_Unwrapped() const noexcept {
    return static_cast<__XmlBinaryReader_ArrayState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryReader_ArrayState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XmlBinaryReader_ArrayState(int32_t value__) noexcept;

  /// @brief Field Content value: I32(2)
  static ::System::Xml::XmlBinaryReader_ArrayState const Content;

  /// @brief Field Element value: I32(1)
  static ::System::Xml::XmlBinaryReader_ArrayState const Element;

  /// @brief Field None value: I32(0)
  static ::System::Xml::XmlBinaryReader_ArrayState const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16340 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryReader_ArrayState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlBinaryReader_ArrayState) == 0x4, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlBaseReader, System.Xml.XmlBinaryNodeType, System.Xml.XmlBinaryReader::ArrayState
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBinaryReader
class CORDL_TYPE XmlBinaryReader : public ::System::Xml::XmlBaseReader {
public:
  // Declarations
  using ArrayState = ::System::Xml::XmlBinaryReader_ArrayState;

  /// @brief Field arrayCount, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_arrayCount, put = __cordl_internal_set_arrayCount)) int32_t arrayCount;

  /// @brief Field arrayNodeType, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_arrayNodeType, put = __cordl_internal_set_arrayNodeType)) ::System::Xml::XmlBinaryNodeType arrayNodeType;

  /// @brief Field arrayState, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_arrayState, put = __cordl_internal_set_arrayState)) ::System::Xml::XmlBinaryReader_ArrayState arrayState;

  /// @brief Field buffered, offset 0xf9, size 0x1
  __declspec(property(get = __cordl_internal_get_buffered, put = __cordl_internal_set_buffered)) bool buffered;

  /// @brief Field isTextWithEndElement, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_isTextWithEndElement, put = __cordl_internal_set_isTextWithEndElement)) bool isTextWithEndElement;

  /// @brief Field maxBytesPerRead, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBytesPerRead, put = __cordl_internal_set_maxBytesPerRead)) int32_t maxBytesPerRead;

  /// @brief Field onClose, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_onClose, put = __cordl_internal_set_onClose)) ::System::Xml::OnXmlDictionaryReaderClose* onClose;

  /// @brief Method CanOptimizeReadElementContent, addr 0x65338a8, size 0x20, virtual false, abstract: false, final false
  inline bool CanOptimizeReadElementContent();

  /// @brief Method CheckArray, addr 0x6537260, size 0x234, virtual false, abstract: false, final false
  inline void CheckArray(::System::Array* array, int32_t offset, int32_t count);

  /// @brief Method Close, addr 0x6533654, size 0xec, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetNodeType, addr 0x65338c8, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBinaryNodeType GetNodeType();

  /// @brief Method InsertNode, addr 0x65368d0, size 0xc4, virtual false, abstract: false, final false
  inline void InsertNode(::System::Xml::XmlBinaryNodeType nodeType, int32_t length);

  /// @brief Method IsStartArray, addr 0x65371a8, size 0x5c, virtual false, abstract: false, final false
  inline bool IsStartArray(::StringW localName, ::StringW namespaceUri, ::System::Xml::XmlBinaryNodeType nodeType);

  /// @brief Method IsStartArray, addr 0x6537204, size 0x5c, virtual false, abstract: false, final false
  inline bool IsStartArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::System::Xml::XmlBinaryNodeType nodeType);

  /// @brief Method IsStartArray, addr 0x6536f54, size 0x224, virtual true, abstract: false, final false
  inline bool IsStartArray(::by_ref<::System::Type*> type);

  /// @brief Method IsValidArrayType, addr 0x6536edc, size 0x44, virtual false, abstract: false, final false
  inline bool IsValidArrayType(::System::Xml::XmlBinaryNodeType nodeType);

  /// @brief Method MoveToArrayElement, addr 0x653581c, size 0x2c, virtual false, abstract: false, final false
  inline void MoveToArrayElement();

  /// @brief Method MoveToAtomicTextWithEndElement, addr 0x6535728, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseReader_XmlAtomicTextNode* MoveToAtomicTextWithEndElement();

  /// @brief Method MoveToInitial, addr 0x6533574, size 0x44, virtual false, abstract: false, final false
  inline void MoveToInitial(::System::Xml::XmlDictionaryReaderQuotas* quotas, ::System::Xml::XmlBinaryReaderSession* session, ::System::Xml::OnXmlDictionaryReaderClose* onClose);

  static inline ::System::Xml::XmlBinaryReader* New_ctor();

  /// @brief Method Read, addr 0x6535748, size 0xd4, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadArray, addr 0x65383d0, size 0xf0, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<::System::DateTime> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x65381a4, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<::System::Decimal> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538620, size 0xf0, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<::System::Guid> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538870, size 0xf0, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537494, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537f78, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537d4c, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x65376c8, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x65378f4, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537b20, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ReadArray(::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x65384c0, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538270, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538710, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538960, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537568, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538044, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537e18, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537794, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x65379c0, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537bec, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538570, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::DateTime> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538320, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x65387c0, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Guid> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6538a10, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537618, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x65380f4, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537ec8, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537844, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int16_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537a70, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6537c9c, size 0xb0, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int64_t> array, int32_t offset, int32_t count);

  /// @brief Method ReadArray, addr 0x6536000, size 0xf8, virtual false, abstract: false, final false
  inline void ReadArray();

  /// @brief Method ReadAttributeText, addr 0x6536808, size 0x48, virtual false, abstract: false, final false
  inline void ReadAttributeText(::System::Xml::XmlBaseReader_XmlAttributeTextNode* textNode);

  /// @brief Method ReadAttributes, addr 0x6535998, size 0x2c, virtual false, abstract: false, final false
  inline void ReadAttributes();

  /// @brief Method ReadAttributes2, addr 0x65363b4, size 0x454, virtual false, abstract: false, final false
  inline void ReadAttributes2();

  /// @brief Method ReadBinaryText, addr 0x6535e6c, size 0xc, virtual false, abstract: false, final false
  inline void ReadBinaryText(::System::Xml::XmlBaseReader_XmlTextNode* textNode, int32_t length);

  /// @brief Method ReadDictionaryKey, addr 0x65339d8, size 0x14, virtual false, abstract: false, final false
  inline int32_t ReadDictionaryKey();

  /// @brief Method ReadDictionaryName, addr 0x6535a48, size 0x28, virtual false, abstract: false, final false
  inline void ReadDictionaryName(::System::Xml::StringHandle* s);

  /// @brief Method ReadElementContentAsBoolean, addr 0x6533ad4, size 0x134, virtual true, abstract: false, final false
  inline bool ReadElementContentAsBoolean();

  /// @brief Method ReadElementContentAsDateTime, addr 0x6534438, size 0xac, virtual true, abstract: false, final false
  inline ::System::DateTime ReadElementContentAsDateTime();

  /// @brief Method ReadElementContentAsDecimal, addr 0x65341f0, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Decimal ReadElementContentAsDecimal();

  /// @brief Method ReadElementContentAsDouble, addr 0x6534010, size 0xac, virtual true, abstract: false, final false
  inline double_t ReadElementContentAsDouble();

  /// @brief Method ReadElementContentAsFloat, addr 0x6533ea0, size 0xac, virtual true, abstract: false, final false
  inline float_t ReadElementContentAsFloat();

  /// @brief Method ReadElementContentAsGuid, addr 0x65348ec, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Guid ReadElementContentAsGuid();

  /// @brief Method ReadElementContentAsInt, addr 0x6533c2c, size 0x190, virtual true, abstract: false, final false
  inline int32_t ReadElementContentAsInt();

  /// @brief Method ReadElementContentAsString, addr 0x6533740, size 0x168, virtual true, abstract: false, final false
  inline ::StringW ReadElementContentAsString();

  /// @brief Method ReadElementContentAsTimeSpan, addr 0x6534698, size 0xac, virtual true, abstract: false, final false
  inline ::System::TimeSpan ReadElementContentAsTimeSpan();

  /// @brief Method ReadMultiByteUInt31, addr 0x6536cac, size 0x14, virtual false, abstract: false, final false
  inline int32_t ReadMultiByteUInt31();

  /// @brief Method ReadName, addr 0x6535918, size 0x80, virtual false, abstract: false, final false
  inline void ReadName(::System::Xml::StringHandle* handle);

  /// @brief Method ReadName, addr 0x65359c4, size 0x84, virtual false, abstract: false, final false
  inline void ReadName(::System::Xml::PrefixHandle* prefix);

  /// @brief Method ReadName, addr 0x6535a70, size 0x80, virtual false, abstract: false, final false
  inline void ReadName(::System::Xml::ValueHandle* value);

  /// @brief Method ReadNode, addr 0x6534d38, size 0x9f0, virtual false, abstract: false, final false
  inline bool ReadNode();

  /// @brief Method ReadPartialBinaryText, addr 0x6535e78, size 0x120, virtual false, abstract: false, final false
  inline void ReadPartialBinaryText(bool withEndElement, int32_t length);

  /// @brief Method ReadPartialUTF8Text, addr 0x6535bd0, size 0x1e0, virtual false, abstract: false, final false
  inline void ReadPartialUTF8Text(bool withEndElement, int32_t length);

  /// @brief Method ReadPartialUnicodeText, addr 0x6536994, size 0x1d0, virtual false, abstract: false, final false
  inline void ReadPartialUnicodeText(bool withEndElement, int32_t length);

  /// @brief Method ReadText, addr 0x6535b2c, size 0xa4, virtual false, abstract: false, final false
  inline void ReadText(::System::Xml::XmlBaseReader_XmlTextNode* textNode, ::System::Xml::ValueHandleType type, int32_t length);

  /// @brief Method ReadTextWithEndElement, addr 0x65339bc, size 0x1c, virtual false, abstract: false, final false
  inline void ReadTextWithEndElement();

  /// @brief Method ReadUInt16, addr 0x6535db0, size 0x14, virtual false, abstract: false, final false
  inline int32_t ReadUInt16();

  /// @brief Method ReadUInt31, addr 0x6535dc4, size 0x14, virtual false, abstract: false, final false
  inline int32_t ReadUInt31();

  /// @brief Method ReadUInt8, addr 0x6533908, size 0x30, virtual false, abstract: false, final false
  inline int32_t ReadUInt8();

  /// @brief Method ReadUnicodeText, addr 0x6535dd8, size 0x94, virtual false, abstract: false, final false
  inline void ReadUnicodeText(bool withEndElement, int32_t length);

  /// @brief Method SetInput, addr 0x65334e8, size 0x8c, virtual true, abstract: false, final true
  inline void SetInput(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlDictionaryReaderQuotas* quotas, ::System::Xml::XmlBinaryReaderSession* session,
                       ::System::Xml::OnXmlDictionaryReaderClose* onClose);

  /// @brief Method SkipArrayElements, addr 0x6536f20, size 0x34, virtual false, abstract: false, final false
  inline void SkipArrayElements(int32_t count);

  /// @brief Method SkipNodeType, addr 0x65338e8, size 0x20, virtual false, abstract: false, final false
  inline void SkipNodeType();

  /// @brief Method TryGetArrayLength, addr 0x6537178, size 0x30, virtual true, abstract: false, final false
  inline bool TryGetArrayLength(::by_ref<int32_t> count);

  /// @brief Method TryGetBase64ContentLength, addr 0x65349f0, size 0x268, virtual true, abstract: false, final false
  inline bool TryGetBase64ContentLength(::by_ref<int32_t> length);

  /// @brief Method VerifyWhitespace, addr 0x6535af0, size 0x3c, virtual false, abstract: false, final false
  inline void VerifyWhitespace();

  constexpr int32_t const& __cordl_internal_get_arrayCount() const;

  constexpr int32_t& __cordl_internal_get_arrayCount();

  constexpr ::System::Xml::XmlBinaryNodeType const& __cordl_internal_get_arrayNodeType() const;

  constexpr ::System::Xml::XmlBinaryNodeType& __cordl_internal_get_arrayNodeType();

  constexpr ::System::Xml::XmlBinaryReader_ArrayState const& __cordl_internal_get_arrayState() const;

  constexpr ::System::Xml::XmlBinaryReader_ArrayState& __cordl_internal_get_arrayState();

  constexpr bool const& __cordl_internal_get_buffered() const;

  constexpr bool& __cordl_internal_get_buffered();

  constexpr bool const& __cordl_internal_get_isTextWithEndElement() const;

  constexpr bool& __cordl_internal_get_isTextWithEndElement();

  constexpr int32_t const& __cordl_internal_get_maxBytesPerRead() const;

  constexpr int32_t& __cordl_internal_get_maxBytesPerRead();

  constexpr ::System::Xml::OnXmlDictionaryReaderClose* const& __cordl_internal_get_onClose() const;

  constexpr ::System::Xml::OnXmlDictionaryReaderClose*& __cordl_internal_get_onClose();

  constexpr void __cordl_internal_set_arrayCount(int32_t value);

  constexpr void __cordl_internal_set_arrayNodeType(::System::Xml::XmlBinaryNodeType value);

  constexpr void __cordl_internal_set_arrayState(::System::Xml::XmlBinaryReader_ArrayState value);

  constexpr void __cordl_internal_set_buffered(bool value);

  constexpr void __cordl_internal_set_isTextWithEndElement(bool value);

  constexpr void __cordl_internal_set_maxBytesPerRead(int32_t value);

  constexpr void __cordl_internal_set_onClose(::System::Xml::OnXmlDictionaryReaderClose* value);

  /// @brief Method .ctor, addr 0x653348c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryReader", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBinaryReader(XmlBinaryReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryReader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBinaryReader(XmlBinaryReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16341 };

  /// @brief Field isTextWithEndElement, offset: 0xf8, size: 0x1, def value: None
  bool ___isTextWithEndElement;

  /// @brief Field buffered, offset: 0xf9, size: 0x1, def value: None
  bool ___buffered;

  /// @brief Field arrayState, offset: 0xfc, size: 0x4, def value: None
  ::System::Xml::XmlBinaryReader_ArrayState ___arrayState;

  /// @brief Field arrayCount, offset: 0x100, size: 0x4, def value: None
  int32_t ___arrayCount;

  /// @brief Field maxBytesPerRead, offset: 0x104, size: 0x4, def value: None
  int32_t ___maxBytesPerRead;

  /// @brief Field arrayNodeType, offset: 0x108, size: 0x4, def value: None
  ::System::Xml::XmlBinaryNodeType ___arrayNodeType;

  /// @brief Field onClose, offset: 0x110, size: 0x8, def value: None
  ::System::Xml::OnXmlDictionaryReaderClose* ___onClose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryReader, ___isTextWithEndElement) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryReader, ___buffered) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryReader, ___arrayState) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryReader, ___arrayCount) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryReader, ___maxBytesPerRead) == 0x104, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryReader, ___arrayNodeType) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryReader, ___onClose) == 0x110, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlBinaryReader) == 0x118, "Size mismatch!");

} // namespace System::Xml
