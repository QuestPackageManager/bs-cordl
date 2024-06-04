#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __XmlSerializer__SerializerData;
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
class __XmlSerializer__SerializerData;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializer);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializer__SerializerData);
// Type: ::SerializerData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializer::SerializerData*
class CORDL_TYPE __XmlSerializer__SerializerData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Implementation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Implementation, put = __cordl_internal_set_Implementation))::System::Xml::Serialization::XmlSerializerImplementation* Implementation;

  /// @brief Field ReaderMethod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ReaderMethod, put = __cordl_internal_set_ReaderMethod))::System::Reflection::MethodInfo* ReaderMethod;

  /// @brief Field WriterMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_WriterMethod, put = __cordl_internal_set_WriterMethod))::System::Reflection::MethodInfo* WriterMethod;

  /// @brief Field WriterType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_WriterType, put = __cordl_internal_set_WriterType))::System::Type* WriterType;

  /// @brief Method CreateWriter, addr 0x2f0d80c, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter();

  constexpr ::System::Xml::Serialization::XmlSerializerImplementation*& __cordl_internal_get_Implementation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializerImplementation*> const& __cordl_internal_get_Implementation() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_ReaderMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get_ReaderMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_WriterMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get_WriterMethod() const;

  constexpr ::System::Type*& __cordl_internal_get_WriterType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_WriterType() const;

  constexpr void __cordl_internal_set_Implementation(::System::Xml::Serialization::XmlSerializerImplementation* value);

  constexpr void __cordl_internal_set_ReaderMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_WriterMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_WriterType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializer__SerializerData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializer__SerializerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializer__SerializerData(__XmlSerializer__SerializerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializer__SerializerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializer__SerializerData(__XmlSerializer__SerializerData const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializer__SerializerData, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializer__SerializerData, ___ReaderMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializer__SerializerData, ___WriterType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializer__SerializerData, ___WriterMethod) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializer__SerializerData, ___Implementation) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: System.Xml.Serialization::XmlSerializer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializer*
class CORDL_TYPE XmlSerializer : public ::System::Object {
public:
  // Declarations
  using SerializerData = ::System::Xml::Serialization::__XmlSerializer__SerializerData;

  __declspec(property(get = get_Mapping))::System::Xml::Serialization::XmlMapping* Mapping;

  /// @brief Field backgroundGeneration, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_backgroundGeneration, put = setStaticF_backgroundGeneration)) bool backgroundGeneration;

  /// @brief Field customSerializer, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_customSerializer, put = __cordl_internal_set_customSerializer)) bool customSerializer;

  /// @brief Field deleteTempFiles, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_deleteTempFiles, put = setStaticF_deleteTempFiles)) bool deleteTempFiles;

  /// @brief Field generationThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_generationThreshold, put = setStaticF_generationThreshold)) int32_t generationThreshold;

  /// @brief Field generatorFallback, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_generatorFallback, put = setStaticF_generatorFallback)) bool generatorFallback;

  /// @brief Field onUnknownAttribute, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onUnknownAttribute, put = __cordl_internal_set_onUnknownAttribute))::System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute;

  /// @brief Field onUnknownElement, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_onUnknownElement, put = __cordl_internal_set_onUnknownElement))::System::Xml::Serialization::XmlElementEventHandler* onUnknownElement;

  /// @brief Field onUnknownNode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onUnknownNode, put = __cordl_internal_set_onUnknownNode))::System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode;

