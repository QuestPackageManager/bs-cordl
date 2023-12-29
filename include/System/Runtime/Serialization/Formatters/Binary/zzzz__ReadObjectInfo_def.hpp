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
CORDL_MODULE_EXPORT(ReadObjectInfo)
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class ObjectManager;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoCache;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo);
// Type: System.Runtime.Serialization.Formatters.Binary::ReadObjectInfo
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3234))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3281))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ReadObjectInfo*
class CORDL_TYPE ReadObjectInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectInfoId, offset 0x10, size 0x4
  __declspec(property(get = __get_objectInfoId, put = __set_objectInfoId)) int32_t objectInfoId;

  /// @brief Field objectType, offset 0x18, size 0x8
  __declspec(property(get = __get_objectType, put = __set_objectType))::System::Type* objectType;

  /// @brief Field objectManager, offset 0x20, size 0x8
  __declspec(property(get = __get_objectManager, put = __set_objectManager))::System::Runtime::Serialization::ObjectManager* objectManager;

  /// @brief Field count, offset 0x28, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field isSi, offset 0x2c, size 0x1
  __declspec(property(get = __get_isSi, put = __set_isSi)) bool isSi;

  /// @brief Field isNamed, offset 0x2d, size 0x1
  __declspec(property(get = __get_isNamed, put = __set_isNamed)) bool isNamed;

  /// @brief Field isTyped, offset 0x2e, size 0x1
  __declspec(property(get = __get_isTyped, put = __set_isTyped)) bool isTyped;

  /// @brief Field bSimpleAssembly, offset 0x2f, size 0x1
  __declspec(property(get = __get_bSimpleAssembly, put = __set_bSimpleAssembly)) bool bSimpleAssembly;

  /// @brief Field cache, offset 0x30, size 0x8
  __declspec(property(get = __get_cache, put = __set_cache))::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;

  /// @brief Field wireMemberNames, offset 0x38, size 0x8
  __declspec(property(get = __get_wireMemberNames, put = __set_wireMemberNames))::ArrayW<::StringW, ::Array<::StringW>*> wireMemberNames;

  /// @brief Field wireMemberTypes, offset 0x40, size 0x8
  __declspec(property(get = __get_wireMemberTypes, put = __set_wireMemberTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> wireMemberTypes;

  /// @brief Field lastPosition, offset 0x48, size 0x4
  __declspec(property(get = __get_lastPosition, put = __set_lastPosition)) int32_t lastPosition;

  /// @brief Field serializationSurrogate, offset 0x50, size 0x8
  __declspec(property(get = __get_serializationSurrogate, put = __set_serializationSurrogate))::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;

  /// @brief Field context, offset 0x58, size 0x10
  __declspec(property(get = __get_context, put = __set_context))::System::Runtime::Serialization::StreamingContext context;

  /// @brief Field memberTypesList, offset 0x68, size 0x8
  __declspec(property(get = __get_memberTypesList, put = __set_memberTypesList))::System::Collections::Generic::List_1<::System::Type*>* memberTypesList;

  /// @brief Field serObjectInfoInit, offset 0x70, size 0x8
  __declspec(property(get = __get_serObjectInfoInit, put = __set_serObjectInfoInit))::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;

  /// @brief Field formatterConverter, offset 0x78, size 0x8
  __declspec(property(get = __get_formatterConverter, put = __set_formatterConverter))::System::Runtime::Serialization::IFormatterConverter* formatterConverter;

  /// @brief Field readObjectInfoCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_readObjectInfoCounter, put = setStaticF_readObjectInfoCounter)) int32_t readObjectInfoCounter;

  constexpr int32_t& __get_objectInfoId();

  constexpr int32_t const& __get_objectInfoId() const;

  constexpr void __set_objectInfoId(int32_t value);

  constexpr ::System::Type*& __get_objectType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_objectType() const;

  constexpr void __set_objectType(::System::Type* value);

  constexpr ::System::Runtime::Serialization::ObjectManager*& __get_objectManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectManager*> const& __get_objectManager() const;

  constexpr void __set_objectManager(::System::Runtime::Serialization::ObjectManager* value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr bool& __get_isSi();

  constexpr bool const& __get_isSi() const;

  constexpr void __set_isSi(bool value);

  constexpr bool& __get_isNamed();

  constexpr bool const& __get_isNamed() const;

  constexpr void __set_isNamed(bool value);

  constexpr bool& __get_isTyped();

  constexpr bool const& __get_isTyped() const;

  constexpr void __set_isTyped(bool value);

  constexpr bool& __get_bSimpleAssembly();

  constexpr bool const& __get_bSimpleAssembly() const;

  constexpr void __set_bSimpleAssembly(bool value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& __get_cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*> const& __get_cache() const;

  constexpr void __set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_wireMemberNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_wireMemberNames() const;

  constexpr void __set_wireMemberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get_wireMemberTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get_wireMemberTypes() const;

  constexpr void __set_wireMemberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr int32_t& __get_lastPosition();

  constexpr int32_t const& __get_lastPosition() const;

  constexpr void __set_lastPosition(int32_t value);

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& __get_serializationSurrogate();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const& __get_serializationSurrogate() const;

  constexpr void __set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __get_context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __get_context() const;

  constexpr void __set_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __get_memberTypesList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __get_memberTypesList() const;

  constexpr void __set_memberTypesList(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& __get_serObjectInfoInit();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> const& __get_serObjectInfoInit() const;

  constexpr void __set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);

  constexpr ::System::Runtime::Serialization::IFormatterConverter*& __get_formatterConverter();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::IFormatterConverter*> const& __get_formatterConverter() const;

  constexpr void __set_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value);

  static inline void setStaticF_readObjectInfoCounter(int32_t value);

  static inline int32_t getStaticF_readObjectInfoCounter();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* New_ctor();

  /// @brief Method .ctor addr 0x2370868 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method ObjectEnd addr 0x2370870 size 0x4 virtual false final false
  inline void ObjectEnd();

  /// @brief Method PrepareForReuse addr 0x236b4d8 size 0x8 virtual false final false
  inline void PrepareForReuse();

  /// @brief Method Create addr 0x2370874 size 0x88 virtual false final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                             ::System::Runtime::Serialization::StreamingContext context,
                                                                                             ::System::Runtime::Serialization::ObjectManager* objectManager,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                             ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);

  /// @brief Method Init addr 0x237096c size 0x1c virtual false final false
  inline void Init(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
                   ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                   ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);

  /// @brief Method Create addr 0x2370b24 size 0x9c virtual false final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
  Create(::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
         ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
         ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
         ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);

  /// @brief Method Init addr 0x2370bc0 size 0x50 virtual false final false
  inline void Init(::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
                   ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
                   ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                   ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);

  /// @brief Method InitReadConstructor addr 0x2370988 size 0x19c virtual false final false
  inline void InitReadConstructor(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InitSiRead addr 0x2370c78 size 0x80 virtual false final false
  inline void InitSiRead();

  /// @brief Method InitNoMembers addr 0x2370c10 size 0x68 virtual false final false
  inline void InitNoMembers();

  /// @brief Method InitMemberInfo addr 0x2370cf8 size 0x210 virtual false final false
  inline void InitMemberInfo();

  /// @brief Method GetMemberInfo addr 0x2371074 size 0x1b8 virtual false final false
  inline ::System::Reflection::MemberInfo* GetMemberInfo(::StringW name);

  /// @brief Method GetType addr 0x2371360 size 0x1ac virtual false final false
  inline ::System::Type* GetType(::StringW name);

  /// @brief Method AddValue addr 0x237150c size 0x94 virtual false final false
  inline void AddValue(::StringW name, ::System::Object* value, ByRef<::System::Runtime::Serialization::SerializationInfo*> si,
                       ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData);

  /// @brief Method InitDataStore addr 0x236b408 size 0xd0 virtual false final false
  inline void InitDataStore(ByRef<::System::Runtime::Serialization::SerializationInfo*> si, ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData);

  /// @brief Method RecordFixup addr 0x23715a0 size 0xa4 virtual false final false
  inline void RecordFixup(int64_t objectId, ::StringW name, int64_t idRef);

  /// @brief Method PopulateObjectMembers addr 0x2371644 size 0x1098 virtual false final false
  inline void PopulateObjectMembers(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> memberData);

  /// @brief Method Position addr 0x237122c size 0x134 virtual false final false
  inline int32_t Position(::StringW name);

  /// @brief Method GetMemberTypes addr 0x236ac18 size 0x4cc virtual false final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetMemberTypes(::ArrayW<::StringW, ::Array<::StringW>*> inMemberNames, ::System::Type* objectType);

  /// @brief Method GetMemberType addr 0x2370f08 size 0x16c virtual false final false
  inline ::System::Type* GetMemberType(::System::Reflection::MemberInfo* objMember);

  /// @brief Method GetObjectInfo addr 0x23708fc size 0x70 virtual false final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);

  // Ctor Parameters [CppParam { name: "", ty: "ReadObjectInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadObjectInfo(ReadObjectInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadObjectInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadObjectInfo(ReadObjectInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadObjectInfo();

public:
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
