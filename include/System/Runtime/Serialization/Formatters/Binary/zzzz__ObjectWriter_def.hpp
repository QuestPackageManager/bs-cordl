#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectWriter)
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class ObjectIDGenerator;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameInfo;
}
namespace System {
class Type;
}
namespace System {
class Array;
}
namespace System::Collections {
class Queue;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System::Runtime::Serialization {
class SerializationObjectManager;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter);
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectWriter
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3235)), TypeDefinitionIndex(TypeDefinitionIndex(3253))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3289))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectWriter*
class CORDL_TYPE ObjectWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_objectQueue, offset 0x10, size 0x8
  __declspec(property(get = __get_m_objectQueue, put = __set_m_objectQueue))::System::Collections::Queue* m_objectQueue;

  /// @brief Field m_idGenerator, offset 0x18, size 0x8
  __declspec(property(get = __get_m_idGenerator, put = __set_m_idGenerator))::System::Runtime::Serialization::ObjectIDGenerator* m_idGenerator;

  /// @brief Field m_currentId, offset 0x20, size 0x4
  __declspec(property(get = __get_m_currentId, put = __set_m_currentId)) int32_t m_currentId;

  /// @brief Field m_surrogates, offset 0x28, size 0x8
  __declspec(property(get = __get_m_surrogates, put = __set_m_surrogates))::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;

  /// @brief Field m_context, offset 0x30, size 0x10
  __declspec(property(get = __get_m_context, put = __set_m_context))::System::Runtime::Serialization::StreamingContext m_context;

  /// @brief Field serWriter, offset 0x40, size 0x8
  __declspec(property(get = __get_serWriter, put = __set_serWriter))::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter;

  /// @brief Field m_objectManager, offset 0x48, size 0x8
  __declspec(property(get = __get_m_objectManager, put = __set_m_objectManager))::System::Runtime::Serialization::SerializationObjectManager* m_objectManager;

  /// @brief Field topId, offset 0x50, size 0x8
  __declspec(property(get = __get_topId, put = __set_topId)) int64_t topId;

  /// @brief Field topName, offset 0x58, size 0x8
  __declspec(property(get = __get_topName, put = __set_topName))::StringW topName;

  /// @brief Field headers, offset 0x60, size 0x8
  __declspec(property(get = __get_headers, put = __set_headers))::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> headers;

  /// @brief Field formatterEnums, offset 0x68, size 0x8
  __declspec(property(get = __get_formatterEnums, put = __set_formatterEnums))::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums;

  /// @brief Field m_binder, offset 0x70, size 0x8
  __declspec(property(get = __get_m_binder, put = __set_m_binder))::System::Runtime::Serialization::SerializationBinder* m_binder;

  /// @brief Field serObjectInfoInit, offset 0x78, size 0x8
  __declspec(property(get = __get_serObjectInfoInit, put = __set_serObjectInfoInit))::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;

  /// @brief Field m_formatterConverter, offset 0x80, size 0x8
  __declspec(property(get = __get_m_formatterConverter, put = __set_m_formatterConverter))::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter;

  /// @brief Field crossAppDomainArray, offset 0x88, size 0x8
  __declspec(property(get = __get_crossAppDomainArray, put = __set_crossAppDomainArray))::ArrayW<::System::Object*, ::Array<::System::Object*>*> crossAppDomainArray;

  /// @brief Field previousObj, offset 0x90, size 0x8
  __declspec(property(get = __get_previousObj, put = __set_previousObj))::System::Object* previousObj;

  /// @brief Field previousId, offset 0x98, size 0x8
  __declspec(property(get = __get_previousId, put = __set_previousId)) int64_t previousId;

  /// @brief Field previousType, offset 0xa0, size 0x8
  __declspec(property(get = __get_previousType, put = __set_previousType))::System::Type* previousType;

  /// @brief Field previousCode, offset 0xa8, size 0x4
  __declspec(property(get = __get_previousCode, put = __set_previousCode))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE previousCode;

  /// @brief Field assemblyToIdTable, offset 0xb0, size 0x8
  __declspec(property(get = __get_assemblyToIdTable, put = __set_assemblyToIdTable))::System::Collections::Hashtable* assemblyToIdTable;

  /// @brief Field niPool, offset 0xb8, size 0x8
  __declspec(property(get = __get_niPool, put = __set_niPool))::System::Runtime::Serialization::Formatters::Binary::SerStack* niPool;

  __declspec(property(get = get_ObjectManager))::System::Runtime::Serialization::SerializationObjectManager* ObjectManager;

  constexpr ::System::Collections::Queue*& __get_m_objectQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> const& __get_m_objectQueue() const;

  constexpr void __set_m_objectQueue(::System::Collections::Queue* value);

  constexpr ::System::Runtime::Serialization::ObjectIDGenerator*& __get_m_idGenerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectIDGenerator*> const& __get_m_idGenerator() const;

  constexpr void __set_m_idGenerator(::System::Runtime::Serialization::ObjectIDGenerator* value);

  constexpr int32_t& __get_m_currentId();

  constexpr int32_t const& __get_m_currentId() const;

  constexpr void __set_m_currentId(int32_t value);

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __get_m_surrogates();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const& __get_m_surrogates() const;

  constexpr void __set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __get_m_context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __get_m_context() const;

  constexpr void __set_m_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*& __get_serWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*> const& __get_serWriter() const;

  constexpr void __set_serWriter(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* value);

  constexpr ::System::Runtime::Serialization::SerializationObjectManager*& __get_m_objectManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationObjectManager*> const& __get_m_objectManager() const;

  constexpr void __set_m_objectManager(::System::Runtime::Serialization::SerializationObjectManager* value);

  constexpr int64_t& __get_topId();

  constexpr int64_t const& __get_topId() const;

  constexpr void __set_topId(int64_t value);

  constexpr ::StringW& __get_topName();

  constexpr ::StringW const& __get_topName() const;

  constexpr void __set_topName(::StringW value);

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __get_headers();

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __get_headers() const;

  constexpr void __set_headers(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE*& __get_formatterEnums();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::InternalFE*> const& __get_formatterEnums() const;

  constexpr void __set_formatterEnums(::System::Runtime::Serialization::Formatters::Binary::InternalFE* value);

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __get_m_binder();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> const& __get_m_binder() const;

  constexpr void __set_m_binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& __get_serObjectInfoInit();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> const& __get_serObjectInfoInit() const;

  constexpr void __set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);

  constexpr ::System::Runtime::Serialization::IFormatterConverter*& __get_m_formatterConverter();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::IFormatterConverter*> const& __get_m_formatterConverter() const;

  constexpr void __set_m_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_crossAppDomainArray();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_crossAppDomainArray() const;

  constexpr void __set_crossAppDomainArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::System::Object*& __get_previousObj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_previousObj() const;

  constexpr void __set_previousObj(::System::Object* value);

  constexpr int64_t& __get_previousId();

  constexpr int64_t const& __get_previousId() const;

  constexpr void __set_previousId(int64_t value);

  constexpr ::System::Type*& __get_previousType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_previousType() const;

  constexpr void __set_previousType(::System::Type* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __get_previousCode();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __get_previousCode() const;

  constexpr void __set_previousCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr ::System::Collections::Hashtable*& __get_assemblyToIdTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_assemblyToIdTable() const;

  constexpr void __set_assemblyToIdTable(::System::Collections::Hashtable* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __get_niPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const& __get_niPool() const;

  constexpr void __set_niPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector,
                                                                                             ::System::Runtime::Serialization::StreamingContext context,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums,
                                                                                             ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method .ctor addr 0x24cf814 size 0xf8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
                    ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method Serialize addr 0x24cf90c size 0x3e4 virtual false final false
  inline void Serialize(::System::Object* graph, ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> inHeaders,
                        ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter, bool fCheck);

  /// @brief Method get_ObjectManager addr 0x24d0538 size 0x8 virtual false final false
  inline ::System::Runtime::Serialization::SerializationObjectManager* get_ObjectManager();

  /// @brief Method Write addr 0x24d002c size 0x37c virtual false final false
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                    ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method Write addr 0x24d0d30 size 0x254 virtual false final false
  inline void
  Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
        ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
        ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> memberData,
        ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*> memberObjectInfos);

  /// @brief Method WriteMemberSetup addr 0x24d0fa4 size 0xdc virtual false final false
  inline void WriteMemberSetup(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                               ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::StringW memberName, ::System::Type* memberType, ::System::Object* memberData,
                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);

  /// @brief Method WriteMembers addr 0x24d10bc size 0x328 virtual false final false
  inline void WriteMembers(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberTypeNameInfo,
                           ::System::Object* memberData, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);

  /// @brief Method WriteArray addr 0x24d0540 size 0x74c virtual false final false
  inline void WriteArray(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                         ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);

  /// @brief Method WriteArrayMember addr 0x24d16c0 size 0x278 virtual false final false
  inline void WriteArrayMember(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                               ::System::Object* data);

  /// @brief Method WriteRectangle addr 0x24d1938 size 0x23c virtual false final false
  inline void WriteRectangle(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, int32_t rank, ::ArrayW<int32_t, ::Array<int32_t>*> maxA, ::System::Array* array,
                             ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemNameTypeInfo, ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA);

  /// @brief Method GetNext addr 0x24d03c0 size 0x178 virtual false final false
  inline ::System::Object* GetNext(ByRef<int64_t> objID);

  /// @brief Method InternalGetId addr 0x24cfd14 size 0xc4 virtual false final false
  inline int64_t InternalGetId(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type, ByRef<bool> isNew);

  /// @brief Method Schedule addr 0x24d1bc0 size 0xc virtual false final false
  inline int64_t Schedule(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type);

  /// @brief Method Schedule addr 0x24d1524 size 0x8c virtual false final false
  inline int64_t Schedule(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);

  /// @brief Method WriteKnownValueClass addr 0x24d15cc size 0xf4 virtual false final false
  inline bool WriteKnownValueClass(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                                   ::System::Object* data);

  /// @brief Method WriteObjectRef addr 0x24d15b0 size 0x1c virtual false final false
  inline void WriteObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int64_t objectId);

  /// @brief Method WriteString addr 0x24d1bcc size 0x100 virtual false final false
  inline void WriteString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                          ::System::Object* stringObject);

  /// @brief Method CheckForNull addr 0x24d13e4 size 0xb8 virtual false final false
  inline bool CheckForNull(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* data);

  /// @brief Method WriteSerializedStreamHeader addr 0x24cfcf0 size 0x24 virtual false final false
  inline void WriteSerializedStreamHeader(int64_t topId, int64_t headerId);

  /// @brief Method TypeToNameInfo addr 0x24d1ccc size 0x94 virtual false final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);

  /// @brief Method TypeToNameInfo addr 0x24d1080 size 0x3c virtual false final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Type* type);

  /// @brief Method TypeToNameInfo addr 0x24cffe8 size 0x44 virtual false final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);

  /// @brief Method TypeToNameInfo addr 0x24d14d4 size 0x50 virtual false final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);

  /// @brief Method TypeToNameInfo addr 0x24d149c size 0x38 virtual false final false
  inline void TypeToNameInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);

  /// @brief Method MemberToNameInfo addr 0x24d0f84 size 0x20 virtual false final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* MemberToNameInfo(::StringW name);

  /// @brief Method ToCode addr 0x24d0cb0 size 0x80 virtual false final false
  inline ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type* type);

  /// @brief Method GetAssemblyId addr 0x24cfdd8 size 0x210 virtual false final false
  inline int64_t GetAssemblyId(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);

  /// @brief Method GetType addr 0x24d0c98 size 0x18 virtual false final false
  inline ::System::Type* GetType(::System::Object* obj);

  /// @brief Method GetNameInfo addr 0x24d1d60 size 0xb8 virtual false final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* GetNameInfo();

  /// @brief Method CheckTypeFormat addr 0x24d0c8c size 0xc virtual false final false
  inline bool CheckTypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle test, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle want);

  /// @brief Method PutNameInfo addr 0x24d03a8 size 0x18 virtual false final false
  inline void PutNameInfo(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectWriter(ObjectWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectWriter(ObjectWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectWriter();

public:
  /// @brief Field m_objectQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Queue* ___m_objectQueue;

  /// @brief Field m_idGenerator, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::ObjectIDGenerator* ___m_idGenerator;

  /// @brief Field m_currentId, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_currentId;

  /// @brief Field m_surrogates, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ___m_surrogates;

  /// @brief Field m_context, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___m_context;

  /// @brief Field serWriter, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* ___serWriter;

  /// @brief Field m_objectManager, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationObjectManager* ___m_objectManager;

  /// @brief Field topId, offset: 0x50, size: 0x8, def value: None
  int64_t ___topId;

  /// @brief Field topName, offset: 0x58, size: 0x8, def value: None
  ::StringW ___topName;

  /// @brief Field headers, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> ___headers;

  /// @brief Field formatterEnums, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalFE* ___formatterEnums;

  /// @brief Field m_binder, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ___m_binder;

  /// @brief Field serObjectInfoInit, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* ___serObjectInfoInit;

  /// @brief Field m_formatterConverter, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::Serialization::IFormatterConverter* ___m_formatterConverter;

  /// @brief Field crossAppDomainArray, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___crossAppDomainArray;

  /// @brief Field previousObj, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ___previousObj;

  /// @brief Field previousId, offset: 0x98, size: 0x8, def value: None
  int64_t ___previousId;

  /// @brief Field previousType, offset: 0xa0, size: 0x8, def value: None
  ::System::Type* ___previousType;

  /// @brief Field previousCode, offset: 0xa8, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ___previousCode;

  /// @brief Field assemblyToIdTable, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___assemblyToIdTable;

  /// @brief Field niPool, offset: 0xb8, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerStack* ___niPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, 0xc0>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, "System.Runtime.Serialization.Formatters.Binary", "ObjectWriter");
