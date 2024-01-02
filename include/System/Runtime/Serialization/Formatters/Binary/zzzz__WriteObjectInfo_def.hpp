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
CORDL_MODULE_EXPORT(WriteObjectInfo)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoCache;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo);
// Type: System.Runtime.Serialization.Formatters.Binary::WriteObjectInfo
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3235))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3281))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::WriteObjectInfo*
class CORDL_TYPE WriteObjectInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectInfoId, offset 0x10, size 0x4
  __declspec(property(get = __get_objectInfoId, put = __set_objectInfoId)) int32_t objectInfoId;

  /// @brief Field obj, offset 0x18, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::System::Object* obj;

  /// @brief Field objectType, offset 0x20, size 0x8
  __declspec(property(get = __get_objectType, put = __set_objectType))::System::Type* objectType;

  /// @brief Field isSi, offset 0x28, size 0x1
  __declspec(property(get = __get_isSi, put = __set_isSi)) bool isSi;

  /// @brief Field isNamed, offset 0x29, size 0x1
  __declspec(property(get = __get_isNamed, put = __set_isNamed)) bool isNamed;

  /// @brief Field isTyped, offset 0x2a, size 0x1
  __declspec(property(get = __get_isTyped, put = __set_isTyped)) bool isTyped;

  /// @brief Field isArray, offset 0x2b, size 0x1
  __declspec(property(get = __get_isArray, put = __set_isArray)) bool isArray;

  /// @brief Field si, offset 0x30, size 0x8
  __declspec(property(get = __get_si, put = __set_si))::System::Runtime::Serialization::SerializationInfo* si;

  /// @brief Field cache, offset 0x38, size 0x8
  __declspec(property(get = __get_cache, put = __set_cache))::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;

  /// @brief Field memberData, offset 0x40, size 0x8
  __declspec(property(get = __get_memberData, put = __set_memberData))::ArrayW<::System::Object*, ::Array<::System::Object*>*> memberData;

  /// @brief Field serializationSurrogate, offset 0x48, size 0x8
  __declspec(property(get = __get_serializationSurrogate, put = __set_serializationSurrogate))::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;

  /// @brief Field context, offset 0x50, size 0x10
  __declspec(property(get = __get_context, put = __set_context))::System::Runtime::Serialization::StreamingContext context;

  /// @brief Field serObjectInfoInit, offset 0x60, size 0x8
  __declspec(property(get = __get_serObjectInfoInit, put = __set_serObjectInfoInit))::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;

  /// @brief Field objectId, offset 0x68, size 0x8
  __declspec(property(get = __get_objectId, put = __set_objectId)) int64_t objectId;

  /// @brief Field assemId, offset 0x70, size 0x8
  __declspec(property(get = __get_assemId, put = __set_assemId)) int64_t assemId;

  /// @brief Field binderTypeName, offset 0x78, size 0x8
  __declspec(property(get = __get_binderTypeName, put = __set_binderTypeName))::StringW binderTypeName;

  /// @brief Field binderAssemblyString, offset 0x80, size 0x8
  __declspec(property(get = __get_binderAssemblyString, put = __set_binderAssemblyString))::StringW binderAssemblyString;

  constexpr int32_t& __get_objectInfoId();

  constexpr int32_t const& __get_objectInfoId() const;

  constexpr void __set_objectInfoId(int32_t value);

  constexpr ::System::Object*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_obj() const;

  constexpr void __set_obj(::System::Object* value);

  constexpr ::System::Type*& __get_objectType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_objectType() const;

  constexpr void __set_objectType(::System::Type* value);

  constexpr bool& __get_isSi();

  constexpr bool const& __get_isSi() const;

  constexpr void __set_isSi(bool value);

  constexpr bool& __get_isNamed();

  constexpr bool const& __get_isNamed() const;

  constexpr void __set_isNamed(bool value);

  constexpr bool& __get_isTyped();

  constexpr bool const& __get_isTyped() const;

  constexpr void __set_isTyped(bool value);

  constexpr bool& __get_isArray();

  constexpr bool const& __get_isArray() const;

  constexpr void __set_isArray(bool value);

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __get_si();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __get_si() const;

  constexpr void __set_si(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& __get_cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*> const& __get_cache() const;

  constexpr void __set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_memberData();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_memberData() const;

  constexpr void __set_memberData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& __get_serializationSurrogate();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const& __get_serializationSurrogate() const;

  constexpr void __set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __get_context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __get_context() const;

  constexpr void __set_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& __get_serObjectInfoInit();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> const& __get_serObjectInfoInit() const;

  constexpr void __set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);

  constexpr int64_t& __get_objectId();

  constexpr int64_t const& __get_objectId() const;

  constexpr void __set_objectId(int64_t value);

  constexpr int64_t& __get_assemId();

  constexpr int64_t const& __get_assemId() const;

  constexpr void __set_assemId(int64_t value);

  constexpr ::StringW& __get_binderTypeName();

  constexpr ::StringW const& __get_binderTypeName() const;

  constexpr void __set_binderTypeName(::StringW value);

  constexpr ::StringW& __get_binderAssemblyString();

  constexpr ::StringW const& __get_binderAssemblyString() const;

  constexpr void __set_binderAssemblyString(::StringW value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* New_ctor();

  /// @brief Method .ctor, addr 0x24c7f2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method ObjectEnd, addr 0x24c7f34, size 0xc, virtual false, abstract: false, final false
  inline void ObjectEnd();

  /// @brief Method InternalInit, addr 0x24c7f60, size 0x20, virtual false, abstract: false, final false
  inline void InternalInit();

  /// @brief Method Serialize, addr 0x24c7f80, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*
  Serialize(::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
            ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
            ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method InitSerialize, addr 0x24c80e8, size 0x4d8, virtual false, abstract: false, final false
  inline void InitSerialize(::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
                            ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
                            ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method Serialize, addr 0x24c8df8, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                                 ::System::Runtime::Serialization::StreamingContext context,
                                                                                                 ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                                 ::System::Runtime::Serialization::IFormatterConverter* converter,
                                                                                                 ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method InitSerialize, addr 0x24c8e80, size 0x2dc, virtual false, abstract: false, final false
  inline void InitSerialize(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
                            ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
                            ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method InitSiWrite, addr 0x24c86d0, size 0x2f8, virtual false, abstract: false, final false
  inline void InitSiWrite();

  /// @brief Method CheckTypeForwardedFrom, addr 0x24c89c8, size 0x158, virtual false, abstract: false, final false
  static inline void CheckTypeForwardedFrom(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache, ::System::Type* objectType, ::StringW binderAssemblyString);

  /// @brief Method InitNoMembers, addr 0x24c85c0, size 0xe8, virtual false, abstract: false, final false
  inline void InitNoMembers();

  /// @brief Method InitMemberInfo, addr 0x24c8b20, size 0x2d8, virtual false, abstract: false, final false
  inline void InitMemberInfo();

  /// @brief Method GetTypeFullName, addr 0x24c04bc, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetTypeFullName();

  /// @brief Method GetAssemblyString, addr 0x24c0494, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetAssemblyString();

  /// @brief Method InvokeSerializationBinder, addr 0x24c86a8, size 0x28, virtual false, abstract: false, final false
  inline void InvokeSerializationBinder(::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method GetMemberType, addr 0x24c915c, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Type* GetMemberType(::System::Reflection::MemberInfo* objMember);

  /// @brief Method GetMemberInfo, addr 0x24c92c8, size 0xa4, virtual false, abstract: false, final false
  inline void GetMemberInfo(ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> outMemberNames, ByRef<::ArrayW<::System::Type*, ::Array<::System::Type*>*>> outMemberTypes,
                            ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> outMemberData);

  /// @brief Method GetObjectInfo, addr 0x24c8010, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);

  /// @brief Method PutObjectInfo, addr 0x24c7f40, size 0x20, virtual false, abstract: false, final false
  static inline void PutObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                   ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);

  // Ctor Parameters [CppParam { name: "", ty: "WriteObjectInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WriteObjectInfo(WriteObjectInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WriteObjectInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WriteObjectInfo(WriteObjectInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WriteObjectInfo();

public:
  /// @brief Field objectInfoId, offset: 0x10, size: 0x4, def value: None
  int32_t ___objectInfoId;

  /// @brief Field obj, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___obj;

  /// @brief Field objectType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___objectType;

  /// @brief Field isSi, offset: 0x28, size: 0x1, def value: None
  bool ___isSi;

  /// @brief Field isNamed, offset: 0x29, size: 0x1, def value: None
  bool ___isNamed;

  /// @brief Field isTyped, offset: 0x2a, size: 0x1, def value: None
  bool ___isTyped;

  /// @brief Field isArray, offset: 0x2b, size: 0x1, def value: None
  bool ___isArray;

  /// @brief Field si, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ___si;

  /// @brief Field cache, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* ___cache;

  /// @brief Field memberData, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___memberData;

  /// @brief Field serializationSurrogate, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISerializationSurrogate* ___serializationSurrogate;

  /// @brief Field context, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ___context;

  /// @brief Field serObjectInfoInit, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* ___serObjectInfoInit;

  /// @brief Field objectId, offset: 0x68, size: 0x8, def value: None
  int64_t ___objectId;

  /// @brief Field assemId, offset: 0x70, size: 0x8, def value: None
  int64_t ___assemId;

  /// @brief Field binderTypeName, offset: 0x78, size: 0x8, def value: None
  ::StringW ___binderTypeName;

  /// @brief Field binderAssemblyString, offset: 0x80, size: 0x8, def value: None
  ::StringW ___binderAssemblyString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___objectInfoId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___obj) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___objectType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___isSi) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___isNamed) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___isTyped) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___isArray) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___si) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___cache) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___memberData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___serializationSurrogate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___context) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___serObjectInfoInit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___objectId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___assemId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___binderTypeName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ___binderAssemblyString) == 0x80, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
