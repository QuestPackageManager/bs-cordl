#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectWriter)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class Queue;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class ObjectIDGenerator;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization {
class SerializationObjectManager;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter);
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE, System.Runtime.Serialization.StreamingContext
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter
class CORDL_TYPE ObjectWriter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ObjectManager)) ::System::Runtime::Serialization::SerializationObjectManager* ObjectManager;

  /// @brief Field assemblyToIdTable, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyToIdTable, put = __cordl_internal_set_assemblyToIdTable)) ::System::Collections::Hashtable* assemblyToIdTable;

  /// @brief Field crossAppDomainArray, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_crossAppDomainArray, put = __cordl_internal_set_crossAppDomainArray)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> crossAppDomainArray;

  /// @brief Field formatterEnums, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_formatterEnums, put = __cordl_internal_set_formatterEnums)) ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums;

  /// @brief Field headers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_headers,
                      put = __cordl_internal_set_headers)) ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>
      headers;

  /// @brief Field m_binder, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_binder, put = __cordl_internal_set_m_binder)) ::System::Runtime::Serialization::SerializationBinder* m_binder;

  /// @brief Field m_context, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_context, put = __cordl_internal_set_m_context)) ::System::Runtime::Serialization::StreamingContext m_context;

  /// @brief Field m_currentId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentId, put = __cordl_internal_set_m_currentId)) int32_t m_currentId;

  /// @brief Field m_formatterConverter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_formatterConverter, put = __cordl_internal_set_m_formatterConverter)) ::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter;

  /// @brief Field m_idGenerator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_idGenerator, put = __cordl_internal_set_m_idGenerator)) ::System::Runtime::Serialization::ObjectIDGenerator* m_idGenerator;

  /// @brief Field m_objectManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_objectManager, put = __cordl_internal_set_m_objectManager)) ::System::Runtime::Serialization::SerializationObjectManager* m_objectManager;

  /// @brief Field m_objectQueue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_objectQueue, put = __cordl_internal_set_m_objectQueue)) ::System::Collections::Queue* m_objectQueue;

  /// @brief Field m_surrogates, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_surrogates, put = __cordl_internal_set_m_surrogates)) ::System::Runtime::Serialization::ISurrogateSelector* m_surrogates;

  /// @brief Field niPool, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_niPool, put = __cordl_internal_set_niPool)) ::System::Runtime::Serialization::Formatters::Binary::SerStack* niPool;

  /// @brief Field previousCode, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_previousCode, put = __cordl_internal_set_previousCode)) ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE previousCode;

  /// @brief Field previousId, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_previousId, put = __cordl_internal_set_previousId)) int64_t previousId;

  /// @brief Field previousObj, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_previousObj, put = __cordl_internal_set_previousObj)) ::System::Object* previousObj;

  /// @brief Field previousType, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_previousType, put = __cordl_internal_set_previousType)) ::System::Type* previousType;

  /// @brief Field serObjectInfoInit, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_serObjectInfoInit,
                      put = __cordl_internal_set_serObjectInfoInit)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;

  /// @brief Field serWriter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_serWriter, put = __cordl_internal_set_serWriter)) ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter;

  /// @brief Field topId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_topId, put = __cordl_internal_set_topId)) int64_t topId;

  /// @brief Field topName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_topName, put = __cordl_internal_set_topName)) ::StringW topName;

  /// @brief Method CheckForNull, addr 0x3d1c568, size 0xb8, virtual false, abstract: false, final false
  inline bool CheckForNull(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* data);

  /// @brief Method CheckTypeFormat, addr 0x3d1be00, size 0xc, virtual false, abstract: false, final false
  inline bool CheckTypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle test, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle want);

  /// @brief Method GetAssemblyId, addr 0x3d1af74, size 0x214, virtual false, abstract: false, final false
  inline int64_t GetAssemblyId(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);

  /// @brief Method GetNameInfo, addr 0x3d1cedc, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* GetNameInfo();

  /// @brief Method GetNext, addr 0x3d1b548, size 0x170, virtual false, abstract: false, final false
  inline ::System::Object* GetNext(::ByRef<int64_t> objID);

  /// @brief Method GetType, addr 0x3d1be0c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* GetType(::System::Object* obj);

  /// @brief Method InternalGetId, addr 0x3d1aeb0, size 0xc4, virtual false, abstract: false, final false
  inline int64_t InternalGetId(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type, ::ByRef<bool> isNew);

  /// @brief Method MemberToNameInfo, addr 0x3d1c0fc, size 0x20, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* MemberToNameInfo(::StringW name);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector,
                                                                                             ::System::Runtime::Serialization::StreamingContext context,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums,
                                                                                             ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method PutNameInfo, addr 0x3d1b530, size 0x18, virtual false, abstract: false, final false
  inline void PutNameInfo(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);

  /// @brief Method Schedule, addr 0x3d1cd40, size 0xc, virtual false, abstract: false, final false
  inline int64_t Schedule(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type);

  /// @brief Method Schedule, addr 0x3d1c6a8, size 0x8c, virtual false, abstract: false, final false
  inline int64_t Schedule(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);

  /// @brief Method Serialize, addr 0x3d1aabc, size 0x3d0, virtual false, abstract: false, final false
  inline void Serialize(::System::Object* graph, ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> inHeaders,
                        ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter, bool fCheck);

  /// @brief Method ToCode, addr 0x3d1be24, size 0x80, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type* type);

  /// @brief Method TypeToNameInfo, addr 0x3d1b188, size 0x44, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);

  /// @brief Method TypeToNameInfo, addr 0x3d1c658, size 0x50, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);

  /// @brief Method TypeToNameInfo, addr 0x3d1c1f8, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Type* type);

  /// @brief Method TypeToNameInfo, addr 0x3d1ce48, size 0x94, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code,
                                                                                        ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);

  /// @brief Method TypeToNameInfo, addr 0x3d1c620, size 0x38, virtual false, abstract: false, final false
  inline void TypeToNameInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo);

  /// @brief Method Write, addr 0x3d1b1cc, size 0x364, virtual false, abstract: false, final false
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                    ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);

  /// @brief Method Write, addr 0x3d1bea4, size 0x258, virtual false, abstract: false, final false
  inline void
  Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
        ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
        ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> memberData,
        ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*> memberObjectInfos);

  /// @brief Method WriteArray, addr 0x3d1b6c0, size 0x740, virtual false, abstract: false, final false
  inline void WriteArray(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                         ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);

  /// @brief Method WriteArrayMember, addr 0x3d1c844, size 0x274, virtual false, abstract: false, final false
  inline void WriteArrayMember(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                               ::System::Object* data);

  /// @brief Method WriteKnownValueClass, addr 0x3d1c750, size 0xf4, virtual false, abstract: false, final false
  inline bool WriteKnownValueClass(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                                   ::System::Object* data);

  /// @brief Method WriteMemberSetup, addr 0x3d1c11c, size 0xdc, virtual false, abstract: false, final false
  inline void WriteMemberSetup(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                               ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::StringW memberName, ::System::Type* memberType, ::System::Object* memberData,
                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);

  /// @brief Method WriteMembers, addr 0x3d1c234, size 0x334, virtual false, abstract: false, final false
  inline void WriteMembers(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberTypeNameInfo,
                           ::System::Object* memberData, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo);

  /// @brief Method WriteObjectRef, addr 0x3d1c734, size 0x1c, virtual false, abstract: false, final false
  inline void WriteObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int64_t objectId);

  /// @brief Method WriteRectangle, addr 0x3d1cab8, size 0x23c, virtual false, abstract: false, final false
  inline void WriteRectangle(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, int32_t rank, ::ArrayW<int32_t, ::Array<int32_t>*> maxA, ::System::Array* array,
                             ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemNameTypeInfo, ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA);

  /// @brief Method WriteSerializedStreamHeader, addr 0x3d1ae8c, size 0x24, virtual false, abstract: false, final false
  inline void WriteSerializedStreamHeader(int64_t topId, int64_t headerId);

  /// @brief Method WriteString, addr 0x3d1cd4c, size 0xfc, virtual false, abstract: false, final false
  inline void WriteString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                          ::System::Object* stringObject);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_assemblyToIdTable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_assemblyToIdTable();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_crossAppDomainArray() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_crossAppDomainArray();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE* const& __cordl_internal_get_formatterEnums() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE*& __cordl_internal_get_formatterEnums();

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __cordl_internal_get_headers() const;

  constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __cordl_internal_get_headers();

  constexpr ::System::Runtime::Serialization::SerializationBinder* const& __cordl_internal_get_m_binder() const;

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __cordl_internal_get_m_binder();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_m_context() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_m_context();

  constexpr int32_t const& __cordl_internal_get_m_currentId() const;

  constexpr int32_t& __cordl_internal_get_m_currentId();

  constexpr ::System::Runtime::Serialization::IFormatterConverter* const& __cordl_internal_get_m_formatterConverter() const;

  constexpr ::System::Runtime::Serialization::IFormatterConverter*& __cordl_internal_get_m_formatterConverter();

  constexpr ::System::Runtime::Serialization::ObjectIDGenerator* const& __cordl_internal_get_m_idGenerator() const;

  constexpr ::System::Runtime::Serialization::ObjectIDGenerator*& __cordl_internal_get_m_idGenerator();

  constexpr ::System::Runtime::Serialization::SerializationObjectManager* const& __cordl_internal_get_m_objectManager() const;

  constexpr ::System::Runtime::Serialization::SerializationObjectManager*& __cordl_internal_get_m_objectManager();

  constexpr ::System::Collections::Queue* const& __cordl_internal_get_m_objectQueue() const;

  constexpr ::System::Collections::Queue*& __cordl_internal_get_m_objectQueue();

  constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& __cordl_internal_get_m_surrogates() const;

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __cordl_internal_get_m_surrogates();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* const& __cordl_internal_get_niPool() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __cordl_internal_get_niPool();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __cordl_internal_get_previousCode() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __cordl_internal_get_previousCode();

  constexpr int64_t const& __cordl_internal_get_previousId() const;

  constexpr int64_t& __cordl_internal_get_previousId();

  constexpr ::System::Object* const& __cordl_internal_get_previousObj() const;

  constexpr ::System::Object*& __cordl_internal_get_previousObj();

  constexpr ::System::Type* const& __cordl_internal_get_previousType() const;

  constexpr ::System::Type*& __cordl_internal_get_previousType();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* const& __cordl_internal_get_serObjectInfoInit() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& __cordl_internal_get_serObjectInfoInit();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* const& __cordl_internal_get_serWriter() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*& __cordl_internal_get_serWriter();

  constexpr int64_t const& __cordl_internal_get_topId() const;

  constexpr int64_t& __cordl_internal_get_topId();

  constexpr ::StringW const& __cordl_internal_get_topName() const;

  constexpr ::StringW& __cordl_internal_get_topName();

  constexpr void __cordl_internal_set_assemblyToIdTable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_crossAppDomainArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_formatterEnums(::System::Runtime::Serialization::Formatters::Binary::InternalFE* value);

  constexpr void __cordl_internal_set_headers(::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value);

  constexpr void __cordl_internal_set_m_binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr void __cordl_internal_set_m_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set_m_currentId(int32_t value);

  constexpr void __cordl_internal_set_m_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value);

  constexpr void __cordl_internal_set_m_idGenerator(::System::Runtime::Serialization::ObjectIDGenerator* value);

  constexpr void __cordl_internal_set_m_objectManager(::System::Runtime::Serialization::SerializationObjectManager* value);

  constexpr void __cordl_internal_set_m_objectQueue(::System::Collections::Queue* value);

  constexpr void __cordl_internal_set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector* value);

  constexpr void __cordl_internal_set_niPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  constexpr void __cordl_internal_set_previousCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr void __cordl_internal_set_previousId(int64_t value);

  constexpr void __cordl_internal_set_previousObj(::System::Object* value);

  constexpr void __cordl_internal_set_previousType(::System::Type* value);

  constexpr void __cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);

  constexpr void __cordl_internal_set_serWriter(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* value);

  constexpr void __cordl_internal_set_topId(int64_t value);

  constexpr void __cordl_internal_set_topName(::StringW value);

  /// @brief Method .ctor, addr 0x3d1a9c8, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
                    ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method get_ObjectManager, addr 0x3d1b6b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationObjectManager* get_ObjectManager();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectWriter(ObjectWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectWriter(ObjectWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3289 };

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
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___m_objectQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___m_idGenerator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___m_currentId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___m_surrogates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___m_context) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___serWriter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___m_objectManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___topId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___topName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___headers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___formatterEnums) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___m_binder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___serObjectInfoInit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___m_formatterConverter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___crossAppDomainArray) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___previousObj) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___previousId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___previousType) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___previousCode) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___assemblyToIdTable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ___niPool) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter, 0xc0>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, "System.Runtime.Serialization.Formatters.Binary", "ObjectWriter");
