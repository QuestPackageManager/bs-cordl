#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Xsl/Runtime/zzzz__StringConcat_def.hpp"
#include "System/Xml/zzzz__XmlEventCache_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlEventCache)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct __XmlEventCache__XmlEventType;
}
namespace System::Xml {
struct __XmlEventCache__XmlEvent;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
struct __XmlEventCache__XmlEventType;
}
namespace System::Xml {
class XmlEventCache;
}
namespace System::Xml {
struct __XmlEventCache__XmlEvent;
}
// Write type traits
MARK_VAL_T(::System::Xml::__XmlEventCache__XmlEventType);
MARK_REF_PTR_T(::System::Xml::XmlEventCache);
MARK_VAL_T(::System::Xml::__XmlEventCache__XmlEvent);
// Type: ::XmlEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlEventCache::XmlEventType
struct CORDL_TYPE __XmlEventCache__XmlEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlEventCache__XmlEventType_Unwrapped
  enum struct ____XmlEventCache__XmlEventType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_DocType = static_cast<int32_t>(0x1),
    __E_StartElem = static_cast<int32_t>(0x2),
    __E_StartAttr = static_cast<int32_t>(0x3),
    __E_EndAttr = static_cast<int32_t>(0x4),
    __E_CData = static_cast<int32_t>(0x5),
    __E_Comment = static_cast<int32_t>(0x6),
    __E_PI = static_cast<int32_t>(0x7),
    __E_Whitespace = static_cast<int32_t>(0x8),
    __E_String = static_cast<int32_t>(0x9),
    __E_Raw = static_cast<int32_t>(0xa),
    __E_EntRef = static_cast<int32_t>(0xb),
    __E_CharEnt = static_cast<int32_t>(0xc),
    __E_SurrCharEnt = static_cast<int32_t>(0xd),
    __E_Base64 = static_cast<int32_t>(0xe),
    __E_BinHex = static_cast<int32_t>(0xf),
    __E_XmlDecl1 = static_cast<int32_t>(0x10),
    __E_XmlDecl2 = static_cast<int32_t>(0x11),
    __E_StartContent = static_cast<int32_t>(0x12),
    __E_EndElem = static_cast<int32_t>(0x13),
    __E_FullEndElem = static_cast<int32_t>(0x14),
    __E_Nmsp = static_cast<int32_t>(0x15),
    __E_EndBase64 = static_cast<int32_t>(0x16),
    __E_Close = static_cast<int32_t>(0x17),
    __E_Flush = static_cast<int32_t>(0x18),
    __E_Dispose = static_cast<int32_t>(0x19),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlEventCache__XmlEventType_Unwrapped() const noexcept {
    return static_cast<____XmlEventCache__XmlEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlEventCache__XmlEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlEventCache__XmlEventType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Base64 value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlEventCache__XmlEventType const Base64;

  /// @brief Field BinHex value: static_cast<int32_t>(0xf)
  static ::System::Xml::__XmlEventCache__XmlEventType const BinHex;

  /// @brief Field CData value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlEventCache__XmlEventType const CData;

  /// @brief Field CharEnt value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlEventCache__XmlEventType const CharEnt;

  /// @brief Field Close value: static_cast<int32_t>(0x17)
  static ::System::Xml::__XmlEventCache__XmlEventType const Close;

  /// @brief Field Comment value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlEventCache__XmlEventType const Comment;

  /// @brief Field Dispose value: static_cast<int32_t>(0x19)
  static ::System::Xml::__XmlEventCache__XmlEventType const Dispose;

  /// @brief Field DocType value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlEventCache__XmlEventType const DocType;

  /// @brief Field EndAttr value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlEventCache__XmlEventType const EndAttr;

  /// @brief Field EndBase64 value: static_cast<int32_t>(0x16)
  static ::System::Xml::__XmlEventCache__XmlEventType const EndBase64;

  /// @brief Field EndElem value: static_cast<int32_t>(0x13)
  static ::System::Xml::__XmlEventCache__XmlEventType const EndElem;

  /// @brief Field EntRef value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlEventCache__XmlEventType const EntRef;

  /// @brief Field Flush value: static_cast<int32_t>(0x18)
  static ::System::Xml::__XmlEventCache__XmlEventType const Flush;

  /// @brief Field FullEndElem value: static_cast<int32_t>(0x14)
  static ::System::Xml::__XmlEventCache__XmlEventType const FullEndElem;

  /// @brief Field Nmsp value: static_cast<int32_t>(0x15)
  static ::System::Xml::__XmlEventCache__XmlEventType const Nmsp;

  /// @brief Field PI value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlEventCache__XmlEventType const PI;

  /// @brief Field Raw value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlEventCache__XmlEventType const Raw;

  /// @brief Field StartAttr value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlEventCache__XmlEventType const StartAttr;

  /// @brief Field StartContent value: static_cast<int32_t>(0x12)
  static ::System::Xml::__XmlEventCache__XmlEventType const StartContent;

  /// @brief Field StartElem value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlEventCache__XmlEventType const StartElem;

  /// @brief Field String value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlEventCache__XmlEventType const String;

  /// @brief Field SurrCharEnt value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlEventCache__XmlEventType const SurrCharEnt;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlEventCache__XmlEventType const Unknown;

  /// @brief Field Whitespace value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlEventCache__XmlEventType const Whitespace;

  /// @brief Field XmlDecl1 value: static_cast<int32_t>(0x10)
  static ::System::Xml::__XmlEventCache__XmlEventType const XmlDecl1;

  /// @brief Field XmlDecl2 value: static_cast<int32_t>(0x11)
  static ::System::Xml::__XmlEventCache__XmlEventType const XmlDecl2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlEventCache__XmlEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlEventCache__XmlEventType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::XmlEvent
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlEventCache::XmlEvent
struct CORDL_TYPE __XmlEventCache__XmlEvent {
public:
  // Declarations
  __declspec(property(get = get_EventType))::System::Xml::__XmlEventCache__XmlEventType EventType;

  __declspec(property(get = get_Object))::System::Object* Object;

  __declspec(property(get = get_String1))::StringW String1;

  __declspec(property(get = get_String2))::StringW String2;

  __declspec(property(get = get_String3))::StringW String3;

  /// @brief Method InitEvent, addr 0x2d6dc34, size 0x8, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType);

  /// @brief Method InitEvent, addr 0x2d6dc28, size 0xc, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::System::Object* o);

  /// @brief Method InitEvent, addr 0x2d6dbf0, size 0xc, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1);

  /// @brief Method InitEvent, addr 0x2d6dbfc, size 0xc, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2);

  /// @brief Method InitEvent, addr 0x2d6dc08, size 0x10, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3);

  /// @brief Method InitEvent, addr 0x2d6dc18, size 0x10, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o);

  /// @brief Method get_EventType, addr 0x2d6dc3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlEventCache__XmlEventType get_EventType();

  /// @brief Method get_Object, addr 0x2d6dc5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Object();

  /// @brief Method get_String1, addr 0x2d6dc44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_String1();

  /// @brief Method get_String2, addr 0x2d6dc4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_String2();

  /// @brief Method get_String3, addr 0x2d6dc54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_String3();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlEventCache__XmlEvent();

  // Ctor Parameters [CppParam { name: "eventType", ty: "::System::Xml::__XmlEventCache__XmlEventType", modifiers: "", def_value: None }, CppParam { name: "s1", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "o", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr __XmlEventCache__XmlEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o) noexcept;

  /// @brief Field eventType, offset: 0x0, size: 0x4, def value: None
  ::System::Xml::__XmlEventCache__XmlEventType eventType;

  /// @brief Field s1, offset: 0x8, size: 0x8, def value: None
  ::StringW s1;

  /// @brief Field s2, offset: 0x10, size: 0x8, def value: None
  ::StringW s2;

  /// @brief Field s3, offset: 0x18, size: 0x8, def value: None
  ::StringW s3;

  /// @brief Field o, offset: 0x20, size: 0x8, def value: None
  ::System::Object* o;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlEventCache__XmlEvent, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlEventCache__XmlEvent, eventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlEventCache__XmlEvent, s1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlEventCache__XmlEvent, s2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlEventCache__XmlEvent, s3) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlEventCache__XmlEvent, o) == 0x20, "Offset mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlEventCache
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlEventCache*
class CORDL_TYPE XmlEventCache : public ::System::Xml::XmlRawWriter {
public:
  // Declarations
  using XmlEvent = ::System::Xml::__XmlEventCache__XmlEvent;

