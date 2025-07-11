#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectReader)
namespace System::IO {
class Stream;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::Remoting::Messaging {
class HeaderHandler;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class IntSizedArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameCache;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader_TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader_TypeNAssembly;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class ObjectManager;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader_TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader_TypeNAssembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectReader);
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver);
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeNAssembly
class CORDL_TYPE ObjectReader_TypeNAssembly : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemblyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyName, put = __cordl_internal_set_assemblyName)) ::StringW assemblyName;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_assemblyName() const;

  constexpr ::StringW& __cordl_internal_get_assemblyName();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_assemblyName(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x3d0cd88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectReader_TypeNAssembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectReader_TypeNAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectReader_TypeNAssembly(ObjectReader_TypeNAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectReader_TypeNAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectReader_TypeNAssembly(ObjectReader_TypeNAssembly const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3286 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field assemblyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assemblyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly, ___assemblyName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectReader/TopLevelAssemblyTypeResolver
class CORDL_TYPE ObjectReader_TopLevelAssemblyTypeResolver : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_topLevelAssembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_topLevelAssembly, put = __cordl_internal_set_m_topLevelAssembly)) ::System::Reflection::Assembly* m_topLevelAssembly;

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver* New_ctor(::System::Reflection::Assembly* topLevelAssembly);

  /// @brief Method ResolveType, addr 0x3d0cff0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Type* ResolveType(::System::Reflection::Assembly* assembly, ::StringW simpleTypeName, bool ignoreCase);

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get_m_topLevelAssembly() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_m_topLevelAssembly();

  constexpr void __cordl_internal_set_m_topLevelAssembly(::System::Reflection::Assembly* value);

  /// @brief Method .ctor, addr 0x3d0ce20, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::Assembly* topLevelAssembly);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectReader_TopLevelAssemblyTypeResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectReader_TopLevelAssemblyTypeResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectReader_TopLevelAssemblyTypeResolver(ObjectReader_TopLevelAssemblyTypeResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectReader_TopLevelAssemblyTypeResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectReader_TopLevelAssemblyTypeResolver(ObjectReader_TopLevelAssemblyTypeResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3287 };

  /// @brief Field m_topLevelAssembly, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___m_topLevelAssembly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver, ___m_topLevelAssembly) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
// Dependencies System.Object, System.Runtime.Serialization.StreamingContext
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectReader
class CORDL_TYPE ObjectReader : public ::System::Object {
public:
  // Declarations
  using TopLevelAssemblyTypeResolver = ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver;

  using TypeNAssembly = ::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly;

  __declspec(property(get = get_TopObject, put = set_TopObject)) ::System::Object* TopObject;

  __declspec(property(get = get_ValueFixupStack)) ::System::Runtime::Serialization::Formatters::Binary::SerStack* ValueFixupStack;

  /// @brief Field bFullDeserialization, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_bFullDeserialization, put = __cordl_internal_set_bFullDeserialization)) bool bFullDeserialization;

  /// @brief Field bOldFormatDetected, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_bOldFormatDetected, put = __cordl_internal_set_bOldFormatDetected)) bool bOldFormatDetected;

  /// @brief Field bSimpleAssembly, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_bSimpleAssembly, put = __cordl_internal_set_bSimpleAssembly)) bool bSimpleAssembly;

  /// @brief Field crossAppDomainArray, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_crossAppDomainArray, put = __cordl_internal_set_crossAppDomainArray)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> crossAppDomainArray;

  /// @brief Field formatterEnums, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_formatterEnums, put = __cordl_internal_set_formatterEnums)) ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums;

  /// @brief Field handler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_handler, put = __cordl_internal_set_handler)) ::System::Runtime::Remoting::Messaging::HeaderHandler* handler;

  /// @brief Field handlerObject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_handlerObject, put = __cordl_internal_set_handlerObject)) ::System::Object* handlerObject;

  /// @brief Field headers, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_headers,
                      put = __cordl_internal_set_headers)) ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>
      headers;

  /// @brief Field m_binder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_binder, put = __cordl_internal_set_m_binder)) ::System::Runtime::Serialization::SerializationBinder* m_binder;

  /// @brief Field m_context, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_context, put = __cordl_internal_set_m_context)) ::System::Runtime::Serialization::StreamingContext m_context;

  /// @brief Field m_formatterConverter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_formatterConverter, put = __cordl_internal_set_m_formatterConverter)) ::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter;

  /// @brief Field m_objectManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_objectManager, put = __cordl_internal_set_m_objectManager)) ::System::Runtime::Serialization::ObjectManager* m_objectManager;

  /// @brief Field m_stream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stream, put = __cordl_internal_set_m_stream)) ::System::IO::Stream* m_stream;

  /// @brief Field m_surrogates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_surrogates, put = __cordl_internal_set_m_surrogates)) ::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;

  /// @brief Field m_topObject, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_topObject, put = __cordl_internal_set_m_topObject)) ::System::Object* m_topObject;

  /// @brief Field previousAssemblyString, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_previousAssemblyString, put = __cordl_internal_set_previousAssemblyString)) ::StringW previousAssemblyString;

  /// @brief Field previousName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_previousName, put = __cordl_internal_set_previousName)) ::StringW previousName;

  /// @brief Field previousType, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_previousType, put = __cordl_internal_set_previousType)) ::System::Type* previousType;

  /// @brief Field serObjectInfoInit, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_serObjectInfoInit,
                      put = __cordl_internal_set_serObjectInfoInit)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;

  /// @brief Field stack, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack)) ::System::Runtime::Serialization::Formatters::Binary::SerStack* stack;

  /// @brief Field topId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_topId, put = __cordl_internal_set_topId)) int64_t topId;

  /// @brief Field typeCache, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_typeCache, put = __cordl_internal_set_typeCache)) ::System::Runtime::Serialization::Formatters::Binary::NameCache* typeCache;

  /// @brief Field valTypeObjectIdTable, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_valTypeObjectIdTable,
                      put = __cordl_internal_set_valTypeObjectIdTable)) ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* valTypeObjectIdTable;

  /// @brief Field valueFixupStack, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_valueFixupStack, put = __cordl_internal_set_valueFixupStack)) ::System::Runtime::Serialization::Formatters::Binary::SerStack* valueFixupStack;

  /// @brief Method Bind, addr 0x3d0c5c8, size 0x58, virtual false, abstract: false, final false
  inline ::System::Type* Bind(::StringW assemblyString, ::StringW typeString);

  /// @brief Method CheckSerializable, addr 0x3d09a10, size 0x130, virtual false, abstract: false, final false
  inline void CheckSerializable(::System::Type* t);

  /// @brief Method CheckTypeForwardedTo, addr 0x3d0cc44, size 0x144, virtual false, abstract: false, final false
  static inline void CheckTypeForwardedTo(::System::Reflection::Assembly* sourceAssembly, ::System::Reflection::Assembly* destAssembly, ::System::Type* resolvedType);

  /// @brief Method CreateReadObjectInfo, addr 0x3d09c68, size 0x30, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type* objectType);

  /// @brief Method CreateReadObjectInfo, addr 0x3d09c98, size 0x40, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                                    ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes);

  /// @brief Method CrossAppDomainArray, addr 0x3d09c38, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* CrossAppDomainArray(int32_t index);

  /// @brief Method Deserialize, addr 0x3d09088, size 0x304, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::System::Runtime::Remoting::Messaging::HeaderHandler* handler, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* serParser, bool fCheck);

  /// @brief Method FastBindToType, addr 0x3d0c620, size 0x2e0, virtual false, abstract: false, final false
  inline ::System::Type* FastBindToType(::StringW assemblyName, ::StringW typeName);

  /// @brief Method GetId, addr 0x3d0c354, size 0xdc, virtual false, abstract: false, final false
  inline int64_t GetId(int64_t objectId);

  /// @brief Method GetSimplyNamedTypeFromAssembly, addr 0x3d0ca08, size 0x23c, virtual false, abstract: false, final false
  static inline void GetSimplyNamedTypeFromAssembly(::System::Reflection::Assembly* assm, ::StringW typeName, ::ByRef<::System::Type*> type);

  /// @brief Method GetType, addr 0x3d0ce48, size 0x1a8, virtual false, abstract: false, final false
  inline ::System::Type* GetType(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::StringW name);

  /// @brief Method HasSurrogate, addr 0x3d0993c, size 0xd4, virtual false, abstract: false, final false
  inline bool HasSurrogate(::System::Type* t);

  /// @brief Method InitFullDeserialization, addr 0x3d09b40, size 0xf8, virtual false, abstract: false, final false
  inline void InitFullDeserialization();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* New_ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::ISurrogateSelector* selector,
                                                                                             ::System::Runtime::Serialization::StreamingContext context,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums,
                                                                                             ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method NextRectangleMap, addr 0x3d0b4f0, size 0xc4, virtual false, abstract: false, final false
  inline void NextRectangleMap(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method Parse, addr 0x3d09cd8, size 0x13c, virtual false, abstract: false, final false
  inline void Parse(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseArray, addr 0x3d0aad8, size 0x694, virtual false, abstract: false, final false
  inline void ParseArray(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseArrayMember, addr 0x3d0b5b4, size 0x7a0, virtual false, abstract: false, final false
  inline void ParseArrayMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseArrayMemberEnd, addr 0x3d0c1c8, size 0x28, virtual false, abstract: false, final false
  inline void ParseArrayMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseError, addr 0x3d0a8dc, size 0x1fc, virtual false, abstract: false, final false
  inline void ParseError(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* processing, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* onStack);

  /// @brief Method ParseMember, addr 0x3d0a360, size 0x4c0, virtual false, abstract: false, final false
  inline void ParseMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseMemberEnd, addr 0x3d0a820, size 0xbc, virtual false, abstract: false, final false
  inline void ParseMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseObject, addr 0x3d09e44, size 0x304, virtual false, abstract: false, final false
  inline void ParseObject(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseObjectEnd, addr 0x3d0a148, size 0x218, virtual false, abstract: false, final false
  inline void ParseObjectEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseSerializedStreamHeader, addr 0x3d09e14, size 0x18, virtual false, abstract: false, final false
  inline void ParseSerializedStreamHeader(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseSerializedStreamHeaderEnd, addr 0x3d09e2c, size 0x18, virtual false, abstract: false, final false
  inline void ParseSerializedStreamHeaderEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseString, addr 0x3d0bd88, size 0x40, virtual false, abstract: false, final false
  inline void ParseString(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parentPr);

  /// @brief Method RegisterObject, addr 0x3d0b1ac, size 0x8, virtual false, abstract: false, final false
  inline void RegisterObject(::System::Object* obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr);

  /// @brief Method RegisterObject, addr 0x3d0c234, size 0x120, virtual false, abstract: false, final false
  inline void RegisterObject(::System::Object* obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr,
                             bool bIsString);

  /// @brief Method ResolveSimpleAssemblyName, addr 0x3d0c9a8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* assemblyName);

  constexpr bool const& __cordl_internal_get_bFullDeserialization() const;

  constexpr bool& __cordl_internal_get_bFullDeserialization();

  constexpr bool const& __cordl_internal_get_bOldFormatDetected() const;

  constexpr bool& __cordl_internal_get_bOldFormatDetected();

  constexpr bool const& __cordl_internal_get_bSimpleAssembly() const;

  constexpr bool& __cordl_internal_get_bSimpleAssembly();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_crossAppDomainArray() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_crossAppDomainArray();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE* const& __cordl_internal_get_formatterEnums() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE*& __cordl_internal_get_formatterEnums();

  constexpr ::System::Runtime::Remoting::Messaging::HeaderHandler* const& __cordl_internal_get_handler() const;

  constexpr ::System::Runtime::Remoting::Messaging::HeaderHandler*& __cordl_internal_get_handler();

  constexpr ::System::Object* const& __cordl_internal_get_handlerObject() const;

  constexpr ::System::Object*& __cordl_internal_get_handlerObject();

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __cordl_internal_get_headers() const;

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __cordl_internal_get_headers();

  constexpr ::System::Runtime::Serialization::SerializationBinder* const& __cordl_internal_get_m_binder() const;

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __cordl_internal_get_m_binder();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_m_context() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_m_context();

  constexpr ::System::Runtime::Serialization::IFormatterConverter* const& __cordl_internal_get_m_formatterConverter() const;

  constexpr ::System::Runtime::Serialization::IFormatterConverter*& __cordl_internal_get_m_formatterConverter();

  constexpr ::System::Runtime::Serialization::ObjectManager* const& __cordl_internal_get_m_objectManager() const;

  constexpr ::System::Runtime::Serialization::ObjectManager*& __cordl_internal_get_m_objectManager();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_m_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_stream();

  constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& __cordl_internal_get_m_surrogates() const;

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __cordl_internal_get_m_surrogates();

  constexpr ::System::Object* const& __cordl_internal_get_m_topObject() const;

  constexpr ::System::Object*& __cordl_internal_get_m_topObject();

  constexpr ::StringW const& __cordl_internal_get_previousAssemblyString() const;

  constexpr ::StringW& __cordl_internal_get_previousAssemblyString();

  constexpr ::StringW const& __cordl_internal_get_previousName() const;

  constexpr ::StringW& __cordl_internal_get_previousName();

  constexpr ::System::Type* const& __cordl_internal_get_previousType() const;

  constexpr ::System::Type*& __cordl_internal_get_previousType();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* const& __cordl_internal_get_serObjectInfoInit() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& __cordl_internal_get_serObjectInfoInit();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* const& __cordl_internal_get_stack() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __cordl_internal_get_stack();

  constexpr int64_t const& __cordl_internal_get_topId() const;

  constexpr int64_t& __cordl_internal_get_topId();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::NameCache* const& __cordl_internal_get_typeCache() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::NameCache*& __cordl_internal_get_typeCache();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* const& __cordl_internal_get_valTypeObjectIdTable() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*& __cordl_internal_get_valTypeObjectIdTable();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* const& __cordl_internal_get_valueFixupStack() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __cordl_internal_get_valueFixupStack();

  constexpr void __cordl_internal_set_bFullDeserialization(bool value);

  constexpr void __cordl_internal_set_bOldFormatDetected(bool value);

  constexpr void __cordl_internal_set_bSimpleAssembly(bool value);

  constexpr void __cordl_internal_set_crossAppDomainArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_formatterEnums(::System::Runtime::Serialization::Formatters::Binary::InternalFE* value);

  constexpr void __cordl_internal_set_handler(::System::Runtime::Remoting::Messaging::HeaderHandler* value);

  constexpr void __cordl_internal_set_handlerObject(::System::Object* value);

  constexpr void __cordl_internal_set_headers(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value);

  constexpr void __cordl_internal_set_m_binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr void __cordl_internal_set_m_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set_m_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value);

  constexpr void __cordl_internal_set_m_objectManager(::System::Runtime::Serialization::ObjectManager* value);

  constexpr void __cordl_internal_set_m_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector* value);

  constexpr void __cordl_internal_set_m_topObject(::System::Object* value);

  constexpr void __cordl_internal_set_previousAssemblyString(::StringW value);

  constexpr void __cordl_internal_set_previousName(::StringW value);

  constexpr void __cordl_internal_set_previousType(::System::Type* value);

  constexpr void __cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);

  constexpr void __cordl_internal_set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  constexpr void __cordl_internal_set_topId(int64_t value);

  constexpr void __cordl_internal_set_typeCache(::System::Runtime::Serialization::Formatters::Binary::NameCache* value);

  constexpr void __cordl_internal_set_valTypeObjectIdTable(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* value);

  constexpr void __cordl_internal_set_valueFixupStack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  /// @brief Method .ctor, addr 0x3d08f78, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
                    ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method get_TopObject, addr 0x3d08f5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_TopObject();

  /// @brief Method get_ValueFixupStack, addr 0x3d08ee4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::SerStack* get_ValueFixupStack();

  /// @brief Method set_TopObject, addr 0x3d08f64, size 0x14, virtual false, abstract: false, final false
  inline void set_TopObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectReader(ObjectReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectReader(ObjectReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3288 };

  /// @brief Field m_stream, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___m_stream;

  /// @brief Field m_surrogates, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ___m_surrogates;

  /// @brief Field m_context, offset: 0x20, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___m_context;

  /// @brief Field m_objectManager, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Serialization::ObjectManager* ___m_objectManager;

  /// @brief Field formatterEnums, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalFE* ___formatterEnums;

  /// @brief Field m_binder, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ___m_binder;

  /// @brief Field topId, offset: 0x48, size: 0x8, def value: None
  int64_t ___topId;

  /// @brief Field bSimpleAssembly, offset: 0x50, size: 0x1, def value: None
  bool ___bSimpleAssembly;

  /// @brief Field handlerObject, offset: 0x58, size: 0x8, def value: None
  ::System::Object* ___handlerObject;

  /// @brief Field m_topObject, offset: 0x60, size: 0x8, def value: None
  ::System::Object* ___m_topObject;

  /// @brief Field headers, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> ___headers;

  /// @brief Field handler, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::HeaderHandler* ___handler;

  /// @brief Field serObjectInfoInit, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* ___serObjectInfoInit;

  /// @brief Field m_formatterConverter, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::Serialization::IFormatterConverter* ___m_formatterConverter;

  /// @brief Field stack, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerStack* ___stack;

  /// @brief Field valueFixupStack, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerStack* ___valueFixupStack;

  /// @brief Field crossAppDomainArray, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___crossAppDomainArray;

  /// @brief Field bFullDeserialization, offset: 0xa0, size: 0x1, def value: None
  bool ___bFullDeserialization;

  /// @brief Field bOldFormatDetected, offset: 0xa1, size: 0x1, def value: None
  bool ___bOldFormatDetected;

  /// @brief Field valTypeObjectIdTable, offset: 0xa8, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* ___valTypeObjectIdTable;

  /// @brief Field typeCache, offset: 0xb0, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::NameCache* ___typeCache;

  /// @brief Field previousAssemblyString, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___previousAssemblyString;

  /// @brief Field previousName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___previousName;

  /// @brief Field previousType, offset: 0xc8, size: 0x8, def value: None
  ::System::Type* ___previousType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___m_stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___m_surrogates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___m_context) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___m_objectManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___formatterEnums) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___m_binder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___topId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___bSimpleAssembly) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___handlerObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___m_topObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___headers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___handler) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___serObjectInfoInit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___m_formatterConverter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___stack) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___valueFixupStack) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___crossAppDomainArray) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___bFullDeserialization) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___bOldFormatDetected) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___valTypeObjectIdTable) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___typeCache) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___previousAssemblyString) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___previousName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader, ___previousType) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectReader, 0xd0>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver*, "System.Runtime.Serialization.Formatters.Binary",
                       "ObjectReader/TopLevelAssemblyTypeResolver");
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TypeNAssembly*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TypeNAssembly");
