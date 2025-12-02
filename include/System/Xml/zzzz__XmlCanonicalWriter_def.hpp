#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlCanonicalWriter)
namespace System::Collections {
class IComparer;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Xml {
class XmlCanonicalWriter_AttributeSorter;
}
namespace System::Xml {
struct XmlCanonicalWriter_Attribute;
}
namespace System::Xml {
struct XmlCanonicalWriter_Element;
}
namespace System::Xml {
struct XmlCanonicalWriter_Scope;
}
namespace System::Xml {
struct XmlCanonicalWriter_XmlnsAttribute;
}
namespace System::Xml {
class XmlUTF8NodeWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlCanonicalWriter;
}
namespace System::Xml {
class XmlCanonicalWriter_AttributeSorter;
}
namespace System::Xml {
struct XmlCanonicalWriter_Attribute;
}
namespace System::Xml {
struct XmlCanonicalWriter_Element;
}
namespace System::Xml {
struct XmlCanonicalWriter_Scope;
}
namespace System::Xml {
struct XmlCanonicalWriter_XmlnsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlCanonicalWriter);
MARK_REF_PTR_T(::System::Xml::XmlCanonicalWriter_AttributeSorter);
MARK_VAL_T(::System::Xml::XmlCanonicalWriter_Attribute);
MARK_VAL_T(::System::Xml::XmlCanonicalWriter_Element);
MARK_VAL_T(::System::Xml::XmlCanonicalWriter_Scope);
MARK_VAL_T(::System::Xml::XmlCanonicalWriter_XmlnsAttribute);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlCanonicalWriter/AttributeSorter
class CORDL_TYPE XmlCanonicalWriter_AttributeSorter : public ::System::Object {
public:
  // Declarations
  /// @brief Field writer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlCanonicalWriter* writer;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x5efedcc, size 0x94, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* obj1, ::System::Object* obj2);

  static inline ::System::Xml::XmlCanonicalWriter_AttributeSorter* New_ctor(::System::Xml::XmlCanonicalWriter* writer);

  /// @brief Method Sort, addr 0x5efe884, size 0x1cc, virtual false, abstract: false, final false
  inline void Sort();

  constexpr ::System::Xml::XmlCanonicalWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlCanonicalWriter*& __cordl_internal_get_writer();

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlCanonicalWriter* value);

