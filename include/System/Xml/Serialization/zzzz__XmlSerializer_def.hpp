#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializer)
namespace System::Collections {
class Hashtable;
}
namespace System::IO {
class TextReader;
}
namespace System::IO {
class TextWriter;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Xml::Serialization {
class UnreferencedObjectEventArgs;
}
namespace System::Xml::Serialization {
class UnreferencedObjectEventHandler;
}
namespace System::Xml::Serialization {
class XmlAttributeEventArgs;
}
namespace System::Xml::Serialization {
class XmlAttributeEventHandler;
}
namespace System::Xml::Serialization {
class XmlAttributeOverrides;
}
namespace System::Xml::Serialization {
class XmlElementEventArgs;
}
namespace System::Xml::Serialization {
class XmlElementEventHandler;
}
namespace System::Xml::Serialization {
class XmlMapping;
}
namespace System::Xml::Serialization {
class XmlNodeEventArgs;
}
namespace System::Xml::Serialization {
class XmlNodeEventHandler;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml::Serialization {
class XmlSerializationReader;
}
namespace System::Xml::Serialization {
class XmlSerializationWriter;
}
namespace System::Xml::Serialization {
class XmlSerializerImplementation;
}
namespace System::Xml::Serialization {
class XmlSerializerNamespaces;
}
namespace System::Xml::Serialization {
class XmlSerializer_SerializerData;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializer;
}
namespace System::Xml::Serialization {
class XmlSerializer_SerializerData;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializer);
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializer_SerializerData);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializer/SerializerData
class CORDL_TYPE XmlSerializer_SerializerData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Implementation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Implementation, put = __cordl_internal_set_Implementation)) ::System::Xml::Serialization::XmlSerializerImplementation* Implementation;

  /// @brief Field ReaderMethod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ReaderMethod, put = __cordl_internal_set_ReaderMethod)) ::System::Reflection::MethodInfo* ReaderMethod;

  /// @brief Field WriterMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_WriterMethod, put = __cordl_internal_set_WriterMethod)) ::System::Reflection::MethodInfo* WriterMethod;

  /// @brief Field WriterType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_WriterType, put = __cordl_internal_set_WriterType)) ::System::Type* WriterType;

  /// @brief Method CreateWriter, addr 0x438edfc, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter();

  constexpr ::System::Xml::Serialization::XmlSerializerImplementation* const& __cordl_internal_get_Implementation() const;

  constexpr ::System::Xml::Serialization::XmlSerializerImplementation*& __cordl_internal_get_Implementation();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_ReaderMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_ReaderMethod();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_WriterMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_WriterMethod();

  constexpr ::System::Type* const& __cordl_internal_get_WriterType() const;

  constexpr ::System::Type*& __cordl_internal_get_WriterType();

  constexpr void __cordl_internal_set_Implementation(::System::Xml::Serialization::XmlSerializerImplementation* value);

  constexpr void __cordl_internal_set_ReaderMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_WriterMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_WriterType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializer_SerializerData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializer_SerializerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializer_SerializerData(XmlSerializer_SerializerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializer_SerializerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializer_SerializerData(XmlSerializer_SerializerData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7450 };

  /// @brief Field ReaderMethod, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___ReaderMethod;

  /// @brief Field WriterType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___WriterType;

  /// @brief Field WriterMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___WriterMethod;

  /// @brief Field Implementation, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializerImplementation* ___Implementation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializer_SerializerData, ___ReaderMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer_SerializerData, ___WriterType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer_SerializerData, ___WriterMethod) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer_SerializerData, ___Implementation) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializer_SerializerData, 0x30>, "Size mismatch!");

} // namespace System::Xml::Serialization
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializer
class CORDL_TYPE XmlSerializer : public ::System::Object {
public:
  // Declarations
  using SerializerData = ::System::Xml::Serialization::XmlSerializer_SerializerData;

  __declspec(property(get = get_Mapping)) ::System::Xml::Serialization::XmlMapping* Mapping;

  /// @brief Field backgroundGeneration, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_backgroundGeneration, put = setStaticF_backgroundGeneration)) bool backgroundGeneration;

  /// @brief Field customSerializer, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_customSerializer, put = __cordl_internal_set_customSerializer)) bool customSerializer;

