#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System::Runtime::Serialization::Formatters::Binary {
class __ObjectReader__TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __ObjectReader__TypeNAssembly;
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
class __ObjectReader__TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __ObjectReader__TypeNAssembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectReader);
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver);
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly);
// Type: ::TypeNAssembly
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3286))
// CS Name: ::ObjectReader::TypeNAssembly*
class CORDL_TYPE __ObjectReader__TypeNAssembly : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Field assemblyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyName, put = __cordl_internal_set_assemblyName))::StringW assemblyName;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::System::Type* value);

  constexpr ::StringW& __cordl_internal_get_assemblyName();

  constexpr ::StringW const& __cordl_internal_get_assemblyName() const;

  constexpr void __cordl_internal_set_assemblyName(::StringW value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly* New_ctor();

  /// @brief Method .ctor, addr 0x24f05ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectReader__TypeNAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObjectReader__TypeNAssembly(__ObjectReader__TypeNAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectReader__TypeNAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObjectReader__TypeNAssembly(__ObjectReader__TypeNAssembly const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectReader__TypeNAssembly();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field assemblyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assemblyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly, ___assemblyName) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
// Type: ::TopLevelAssemblyTypeResolver
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3287))
// CS Name: ::ObjectReader::TopLevelAssemblyTypeResolver*
class CORDL_TYPE __ObjectReader__TopLevelAssemblyTypeResolver : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_topLevelAssembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_topLevelAssembly, put = __cordl_internal_set_m_topLevelAssembly))::System::Reflection::Assembly* m_topLevelAssembly;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_m_topLevelAssembly();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& __cordl_internal_get_m_topLevelAssembly() const;

  constexpr void __cordl_internal_set_m_topLevelAssembly(::System::Reflection::Assembly* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver* New_ctor(::System::Reflection::Assembly* topLevelAssembly);

  /// @brief Method .ctor, addr 0x24f0644, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::Assembly* topLevelAssembly);

  /// @brief Method ResolveType, addr 0x24f0820, size 0x68, virtual false, abstract: false, final false
  inline ::System::Type* ResolveType(::System::Reflection::Assembly* assembly, ::StringW simpleTypeName, bool ignoreCase);

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectReader__TopLevelAssemblyTypeResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObjectReader__TopLevelAssemblyTypeResolver(__ObjectReader__TopLevelAssemblyTypeResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectReader__TopLevelAssemblyTypeResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObjectReader__TopLevelAssemblyTypeResolver(__ObjectReader__TopLevelAssemblyTypeResolver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectReader__TopLevelAssemblyTypeResolver();

public:
  /// @brief Field m_topLevelAssembly, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___m_topLevelAssembly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver, ___m_topLevelAssembly) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectReader
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3235))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3288))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectReader*
class CORDL_TYPE ObjectReader : public ::System::Object {
public:
  // Declarations
  using TopLevelAssemblyTypeResolver = ::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver;

  using TypeNAssembly = ::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly;

  /// @brief Field m_stream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stream, put = __cordl_internal_set_m_stream))::System::IO::Stream* m_stream;

  /// @brief Field m_surrogates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_surrogates, put = __cordl_internal_set_m_surrogates))::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;

  /// @brief Field m_context, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_context, put = __cordl_internal_set_m_context))::System::Runtime::Serialization::StreamingContext m_context;

  /// @brief Field m_objectManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_objectManager, put = __cordl_internal_set_m_objectManager))::System::Runtime::Serialization::ObjectManager* m_objectManager;

  /// @brief Field formatterEnums, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_formatterEnums, put = __cordl_internal_set_formatterEnums))::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums;

  /// @brief Field m_binder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_binder, put = __cordl_internal_set_m_binder))::System::Runtime::Serialization::SerializationBinder* m_binder;

  /// @brief Field topId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_topId, put = __cordl_internal_set_topId)) int64_t topId;

  /// @brief Field bSimpleAssembly, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_bSimpleAssembly, put = __cordl_internal_set_bSimpleAssembly)) bool bSimpleAssembly;

  /// @brief Field handlerObject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_handlerObject, put = __cordl_internal_set_handlerObject))::System::Object* handlerObject;