  using XmlEventType = ::System::Xml::__XmlEventCache__XmlEventType;

  /// @brief Field baseUri, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_baseUri, put = __cordl_internal_set_baseUri))::StringW baseUri;

  /// @brief Field hasRootNode, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_hasRootNode, put = __cordl_internal_set_hasRootNode)) bool hasRootNode;

  /// @brief Field pageCurr, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_pageCurr,
                      put = __cordl_internal_set_pageCurr))::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*> pageCurr;

  /// @brief Field pageSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_pageSize, put = __cordl_internal_set_pageSize)) int32_t pageSize;

  /// @brief Field pages, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_pages,
               put = __cordl_internal_set_pages))::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>* pages;

  /// @brief Field singleText, offset 0x40, size 0x38
  __declspec(property(get = __cordl_internal_get_singleText, put = __cordl_internal_set_singleText))::System::Xml::Xsl::Runtime::StringConcat singleText;

  /// @brief Method AddEvent, addr 0x2d6d324, size 0x48, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType);

  /// @brief Method AddEvent, addr 0x2d6d670, size 0x50, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::System::Object* o);

  /// @brief Method AddEvent, addr 0x2d6d494, size 0x50, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1);

  /// @brief Method AddEvent, addr 0x2d6d500, size 0x5c, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2);

  /// @brief Method AddEvent, addr 0x2d6d408, size 0x64, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3);

  /// @brief Method AddEvent, addr 0x2d6d384, size 0x70, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o);

  /// @brief Method Close, addr 0x2d6d858, size 0x8, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x2d6d878, size 0xb0, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndEvents, addr 0x2d693f8, size 0x14, virtual false, abstract: false, final false
  inline void EndEvents();

  /// @brief Method EventsToWriter, addr 0x2d6940c, size 0x6f4, virtual false, abstract: false, final false
  inline void EventsToWriter(::System::Xml::XmlWriter* writer);

  /// @brief Method Flush, addr 0x2d6d860, size 0x8, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method NewEvent, addr 0x2d6d9e8, size 0x208, virtual false, abstract: false, final false
  inline int32_t NewEvent();

  static inline ::System::Xml::XmlEventCache* New_ctor(::StringW baseUri, bool hasRootNode);

  /// @brief Method StartElementContent, addr 0x2d6d9a0, size 0x8, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method ToBytes, addr 0x2d6d778, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBase64, addr 0x2d6d74c, size 0x2c, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x2d6d82c, size 0x2c, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x2d6d488, size 0xc, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x2d6d604, size 0x6c, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x2d6d58c, size 0x30, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x2d6d4e4, size 0xc, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x2d6d36c, size 0x18, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x2d6d480, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndBase64, addr 0x2d6d9e0, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndBase64();

  /// @brief Method WriteEndElement, addr 0x2d6d9a8, size 0x14, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEntityRef, addr 0x2d6d5f8, size 0xc, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x2d6d9bc, size 0x14, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration, addr 0x2d6d9d0, size 0x10, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method WriteProcessingInstruction, addr 0x2d6d4f0, size 0x10, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x2d6d5bc, size 0x30, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2d6d5ec, size 0xc, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x2d6d46c, size 0x14, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x2d6d3f4, size 0x14, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x2d6d568, size 0x24, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x2d6d6c0, size 0x8c, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x2d6d868, size 0x10, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteWhitespace, addr 0x2d6d55c, size 0xc, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteXmlDeclaration, addr 0x2d6d928, size 0x6c, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x2d6d994, size 0xc, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  constexpr ::StringW const& __cordl_internal_get_baseUri() const;

  constexpr ::StringW& __cordl_internal_get_baseUri();

  constexpr bool const& __cordl_internal_get_hasRootNode() const;

  constexpr bool& __cordl_internal_get_hasRootNode();

  constexpr ::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*> const& __cordl_internal_get_pageCurr() const;

  constexpr ::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>& __cordl_internal_get_pageCurr();

  constexpr int32_t const& __cordl_internal_get_pageSize() const;

  constexpr int32_t& __cordl_internal_get_pageSize();

  constexpr ::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>*& __cordl_internal_get_pages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>*> const&
  __cordl_internal_get_pages() const;

  constexpr ::System::Xml::Xsl::Runtime::StringConcat const& __cordl_internal_get_singleText() const;

  constexpr ::System::Xml::Xsl::Runtime::StringConcat& __cordl_internal_get_singleText();

  constexpr void __cordl_internal_set_baseUri(::StringW value);

  constexpr void __cordl_internal_set_hasRootNode(bool value);

  constexpr void __cordl_internal_set_pageCurr(::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*> value);

  constexpr void __cordl_internal_set_pageSize(int32_t value);

  constexpr void __cordl_internal_set_pages(::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>* value);

  constexpr void __cordl_internal_set_singleText(::System::Xml::Xsl::Runtime::StringConcat value);

  /// @brief Method .ctor, addr 0x2d688e8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW baseUri, bool hasRootNode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlEventCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlEventCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlEventCache(XmlEventCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlEventCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlEventCache(XmlEventCache const&) = delete;

  /// @brief Field pages, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>* ___pages;

  /// @brief Field pageCurr, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*> ___pageCurr;

  /// @brief Field pageSize, offset: 0x38, size: 0x4, def value: None
  int32_t ___pageSize;

  /// @brief Field hasRootNode, offset: 0x3c, size: 0x1, def value: None
  bool ___hasRootNode;

  /// @brief Field singleText, offset: 0x40, size: 0x38, def value: None
  ::System::Xml::Xsl::Runtime::StringConcat ___singleText;

  /// @brief Field baseUri, offset: 0x78, size: 0x8, def value: None
  ::StringW ___baseUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlEventCache, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___pages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___pageCurr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___pageSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___hasRootNode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___singleText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___baseUri) == 0x78, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlEventCache__XmlEventType, "System.Xml", "XmlEventCache/XmlEventType");
NEED_NO_BOX(::System::Xml::XmlEventCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEventCache*, "System.Xml", "XmlEventCache");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlEventCache__XmlEvent, "System.Xml", "XmlEventCache/XmlEvent");