  /// @brief Method .ctor, addr 0x5efe87c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlCanonicalWriter* writer);

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCanonicalWriter_AttributeSorter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlCanonicalWriter_AttributeSorter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlCanonicalWriter_AttributeSorter(XmlCanonicalWriter_AttributeSorter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlCanonicalWriter_AttributeSorter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlCanonicalWriter_AttributeSorter(XmlCanonicalWriter_AttributeSorter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16927 };

  /// @brief Field writer, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlCanonicalWriter* ___writer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCanonicalWriter_AttributeSorter, ___writer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCanonicalWriter_AttributeSorter, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlCanonicalWriter/Scope
struct CORDL_TYPE XmlCanonicalWriter_Scope {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCanonicalWriter_Scope();

  // Ctor Parameters [CppParam { name: "xmlnsAttributeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "xmlnsOffset", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlCanonicalWriter_Scope(int32_t xmlnsAttributeCount, int32_t xmlnsOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16928 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field xmlnsAttributeCount, offset: 0x0, size: 0x4, def value: None
  int32_t xmlnsAttributeCount;

  /// @brief Field xmlnsOffset, offset: 0x4, size: 0x4, def value: None
  int32_t xmlnsOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Scope, xmlnsAttributeCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Scope, xmlnsOffset) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCanonicalWriter_Scope, 0x8>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlCanonicalWriter/Element
struct CORDL_TYPE XmlCanonicalWriter_Element {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCanonicalWriter_Element();

  // Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "localNameOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "localNameLength", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlCanonicalWriter_Element(int32_t prefixOffset, int32_t prefixLength, int32_t localNameOffset, int32_t localNameLength) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16929 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field prefixOffset, offset: 0x0, size: 0x4, def value: None
  int32_t prefixOffset;

  /// @brief Field prefixLength, offset: 0x4, size: 0x4, def value: None
  int32_t prefixLength;

  /// @brief Field localNameOffset, offset: 0x8, size: 0x4, def value: None
  int32_t localNameOffset;

  /// @brief Field localNameLength, offset: 0xc, size: 0x4, def value: None
  int32_t localNameLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Element, prefixOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Element, prefixLength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Element, localNameOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Element, localNameLength) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCanonicalWriter_Element, 0x10>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlCanonicalWriter/Attribute
struct CORDL_TYPE XmlCanonicalWriter_Attribute {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCanonicalWriter_Attribute();

  // Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "localNameOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "localNameLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nsOffset", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "nsLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlCanonicalWriter_Attribute(int32_t prefixOffset, int32_t prefixLength, int32_t localNameOffset, int32_t localNameLength, int32_t nsOffset, int32_t nsLength, int32_t offset,
                                         int32_t length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16930 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field prefixOffset, offset: 0x0, size: 0x4, def value: None
  int32_t prefixOffset;

  /// @brief Field prefixLength, offset: 0x4, size: 0x4, def value: None
  int32_t prefixLength;

  /// @brief Field localNameOffset, offset: 0x8, size: 0x4, def value: None
  int32_t localNameOffset;

  /// @brief Field localNameLength, offset: 0xc, size: 0x4, def value: None
  int32_t localNameLength;

  /// @brief Field nsOffset, offset: 0x10, size: 0x4, def value: None
  int32_t nsOffset;

  /// @brief Field nsLength, offset: 0x14, size: 0x4, def value: None
  int32_t nsLength;

  /// @brief Field offset, offset: 0x18, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field length, offset: 0x1c, size: 0x4, def value: None
  int32_t length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Attribute, prefixOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Attribute, prefixLength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Attribute, localNameOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Attribute, localNameLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Attribute, nsOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Attribute, nsLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Attribute, offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_Attribute, length) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCanonicalWriter_Attribute, 0x20>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlCanonicalWriter/XmlnsAttribute
struct CORDL_TYPE XmlCanonicalWriter_XmlnsAttribute {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCanonicalWriter_XmlnsAttribute();

  // Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "nsOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nsLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "referred", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr XmlCanonicalWriter_XmlnsAttribute(int32_t prefixOffset, int32_t prefixLength, int32_t nsOffset, int32_t nsLength, bool referred) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16931 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field prefixOffset, offset: 0x0, size: 0x4, def value: None
  int32_t prefixOffset;

  /// @brief Field prefixLength, offset: 0x4, size: 0x4, def value: None
  int32_t prefixLength;

  /// @brief Field nsOffset, offset: 0x8, size: 0x4, def value: None
  int32_t nsOffset;

  /// @brief Field nsLength, offset: 0xc, size: 0x4, def value: None
  int32_t nsLength;

  /// @brief Field referred, offset: 0x10, size: 0x1, def value: None
  bool referred;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCanonicalWriter_XmlnsAttribute, prefixOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_XmlnsAttribute, prefixLength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_XmlnsAttribute, nsOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_XmlnsAttribute, nsLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter_XmlnsAttribute, referred) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, 0x14>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.XmlCanonicalWriter::Attribute, System.Xml.XmlCanonicalWriter::Element
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlCanonicalWriter
class CORDL_TYPE XmlCanonicalWriter : public ::System::Object {
public:
  // Declarations
  using Attribute = ::System::Xml::XmlCanonicalWriter_Attribute;

  using AttributeSorter = ::System::Xml::XmlCanonicalWriter_AttributeSorter;

  using Element = ::System::Xml::XmlCanonicalWriter_Element;

  using Scope = ::System::Xml::XmlCanonicalWriter_Scope;

  using XmlnsAttribute = ::System::Xml::XmlCanonicalWriter_XmlnsAttribute;

  /// @brief Field attribute, offset 0x60, size 0x20
  __declspec(property(get = __cordl_internal_get_attribute, put = __cordl_internal_set_attribute)) ::System::Xml::XmlCanonicalWriter_Attribute attribute;

  /// @brief Field attributeCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeCount, put = __cordl_internal_set_attributeCount)) int32_t attributeCount;

  /// @brief Field attributes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes,
                      put = __cordl_internal_set_attributes)) ::ArrayW<::System::Xml::XmlCanonicalWriter_Attribute, ::Array<::System::Xml::XmlCanonicalWriter_Attribute>*>
      attributes;

