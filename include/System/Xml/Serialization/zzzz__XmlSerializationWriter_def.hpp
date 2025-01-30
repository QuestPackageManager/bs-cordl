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
class XmlSerializationWriter_WriteCallbackInfo;
}
namespace System::Xml::Serialization {
class XmlSerializerNamespaces;
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
class XmlSerializationWriter_WriteCallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationWriter);
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo
class CORDL_TYPE XmlSerializationWriter_WriteCallbackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Callback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Callback, put = __cordl_internal_set_Callback)) ::System::Xml::Serialization::XmlSerializationWriteCallback* Callback;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::System::Type* Type;

  /// @brief Field TypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeName, put = __cordl_internal_set_TypeName)) ::StringW TypeName;

  /// @brief Field TypeNs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeNs, put = __cordl_internal_set_TypeNs)) ::StringW TypeNs;

  static inline ::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo* New_ctor();

  constexpr ::System::Xml::Serialization::XmlSerializationWriteCallback* const& __cordl_internal_get_Callback() const;

  constexpr ::System::Xml::Serialization::XmlSerializationWriteCallback*& __cordl_internal_get_Callback();

  constexpr ::System::Type* const& __cordl_internal_get_Type() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::StringW const& __cordl_internal_get_TypeName() const;

  constexpr ::StringW& __cordl_internal_get_TypeName();

  constexpr ::StringW const& __cordl_internal_get_TypeNs() const;

  constexpr ::StringW& __cordl_internal_get_TypeNs();

  constexpr void __cordl_internal_set_Callback(::System::Xml::Serialization::XmlSerializationWriteCallback* value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  constexpr void __cordl_internal_set_TypeName(::StringW value);

  constexpr void __cordl_internal_set_TypeNs(::StringW value);

  /// @brief Method .ctor, addr 0x4388d48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationWriter_WriteCallbackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriter_WriteCallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationWriter_WriteCallbackInfo(XmlSerializationWriter_WriteCallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriter_WriteCallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationWriter_WriteCallbackInfo(XmlSerializationWriter_WriteCallbackInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7444 };

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
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, ___TypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, ___TypeNs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, ___Callback) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, 0x30>, "Size mismatch!");

} // namespace System::Xml::Serialization
// Dependencies System.Xml.Serialization.XmlSerializationGeneratedCode
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationWriter
class CORDL_TYPE XmlSerializationWriter : public ::System::Xml::Serialization::XmlSerializationGeneratedCode {
public:
  // Declarations
  using WriteCallbackInfo = ::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo;

  __declspec(property(get = get_Writer)) ::System::Xml::XmlWriter* Writer;

  /// @brief Field callbacks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_callbacks, put = __cordl_internal_set_callbacks)) ::System::Collections::Hashtable* callbacks;

  /// @brief Field idGenerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_idGenerator, put = __cordl_internal_set_idGenerator)) ::System::Runtime::Serialization::ObjectIDGenerator* idGenerator;

  /// @brief Field namespaces, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces)) ::System::Collections::ArrayList* namespaces;

  /// @brief Field qnameCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_qnameCount, put = __cordl_internal_set_qnameCount)) int32_t qnameCount;

  /// @brief Field referencedElements, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_referencedElements, put = __cordl_internal_set_referencedElements)) ::System::Collections::Queue* referencedElements;

  /// @brief Field serializedObjects, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedObjects, put = __cordl_internal_set_serializedObjects)) ::System::Collections::Hashtable* serializedObjects;

  /// @brief Field topLevelElement, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_topLevelElement, put = __cordl_internal_set_topLevelElement)) bool topLevelElement;

  /// @brief Field writer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlWriter* writer;

  /// @brief Method AddWriteCallback, addr 0x4385c00, size 0xd4, virtual false, abstract: false, final false
  inline void AddWriteCallback(::System::Type* type, ::StringW typeName, ::StringW typeNs, ::System::Xml::Serialization::XmlSerializationWriteCallback* callback);

  /// @brief Method AlreadyQueued, addr 0x43860c8, size 0x34, virtual false, abstract: false, final false
  inline bool AlreadyQueued(::System::Object* ob);

  /// @brief Method CheckReferenceQueue, addr 0x43874cc, size 0x78, virtual false, abstract: false, final false
  inline void CheckReferenceQueue();

  /// @brief Method CreateUnknownAnyElementException, addr 0x4385cd4, size 0x98, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownAnyElementException(::StringW name, ::StringW ns);

  /// @brief Method CreateUnknownTypeException, addr 0x4385d6c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownTypeException(::System::Object* o);

  /// @brief Method CreateUnknownTypeException, addr 0x4385d90, size 0x90, virtual false, abstract: false, final false
  inline ::System::Exception* CreateUnknownTypeException(::System::Type* type);

  /// @brief Method FromXmlQualifiedName, addr 0x4385e20, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW FromXmlQualifiedName(::System::Xml::XmlQualifiedName* xmlQualifiedName);

