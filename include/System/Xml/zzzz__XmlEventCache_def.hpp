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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11451))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlEventCache__XmlEventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlEventCache__XmlEventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlEventCache__XmlEventType const Unknown;

  /// @brief Field DocType value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlEventCache__XmlEventType const DocType;

  /// @brief Field StartElem value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlEventCache__XmlEventType const StartElem;

  /// @brief Field StartAttr value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlEventCache__XmlEventType const StartAttr;

  /// @brief Field EndAttr value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlEventCache__XmlEventType const EndAttr;

  /// @brief Field CData value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlEventCache__XmlEventType const CData;

  /// @brief Field Comment value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlEventCache__XmlEventType const Comment;

  /// @brief Field PI value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlEventCache__XmlEventType const PI;

  /// @brief Field Whitespace value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlEventCache__XmlEventType const Whitespace;

  /// @brief Field String value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlEventCache__XmlEventType const String;

  /// @brief Field Raw value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlEventCache__XmlEventType const Raw;

  /// @brief Field EntRef value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlEventCache__XmlEventType const EntRef;

  /// @brief Field CharEnt value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlEventCache__XmlEventType const CharEnt;

  /// @brief Field SurrCharEnt value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlEventCache__XmlEventType const SurrCharEnt;

  /// @brief Field Base64 value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlEventCache__XmlEventType const Base64;

  /// @brief Field BinHex value: static_cast<int32_t>(0xf)
  static ::System::Xml::__XmlEventCache__XmlEventType const BinHex;

  /// @brief Field XmlDecl1 value: static_cast<int32_t>(0x10)
  static ::System::Xml::__XmlEventCache__XmlEventType const XmlDecl1;

  /// @brief Field XmlDecl2 value: static_cast<int32_t>(0x11)
  static ::System::Xml::__XmlEventCache__XmlEventType const XmlDecl2;

  /// @brief Field StartContent value: static_cast<int32_t>(0x12)
  static ::System::Xml::__XmlEventCache__XmlEventType const StartContent;

  /// @brief Field EndElem value: static_cast<int32_t>(0x13)
  static ::System::Xml::__XmlEventCache__XmlEventType const EndElem;

  /// @brief Field FullEndElem value: static_cast<int32_t>(0x14)
  static ::System::Xml::__XmlEventCache__XmlEventType const FullEndElem;

  /// @brief Field Nmsp value: static_cast<int32_t>(0x15)
  static ::System::Xml::__XmlEventCache__XmlEventType const Nmsp;

  /// @brief Field EndBase64 value: static_cast<int32_t>(0x16)
  static ::System::Xml::__XmlEventCache__XmlEventType const EndBase64;

  /// @brief Field Close value: static_cast<int32_t>(0x17)
  static ::System::Xml::__XmlEventCache__XmlEventType const Close;

  /// @brief Field Flush value: static_cast<int32_t>(0x18)
  static ::System::Xml::__XmlEventCache__XmlEventType const Flush;

  /// @brief Field Dispose value: static_cast<int32_t>(0x19)
  static ::System::Xml::__XmlEventCache__XmlEventType const Dispose;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11451))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11452))
// CS Name: ::XmlEventCache::XmlEvent
struct CORDL_TYPE __XmlEventCache__XmlEvent {
public:
  // Declarations
  __declspec(property(get = get_EventType))::System::Xml::__XmlEventCache__XmlEventType EventType;

  __declspec(property(get = get_String1))::StringW String1;

  __declspec(property(get = get_String2))::StringW String2;

  __declspec(property(get = get_String3))::StringW String3;

  __declspec(property(get = get_Object))::System::Object* Object;

  /// @brief Method InitEvent, addr 0x28595c0, size 0x8, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType);

  /// @brief Method InitEvent, addr 0x285957c, size 0xc, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1);

  /// @brief Method InitEvent, addr 0x2859588, size 0xc, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2);