  /// @brief Field deleteTempFiles, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_deleteTempFiles, put = setStaticF_deleteTempFiles)) bool deleteTempFiles;

  /// @brief Field generationThreshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_generationThreshold, put = setStaticF_generationThreshold)) int32_t generationThreshold;

  /// @brief Field generatorFallback, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_generatorFallback, put = setStaticF_generatorFallback)) bool generatorFallback;

  /// @brief Field onUnknownAttribute, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onUnknownAttribute, put = __cordl_internal_set_onUnknownAttribute)) ::System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute;

  /// @brief Field onUnknownElement, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onUnknownElement, put = __cordl_internal_set_onUnknownElement)) ::System::Xml::Serialization::XmlElementEventHandler* onUnknownElement;

  /// @brief Field onUnknownNode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onUnknownNode, put = __cordl_internal_set_onUnknownNode)) ::System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode;

  /// @brief Field onUnreferencedObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onUnreferencedObject,
                      put = __cordl_internal_set_onUnreferencedObject)) ::System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject;

  /// @brief Field serializerData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_serializerData, put = __cordl_internal_set_serializerData)) ::System::Xml::Serialization::XmlSerializer_SerializerData* serializerData;

  /// @brief Field serializerTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_serializerTypes, put = setStaticF_serializerTypes)) ::System::Collections::Hashtable* serializerTypes;

  /// @brief Field typeMapping, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeMapping, put = __cordl_internal_set_typeMapping)) ::System::Xml::Serialization::XmlMapping* typeMapping;

  /// @brief Method CreateReader, addr 0x438e1b4, size 0x38, virtual true, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationReader* CreateReader();

  /// @brief Method CreateReader, addr 0x438e328, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationReader* CreateReader(::System::Xml::Serialization::XmlMapping* typeMapping);

  /// @brief Method CreateWriter, addr 0x438e1ec, size 0x38, virtual true, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter();

  /// @brief Method CreateWriter, addr 0x438ebf8, size 0x204, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter(::System::Xml::Serialization::XmlMapping* typeMapping);

  /// @brief Method Deserialize, addr 0x438e384, size 0x2e4, virtual true, abstract: false, final false
  inline ::System::Object* Deserialize(::System::Xml::Serialization::XmlSerializationReader* reader);

  /// @brief Method Deserialize, addr 0x438e224, size 0x94, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::System::IO::TextReader* textReader);

  /// @brief Method Deserialize, addr 0x438e2b8, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::System::Xml::XmlReader* xmlReader);

  static inline ::System::Xml::Serialization::XmlSerializer* New_ctor(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides,
                                                                      ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                      ::StringW defaultNamespace);

  /// @brief Method OnUnknownAttribute, addr 0x438e114, size 0x28, virtual true, abstract: false, final false
  inline void OnUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventArgs* e);

  /// @brief Method OnUnknownElement, addr 0x438e13c, size 0x28, virtual true, abstract: false, final false
  inline void OnUnknownElement(::System::Xml::Serialization::XmlElementEventArgs* e);

  /// @brief Method OnUnknownNode, addr 0x438e164, size 0x28, virtual true, abstract: false, final false
  inline void OnUnknownNode(::System::Xml::Serialization::XmlNodeEventArgs* e);

  /// @brief Method OnUnreferencedObject, addr 0x438e18c, size 0x28, virtual true, abstract: false, final false
  inline void OnUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventArgs* e);

  /// @brief Method Serialize, addr 0x438e668, size 0x1ec, virtual true, abstract: false, final false
  inline void Serialize(::System::Object* o, ::System::Xml::Serialization::XmlSerializationWriter* writer);

  /// @brief Method Serialize, addr 0x438e854, size 0x90, virtual false, abstract: false, final false
  inline void Serialize(::System::IO::TextWriter* textWriter, ::System::Object* o);

  /// @brief Method Serialize, addr 0x438ebf0, size 0x8, virtual false, abstract: false, final false
  inline void Serialize(::System::Xml::XmlWriter* xmlWriter, ::System::Object* o);

  /// @brief Method Serialize, addr 0x438e8e4, size 0x30c, virtual false, abstract: false, final false
  inline void Serialize(::System::Xml::XmlWriter* xmlWriter, ::System::Object* o, ::System::Xml::Serialization::XmlSerializerNamespaces* namespaces);

  constexpr bool const& __cordl_internal_get_customSerializer() const;

  constexpr bool& __cordl_internal_get_customSerializer();

  constexpr ::System::Xml::Serialization::XmlAttributeEventHandler* const& __cordl_internal_get_onUnknownAttribute() const;

  constexpr ::System::Xml::Serialization::XmlAttributeEventHandler*& __cordl_internal_get_onUnknownAttribute();

  constexpr ::System::Xml::Serialization::XmlElementEventHandler* const& __cordl_internal_get_onUnknownElement() const;

  constexpr ::System::Xml::Serialization::XmlElementEventHandler*& __cordl_internal_get_onUnknownElement();

  constexpr ::System::Xml::Serialization::XmlNodeEventHandler* const& __cordl_internal_get_onUnknownNode() const;

  constexpr ::System::Xml::Serialization::XmlNodeEventHandler*& __cordl_internal_get_onUnknownNode();

  constexpr ::System::Xml::Serialization::UnreferencedObjectEventHandler* const& __cordl_internal_get_onUnreferencedObject() const;

  constexpr ::System::Xml::Serialization::UnreferencedObjectEventHandler*& __cordl_internal_get_onUnreferencedObject();

  constexpr ::System::Xml::Serialization::XmlSerializer_SerializerData* const& __cordl_internal_get_serializerData() const;

  constexpr ::System::Xml::Serialization::XmlSerializer_SerializerData*& __cordl_internal_get_serializerData();

  constexpr ::System::Xml::Serialization::XmlMapping* const& __cordl_internal_get_typeMapping() const;

  constexpr ::System::Xml::Serialization::XmlMapping*& __cordl_internal_get_typeMapping();

  constexpr void __cordl_internal_set_customSerializer(bool value);

  constexpr void __cordl_internal_set_onUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventHandler* value);

  constexpr void __cordl_internal_set_onUnknownElement(::System::Xml::Serialization::XmlElementEventHandler* value);

  constexpr void __cordl_internal_set_onUnknownNode(::System::Xml::Serialization::XmlNodeEventHandler* value);

  constexpr void __cordl_internal_set_onUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventHandler* value);

  constexpr void __cordl_internal_set_serializerData(::System::Xml::Serialization::XmlSerializer_SerializerData* value);

  constexpr void __cordl_internal_set_typeMapping(::System::Xml::Serialization::XmlMapping* value);

  /// @brief Method .ctor, addr 0x438df84, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes,
                    ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace);

  static inline bool getStaticF_backgroundGeneration();

  static inline bool getStaticF_deleteTempFiles();

  static inline int32_t getStaticF_generationThreshold();

  static inline bool getStaticF_generatorFallback();

  static inline ::System::Collections::Hashtable* getStaticF_serializerTypes();

  /// @brief Method get_Mapping, addr 0x438e10c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlMapping* get_Mapping();

  static inline void setStaticF_backgroundGeneration(bool value);

  static inline void setStaticF_deleteTempFiles(bool value);

  static inline void setStaticF_generationThreshold(int32_t value);

  static inline void setStaticF_generatorFallback(bool value);

  static inline void setStaticF_serializerTypes(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializer(XmlSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializer(XmlSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7451 };

  /// @brief Field customSerializer, offset: 0x10, size: 0x1, def value: None
  bool ___customSerializer;

  /// @brief Field typeMapping, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlMapping* ___typeMapping;

  /// @brief Field serializerData, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializer_SerializerData* ___serializerData;

  /// @brief Field onUnreferencedObject, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::UnreferencedObjectEventHandler* ___onUnreferencedObject;

  /// @brief Field onUnknownAttribute, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlAttributeEventHandler* ___onUnknownAttribute;

  /// @brief Field onUnknownElement, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlElementEventHandler* ___onUnknownElement;

  /// @brief Field onUnknownNode, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlNodeEventHandler* ___onUnknownNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___customSerializer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___typeMapping) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___serializerData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___onUnreferencedObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___onUnknownAttribute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___onUnknownElement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___onUnknownNode) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializer, 0x48>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializer*, "System.Xml.Serialization", "XmlSerializer");
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializer_SerializerData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializer_SerializerData*, "System.Xml.Serialization", "XmlSerializer/SerializerData");
