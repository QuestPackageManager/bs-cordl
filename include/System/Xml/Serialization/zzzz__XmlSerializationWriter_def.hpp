#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlSerializationGeneratedCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializationWriter)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class Queue;
}
namespace System::Runtime::Serialization {
class ObjectIDGenerator;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml::Serialization {
class XmlSerializationWriteCallback;
}
namespace System::Xml::Serialization {
class XmlSerializerNamespaces;
}
namespace System::Xml::Serialization {
class __XmlSerializationWriter__WriteCallbackInfo;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlQualifiedName;
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
namespace System::Xml::Serialization {
class XmlSerializationWriter;
}
namespace System::Xml::Serialization {
class __XmlSerializationWriter__WriteCallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationWriter);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo);
// Type: ::WriteCallbackInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializationWriter::WriteCallbackInfo*
class CORDL_TYPE __XmlSerializationWriter__WriteCallbackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Callback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Callback, put = __cordl_internal_set_Callback))::System::Xml::Serialization::XmlSerializationWriteCallback* Callback;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::System::Type* Type;

  /// @brief Field TypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeName, put = __cordl_internal_set_TypeName))::StringW TypeName;

  /// @brief Field TypeNs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeNs, put = __cordl_internal_set_TypeNs))::StringW TypeNs;

  static inline ::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo* New_ctor();

  constexpr ::System::Xml::Serialization::XmlSerializationWriteCallback*& __cordl_internal_get_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationWriteCallback*> const& __cordl_internal_get_Callback() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_Type() const;

  constexpr ::StringW const& __cordl_internal_get_TypeName() const;

  constexpr ::StringW& __cordl_internal_get_TypeName();

  constexpr ::StringW const& __cordl_internal_get_TypeNs() const;

  constexpr ::StringW& __cordl_internal_get_TypeNs();

  constexpr void __cordl_internal_set_Callback(::System::Xml::Serialization::XmlSerializationWriteCallback* value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  constexpr void __cordl_internal_set_TypeName(::StringW value);

  constexpr void __cordl_internal_set_TypeNs(::StringW value);

  /// @brief Method .ctor, addr 0x2f13870, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializationWriter__WriteCallbackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationWriter__WriteCallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializationWriter__WriteCallbackInfo(__XmlSerializationWriter__WriteCallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationWriter__WriteCallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializationWriter__WriteCallbackInfo(__XmlSerializationWriter__WriteCallbackInfo const&) = delete;

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___Type;

  /// @brief Field TypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___TypeName;

  /// @brief Field TypeNs, offset: 0x20, size: 0x8, def value: None
  ::StringW ___TypeNs;

  /// @brief Field Callback, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializationWriteCallback* ___Callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo, ___TypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo, ___TypeNs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo, ___Callback) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: System.Xml.Serialization::XmlSerializationWriter
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializationWriter*
class CORDL_TYPE XmlSerializationWriter : public ::System::Xml::Serialization::XmlSerializationGeneratedCode {
public:
  // Declarations
  using WriteCallbackInfo = ::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo;

  __declspec(property(get = get_Writer))::System::Xml::XmlWriter* Writer;

  /// @brief Field callbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_callbacks, put = __cordl_internal_set_callbacks))::System::Collections::Hashtable* callbacks;

  /// @brief Field idGenerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_idGenerator, put = __cordl_internal_set_idGenerator))::System::Runtime::Serialization::ObjectIDGenerator* idGenerator;

  /// @brief Field namespaces, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces))::System::Collections::ArrayList* namespaces;

  /// @brief Field qnameCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_qnameCount, put = __cordl_internal_set_qnameCount)) int32_t qnameCount;

  /// @brief Field referencedElements, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_referencedElements, put = __cordl_internal_set_referencedElements))::System::Collections::Queue* referencedElements;

  /// @brief Field serializedObjects, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedObjects, put = __cordl_internal_set_serializedObjects))::System::Collections::Hashtable* serializedObjects;

  /// @brief Field topLevelElement, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_topLevelElement, put = __cordl_internal_set_topLevelElement)) bool topLevelElement;

  /// @brief Field writer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer))::System::Xml::XmlWriter* writer;

  /// @brief Method AddWriteCallback, addr 0x2f10780, size 0xd4, virtual false, abstract: false, final false
  inline void AddWriteCallback(::System::Type* type, ::StringW typeName, ::StringW typeNs, ::System::Xml::Serialization::XmlSerializationWriteCallback* callback);

  /// @brief Method AlreadyQueued, addr 0x2f10c58, size 0x34, virtual false, abstract: false, final false
  inline bool AlreadyQueued(::System::Object* ob);

  /// @brief Method CheckReferenceQueue, addr 0x2f12070, size 0x80, virtual false, abstract: false, final false
  inline void CheckReferenceQueue();

  /// @brief Method CreateUnknownAnyElementException, addr 0x2f10854, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownAnyElementException(::StringW name, ::StringW ns);

  /// @brief Method CreateUnknownTypeException, addr 0x2f108f4, size 0x24, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownTypeException(::System::Object* o);

  /// @brief Method CreateUnknownTypeException, addr 0x2f10918, size 0x98, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownTypeException(::System::Type* type);

  /// @brief Method FromXmlQualifiedName, addr 0x2f109b0, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW FromXmlQualifiedName(::System::Xml::XmlQualifiedName* xmlQualifiedName);

  /// @brief Method GetId, addr 0x2f10b3c, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW GetId(::System::Object* o, bool addToReferencesList);

  /// @brief Method GetNamespacePrefix, addr 0x2f10c8c, size 0x124, virtual false, abstract: false, final false
  inline ::StringW GetNamespacePrefix(::StringW ns);

  /// @brief Method GetQualifiedName, addr 0x2f10a70, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW GetQualifiedName(::StringW name, ::StringW ns);

  /// @brief Method InitCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InitCallbacks();

  /// @brief Method Initialize, addr 0x2f1065c, size 0x11c, virtual false, abstract: false, final false
  inline void Initialize(::System::Xml::XmlWriter* writer, ::System::Xml::Serialization::XmlSerializerNamespaces* nss);

  /// @brief Method IsPrimitiveArray, addr 0x2f120f0, size 0xf4, virtual false, abstract: false, final false
  inline bool IsPrimitiveArray(::System::Xml::Serialization::TypeData* td);

  static inline ::System::Xml::Serialization::XmlSerializationWriter* New_ctor();

  /// @brief Method TopLevelElement, addr 0x2f10dd8, size 0xc, virtual false, abstract: false, final false
  inline void TopLevelElement();

  /// @brief Method WriteArray, addr 0x2f12400, size 0x304, virtual false, abstract: false, final false
  inline void WriteArray(::System::Object* o, ::System::Xml::Serialization::TypeData* td);

  /// @brief Method WriteAttribute, addr 0x2f10de4, size 0x14, virtual false, abstract: false, final false
  inline void WriteAttribute(::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteAttribute, addr 0x2f10db0, size 0x28, virtual false, abstract: false, final false
  inline void WriteAttribute(::StringW prefix, ::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteElementEncoded, addr 0x2f10e98, size 0x128, virtual false, abstract: false, final false
  inline void WriteElementEncoded(::System::Xml::XmlNode* node, ::StringW name, ::StringW ns, bool isNullable, bool any);

  /// @brief Method WriteElementLiteral, addr 0x2f11080, size 0x128, virtual false, abstract: false, final false
  inline void WriteElementLiteral(::System::Xml::XmlNode* node, ::StringW name, ::StringW ns, bool isNullable, bool any);

  /// @brief Method WriteElementQualifiedName, addr 0x2f1126c, size 0x8, virtual false, abstract: false, final false
  inline void WriteElementQualifiedName(::StringW localName, ::StringW ns, ::System::Xml::XmlQualifiedName* value);

  /// @brief Method WriteElementQualifiedName, addr 0x2f11274, size 0x11c, virtual false, abstract: false, final false
  inline void WriteElementQualifiedName(::StringW localName, ::StringW ns, ::System::Xml::XmlQualifiedName* value, ::System::Xml::XmlQualifiedName* xsiType);

  /// @brief Method WriteElementString, addr 0x2f11480, size 0x8, virtual false, abstract: false, final false
  inline void WriteElementString(::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteElementString, addr 0x2f11488, size 0x150, virtual false, abstract: false, final false
  inline void WriteElementString(::StringW localName, ::StringW ns, ::StringW value, ::System::Xml::XmlQualifiedName* xsiType);

  /// @brief Method WriteEndElement, addr 0x2f11460, size 0x20, virtual false, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEndElement, addr 0x2f115d8, size 0x40, virtual false, abstract: false, final false
  inline void WriteEndElement(::System::Object* o);

  /// @brief Method WriteNamespaceDeclarations, addr 0x2f11618, size 0x42c, virtual false, abstract: false, final false
  inline void WriteNamespaceDeclarations(::System::Xml::Serialization::XmlSerializerNamespaces* xmlns);

  /// @brief Method WriteNullTagEncoded, addr 0x2f10fc0, size 0xc0, virtual false, abstract: false, final false
  inline void WriteNullTagEncoded(::StringW name, ::StringW ns);

  /// @brief Method WriteNullTagLiteral, addr 0x2f111a8, size 0xc4, virtual false, abstract: false, final false
  inline void WriteNullTagLiteral(::StringW name, ::StringW ns);

  /// @brief Method WriteNullableQualifiedNameEncoded, addr 0x2f11a44, size 0xb8, virtual false, abstract: false, final false
  inline void WriteNullableQualifiedNameEncoded(::StringW name, ::StringW ns, ::System::Xml::XmlQualifiedName* value, ::System::Xml::XmlQualifiedName* xsiType);

  /// @brief Method WriteNullableQualifiedNameLiteral, addr 0x2f11afc, size 0xb4, virtual false, abstract: false, final false
  inline void WriteNullableQualifiedNameLiteral(::StringW name, ::StringW ns, ::System::Xml::XmlQualifiedName* value);

  /// @brief Method WriteNullableStringEncoded, addr 0x2f11bb0, size 0xc, virtual false, abstract: false, final false
  inline void WriteNullableStringEncoded(::StringW name, ::StringW ns, ::StringW value, ::System::Xml::XmlQualifiedName* xsiType);

  /// @brief Method WriteNullableStringLiteral, addr 0x2f11bbc, size 0x10, virtual false, abstract: false, final false
  inline void WriteNullableStringLiteral(::StringW name, ::StringW ns, ::StringW value);

  /// @brief Method WritePotentiallyReferencingElement, addr 0x2f11bcc, size 0x494, virtual false, abstract: false, final false
  inline void WritePotentiallyReferencingElement(::StringW n, ::StringW ns, ::System::Object* o, ::System::Type* ambientType, bool suppressReference, bool isNullable);

  /// @brief Method WriteReferencedElements, addr 0x2f121e4, size 0x21c, virtual false, abstract: false, final false
  inline void WriteReferencedElements();

  /// @brief Method WriteReferencingElement, addr 0x2f12704, size 0x15c, virtual false, abstract: false, final false
  inline void WriteReferencingElement(::StringW n, ::StringW ns, ::System::Object* o, bool isNullable);

  /// @brief Method WriteSerializable, addr 0x2f12860, size 0xc, virtual false, abstract: false, final false
  inline void WriteSerializable(::System::Xml::Serialization::IXmlSerializable* serializable, ::StringW name, ::StringW ns, bool isNullable);

  /// @brief Method WriteSerializable, addr 0x2f1286c, size 0x13c, virtual false, abstract: false, final false
  inline void WriteSerializable(::System::Xml::Serialization::IXmlSerializable* serializable, ::StringW name, ::StringW ns, bool isNullable, bool wrapped);

  /// @brief Method WriteStartDocument, addr 0x2f129a8, size 0x48, virtual false, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartElement, addr 0x2f11390, size 0x10, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x2f129fc, size 0xc, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o);

  /// @brief Method WriteStartElement, addr 0x2f129f0, size 0xc, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o, bool writePrefixed);

  /// @brief Method WriteStartElement, addr 0x2f12a08, size 0x8e8, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o, bool writePrefixed, ::System::Collections::ICollection* namespaces);

  /// @brief Method WriteStartElement, addr 0x2f12060, size 0x10, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns, bool writePrefixed);

  /// @brief Method WriteTypedPrimitive, addr 0x2f132f0, size 0x2cc, virtual false, abstract: false, final false
  inline void WriteTypedPrimitive(::StringW name, ::StringW ns, ::System::Object* o, bool xsiType);

  /// @brief Method WriteValue, addr 0x2f135bc, size 0x30, virtual false, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteXmlAttribute, addr 0x2f135ec, size 0x284, virtual false, abstract: false, final false
  inline void WriteXmlAttribute(::System::Xml::XmlNode* node, ::System::Object* container);

  /// @brief Method WriteXmlNode, addr 0x2f10df8, size 0xa0, virtual false, abstract: false, final false
  inline void WriteXmlNode(::System::Xml::XmlNode* node);

  /// @brief Method WriteXsiType, addr 0x2f113a0, size 0xc0, virtual false, abstract: false, final false
  inline void WriteXsiType(::StringW name, ::StringW ns);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_callbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_callbacks() const;

  constexpr ::System::Runtime::Serialization::ObjectIDGenerator*& __cordl_internal_get_idGenerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectIDGenerator*> const& __cordl_internal_get_idGenerator() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_namespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_namespaces() const;

  constexpr int32_t const& __cordl_internal_get_qnameCount() const;

  constexpr int32_t& __cordl_internal_get_qnameCount();

  constexpr ::System::Collections::Queue*& __cordl_internal_get_referencedElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> const& __cordl_internal_get_referencedElements() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_serializedObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_serializedObjects() const;

  constexpr bool const& __cordl_internal_get_topLevelElement() const;

  constexpr bool& __cordl_internal_get_topLevelElement();

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_writer();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriter*> const& __cordl_internal_get_writer() const;

  constexpr void __cordl_internal_set_callbacks(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_idGenerator(::System::Runtime::Serialization::ObjectIDGenerator* value);

  constexpr void __cordl_internal_set_namespaces(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_qnameCount(int32_t value);

  constexpr void __cordl_internal_set_referencedElements(::System::Collections::Queue* value);

  constexpr void __cordl_internal_set_serializedObjects(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_topLevelElement(bool value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x2f105ec, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Writer, addr 0x2f10778, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlWriter* get_Writer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationWriter(XmlSerializationWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationWriter(XmlSerializationWriter const&) = delete;

  /// @brief Field idGenerator, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::ObjectIDGenerator* ___idGenerator;

  /// @brief Field qnameCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___qnameCount;

  /// @brief Field topLevelElement, offset: 0x1c, size: 0x1, def value: None
  bool ___topLevelElement;

  /// @brief Field namespaces, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___namespaces;

  /// @brief Field writer, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ___writer;

  /// @brief Field referencedElements, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Queue* ___referencedElements;

  /// @brief Field callbacks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___callbacks;

  /// @brief Field serializedObjects, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___serializedObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationWriter, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___idGenerator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___qnameCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___topLevelElement) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___namespaces) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___writer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___referencedElements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___callbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___serializedObjects) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationWriter*, "System.Xml.Serialization", "XmlSerializationWriter");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializationWriter__WriteCallbackInfo*, "System.Xml.Serialization", "XmlSerializationWriter/WriteCallbackInfo");
