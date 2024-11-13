#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ReadObjectInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadObjectInfo)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoCache;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class ObjectManager;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
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
class ReadObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo);
// Type: System.Runtime.Serialization.Formatters.Binary::ReadObjectInfo
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ReadObjectInfo*
class CORDL_TYPE ReadObjectInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field bSimpleAssembly, offset 0x2f, size 0x1
  __declspec(property(get = __cordl_internal_get_bSimpleAssembly, put = __cordl_internal_set_bSimpleAssembly)) bool bSimpleAssembly;

  /// @brief Field cache, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cache, put = __cordl_internal_set_cache)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;

  /// @brief Field context, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Runtime::Serialization::StreamingContext context;

  /// @brief Field count, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field formatterConverter, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_formatterConverter, put = __cordl_internal_set_formatterConverter)) ::System::Runtime::Serialization::IFormatterConverter* formatterConverter;

  /// @brief Field isNamed, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_isNamed, put = __cordl_internal_set_isNamed)) bool isNamed;

  /// @brief Field isSi, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_isSi, put = __cordl_internal_set_isSi)) bool isSi;

  /// @brief Field isTyped, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_isTyped, put = __cordl_internal_set_isTyped)) bool isTyped;

  /// @brief Field lastPosition, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_lastPosition, put = __cordl_internal_set_lastPosition)) int32_t lastPosition;

  /// @brief Field memberTypesList, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_memberTypesList, put = __cordl_internal_set_memberTypesList)) ::System::Collections::Generic::List_1<::System::Type*>* memberTypesList;

  /// @brief Field objectInfoId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_objectInfoId, put = __cordl_internal_set_objectInfoId)) int32_t objectInfoId;

  /// @brief Field objectManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_objectManager, put = __cordl_internal_set_objectManager)) ::System::Runtime::Serialization::ObjectManager* objectManager;

  /// @brief Field objectType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_objectType, put = __cordl_internal_set_objectType)) ::System::Type* objectType;

  /// @brief Field readObjectInfoCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_readObjectInfoCounter, put = setStaticF_readObjectInfoCounter)) int32_t readObjectInfoCounter;

  /// @brief Field serObjectInfoInit, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_serObjectInfoInit,
                      put = __cordl_internal_set_serObjectInfoInit)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;

  /// @brief Field serializationSurrogate, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_serializationSurrogate,
                      put = __cordl_internal_set_serializationSurrogate)) ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;

  /// @brief Field wireMemberNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_wireMemberNames, put = __cordl_internal_set_wireMemberNames)) ::ArrayW<::StringW, ::Array<::StringW>*> wireMemberNames;

  /// @brief Field wireMemberTypes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_wireMemberTypes, put = __cordl_internal_set_wireMemberTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> wireMemberTypes;

  /// @brief Method AddValue, addr 0x3ca700c, size 0x98, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, ::System::Object* value, ByRef<::System::Runtime::Serialization::SerializationInfo*> si,
                       ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData);

  /// @brief Method Create, addr 0x3ca6698, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
  Create(::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
         ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
         ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
         ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);

  /// @brief Method Create, addr 0x3ca63ec, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                             ::System::Runtime::Serialization::StreamingContext context,
                                                                                             ::System::Runtime::Serialization::ObjectManager* objectManager,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                             ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);

  /// @brief Method GetMemberInfo, addr 0x3ca6bb4, size 0x190, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* GetMemberInfo(::StringW name);

  /// @brief Method GetMemberType, addr 0x3ca6a4c, size 0x168, virtual false, abstract: false, final false
  inline ::System::Type* GetMemberType(::System::Reflection::MemberInfo* objMember);

  /// @brief Method GetMemberTypes, addr 0x3ca72b0, size 0x4f8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetMemberTypes(::ArrayW<::StringW, ::Array<::StringW>*> inMemberNames, ::System::Type* objectType);

  /// @brief Method GetObjectInfo, addr 0x3ca6474, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);

  /// @brief Method GetType, addr 0x3ca6e78, size 0x194, virtual false, abstract: false, final false
  inline ::System::Type* GetType(::StringW name);

  /// @brief Method Init, addr 0x3ca6734, size 0x50, virtual false, abstract: false, final false
  inline void Init(::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
                   ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
                   ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                   ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);

  /// @brief Method Init, addr 0x3ca64e4, size 0x1c, virtual false, abstract: false, final false
  inline void Init(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
                   ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                   ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);

  /// @brief Method InitDataStore, addr 0x3ca70a4, size 0xcc, virtual false, abstract: false, final false
  inline void InitDataStore(ByRef<::System::Runtime::Serialization::SerializationInfo*> si, ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData);

  /// @brief Method InitMemberInfo, addr 0x3ca6858, size 0x1f4, virtual false, abstract: false, final false
  inline void InitMemberInfo();

  /// @brief Method InitNoMembers, addr 0x3ca6784, size 0x5c, virtual false, abstract: false, final false
  inline void InitNoMembers();

  /// @brief Method InitReadConstructor, addr 0x3ca6500, size 0x198, virtual false, abstract: false, final false
  inline void InitReadConstructor(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InitSiRead, addr 0x3ca67e0, size 0x78, virtual false, abstract: false, final false
  inline void InitSiRead();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* New_ctor();

  /// @brief Method ObjectEnd, addr 0x3ca63e0, size 0x4, virtual false, abstract: false, final false
  inline void ObjectEnd();

  /// @brief Method PopulateObjectMembers, addr 0x3ca7214, size 0x9c, virtual false, abstract: false, final false
  inline void PopulateObjectMembers(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> memberData);

  /// @brief Method Position, addr 0x3ca6d44, size 0x134, virtual false, abstract: false, final false
  inline int32_t Position(::StringW name);

  /// @brief Method PrepareForReuse, addr 0x3ca63e4, size 0x8, virtual false, abstract: false, final false
  inline void PrepareForReuse();

  /// @brief Method RecordFixup, addr 0x3ca7170, size 0xa4, virtual false, abstract: false, final false
  inline void RecordFixup(int64_t objectId, ::StringW name, int64_t idRef);

  constexpr bool const& __cordl_internal_get_bSimpleAssembly() const;

  constexpr bool& __cordl_internal_get_bSimpleAssembly();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& __cordl_internal_get_cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*> const& __cordl_internal_get_cache() const;

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_context() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_context();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Runtime::Serialization::IFormatterConverter*& __cordl_internal_get_formatterConverter();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::IFormatterConverter*> const& __cordl_internal_get_formatterConverter() const;

  constexpr bool const& __cordl_internal_get_isNamed() const;

  constexpr bool& __cordl_internal_get_isNamed();

  constexpr bool const& __cordl_internal_get_isSi() const;

  constexpr bool& __cordl_internal_get_isSi();

  constexpr bool const& __cordl_internal_get_isTyped() const;

  constexpr bool& __cordl_internal_get_isTyped();

  constexpr int32_t const& __cordl_internal_get_lastPosition() const;

  constexpr int32_t& __cordl_internal_get_lastPosition();

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get_memberTypesList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __cordl_internal_get_memberTypesList() const;

  constexpr int32_t const& __cordl_internal_get_objectInfoId() const;

  constexpr int32_t& __cordl_internal_get_objectInfoId();

  constexpr ::System::Runtime::Serialization::ObjectManager*& __cordl_internal_get_objectManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectManager*> const& __cordl_internal_get_objectManager() const;

  constexpr ::System::Type*& __cordl_internal_get_objectType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_objectType() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& __cordl_internal_get_serObjectInfoInit();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> const& __cordl_internal_get_serObjectInfoInit() const;

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& __cordl_internal_get_serializationSurrogate();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const& __cordl_internal_get_serializationSurrogate() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_wireMemberNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_wireMemberNames();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_wireMemberTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_wireMemberTypes();

  constexpr void __cordl_internal_set_bSimpleAssembly(bool value);

  constexpr void __cordl_internal_set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value);

  constexpr void __cordl_internal_set_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value);

  constexpr void __cordl_internal_set_isNamed(bool value);

  constexpr void __cordl_internal_set_isSi(bool value);

  constexpr void __cordl_internal_set_isTyped(bool value);

  constexpr void __cordl_internal_set_lastPosition(int32_t value);

  constexpr void __cordl_internal_set_memberTypesList(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_objectInfoId(int32_t value);

  constexpr void __cordl_internal_set_objectManager(::System::Runtime::Serialization::ObjectManager* value);

  constexpr void __cordl_internal_set_objectType(::System::Type* value);

  constexpr void __cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);

  constexpr void __cordl_internal_set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value);

  constexpr void __cordl_internal_set_wireMemberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_wireMemberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x3ca63d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_readObjectInfoCounter();

  static inline void setStaticF_readObjectInfoCounter(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadObjectInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadObjectInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadObjectInfo(ReadObjectInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadObjectInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadObjectInfo(ReadObjectInfo const&) = delete;

  /// @brief Field objectInfoId, offset: 0x10, size: 0x4, def value: None
  int32_t ___objectInfoId;

  /// @brief Field objectType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___objectType;

  /// @brief Field objectManager, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::ObjectManager* ___objectManager;

  /// @brief Field count, offset: 0x28, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field isSi, offset: 0x2c, size: 0x1, def value: None
  bool ___isSi;

  /// @brief Field isNamed, offset: 0x2d, size: 0x1, def value: None
  bool ___isNamed;

  /// @brief Field isTyped, offset: 0x2e, size: 0x1, def value: None
  bool ___isTyped;

  /// @brief Field bSimpleAssembly, offset: 0x2f, size: 0x1, def value: None
  bool ___bSimpleAssembly;

  /// @brief Field cache, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* ___cache;

  /// @brief Field wireMemberNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___wireMemberNames;

  /// @brief Field wireMemberTypes, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___wireMemberTypes;

  /// @brief Field lastPosition, offset: 0x48, size: 0x4, def value: None
  int32_t ___lastPosition;

  /// @brief Field serializationSurrogate, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISerializationSurrogate* ___serializationSurrogate;

  /// @brief Field context, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___context;

  /// @brief Field memberTypesList, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ___memberTypesList;

  /// @brief Field serObjectInfoInit, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* ___serObjectInfoInit;

  /// @brief Field formatterConverter, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::Serialization::IFormatterConverter* ___formatterConverter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3282 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___objectInfoId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___objectType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___objectManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___count) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___isSi) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___isNamed) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___isTyped) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___bSimpleAssembly) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___cache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___wireMemberNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___wireMemberTypes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___lastPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___serializationSurrogate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___context) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___memberTypesList) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___serObjectInfoInit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, ___formatterConverter) == 0x78, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
