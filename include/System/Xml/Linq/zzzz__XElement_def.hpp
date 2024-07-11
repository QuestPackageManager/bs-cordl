#pragma once
// IWYU pragma private; include "System/Xml/Linq/XElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XElement)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml::Linq {
struct LoadOptions;
}
namespace System::Xml::Linq {
class XAttribute;
}
namespace System::Xml::Linq {
class XName;
}
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml::Linq {
class XStreamingElement;
}
namespace System::Xml::Linq {
class __XElement___GetAttributes_d__116;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
class __XElement___GetAttributes_d__116;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XElement);
MARK_REF_PTR_T(::System::Xml::Linq::__XElement___GetAttributes_d__116);
// Type: ::<GetAttributes>d__116
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// CS Name: ::XElement::<GetAttributes>d__116*
class CORDL_TYPE __XElement___GetAttributes_d__116 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__get_Current))::System::Xml::Linq::XAttribute* System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Xml::Linq::XAttribute* __2__current;

  /// @brief Field <>3__name, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___3__name, put = __cordl_internal_set___3__name))::System::Xml::Linq::XName* __3__name;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Xml::Linq::XElement* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <a>5__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__a_5__2, put = __cordl_internal_set__a_5__2))::System::Xml::Linq::XAttribute* _a_5__2;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::System::Xml::Linq::XName* name;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2dd13cc, size 0xa8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Xml::Linq::__XElement___GetAttributes_d__116* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator, addr 0x2dd14c4, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>* System_Collections_Generic_IEnumerable_System_Xml_Linq_XAttribute__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.get_Current, addr 0x2dd1474, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Linq::XAttribute* System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2dd1570, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2dd147c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2dd14bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2dd13c8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Xml::Linq::XAttribute*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XAttribute*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Xml::Linq::XName*& __cordl_internal_get___3__name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XName*> const& __cordl_internal_get___3__name() const;

  constexpr ::System::Xml::Linq::XElement*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XElement*> const& __cordl_internal_get___4__this() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Xml::Linq::XAttribute*& __cordl_internal_get__a_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XAttribute*> const& __cordl_internal_get__a_5__2() const;

  constexpr ::System::Xml::Linq::XName*& __cordl_internal_get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XName*> const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Xml::Linq::XAttribute* value);

  constexpr void __cordl_internal_set___3__name(::System::Xml::Linq::XName* value);

  constexpr void __cordl_internal_set___4__this(::System::Xml::Linq::XElement* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__a_5__2(::System::Xml::Linq::XAttribute* value);

  constexpr void __cordl_internal_set_name(::System::Xml::Linq::XName* value);

  /// @brief Method .ctor, addr 0x2dd0ae4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>* i___System__Collections__Generic__IEnumerable_1___System__Xml__Linq__XAttribute__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>* i___System__Collections__Generic__IEnumerator_1___System__Xml__Linq__XAttribute__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XElement___GetAttributes_d__116();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XElement___GetAttributes_d__116", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XElement___GetAttributes_d__116(__XElement___GetAttributes_d__116&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XElement___GetAttributes_d__116", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XElement___GetAttributes_d__116(__XElement___GetAttributes_d__116 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Linq::XAttribute* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Linq::XElement* _____4__this;

  /// @brief Field name, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Linq::XName* ___name;

  /// @brief Field <>3__name, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Linq::XName* _____3__name;

  /// @brief Field <a>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Linq::XAttribute* ____a_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::__XElement___GetAttributes_d__116, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XElement___GetAttributes_d__116, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XElement___GetAttributes_d__116, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XElement___GetAttributes_d__116, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XElement___GetAttributes_d__116, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XElement___GetAttributes_d__116, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XElement___GetAttributes_d__116, _____3__name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XElement___GetAttributes_d__116, ____a_5__2) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Linq
// Type: System.Xml.Linq::XElement
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// CS Name: ::System.Xml.Linq::XElement*
class CORDL_TYPE XElement : public ::System::Xml::Linq::XContainer {
public:
  // Declarations
  using _GetAttributes_d__116 = ::System::Xml::Linq::__XElement___GetAttributes_d__116;

  __declspec(property(get = get_HasAttributes)) bool HasAttributes;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Name))::System::Xml::Linq::XName* Name;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field lastAttr, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lastAttr, put = __cordl_internal_set_lastAttr))::System::Xml::Linq::XAttribute* lastAttr;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::System::Xml::Linq::XName* name;

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*() noexcept;

  /// @brief Method AddAttribute, addr 0x2dd0750, size 0xf0, virtual true, abstract: false, final false
  inline void AddAttribute(::System::Xml::Linq::XAttribute* a);

  /// @brief Method AddAttributeSkipNotify, addr 0x2dd0978, size 0x10c, virtual true, abstract: false, final false
  inline void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a);

  /// @brief Method AppendAttribute, addr 0x2dd0840, size 0x138, virtual false, abstract: false, final false
  inline void AppendAttribute(::System::Xml::Linq::XAttribute* a);

  /// @brief Method AppendAttributeSkipNotify, addr 0x2dcee50, size 0x38, virtual false, abstract: false, final false
  inline void AppendAttributeSkipNotify(::System::Xml::Linq::XAttribute* a);

  /// @brief Method Attribute, addr 0x2dd011c, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XAttribute* Attribute(::System::Xml::Linq::XName* name);

  /// @brief Method Attributes, addr 0x2dd0158, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>* Attributes();

  /// @brief Method CloneNode, addr 0x2dd0a84, size 0x60, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  /// @brief Method GetAttributes, addr 0x2dd0160, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>* GetAttributes(::System::Xml::Linq::XName* name);

  /// @brief Method GetNamespaceOfPrefixInScope, addr 0x2dd01f4, size 0xf4, virtual false, abstract: false, final false
  inline ::StringW GetNamespaceOfPrefixInScope(::StringW prefix, ::System::Xml::Linq::XElement* outOfScope);

  /// @brief Method GetPrefixOfNamespace, addr 0x2dcb3ec, size 0x224, virtual false, abstract: false, final false
  inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns);

  static inline ::System::Xml::Linq::XElement* New_ctor(::System::Xml::Linq::XName* name);

  static inline ::System::Xml::Linq::XElement* New_ctor(::System::Xml::Linq::XElement* other);

  static inline ::System::Xml::Linq::XElement* New_ctor(::System::Xml::Linq::XStreamingElement* other);

  /// @brief Method ReadElementFrom, addr 0x2dd06cc, size 0x78, virtual false, abstract: false, final false
  inline void ReadElementFrom(::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o);

  /// @brief Method ReadElementFromImpl, addr 0x2dd0b18, size 0x4f4, virtual false, abstract: false, final false
  inline void ReadElementFromImpl(::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o);

  /// @brief Method SetEndElementLineInfo, addr 0x2dcf088, size 0x78, virtual false, abstract: false, final false
  inline void SetEndElementLineInfo(int32_t lineNumber, int32_t linePosition);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x2dd0520, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x2dd0528, size 0x1a4, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x2dd0744, size 0xc, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ValidateNode, addr 0x2dd128c, size 0x13c, virtual true, abstract: false, final false
  inline void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous);

  /// @brief Method WriteTo, addr 0x2dd02e8, size 0x84, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  constexpr ::System::Xml::Linq::XAttribute*& __cordl_internal_get_lastAttr();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XAttribute*> const& __cordl_internal_get_lastAttr() const;

  constexpr ::System::Xml::Linq::XName*& __cordl_internal_get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XName*> const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_lastAttr(::System::Xml::Linq::XAttribute* value);

  constexpr void __cordl_internal_set_name(::System::Xml::Linq::XName* value);

  /// @brief Method .ctor, addr 0x2dcedd8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XName* name);

  /// @brief Method .ctor, addr 0x2dcff20, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XElement* other);

  /// @brief Method .ctor, addr 0x2dccb00, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XStreamingElement* other);

  /// @brief Method get_HasAttributes, addr 0x2dcffe0, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasAttributes();

  /// @brief Method get_IsEmpty, addr 0x2dcfff0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Name, addr 0x2dd0000, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XName* get_Name();

  /// @brief Method get_NodeType, addr 0x2dd0008, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value, addr 0x2dd0010, size 0x94, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() noexcept;

  /// @brief Method set_Value, addr 0x2dd00a4, size 0x78, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XElement(XElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XElement(XElement const&) = delete;

  /// @brief Field name, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Linq::XName* ___name;

  /// @brief Field lastAttr, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Linq::XAttribute* ___lastAttr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XElement, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XElement, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XElement, ___lastAttr) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XElement*, "System.Xml.Linq", "XElement");
NEED_NO_BOX(::System::Xml::Linq::__XElement___GetAttributes_d__116);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::__XElement___GetAttributes_d__116*, "System.Xml.Linq", "XElement/<GetAttributes>d__116");
