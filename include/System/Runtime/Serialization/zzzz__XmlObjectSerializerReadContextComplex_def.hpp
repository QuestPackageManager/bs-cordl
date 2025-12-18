#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlObjectSerializerReadContextComplex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlObjectSerializerReadContextComplex)
namespace System::Collections {
class Hashtable;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::Serialization {
class DataContractResolver;
}
namespace System::Runtime::Serialization {
class DataContractSerializer;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class IDataContractSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization {
struct SerializationMode;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContextComplex;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializerReadContextComplex/TopLevelAssemblyTypeResolver
class CORDL_TYPE XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver : public ::System::Object {
public:
  // Declarations
  /// @brief Field topLevelAssembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_topLevelAssembly, put = __cordl_internal_set_topLevelAssembly)) ::System::Reflection::Assembly* topLevelAssembly;

  static inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver* New_ctor(::System::Reflection::Assembly* topLevelAssembly);

  /// @brief Method ResolveType, addr 0x5fb8e44, size 0x68, virtual false, abstract: false, final false
  inline ::System::Type* ResolveType(::System::Reflection::Assembly* assembly, ::StringW simpleTypeName, bool ignoreCase);

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get_topLevelAssembly() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_topLevelAssembly();

  constexpr void __cordl_internal_set_topLevelAssembly(::System::Reflection::Assembly* value);

  /// @brief Method .ctor, addr 0x5fb8908, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::Assembly* topLevelAssembly);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver(XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver(XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17107 };

  /// @brief Field topLevelAssembly, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___topLevelAssembly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver, ___topLevelAssembly) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializerReadContextComplex/XmlObjectDataContractTypeInfo
class CORDL_TYPE XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Assembly)) ::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field assembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_assembly, put = __cordl_internal_set_assembly)) ::System::Reflection::Assembly* assembly;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo* New_ctor(::System::Reflection::Assembly* assembly, ::System::Type* type);

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get_assembly() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_assembly();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_assembly(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x5fb8994, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::Assembly* assembly, ::System::Type* type);

  /// @brief Method get_Assembly, addr 0x5fb8eac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_Type, addr 0x5fb8eb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo(XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo(XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17108 };

  /// @brief Field assembly, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___assembly;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo, ___assembly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo, ___type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializerReadContextComplex/XmlObjectDataContractTypeKey
class CORDL_TYPE XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemblyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyName, put = __cordl_internal_set_assemblyName)) ::StringW assemblyName;

  /// @brief Field typeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName)) ::StringW typeName;

  /// @brief Method Equals, addr 0x5fb8ebc, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5fb8f78, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey* New_ctor(::StringW assemblyName, ::StringW typeName);

  constexpr ::StringW const& __cordl_internal_get_assemblyName() const;

  constexpr ::StringW& __cordl_internal_get_assemblyName();

  constexpr ::StringW const& __cordl_internal_get_typeName() const;

  constexpr ::StringW& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set_assemblyName(::StringW value);

  constexpr void __cordl_internal_set_typeName(::StringW value);

  /// @brief Method .ctor, addr 0x5fb87d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW assemblyName, ::StringW typeName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey(XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey(XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17109 };

  /// @brief Field assemblyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___assemblyName;

  /// @brief Field typeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey, ___assemblyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey, ___typeName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.Formatters.FormatterAssemblyStyle, System.Runtime.Serialization.SerializationMode, System.Runtime.Serialization.XmlObjectSerializerReadContext
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlObjectSerializerReadContextComplex
class CORDL_TYPE XmlObjectSerializerReadContextComplex : public ::System::Runtime::Serialization::XmlObjectSerializerReadContext {
public:
  // Declarations
  using TopLevelAssemblyTypeResolver = ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver;

  using XmlObjectDataContractTypeInfo = ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo;

  using XmlObjectDataContractTypeKey = ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey;

  __declspec(property(get = get_Mode)) ::System::Runtime::Serialization::SerializationMode Mode;

  /// @brief Field assemblyFormat, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_assemblyFormat, put = __cordl_internal_set_assemblyFormat)) ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle assemblyFormat;

  /// @brief Field binder, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_binder, put = __cordl_internal_set_binder)) ::System::Runtime::Serialization::SerializationBinder* binder;