  /// @brief Field depth, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field element, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_element, put = __cordl_internal_set_element)) ::System::Xml::XmlCanonicalWriter_Element element;

  /// @brief Field elementBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_elementBuffer, put = __cordl_internal_set_elementBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> elementBuffer;

  /// @brief Field elementStream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elementStream, put = __cordl_internal_set_elementStream)) ::System::IO::MemoryStream* elementStream;

  /// @brief Field elementWriter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_elementWriter, put = __cordl_internal_set_elementWriter)) ::System::Xml::XmlUTF8NodeWriter* elementWriter;

  /// @brief Field inStartElement, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_inStartElement, put = __cordl_internal_set_inStartElement)) bool inStartElement;

  /// @brief Field includeComments, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_includeComments, put = __cordl_internal_set_includeComments)) bool includeComments;

  /// @brief Field inclusivePrefixes, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_inclusivePrefixes, put = __cordl_internal_set_inclusivePrefixes)) ::ArrayW<::StringW, ::Array<::StringW>*> inclusivePrefixes;

  /// @brief Field isEscapedAttributeChar, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_isEscapedAttributeChar, put = setStaticF_isEscapedAttributeChar)) ::ArrayW<bool, ::Array<bool>*> isEscapedAttributeChar;

  /// @brief Field isEscapedElementChar, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_isEscapedElementChar, put = setStaticF_isEscapedElementChar)) ::ArrayW<bool, ::Array<bool>*> isEscapedElementChar;

  /// @brief Field scopes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_scopes, put = __cordl_internal_set_scopes)) ::ArrayW<::System::Xml::XmlCanonicalWriter_Scope, ::Array<::System::Xml::XmlCanonicalWriter_Scope>*>
      scopes;

  /// @brief Field writer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlUTF8NodeWriter* writer;

  /// @brief Field xmlnsAttributeCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_xmlnsAttributeCount, put = __cordl_internal_set_xmlnsAttributeCount)) int32_t xmlnsAttributeCount;