  /// @brief Method GetId, addr 0x4385fac, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW GetId(::System::Object* o, bool addToReferencesList);

  /// @brief Method GetNamespacePrefix, addr 0x43860fc, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW GetNamespacePrefix(::StringW ns);

  /// @brief Method GetQualifiedName, addr 0x4385ee0, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW GetQualifiedName(::StringW name, ::StringW ns);

  /// @brief Method InitCallbacks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InitCallbacks();

  /// @brief Method Initialize, addr 0x4385ae0, size 0x118, virtual false, abstract: false, final false
  inline void Initialize(::System::Xml::XmlWriter* writer, ::System::Xml::Serialization::XmlSerializerNamespaces* nss);

  /// @brief Method IsPrimitiveArray, addr 0x4387544, size 0xf4, virtual false, abstract: false, final false
  inline bool IsPrimitiveArray(::System::Xml::Serialization::TypeData* td);

  static inline ::System::Xml::Serialization::XmlSerializationWriter* New_ctor();

  /// @brief Method TopLevelElement, addr 0x4386240, size 0xc, virtual false, abstract: false, final false
  inline void TopLevelElement();

  /// @brief Method WriteArray, addr 0x4387854, size 0x2fc, virtual false, abstract: false, final false
  inline void WriteArray(::System::Object* o, ::System::Xml::Serialization::TypeData* td);