  /// @brief Field dataContractSurrogate, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_dataContractSurrogate,
                      put = __cordl_internal_set_dataContractSurrogate)) ::System::Runtime::Serialization::IDataContractSurrogate* dataContractSurrogate;

  /// @brief Field dataContractTypeCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_dataContractTypeCache, put = setStaticF_dataContractTypeCache)) ::System::Collections::Hashtable* dataContractTypeCache;

  /// @brief Field mode, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::System::Runtime::Serialization::SerializationMode mode;

  /// @brief Field preserveObjectReferences, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get_preserveObjectReferences, put = __cordl_internal_set_preserveObjectReferences)) bool preserveObjectReferences;

  /// @brief Field surrogateDataContracts, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_surrogateDataContracts, put = __cordl_internal_set_surrogateDataContracts)) ::System::Collections::Hashtable* surrogateDataContracts;

  /// @brief Field surrogateSelector, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_surrogateSelector, put = __cordl_internal_set_surrogateSelector)) ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector;

  /// @brief Method CheckIfTypeSerializable, addr 0x5fb8acc, size 0x140, virtual true, abstract: false, final false
  inline void CheckIfTypeSerializable(::System::Type* memberType, bool isMemberTypeSerializable);

  /// @brief Method CheckIfTypeSerializableForSharedTypeMode, addr 0x5fb89f8, size 0xd4, virtual false, abstract: false, final false
  inline bool CheckIfTypeSerializableForSharedTypeMode(::System::Type* memberType);

  /// @brief Method CheckTypeForwardedTo, addr 0x5fb8910, size 0x84, virtual false, abstract: false, final false
  static inline void CheckTypeForwardedTo(::System::Reflection::Assembly* sourceAssembly, ::System::Reflection::Assembly* destinationAssembly, ::System::Type* resolvedType);

  /// @brief Method GetArraySize, addr 0x5fb8d2c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetArraySize();

  /// @brief Method GetDataContract, addr 0x5fb7518, size 0x1ac, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetDataContract, addr 0x5fb76c4, size 0x1ac, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetSurrogatedType, addr 0x5fb8c0c, size 0x120, virtual true, abstract: false, final false
  inline ::System::Type* GetSurrogatedType(::System::Type* type);

  /// @brief Method InternalDeserialize, addr 0x5fb813c, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* declaredType,
                                               ::System::Runtime::Serialization::DataContract* dataContract, ::StringW name, ::StringW ns);

  /// @brief Method InternalDeserialize, addr 0x5fb8070, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Object* InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* declaredType, ::StringW name, ::StringW ns);

  /// @brief Method InternalDeserialize, addr 0x5fb7870, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Object* InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t declaredTypeID, ::System::RuntimeTypeHandle declaredTypeHandle, ::StringW name,
                                               ::StringW ns);

  /// @brief Method InternalDeserializeInSharedTypeMode, addr 0x5fb7bf0, size 0x480, virtual false, abstract: false, final false
  inline ::System::Object* InternalDeserializeInSharedTypeMode(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t declaredTypeID, ::System::Type* declaredType, ::StringW name,
                                                               ::StringW ns);

  /// @brief Method InternalDeserializeWithSurrogate, addr 0x5fb796c, size 0x284, virtual false, abstract: false, final false
  inline ::System::Object* InternalDeserializeWithSurrogate(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* declaredType,
                                                            ::System::Runtime::Serialization::DataContract* surrogateDataContract, ::StringW name, ::StringW ns);

  static inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex* New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                                  ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                                  ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  /// @brief Method ResolveDataContractFromTypeName, addr 0x5fb899c, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* ResolveDataContractFromTypeName();

  /// @brief Method ResolveDataContractInSharedTypeMode, addr 0x5fb816c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* ResolveDataContractInSharedTypeMode(::StringW assemblyName, ::StringW typeName, ::ByRef<::System::Reflection::Assembly*> assembly,
                                                                                             ::ByRef<::System::Type*> type);

  /// @brief Method ResolveDataContractTypeInSharedTypeMode, addr 0x5fb81c8, size 0x610, virtual false, abstract: false, final false
  inline ::System::Type* ResolveDataContractTypeInSharedTypeMode(::StringW assemblyName, ::StringW typeName, ::ByRef<::System::Reflection::Assembly*> assembly);

  /// @brief Method ResolveSimpleAssemblyName, addr 0x5fb87e0, size 0x128, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* ResolveSimpleAssemblyName(::StringW assemblyName);

  /// @brief Method ResolveSimpleAssemblyName, addr 0x5fb8d54, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* assemblyName);

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const& __cordl_internal_get_assemblyFormat() const;

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& __cordl_internal_get_assemblyFormat();

  constexpr ::System::Runtime::Serialization::SerializationBinder* const& __cordl_internal_get_binder() const;

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __cordl_internal_get_binder();

  constexpr ::System::Runtime::Serialization::IDataContractSurrogate* const& __cordl_internal_get_dataContractSurrogate() const;

  constexpr ::System::Runtime::Serialization::IDataContractSurrogate*& __cordl_internal_get_dataContractSurrogate();

  constexpr ::System::Runtime::Serialization::SerializationMode const& __cordl_internal_get_mode() const;

  constexpr ::System::Runtime::Serialization::SerializationMode& __cordl_internal_get_mode();

  constexpr bool const& __cordl_internal_get_preserveObjectReferences() const;

  constexpr bool& __cordl_internal_get_preserveObjectReferences();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_surrogateDataContracts() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_surrogateDataContracts();

  constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& __cordl_internal_get_surrogateSelector() const;

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __cordl_internal_get_surrogateSelector();

  constexpr void __cordl_internal_set_assemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  constexpr void __cordl_internal_set_binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr void __cordl_internal_set_dataContractSurrogate(::System::Runtime::Serialization::IDataContractSurrogate* value);

  constexpr void __cordl_internal_set_mode(::System::Runtime::Serialization::SerializationMode value);

  constexpr void __cordl_internal_set_preserveObjectReferences(bool value);

  constexpr void __cordl_internal_set_surrogateDataContracts(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_surrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value);

  /// @brief Method .ctor, addr 0x5fb2b80, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::DataContractSerializer* serializer, ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                    ::System::Runtime::Serialization::DataContractResolver* dataContractResolver);

  static inline ::System::Collections::Hashtable* getStaticF_dataContractTypeCache();

  /// @brief Method get_Mode, addr 0x5fb7510, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationMode get_Mode();

  static inline void setStaticF_dataContractTypeCache(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlObjectSerializerReadContextComplex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContextComplex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlObjectSerializerReadContextComplex(XmlObjectSerializerReadContextComplex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlObjectSerializerReadContextComplex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlObjectSerializerReadContextComplex(XmlObjectSerializerReadContextComplex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17110 };

  /// @brief Field preserveObjectReferences, offset: 0xb1, size: 0x1, def value: None
  bool ___preserveObjectReferences;

  /// @brief Field dataContractSurrogate, offset: 0xb8, size: 0x8, def value: None
  ::System::Runtime::Serialization::IDataContractSurrogate* ___dataContractSurrogate;

  /// @brief Field mode, offset: 0xc0, size: 0x4, def value: None
  ::System::Runtime::Serialization::SerializationMode ___mode;

  /// @brief Field binder, offset: 0xc8, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ___binder;

  /// @brief Field surrogateSelector, offset: 0xd0, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ___surrogateSelector;

  /// @brief Field assemblyFormat, offset: 0xd8, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle ___assemblyFormat;

  /// @brief Field surrogateDataContracts, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___surrogateDataContracts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex, ___preserveObjectReferences) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex, ___dataContractSurrogate) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex, ___mode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex, ___binder) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex, ___surrogateSelector) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex, ___assemblyFormat) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex, ___surrogateDataContracts) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex, 0xe8>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*, "System.Runtime.Serialization", "XmlObjectSerializerReadContextComplex");
NEED_NO_BOX(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*, "System.Runtime.Serialization",
                       "XmlObjectSerializerReadContextComplex/TopLevelAssemblyTypeResolver");
NEED_NO_BOX(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*, "System.Runtime.Serialization",
                       "XmlObjectSerializerReadContextComplex/XmlObjectDataContractTypeInfo");
NEED_NO_BOX(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*, "System.Runtime.Serialization",
                       "XmlObjectSerializerReadContextComplex/XmlObjectDataContractTypeKey");