  /// @brief Field m_topObject, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_topObject, put = __cordl_internal_set_m_topObject))::System::Object* m_topObject;

  /// @brief Field headers, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_headers,
                      put = __cordl_internal_set_headers))::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> headers;

  /// @brief Field handler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_handler, put = __cordl_internal_set_handler))::System::Runtime::Remoting::Messaging::HeaderHandler* handler;

  /// @brief Field serObjectInfoInit, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_serObjectInfoInit,
                      put = __cordl_internal_set_serObjectInfoInit))::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;

  /// @brief Field m_formatterConverter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_formatterConverter, put = __cordl_internal_set_m_formatterConverter))::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter;

  /// @brief Field stack, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack))::System::Runtime::Serialization::Formatters::Binary::SerStack* stack;

  /// @brief Field valueFixupStack, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_valueFixupStack, put = __cordl_internal_set_valueFixupStack))::System::Runtime::Serialization::Formatters::Binary::SerStack* valueFixupStack;

  /// @brief Field crossAppDomainArray, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_crossAppDomainArray, put = __cordl_internal_set_crossAppDomainArray))::ArrayW<::System::Object*, ::Array<::System::Object*>*> crossAppDomainArray;

  /// @brief Field bFullDeserialization, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_bFullDeserialization, put = __cordl_internal_set_bFullDeserialization)) bool bFullDeserialization;

  /// @brief Field bOldFormatDetected, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_bOldFormatDetected, put = __cordl_internal_set_bOldFormatDetected)) bool bOldFormatDetected;

  /// @brief Field valTypeObjectIdTable, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_valTypeObjectIdTable,
                      put = __cordl_internal_set_valTypeObjectIdTable))::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* valTypeObjectIdTable;

  /// @brief Field typeCache, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_typeCache, put = __cordl_internal_set_typeCache))::System::Runtime::Serialization::Formatters::Binary::NameCache* typeCache;

  /// @brief Field previousAssemblyString, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_previousAssemblyString, put = __cordl_internal_set_previousAssemblyString))::StringW previousAssemblyString;

  /// @brief Field previousName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_previousName, put = __cordl_internal_set_previousName))::StringW previousName;

  /// @brief Field previousType, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_previousType, put = __cordl_internal_set_previousType))::System::Type* previousType;

  __declspec(property(get = get_ValueFixupStack))::System::Runtime::Serialization::Formatters::Binary::SerStack* ValueFixupStack;

  __declspec(property(get = get_TopObject, put = set_TopObject))::System::Object* TopObject;

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_m_stream() const;

  constexpr void __cordl_internal_set_m_stream(::System::IO::Stream* value);

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __cordl_internal_get_m_surrogates();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const& __cordl_internal_get_m_surrogates() const;

  constexpr void __cordl_internal_set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_m_context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_m_context() const;

  constexpr void __cordl_internal_set_m_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr ::System::Runtime::Serialization::ObjectManager*& __cordl_internal_get_m_objectManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectManager*> const& __cordl_internal_get_m_objectManager() const;

  constexpr void __cordl_internal_set_m_objectManager(::System::Runtime::Serialization::ObjectManager* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE*& __cordl_internal_get_formatterEnums();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::InternalFE*> const& __cordl_internal_get_formatterEnums() const;

  constexpr void __cordl_internal_set_formatterEnums(::System::Runtime::Serialization::Formatters::Binary::InternalFE* value);

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __cordl_internal_get_m_binder();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> const& __cordl_internal_get_m_binder() const;

  constexpr void __cordl_internal_set_m_binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr int64_t& __cordl_internal_get_topId();

  constexpr int64_t const& __cordl_internal_get_topId() const;

  constexpr void __cordl_internal_set_topId(int64_t value);

  constexpr bool& __cordl_internal_get_bSimpleAssembly();

  constexpr bool const& __cordl_internal_get_bSimpleAssembly() const;

  constexpr void __cordl_internal_set_bSimpleAssembly(bool value);

  constexpr ::System::Object*& __cordl_internal_get_handlerObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_handlerObject() const;

  constexpr void __cordl_internal_set_handlerObject(::System::Object* value);

  constexpr ::System::Object*& __cordl_internal_get_m_topObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_topObject() const;

  constexpr void __cordl_internal_set_m_topObject(::System::Object* value);

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __cordl_internal_get_headers();

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __cordl_internal_get_headers() const;

  constexpr void __cordl_internal_set_headers(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value);

  constexpr ::System::Runtime::Remoting::Messaging::HeaderHandler*& __cordl_internal_get_handler();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::HeaderHandler*> const& __cordl_internal_get_handler() const;

  constexpr void __cordl_internal_set_handler(::System::Runtime::Remoting::Messaging::HeaderHandler* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& __cordl_internal_get_serObjectInfoInit();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> const& __cordl_internal_get_serObjectInfoInit() const;

  constexpr void __cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);

  constexpr ::System::Runtime::Serialization::IFormatterConverter*& __cordl_internal_get_m_formatterConverter();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::IFormatterConverter*> const& __cordl_internal_get_m_formatterConverter() const;

  constexpr void __cordl_internal_set_m_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __cordl_internal_get_stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const& __cordl_internal_get_stack() const;

  constexpr void __cordl_internal_set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __cordl_internal_get_valueFixupStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const& __cordl_internal_get_valueFixupStack() const;

  constexpr void __cordl_internal_set_valueFixupStack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_crossAppDomainArray();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_crossAppDomainArray() const;

  constexpr void __cordl_internal_set_crossAppDomainArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr bool& __cordl_internal_get_bFullDeserialization();

  constexpr bool const& __cordl_internal_get_bFullDeserialization() const;

  constexpr void __cordl_internal_set_bFullDeserialization(bool value);

  constexpr bool& __cordl_internal_get_bOldFormatDetected();

  constexpr bool const& __cordl_internal_get_bOldFormatDetected() const;

  constexpr void __cordl_internal_set_bOldFormatDetected(bool value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*& __cordl_internal_get_valTypeObjectIdTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*> const& __cordl_internal_get_valTypeObjectIdTable() const;

  constexpr void __cordl_internal_set_valTypeObjectIdTable(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::NameCache*& __cordl_internal_get_typeCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::NameCache*> const& __cordl_internal_get_typeCache() const;

  constexpr void __cordl_internal_set_typeCache(::System::Runtime::Serialization::Formatters::Binary::NameCache* value);

  constexpr ::StringW& __cordl_internal_get_previousAssemblyString();

  constexpr ::StringW const& __cordl_internal_get_previousAssemblyString() const;

  constexpr void __cordl_internal_set_previousAssemblyString(::StringW value);

  constexpr ::StringW& __cordl_internal_get_previousName();

  constexpr ::StringW const& __cordl_internal_get_previousName() const;

  constexpr void __cordl_internal_set_previousName(::StringW value);

  constexpr ::System::Type*& __cordl_internal_get_previousType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_previousType() const;

  constexpr void __cordl_internal_set_previousType(::System::Type* value);

  /// @brief Method get_ValueFixupStack, addr 0x24ec498, size 0x80, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::SerStack* get_ValueFixupStack();

  /// @brief Method get_TopObject, addr 0x24ec518, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_TopObject();

  /// @brief Method set_TopObject, addr 0x24ec520, size 0x14, virtual false, abstract: false, final false
  inline void set_TopObject(::System::Object* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* New_ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::ISurrogateSelector* selector,
                                                                                             ::System::Runtime::Serialization::StreamingContext context,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums,
                                                                                             ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method .ctor, addr 0x24ec534, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
                    ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method Deserialize, addr 0x24ec650, size 0x310, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::System::Runtime::Remoting::Messaging::HeaderHandler* handler, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* serParser, bool fCheck);

  /// @brief Method HasSurrogate, addr 0x24ecf34, size 0xd4, virtual false, abstract: false, final false
  inline bool HasSurrogate(::System::Type* t);

  /// @brief Method CheckSerializable, addr 0x24ed008, size 0x138, virtual false, abstract: false, final false
  inline void CheckSerializable(::System::Type* t);

  /// @brief Method InitFullDeserialization, addr 0x24ed140, size 0x110, virtual false, abstract: false, final false
  inline void InitFullDeserialization();

  /// @brief Method CrossAppDomainArray, addr 0x24ed250, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* CrossAppDomainArray(int32_t index);

  /// @brief Method CreateReadObjectInfo, addr 0x24ed280, size 0x34, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type* objectType);

  /// @brief Method CreateReadObjectInfo, addr 0x24ed2b4, size 0x44, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                                    ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes);

  /// @brief Method Parse, addr 0x24ed2f8, size 0x144, virtual false, abstract: false, final false
  inline void Parse(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseError, addr 0x24edf44, size 0x2d8, virtual false, abstract: false, final false
  inline void ParseError(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* processing, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* onStack);

  /// @brief Method ParseSerializedStreamHeader, addr 0x24ed43c, size 0x18, virtual false, abstract: false, final false
  inline void ParseSerializedStreamHeader(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseSerializedStreamHeaderEnd, addr 0x24ed454, size 0x18, virtual false, abstract: false, final false
  inline void ParseSerializedStreamHeaderEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseObject, addr 0x24ed46c, size 0x314, virtual false, abstract: false, final false
  inline void ParseObject(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseObjectEnd, addr 0x24ed780, size 0x230, virtual false, abstract: false, final false
  inline void ParseObjectEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseArray, addr 0x24ee318, size 0x68c, virtual false, abstract: false, final false
  inline void ParseArray(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method NextRectangleMap, addr 0x24eed34, size 0xc4, virtual false, abstract: false, final false
  inline void NextRectangleMap(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseArrayMember, addr 0x24eedf8, size 0x79c, virtual false, abstract: false, final false
  inline void ParseArrayMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseArrayMemberEnd, addr 0x24ef9c4, size 0x28, virtual false, abstract: false, final false
  inline void ParseArrayMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseMember, addr 0x24ed9b0, size 0x4d8, virtual false, abstract: false, final false
  inline void ParseMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseMemberEnd, addr 0x24ede88, size 0xbc, virtual false, abstract: false, final false
  inline void ParseMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);

  /// @brief Method ParseString, addr 0x24ef5c8, size 0x40, virtual false, abstract: false, final false
  inline void ParseString(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parentPr);

  /// @brief Method RegisterObject, addr 0x24ee9e4, size 0x8, virtual false, abstract: false, final false
  inline void RegisterObject(::System::Object* obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr);

  /// @brief Method RegisterObject, addr 0x24efa30, size 0x124, virtual false, abstract: false, final false
  inline void RegisterObject(::System::Object* obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr,
                             bool bIsString);

  /// @brief Method GetId, addr 0x24efb54, size 0xdc, virtual false, abstract: false, final false
  inline int64_t GetId(int64_t objectId);

  /// @brief Method Bind, addr 0x24efdc4, size 0x58, virtual false, abstract: false, final false
  inline ::System::Type* Bind(::StringW assemblyString, ::StringW typeString);

  /// @brief Method FastBindToType, addr 0x24efe1c, size 0x2f0, virtual false, abstract: false, final false
  inline ::System::Type* FastBindToType(::StringW assemblyName, ::StringW typeName);

  /// @brief Method ResolveSimpleAssemblyName, addr 0x24f01b4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* assemblyName);

  /// @brief Method GetSimplyNamedTypeFromAssembly, addr 0x24f0214, size 0x254, virtual false, abstract: false, final false
  static inline void GetSimplyNamedTypeFromAssembly(::System::Reflection::Assembly* assm, ::StringW typeName, ByRef<::System::Type*> type);

  /// @brief Method GetType, addr 0x24f066c, size 0x1b4, virtual false, abstract: false, final false
  inline ::System::Type* GetType(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::StringW name);

  /// @brief Method CheckTypeForwardedTo, addr 0x24f0468, size 0x144, virtual false, abstract: false, final false
  static inline void CheckTypeForwardedTo(::System::Reflection::Assembly* sourceAssembly, ::System::Reflection::Assembly* destAssembly, ::System::Type* resolvedType);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectReader(ObjectReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectReader(ObjectReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectReader();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectReader, 0xd0>, "Size mismatch!");

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

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver*, "System.Runtime.Serialization.Formatters.Binary",
                       "ObjectReader/TopLevelAssemblyTypeResolver");
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TypeNAssembly");