  /// @brief Method WriteAttribute, addr 0x438624c, size 0x14, virtual false, abstract: false, final false
  inline void WriteAttribute(::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteAttribute, addr 0x4386218, size 0x28, virtual false, abstract: false, final false
  inline void WriteAttribute(::StringW prefix, ::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteElementEncoded, addr 0x4386300, size 0x128, virtual false, abstract: false, final false
  inline void WriteElementEncoded(::System::Xml::XmlNode* node, ::StringW name, ::StringW ns, bool isNullable, bool any);

  /// @brief Method WriteElementLiteral, addr 0x43864e8, size 0x128, virtual false, abstract: false, final false
  inline void WriteElementLiteral(::System::Xml::XmlNode* node, ::StringW name, ::StringW ns, bool isNullable, bool any);

  /// @brief Method WriteElementQualifiedName, addr 0x43866d4, size 0x8, virtual false, abstract: false, final false
  inline void WriteElementQualifiedName(::StringW localName, ::StringW ns, ::System::Xml::XmlQualifiedName* value);

  /// @brief Method WriteElementQualifiedName, addr 0x43866dc, size 0x11c, virtual false, abstract: false, final false
  inline void WriteElementQualifiedName(::StringW localName, ::StringW ns, ::System::Xml::XmlQualifiedName* value, ::System::Xml::XmlQualifiedName* xsiType);

  /// @brief Method WriteElementString, addr 0x43868e8, size 0x8, virtual false, abstract: false, final false
  inline void WriteElementString(::StringW localName, ::StringW ns, ::StringW value);

  /// @brief Method WriteElementString, addr 0x43868f0, size 0x150, virtual false, abstract: false, final false
  inline void WriteElementString(::StringW localName, ::StringW ns, ::StringW value, ::System::Xml::XmlQualifiedName* xsiType);

  /// @brief Method WriteEndElement, addr 0x43868c8, size 0x20, virtual false, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEndElement, addr 0x4386a40, size 0x40, virtual false, abstract: false, final false
  inline void WriteEndElement(::System::Object* o);

  /// @brief Method WriteNamespaceDeclarations, addr 0x4386a80, size 0x42c, virtual false, abstract: false, final false
  inline void WriteNamespaceDeclarations(::System::Xml::Serialization::XmlSerializerNamespaces* xmlns);

  /// @brief Method WriteNullTagEncoded, addr 0x4386428, size 0xc0, virtual false, abstract: false, final false
  inline void WriteNullTagEncoded(::StringW name, ::StringW ns);

  /// @brief Method WriteNullTagLiteral, addr 0x4386610, size 0xc4, virtual false, abstract: false, final false
  inline void WriteNullTagLiteral(::StringW name, ::StringW ns);

  /// @brief Method WriteNullableQualifiedNameEncoded, addr 0x4386eac, size 0xb8, virtual false, abstract: false, final false
  inline void WriteNullableQualifiedNameEncoded(::StringW name, ::StringW ns, ::System::Xml::XmlQualifiedName* value, ::System::Xml::XmlQualifiedName* xsiType);

  /// @brief Method WriteNullableQualifiedNameLiteral, addr 0x4386f64, size 0xb4, virtual false, abstract: false, final false
  inline void WriteNullableQualifiedNameLiteral(::StringW name, ::StringW ns, ::System::Xml::XmlQualifiedName* value);

  /// @brief Method WriteNullableStringEncoded, addr 0x4387018, size 0xc, virtual false, abstract: false, final false
  inline void WriteNullableStringEncoded(::StringW name, ::StringW ns, ::StringW value, ::System::Xml::XmlQualifiedName* xsiType);

  /// @brief Method WriteNullableStringLiteral, addr 0x4387024, size 0x10, virtual false, abstract: false, final false
  inline void WriteNullableStringLiteral(::StringW name, ::StringW ns, ::StringW value);

  /// @brief Method WritePotentiallyReferencingElement, addr 0x4387034, size 0x488, virtual false, abstract: false, final false
  inline void WritePotentiallyReferencingElement(::StringW n, ::StringW ns, ::System::Object* o, ::System::Type* ambientType, bool suppressReference, bool isNullable);

  /// @brief Method WriteReferencedElements, addr 0x4387638, size 0x21c, virtual false, abstract: false, final false
  inline void WriteReferencedElements();

  /// @brief Method WriteReferencingElement, addr 0x4387b50, size 0x15c, virtual false, abstract: false, final false
  inline void WriteReferencingElement(::StringW n, ::StringW ns, ::System::Object* o, bool isNullable);

  /// @brief Method WriteSerializable, addr 0x4387cac, size 0xc, virtual false, abstract: false, final false
  inline void WriteSerializable(::System::Xml::Serialization::IXmlSerializable* serializable, ::StringW name, ::StringW ns, bool isNullable);

  /// @brief Method WriteSerializable, addr 0x4387cb8, size 0x1b4, virtual false, abstract: false, final false
  inline void WriteSerializable(::System::Xml::Serialization::IXmlSerializable* serializable, ::StringW name, ::StringW ns, bool isNullable, bool wrapped);

  /// @brief Method WriteStartDocument, addr 0x4387e6c, size 0x48, virtual false, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartElement, addr 0x43867f8, size 0x10, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x4387ec0, size 0xc, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o);

  /// @brief Method WriteStartElement, addr 0x4387eb4, size 0xc, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o, bool writePrefixed);

  /// @brief Method WriteStartElement, addr 0x4387ecc, size 0x900, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns, ::System::Object* o, bool writePrefixed, ::System::Collections::ICollection* namespaces);

  /// @brief Method WriteStartElement, addr 0x43874bc, size 0x10, virtual false, abstract: false, final false
  inline void WriteStartElement(::StringW name, ::StringW ns, bool writePrefixed);

  /// @brief Method WriteTypedPrimitive, addr 0x43887cc, size 0x2cc, virtual false, abstract: false, final false
  inline void WriteTypedPrimitive(::StringW name, ::StringW ns, ::System::Object* o, bool xsiType);

  /// @brief Method WriteValue, addr 0x4388a98, size 0x30, virtual false, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteXmlAttribute, addr 0x4388ac8, size 0x280, virtual false, abstract: false, final false
  inline void WriteXmlAttribute(::System::Xml::XmlNode* node, ::System::Object* container);

  /// @brief Method WriteXmlNode, addr 0x4386260, size 0xa0, virtual false, abstract: false, final false
  inline void WriteXmlNode(::System::Xml::XmlNode* node);

  /// @brief Method WriteXsiType, addr 0x4386808, size 0xc0, virtual false, abstract: false, final false
  inline void WriteXsiType(::StringW name, ::StringW ns);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_callbacks() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_callbacks();

  constexpr ::System::Runtime::Serialization::ObjectIDGenerator* const& __cordl_internal_get_idGenerator() const;

  constexpr ::System::Runtime::Serialization::ObjectIDGenerator*& __cordl_internal_get_idGenerator();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_namespaces() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_namespaces();

  constexpr int32_t const& __cordl_internal_get_qnameCount() const;

  constexpr int32_t& __cordl_internal_get_qnameCount();

  constexpr ::System::Collections::Queue* const& __cordl_internal_get_referencedElements() const;

  constexpr ::System::Collections::Queue*& __cordl_internal_get_referencedElements();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_serializedObjects() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_serializedObjects();

  constexpr bool const& __cordl_internal_get_topLevelElement() const;

  constexpr bool& __cordl_internal_get_topLevelElement();

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_writer();

  constexpr void __cordl_internal_set_callbacks(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_idGenerator(::System::Runtime::Serialization::ObjectIDGenerator* value);

  constexpr void __cordl_internal_set_namespaces(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_qnameCount(int32_t value);

  constexpr void __cordl_internal_set_referencedElements(::System::Collections::Queue* value);

  constexpr void __cordl_internal_set_serializedObjects(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_topLevelElement(bool value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x4385a78, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Writer, addr 0x4385bf8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7445 };

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
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___idGenerator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___qnameCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___topLevelElement) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___namespaces) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___writer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___referencedElements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___callbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___serializedObjects) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationWriter, 0x48>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationWriter*, "System.Xml.Serialization", "XmlSerializationWriter");
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo*, "System.Xml.Serialization", "XmlSerializationWriter/WriteCallbackInfo");
