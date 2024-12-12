#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/WriteObjectInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WriteObjectInfo)
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
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
class SerializationBinder;
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
class WriteObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo);
// Dependencies System.Object, System.Runtime.Serialization.StreamingContext
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
class CORDL_TYPE WriteObjectInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemId, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_assemId, put = __cordl_internal_set_assemId)) int64_t assemId;

  /// @brief Field binderAssemblyString, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_binderAssemblyString, put = __cordl_internal_set_binderAssemblyString)) ::StringW binderAssemblyString;

  /// @brief Field binderTypeName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_binderTypeName, put = __cordl_internal_set_binderTypeName)) ::StringW binderTypeName;

  /// @brief Field cache, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cache, put = __cordl_internal_set_cache)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;

  /// @brief Field context, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Runtime::Serialization::StreamingContext context;

  /// @brief Field isArray, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_isArray, put = __cordl_internal_set_isArray)) bool isArray;

  /// @brief Field isNamed, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_isNamed, put = __cordl_internal_set_isNamed)) bool isNamed;

  /// @brief Field isSi, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isSi, put = __cordl_internal_set_isSi)) bool isSi;

  /// @brief Field isTyped, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_isTyped, put = __cordl_internal_set_isTyped)) bool isTyped;

  /// @brief Field memberData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_memberData, put = __cordl_internal_set_memberData)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> memberData;

  /// @brief Field obj, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::System::Object* obj;

  /// @brief Field objectId, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_objectId, put = __cordl_internal_set_objectId)) int64_t objectId;

  /// @brief Field objectInfoId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_objectInfoId, put = __cordl_internal_set_objectInfoId)) int32_t objectInfoId;

  /// @brief Field objectType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_objectType, put = __cordl_internal_set_objectType)) ::System::Type* objectType;

  /// @brief Field serObjectInfoInit, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_serObjectInfoInit,
                      put = __cordl_internal_set_serObjectInfoInit)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;

  /// @brief Field serializationSurrogate, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_serializationSurrogate,
                      put = __cordl_internal_set_serializationSurrogate)) ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;

  /// @brief Field si, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_si, put = __cordl_internal_set_si)) ::System::Runtime::Serialization::SerializationInfo* si;

  /// @brief Method CheckTypeForwardedFrom, addr 0x3d059a4, size 0x158, virtual false, abstract: false, final false
  static inline void CheckTypeForwardedFrom(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache, ::System::Type* objectType, ::StringW binderAssemblyString);

  /// @brief Method GetAssemblyString, addr 0x3d06378, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetAssemblyString();

  /// @brief Method GetMemberInfo, addr 0x3d063a0, size 0xa0, virtual false, abstract: false, final false
  inline void GetMemberInfo(::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> outMemberNames, ::ByRef<::ArrayW<::System::Type*, ::Array<::System::Type*>*>> outMemberTypes,
                            ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> outMemberData);

  /// @brief Method GetMemberType, addr 0x3d061e8, size 0x168, virtual false, abstract: false, final false
  inline ::System::Type* GetMemberType(::System::Reflection::MemberInfo* objMember);

  /// @brief Method GetObjectInfo, addr 0x3d05008, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);

  /// @brief Method GetTypeFullName, addr 0x3d06350, size 0x28, virtual false, abstract: false, final false
  inline ::StringW GetTypeFullName();

  /// @brief Method InitMemberInfo, addr 0x3d05afc, size 0x2c0, virtual false, abstract: false, final false
  inline void InitMemberInfo();

  /// @brief Method InitNoMembers, addr 0x3d055b4, size 0xe0, virtual false, abstract: false, final false
  inline void InitNoMembers();

  /// @brief Method InitSerialize, addr 0x3d050d4, size 0x4e0, virtual false, abstract: false, final false
  inline void InitSerialize(::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
                            ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
                            ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method InitSerialize, addr 0x3d05e44, size 0x2dc, virtual false, abstract: false, final false
  inline void InitSerialize(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
                            ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
                            ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method InitSiWrite, addr 0x3d056bc, size 0x2e8, virtual false, abstract: false, final false
  inline void InitSiWrite();

  /// @brief Method InternalInit, addr 0x3d04f58, size 0x20, virtual false, abstract: false, final false
  inline void InternalInit();

  /// @brief Method InvokeSerializationBinder, addr 0x3d05694, size 0x28, virtual false, abstract: false, final false
  inline void InvokeSerializationBinder(::System::Runtime::Serialization::SerializationBinder* binder);

  static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* New_ctor();

  /// @brief Method ObjectEnd, addr 0x3d04f30, size 0xc, virtual false, abstract: false, final false
  inline void ObjectEnd();

  /// @brief Method PutObjectInfo, addr 0x3d04f3c, size 0x1c, virtual false, abstract: false, final false
  static inline void PutObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                   ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);

  /// @brief Method Serialize, addr 0x3d04f78, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*
  Serialize(::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
            ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
            ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method Serialize, addr 0x3d05dbc, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                                 ::System::Runtime::Serialization::StreamingContext context,
                                                                                                 ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                                 ::System::Runtime::Serialization::IFormatterConverter* converter,
                                                                                                 ::System::Runtime::Serialization::SerializationBinder* binder);

  constexpr int64_t const& __cordl_internal_get_assemId() const;

  constexpr int64_t& __cordl_internal_get_assemId();

  constexpr ::StringW const& __cordl_internal_get_binderAssemblyString() const;

  constexpr ::StringW& __cordl_internal_get_binderAssemblyString();

  constexpr ::StringW const& __cordl_internal_get_binderTypeName() const;

  constexpr ::StringW& __cordl_internal_get_binderTypeName();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* const& __cordl_internal_get_cache() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& __cordl_internal_get_cache();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get_context() const;

  constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get_context();

  constexpr bool const& __cordl_internal_get_isArray() const;

  constexpr bool& __cordl_internal_get_isArray();

  constexpr bool const& __cordl_internal_get_isNamed() const;

  constexpr bool& __cordl_internal_get_isNamed();

  constexpr bool const& __cordl_internal_get_isSi() const;

  constexpr bool& __cordl_internal_get_isSi();

  constexpr bool const& __cordl_internal_get_isTyped() const;

  constexpr bool& __cordl_internal_get_isTyped();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_memberData() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_memberData();

  constexpr ::System::Object* const& __cordl_internal_get_obj() const;

  constexpr ::System::Object*& __cordl_internal_get_obj();

  constexpr int64_t const& __cordl_internal_get_objectId() const;

  constexpr int64_t& __cordl_internal_get_objectId();

  constexpr int32_t const& __cordl_internal_get_objectInfoId() const;

  constexpr int32_t& __cordl_internal_get_objectInfoId();

  constexpr ::System::Type* const& __cordl_internal_get_objectType() const;

  constexpr ::System::Type*& __cordl_internal_get_objectType();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* const& __cordl_internal_get_serObjectInfoInit() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& __cordl_internal_get_serObjectInfoInit();

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate* const& __cordl_internal_get_serializationSurrogate() const;

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& __cordl_internal_get_serializationSurrogate();

  constexpr ::System::Runtime::Serialization::SerializationInfo* const& __cordl_internal_get_si() const;

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get_si();

  constexpr void __cordl_internal_set_assemId(int64_t value);

  constexpr void __cordl_internal_set_binderAssemblyString(::StringW value);

  constexpr void __cordl_internal_set_binderTypeName(::StringW value);

  constexpr void __cordl_internal_set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value);

  constexpr void __cordl_internal_set_context(::System::Runtime::Serialization::StreamingContext value);

  constexpr void __cordl_internal_set_isArray(bool value);

  constexpr void __cordl_internal_set_isNamed(bool value);

  constexpr void __cordl_internal_set_isSi(bool value);

  constexpr void __cordl_internal_set_isTyped(bool value);

  constexpr void __cordl_internal_set_memberData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_obj(::System::Object* value);

  constexpr void __cordl_internal_set_objectId(int64_t value);

  constexpr void __cordl_internal_set_objectInfoId(int32_t value);

  constexpr void __cordl_internal_set_objectType(::System::Type* value);

  constexpr void __cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value);

  constexpr void __cordl_internal_set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value);

  constexpr void __cordl_internal_set_si(::System::Runtime::Serialization::SerializationInfo* value);

  /// @brief Method .ctor, addr 0x3d04f28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WriteObjectInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WriteObjectInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WriteObjectInfo(WriteObjectInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WriteObjectInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WriteObjectInfo(WriteObjectInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3281 };

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

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, 0x88>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