  /// @brief Field xmlnsAttributes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlnsAttributes,
                      put = __cordl_internal_set_xmlnsAttributes)) ::ArrayW<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, ::Array<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>*>
      xmlnsAttributes;

  /// @brief Field xmlnsBuffer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlnsBuffer, put = __cordl_internal_set_xmlnsBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> xmlnsBuffer;

  /// @brief Field xmlnsOffset, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_xmlnsOffset, put = __cordl_internal_set_xmlnsOffset)) int32_t xmlnsOffset;

  /// @brief Method AddAttribute, addr 0x5efdd74, size 0x108, virtual false, abstract: false, final false
  inline void AddAttribute(::ByRef<::System::Xml::XmlCanonicalWriter_Attribute> attribute);

  /// @brief Method AddXmlnsAttribute, addr 0x5efd02c, size 0x23c, virtual false, abstract: false, final false
  inline void AddXmlnsAttribute(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute);

  /// @brief Method Close, addr 0x5efcb30, size 0xac, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Compare, addr 0x5efe804, size 0x78, virtual false, abstract: false, final false
  inline int32_t Compare(::ByRef<::System::Xml::XmlCanonicalWriter_Attribute> attribute1, ::ByRef<::System::Xml::XmlCanonicalWriter_Attribute> attribute2);

  /// @brief Method Compare, addr 0x5efebc4, size 0x20, virtual false, abstract: false, final false
  inline int32_t Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset1, int32_t length1, int32_t offset2, int32_t length2);

  /// @brief Method Compare, addr 0x5efebe4, size 0x110, virtual false, abstract: false, final false
  inline int32_t Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer1, int32_t offset1, int32_t length1, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer2, int32_t offset2, int32_t length2);

  /// @brief Method Compare, addr 0x5efea50, size 0x2c, virtual false, abstract: false, final false
  inline int32_t Compare(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute1, ::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute2);

  /// @brief Method EndElement, addr 0x5efcd48, size 0x44, virtual false, abstract: false, final false
  inline void EndElement();

  /// @brief Method EnsureXmlnsBuffer, addr 0x5efd8ac, size 0x108, virtual false, abstract: false, final false
  inline void EnsureXmlnsBuffer(int32_t byteCount);

  /// @brief Method Equals, addr 0x5efd5a8, size 0xa4, virtual false, abstract: false, final false
  inline bool Equals(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer1, int32_t offset1, int32_t length1, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer2, int32_t offset2, int32_t length2);

  /// @brief Method Flush, addr 0x5efcaf8, size 0x24, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method IsInclusivePrefix, addr 0x5efcf5c, size 0xd0, virtual false, abstract: false, final false
  inline bool IsInclusivePrefix(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute);

  /// @brief Method ResolvePrefix, addr 0x5efeba8, size 0x1c, virtual false, abstract: false, final false
  inline void ResolvePrefix(::ByRef<::System::Xml::XmlCanonicalWriter_Attribute> attribute);

  /// @brief Method ResolvePrefix, addr 0x5efea7c, size 0x12c, virtual false, abstract: false, final false
  inline void ResolvePrefix(int32_t prefixOffset, int32_t prefixLength, ::ByRef<int32_t> nsOffset, ::ByRef<int32_t> nsLength);

  /// @brief Method ResolvePrefixes, addr 0x5efd514, size 0x94, virtual false, abstract: false, final false
  inline void ResolvePrefixes();

  /// @brief Method SortAttributes, addr 0x5efd68c, size 0x1a8, virtual false, abstract: false, final false
  inline void SortAttributes();

  /// @brief Method StartElement, addr 0x5efcc4c, size 0xfc, virtual false, abstract: false, final false
  inline void StartElement();

  /// @brief Method ThrowClosed, addr 0x5efe7a0, size 0x64, virtual false, abstract: false, final false
  inline void ThrowClosed();

  /// @brief Method ThrowIfClosed, addr 0x5efcb1c, size 0x14, virtual false, abstract: false, final false
  inline void ThrowIfClosed();

  /// @brief Method WriteCharEntity, addr 0x5efde7c, size 0xb4, virtual false, abstract: false, final false
  inline void WriteCharEntity(int32_t ch);

  /// @brief Method WriteComment, addr 0x5efcbe0, size 0x6c, virtual false, abstract: false, final false
  inline void WriteComment(::StringW value);

  /// @brief Method WriteDeclaration, addr 0x5efcbdc, size 0x4, virtual false, abstract: false, final false
  inline void WriteDeclaration();

  /// @brief Method WriteEndAttribute, addr 0x5efdcf4, size 0x80, virtual false, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x5efd834, size 0x78, virtual false, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName);

  /// @brief Method WriteEndStartElement, addr 0x5efd268, size 0x2ac, virtual false, abstract: false, final false
  inline void WriteEndStartElement(bool isEmpty);

  /// @brief Method WriteEscapedText, addr 0x5efdf30, size 0x54, virtual false, abstract: false, final false
  inline void WriteEscapedText(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteEscapedText, addr 0x5efe040, size 0x254, virtual false, abstract: false, final false
  inline void WriteEscapedText(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteEscapedText, addr 0x5efdfb8, size 0x88, virtual false, abstract: false, final false
  inline void WriteEscapedText(::StringW value);

  /// @brief Method WriteStartAttribute, addr 0x5efdbcc, size 0x128, virtual false, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName);

  /// @brief Method WriteStartElement, addr 0x5efcd8c, size 0x1d0, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName);

  /// @brief Method WriteText, addr 0x5efdf84, size 0x34, virtual false, abstract: false, final false
  inline void WriteText(int32_t ch);

  /// @brief Method WriteText, addr 0x5efe564, size 0x23c, virtual false, abstract: false, final false
  inline void WriteText(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteText, addr 0x5efe294, size 0x23c, virtual false, abstract: false, final false
  inline void WriteText(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteText, addr 0x5efe4d0, size 0x94, virtual false, abstract: false, final false
  inline void WriteText(::StringW value);

  /// @brief Method WriteXmlnsAttribute, addr 0x5efd9b4, size 0x218, virtual false, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::StringW ns);

  /// @brief Method WriteXmlnsAttribute, addr 0x5efd64c, size 0x40, virtual false, abstract: false, final false
  inline void WriteXmlnsAttribute(::ByRef<::System::Xml::XmlCanonicalWriter_XmlnsAttribute> xmlnsAttribute);

  constexpr ::System::Xml::XmlCanonicalWriter_Attribute const& __cordl_internal_get_attribute() const;

  constexpr ::System::Xml::XmlCanonicalWriter_Attribute& __cordl_internal_get_attribute();

  constexpr int32_t const& __cordl_internal_get_attributeCount() const;

  constexpr int32_t& __cordl_internal_get_attributeCount();

  constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_Attribute, ::Array<::System::Xml::XmlCanonicalWriter_Attribute>*> const& __cordl_internal_get_attributes() const;

  constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_Attribute, ::Array<::System::Xml::XmlCanonicalWriter_Attribute>*>& __cordl_internal_get_attributes();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::System::Xml::XmlCanonicalWriter_Element const& __cordl_internal_get_element() const;

  constexpr ::System::Xml::XmlCanonicalWriter_Element& __cordl_internal_get_element();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_elementBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_elementBuffer();

  constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_elementStream() const;

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_elementStream();

  constexpr ::System::Xml::XmlUTF8NodeWriter* const& __cordl_internal_get_elementWriter() const;

  constexpr ::System::Xml::XmlUTF8NodeWriter*& __cordl_internal_get_elementWriter();

  constexpr bool const& __cordl_internal_get_inStartElement() const;

  constexpr bool& __cordl_internal_get_inStartElement();

  constexpr bool const& __cordl_internal_get_includeComments() const;

  constexpr bool& __cordl_internal_get_includeComments();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_inclusivePrefixes() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_inclusivePrefixes();

  constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_Scope, ::Array<::System::Xml::XmlCanonicalWriter_Scope>*> const& __cordl_internal_get_scopes() const;

  constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_Scope, ::Array<::System::Xml::XmlCanonicalWriter_Scope>*>& __cordl_internal_get_scopes();

  constexpr ::System::Xml::XmlUTF8NodeWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlUTF8NodeWriter*& __cordl_internal_get_writer();

  constexpr int32_t const& __cordl_internal_get_xmlnsAttributeCount() const;

  constexpr int32_t& __cordl_internal_get_xmlnsAttributeCount();

  constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, ::Array<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>*> const& __cordl_internal_get_xmlnsAttributes() const;

  constexpr ::ArrayW<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, ::Array<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>*>& __cordl_internal_get_xmlnsAttributes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_xmlnsBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_xmlnsBuffer();

  constexpr int32_t const& __cordl_internal_get_xmlnsOffset() const;

  constexpr int32_t& __cordl_internal_get_xmlnsOffset();

  constexpr void __cordl_internal_set_attribute(::System::Xml::XmlCanonicalWriter_Attribute value);

  constexpr void __cordl_internal_set_attributeCount(int32_t value);

  constexpr void __cordl_internal_set_attributes(::ArrayW<::System::Xml::XmlCanonicalWriter_Attribute, ::Array<::System::Xml::XmlCanonicalWriter_Attribute>*> value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_element(::System::Xml::XmlCanonicalWriter_Element value);

  constexpr void __cordl_internal_set_elementBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_elementStream(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set_elementWriter(::System::Xml::XmlUTF8NodeWriter* value);

  constexpr void __cordl_internal_set_inStartElement(bool value);

  constexpr void __cordl_internal_set_includeComments(bool value);

  constexpr void __cordl_internal_set_inclusivePrefixes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_scopes(::ArrayW<::System::Xml::XmlCanonicalWriter_Scope, ::Array<::System::Xml::XmlCanonicalWriter_Scope>*> value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlUTF8NodeWriter* value);

  constexpr void __cordl_internal_set_xmlnsAttributeCount(int32_t value);

  constexpr void __cordl_internal_set_xmlnsAttributes(::ArrayW<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, ::Array<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>*> value);

  constexpr void __cordl_internal_set_xmlnsBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_xmlnsOffset(int32_t value);

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_isEscapedAttributeChar();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_isEscapedElementChar();

  static inline void setStaticF_isEscapedAttributeChar(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_isEscapedElementChar(::ArrayW<bool, ::Array<bool>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCanonicalWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlCanonicalWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlCanonicalWriter(XmlCanonicalWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlCanonicalWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlCanonicalWriter(XmlCanonicalWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16932 };

  /// @brief Field writer, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlUTF8NodeWriter* ___writer;

  /// @brief Field elementStream, offset: 0x18, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___elementStream;

  /// @brief Field elementBuffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___elementBuffer;

  /// @brief Field elementWriter, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlUTF8NodeWriter* ___elementWriter;

  /// @brief Field inStartElement, offset: 0x30, size: 0x1, def value: None
  bool ___inStartElement;

  /// @brief Field depth, offset: 0x34, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field scopes, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlCanonicalWriter_Scope, ::Array<::System::Xml::XmlCanonicalWriter_Scope>*> ___scopes;

  /// @brief Field xmlnsAttributeCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___xmlnsAttributeCount;

  /// @brief Field xmlnsAttributes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlCanonicalWriter_XmlnsAttribute, ::Array<::System::Xml::XmlCanonicalWriter_XmlnsAttribute>*> ___xmlnsAttributes;

  /// @brief Field attributeCount, offset: 0x50, size: 0x4, def value: None
  int32_t ___attributeCount;

  /// @brief Field attributes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlCanonicalWriter_Attribute, ::Array<::System::Xml::XmlCanonicalWriter_Attribute>*> ___attributes;

  /// @brief Field attribute, offset: 0x60, size: 0x20, def value: None
  ::System::Xml::XmlCanonicalWriter_Attribute ___attribute;

  /// @brief Field element, offset: 0x80, size: 0x10, def value: None
  ::System::Xml::XmlCanonicalWriter_Element ___element;

  /// @brief Field xmlnsBuffer, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___xmlnsBuffer;

  /// @brief Field xmlnsOffset, offset: 0x98, size: 0x4, def value: None
  int32_t ___xmlnsOffset;

  /// @brief Field includeComments, offset: 0x9c, size: 0x1, def value: None
  bool ___includeComments;

  /// @brief Field inclusivePrefixes, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___inclusivePrefixes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___elementStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___elementBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___elementWriter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___inStartElement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___depth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___scopes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___xmlnsAttributeCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___xmlnsAttributes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___attributeCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___attributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___attribute) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___element) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___xmlnsBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___xmlnsOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___includeComments) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlCanonicalWriter, ___inclusivePrefixes) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCanonicalWriter, 0xa8>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlCanonicalWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCanonicalWriter*, "System.Xml", "XmlCanonicalWriter");
NEED_NO_BOX(::System::Xml::XmlCanonicalWriter_AttributeSorter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCanonicalWriter_AttributeSorter*, "System.Xml", "XmlCanonicalWriter/AttributeSorter");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCanonicalWriter_Attribute, "System.Xml", "XmlCanonicalWriter/Attribute");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCanonicalWriter_Element, "System.Xml", "XmlCanonicalWriter/Element");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCanonicalWriter_Scope, "System.Xml", "XmlCanonicalWriter/Scope");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCanonicalWriter_XmlnsAttribute, "System.Xml", "XmlCanonicalWriter/XmlnsAttribute");