  /// @brief Method InitEvent, addr 0x2859594, size 0x10, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3);

  /// @brief Method InitEvent, addr 0x28595a4, size 0x10, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o);

  /// @brief Method InitEvent, addr 0x28595b4, size 0xc, virtual false, abstract: false, final false
  inline void InitEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::System::Object* o);

  /// @brief Method get_EventType, addr 0x28595c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlEventCache__XmlEventType get_EventType();

  /// @brief Method get_String1, addr 0x28595d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_String1();

  /// @brief Method get_String2, addr 0x28595d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_String2();

  /// @brief Method get_String3, addr 0x28595e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_String3();

  /// @brief Method get_Object, addr 0x28595e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Object();

  // Ctor Parameters [CppParam { name: "eventType", ty: "::System::Xml::__XmlEventCache__XmlEventType", modifiers: "", def_value: None }, CppParam { name: "s1", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "o", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr __XmlEventCache__XmlEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlEventCache__XmlEvent();

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
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11455)), TypeDefinitionIndex(TypeDefinitionIndex(11592))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11453))
// CS Name: ::System.Xml::XmlEventCache*
class CORDL_TYPE XmlEventCache : public ::System::Xml::XmlRawWriter {
public:
  // Declarations
  using XmlEvent = ::System::Xml::__XmlEventCache__XmlEvent;

  using XmlEventType = ::System::Xml::__XmlEventCache__XmlEventType;