  /// @brief Field onUnreferencedObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onUnreferencedObject,
                      put = __cordl_internal_set_onUnreferencedObject))::System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject;

  /// @brief Field serializerData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_serializerData, put = __cordl_internal_set_serializerData))::System::Xml::Serialization::__XmlSerializer__SerializerData* serializerData;

  /// @brief Field serializerTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serializerTypes, put = setStaticF_serializerTypes))::System::Collections::Hashtable* serializerTypes;

  /// @brief Field typeMapping, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeMapping, put = __cordl_internal_set_typeMapping))::System::Xml::Serialization::XmlMapping* typeMapping;

  /// @brief Method CreateReader, addr 0x2f0cb94, size 0x40, virtual true, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationReader* CreateReader();

  /// @brief Method CreateReader, addr 0x2f0cd18, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationReader* CreateReader(::System::Xml::Serialization::XmlMapping* typeMapping);

  /// @brief Method CreateWriter, addr 0x2f0cbd4, size 0x40, virtual true, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter();

  /// @brief Method CreateWriter, addr 0x2f0d600, size 0x20c, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter(::System::Xml::Serialization::XmlMapping* typeMapping);

  /// @brief Method Deserialize, addr 0x2f0cd7c, size 0x2e4, virtual true, abstract: false, final false
  inline ::System::Object* Deserialize(::System::Xml::Serialization::XmlSerializationReader* reader);

  /// @brief Method Deserialize, addr 0x2f0cc14, size 0x94, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::System::IO::TextReader* textReader);

  /// @brief Method Deserialize, addr 0x2f0cca8, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::System::Xml::XmlReader* xmlReader);

  static inline ::System::Xml::Serialization::XmlSerializer* New_ctor(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides,
                                                                      ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                      ::StringW defaultNamespace);

  /// @brief Method OnUnknownAttribute, addr 0x2f0caf4, size 0x28, virtual true, abstract: false, final false
  inline void OnUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventArgs* e);

  /// @brief Method OnUnknownElement, addr 0x2f0cb1c, size 0x28, virtual true, abstract: false, final false
  inline void OnUnknownElement(::System::Xml::Serialization::XmlElementEventArgs* e);

  /// @brief Method OnUnknownNode, addr 0x2f0cb44, size 0x28, virtual true, abstract: false, final false
  inline void OnUnknownNode(::System::Xml::Serialization::XmlNodeEventArgs* e);

  /// @brief Method OnUnreferencedObject, addr 0x2f0cb6c, size 0x28, virtual true, abstract: false, final false
  inline void OnUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventArgs* e);

  /// @brief Method Serialize, addr 0x2f0d060, size 0x1f4, virtual true, abstract: false, final false
  inline void Serialize(::System::Object* o, ::System::Xml::Serialization::XmlSerializationWriter* writer);

  /// @brief Method Serialize, addr 0x2f0d254, size 0x90, virtual false, abstract: false, final false
  inline void Serialize(::System::IO::TextWriter* textWriter, ::System::Object* o);

  /// @brief Method Serialize, addr 0x2f0d5f8, size 0x8, virtual false, abstract: false, final false
  inline void Serialize(::System::Xml::XmlWriter* xmlWriter, ::System::Object* o);

  /// @brief Method Serialize, addr 0x2f0d2e4, size 0x314, virtual false, abstract: false, final false
  inline void Serialize(::System::Xml::XmlWriter* xmlWriter, ::System::Object* o, ::System::Xml::Serialization::XmlSerializerNamespaces* namespaces);

  constexpr bool const& __cordl_internal_get_customSerializer() const;

  constexpr bool& __cordl_internal_get_customSerializer();

  constexpr ::System::Xml::Serialization::XmlAttributeEventHandler*& __cordl_internal_get_onUnknownAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlAttributeEventHandler*> const& __cordl_internal_get_onUnknownAttribute() const;

  constexpr ::System::Xml::Serialization::XmlElementEventHandler*& __cordl_internal_get_onUnknownElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlElementEventHandler*> const& __cordl_internal_get_onUnknownElement() const;

  constexpr ::System::Xml::Serialization::XmlNodeEventHandler*& __cordl_internal_get_onUnknownNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlNodeEventHandler*> const& __cordl_internal_get_onUnknownNode() const;

  constexpr ::System::Xml::Serialization::UnreferencedObjectEventHandler*& __cordl_internal_get_onUnreferencedObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::UnreferencedObjectEventHandler*> const& __cordl_internal_get_onUnreferencedObject() const;

  constexpr ::System::Xml::Serialization::__XmlSerializer__SerializerData*& __cordl_internal_get_serializerData();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::__XmlSerializer__SerializerData*> const& __cordl_internal_get_serializerData() const;

  constexpr ::System::Xml::Serialization::XmlMapping*& __cordl_internal_get_typeMapping();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlMapping*> const& __cordl_internal_get_typeMapping() const;

  constexpr void __cordl_internal_set_customSerializer(bool value);

  constexpr void __cordl_internal_set_onUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventHandler* value);

  constexpr void __cordl_internal_set_onUnknownElement(::System::Xml::Serialization::XmlElementEventHandler* value);

  constexpr void __cordl_internal_set_onUnknownNode(::System::Xml::Serialization::XmlNodeEventHandler* value);

  constexpr void __cordl_internal_set_onUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventHandler* value);

  constexpr void __cordl_internal_set_serializerData(::System::Xml::Serialization::__XmlSerializer__SerializerData* value);

  constexpr void __cordl_internal_set_typeMapping(::System::Xml::Serialization::XmlMapping* value);

  /// @brief Method .ctor, addr 0x2f0c968, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> extraTypes,
                    ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace);

  static inline bool getStaticF_backgroundGeneration();

  static inline bool getStaticF_deleteTempFiles();

  static inline int32_t getStaticF_generationThreshold();

  static inline bool getStaticF_generatorFallback();

  static inline ::System::Collections::Hashtable* getStaticF_serializerTypes();

  /// @brief Method get_Mapping, addr 0x2f0caec, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field customSerializer, offset: 0x10, size: 0x1, def value: None
  bool ___customSerializer;

  /// @brief Field typeMapping, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlMapping* ___typeMapping;

  /// @brief Field serializerData, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Serialization::__XmlSerializer__SerializerData* ___serializerData;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializer, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___customSerializer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___typeMapping) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___serializerData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___onUnreferencedObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___onUnknownAttribute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___onUnknownElement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializer, ___onUnknownNode) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializer*, "System.Xml.Serialization", "XmlSerializer");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializer__SerializerData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializer__SerializerData*, "System.Xml.Serialization", "XmlSerializer/SerializerData");