  /// @brief Field pages, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get_pages,
               put = __cordl_internal_set_pages))::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>* pages;

  /// @brief Field pageCurr, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pageCurr,
                      put = __cordl_internal_set_pageCurr))::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*> pageCurr;

  /// @brief Field pageSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_pageSize, put = __cordl_internal_set_pageSize)) int32_t pageSize;

  /// @brief Field hasRootNode, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_hasRootNode, put = __cordl_internal_set_hasRootNode)) bool hasRootNode;

  /// @brief Field singleText, offset 0x38, size 0x38
  __declspec(property(get = __cordl_internal_get_singleText, put = __cordl_internal_set_singleText))::System::Xml::Xsl::Runtime::StringConcat singleText;

  /// @brief Field baseUri, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_baseUri, put = __cordl_internal_set_baseUri))::StringW baseUri;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>*& __cordl_internal_get_pages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>*> const&
  __cordl_internal_get_pages() const;

  constexpr void __cordl_internal_set_pages(::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>* value);

  constexpr ::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>& __cordl_internal_get_pageCurr();

  constexpr ::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*> const& __cordl_internal_get_pageCurr() const;

  constexpr void __cordl_internal_set_pageCurr(::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*> value);

  constexpr int32_t& __cordl_internal_get_pageSize();

  constexpr int32_t const& __cordl_internal_get_pageSize() const;

  constexpr void __cordl_internal_set_pageSize(int32_t value);

  constexpr bool& __cordl_internal_get_hasRootNode();

  constexpr bool const& __cordl_internal_get_hasRootNode() const;

  constexpr void __cordl_internal_set_hasRootNode(bool value);

  constexpr ::System::Xml::Xsl::Runtime::StringConcat& __cordl_internal_get_singleText();

  constexpr ::System::Xml::Xsl::Runtime::StringConcat const& __cordl_internal_get_singleText() const;

  constexpr void __cordl_internal_set_singleText(::System::Xml::Xsl::Runtime::StringConcat value);

  constexpr ::StringW& __cordl_internal_get_baseUri();

  constexpr ::StringW const& __cordl_internal_get_baseUri() const;

  constexpr void __cordl_internal_set_baseUri(::StringW value);

  static inline ::System::Xml::XmlEventCache* New_ctor(::StringW baseUri, bool hasRootNode);

  /// @brief Method .ctor, addr 0x28554b0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW baseUri, bool hasRootNode);

  /// @brief Method EndEvents, addr 0x2855fc0, size 0x14, virtual false, abstract: false, final false
  inline void EndEvents();

  /// @brief Method EventsToWriter, addr 0x2855fd4, size 0x6f4, virtual false, abstract: false, final false
  inline void EventsToWriter(::System::Xml::XmlWriter* writer);

  /// @brief Method WriteDocType, addr 0x2858cf8, size 0x18, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteStartElement, addr 0x2858d80, size 0x14, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartAttribute, addr 0x2858df8, size 0x14, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndAttribute, addr 0x2858e0c, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteCData, addr 0x2858e14, size 0xc, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteComment, addr 0x2858e70, size 0xc, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteProcessingInstruction, addr 0x2858e7c, size 0x10, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteWhitespace, addr 0x2858ee8, size 0xc, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteString, addr 0x2858ef4, size 0x24, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteChars, addr 0x2858f18, size 0x30, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2858f48, size 0x30, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x2858f78, size 0xc, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteEntityRef, addr 0x2858f84, size 0xc, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteCharEntity, addr 0x2858f90, size 0x6c, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteSurrogateCharEntity, addr 0x285904c, size 0x8c, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteBase64, addr 0x28590d8, size 0x2c, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x28591b8, size 0x2c, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Close, addr 0x28591e4, size 0x8, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x28591ec, size 0x8, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method WriteValue, addr 0x28591f4, size 0x10, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method Dispose, addr 0x2859204, size 0xb0, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method WriteXmlDeclaration, addr 0x28592b4, size 0x6c, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x2859320, size 0xc, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  /// @brief Method StartElementContent, addr 0x285932c, size 0x8, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method WriteEndElement, addr 0x2859334, size 0x14, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteFullEndElement, addr 0x2859348, size 0x14, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration, addr 0x285935c, size 0x10, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method WriteEndBase64, addr 0x285936c, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndBase64();

  /// @brief Method AddEvent, addr 0x2858cb0, size 0x48, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType);

  /// @brief Method AddEvent, addr 0x2858e20, size 0x50, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1);

  /// @brief Method AddEvent, addr 0x2858e8c, size 0x5c, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2);

  /// @brief Method AddEvent, addr 0x2858d94, size 0x64, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3);

  /// @brief Method AddEvent, addr 0x2858d10, size 0x70, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::System::Object* o);

  /// @brief Method AddEvent, addr 0x2858ffc, size 0x50, virtual false, abstract: false, final false
  inline void AddEvent(::System::Xml::__XmlEventCache__XmlEventType eventType, ::System::Object* o);

  /// @brief Method NewEvent, addr 0x2859374, size 0x208, virtual false, abstract: false, final false
  inline int32_t NewEvent();

  /// @brief Method ToBytes, addr 0x2859104, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "XmlEventCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlEventCache(XmlEventCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlEventCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlEventCache(XmlEventCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlEventCache();

public:
  /// @brief Field pages, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*>>* ___pages;

  /// @brief Field pageCurr, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlEventCache__XmlEvent, ::Array<::System::Xml::__XmlEventCache__XmlEvent>*> ___pageCurr;

  /// @brief Field pageSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___pageSize;

  /// @brief Field hasRootNode, offset: 0x34, size: 0x1, def value: None
  bool ___hasRootNode;

  /// @brief Field singleText, offset: 0x38, size: 0x38, def value: None
  ::System::Xml::Xsl::Runtime::StringConcat ___singleText;

  /// @brief Field baseUri, offset: 0x70, size: 0x8, def value: None
  ::StringW ___baseUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlEventCache, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___pages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___pageCurr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___pageSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___hasRootNode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___singleText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___baseUri) == 0x70, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlEventCache__XmlEventType, "System.Xml", "XmlEventCache/XmlEventType");
NEED_NO_BOX(::System::Xml::XmlEventCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEventCache*, "System.Xml", "XmlEventCache");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlEventCache__XmlEvent, "System.Xml", "XmlEventCache/XmlEvent");
