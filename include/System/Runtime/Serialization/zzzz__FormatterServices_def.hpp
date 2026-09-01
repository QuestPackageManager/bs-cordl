#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\FormatterServices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormatterServices)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class FormatterServices___c__DisplayClass9_0;
}
namespace System::Runtime::Serialization {
class MemberHolder;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FormatterServices;
}
namespace System::Runtime::Serialization {
class FormatterServices___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::FormatterServices*);
MARK_REF_T(::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::FormatterServices*, "System.Runtime.Serialization", "FormatterServices");
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0*, "System.Runtime.Serialization", "FormatterServices/<>c__DisplayClass9_0");
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.FormatterServices/<>c__DisplayClass9_0
class CORDL_TYPE FormatterServices___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0* New_ctor();

  /// @brief Method <GetSerializableMembers>b__0, addr 0x5b4f754, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*> _GetSerializableMembers_b__0(::System::Runtime::Serialization::MemberHolder* _);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x5b4e3fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatterServices___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormatterServices___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatterServices___c__DisplayClass9_0(FormatterServices___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatterServices___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatterServices___c__DisplayClass9_0(FormatterServices___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3229 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0, ___type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0) == 0x18, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object, System.Type
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.FormatterServices
class CORDL_TYPE FormatterServices : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass9_0 = ::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0;

  /// @brief Field advancedTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_advancedTypes, put = setStaticF_advancedTypes)) ::ArrayW<::System::Type*> advancedTypes;

  /// @brief Field m_MemberInfoTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_MemberInfoTable,
                      put = setStaticF_m_MemberInfoTable)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                                                                     ::ArrayW<::System::Reflection::MemberInfo*>>* m_MemberInfoTable;

  /// @brief Field s_binder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_binder, put = setStaticF_s_binder)) ::System::Reflection::Binder* s_binder;

  /// @brief Field unsafeTypeForwardersIsEnabled, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_unsafeTypeForwardersIsEnabled, put = setStaticF_unsafeTypeForwardersIsEnabled)) bool unsafeTypeForwardersIsEnabled;

  /// @brief Field unsafeTypeForwardersIsEnabledInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_unsafeTypeForwardersIsEnabledInitialized, put = setStaticF_unsafeTypeForwardersIsEnabledInitialized)) bool unsafeTypeForwardersIsEnabledInitialized;

  /// @brief Method CheckSerializable, addr 0x5b4d640, size 0x1c, virtual false, abstract: false, final false
  static inline bool CheckSerializable(::System::RuntimeType* type);

  /// @brief Method GetClrAssemblyName, addr 0x5b4f068, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW GetClrAssemblyName(::System::Type* type, ::by_ref<bool> hasTypeForwardedFrom);

  /// @brief Method GetClrTypeFullName, addr 0x5b4f1d4, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullName(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForArray, addr 0x5b4f268, size 0x27c, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameForArray(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForNonArrayTypes, addr 0x5b4f4e4, size 0x270, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameForNonArrayTypes(::System::Type* type);

  /// @brief Method GetEnableUnsafeTypeForwarders, addr 0x5b4e5c0, size 0x8, virtual false, abstract: false, final false
  static inline bool GetEnableUnsafeTypeForwarders();

  /// @brief Method GetObjectData, addr 0x5b4eb70, size 0x330, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*> GetObjectData(::System::Object* obj, ::ArrayW<::System::Reflection::MemberInfo*> members);

  /// @brief Method GetParentTypes, addr 0x5b4dd40, size 0x3a8, virtual false, abstract: false, final false
  static inline bool GetParentTypes(::System::RuntimeType* parentType, ::by_ref<::ArrayW<::System::RuntimeType*>> parentTypes, ::by_ref<int32_t> parentTypeCount);

  /// @brief Method GetSerializableMembers, addr 0x5b4d4ac, size 0x194, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*> GetSerializableMembers(::System::RuntimeType* type);

  /// @brief Method GetSerializableMembers, addr 0x5b4e170, size 0x28c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*> GetSerializableMembers(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetTypeFromAssembly, addr 0x5b4eeec, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromAssembly(::System::Reflection::Assembly* assem, ::StringW name);

  /// @brief Method GetUninitializedObject, addr 0x5b4e400, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Object* GetUninitializedObject(::System::Type* type);

  /// @brief Method InternalGetSerializableMembers, addr 0x5b4d65c, size 0x6e4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*> InternalGetSerializableMembers(::System::RuntimeType* type);

  /// @brief Method LoadAssemblyFromString, addr 0x5b4ef84, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadAssemblyFromString(::StringW assemblyName);

  /// @brief Method LoadAssemblyFromStringNoThrow, addr 0x5b4ef8c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(::StringW assemblyName);

  /// @brief Method PopulateObjectMembers, addr 0x5b4e88c, size 0x2e4, virtual false, abstract: false, final false
  static inline ::System::Object* PopulateObjectMembers(::System::Object* obj, ::ArrayW<::System::Reflection::MemberInfo*> members, ::ArrayW<::System::Object*> data);

  /// @brief Method SerializationSetValue, addr 0x5b4e674, size 0x19c, virtual false, abstract: false, final false
  static inline void SerializationSetValue(::System::Reflection::MemberInfo* fi, ::System::Object* target, ::System::Object* value);

  /// @brief Method UnsafeTypeForwardersIsEnabled, addr 0x5b4e5c8, size 0xac, virtual false, abstract: false, final false
  static inline bool UnsafeTypeForwardersIsEnabled();

  static inline ::ArrayW<::System::Type*> getStaticF_advancedTypes();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*>>* getStaticF_m_MemberInfoTable();

  static inline ::System::Reflection::Binder* getStaticF_s_binder();

  static inline bool getStaticF_unsafeTypeForwardersIsEnabled();

  static inline bool getStaticF_unsafeTypeForwardersIsEnabledInitialized();

  /// @brief Method nativeGetUninitializedObject, addr 0x5b4e5bc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* nativeGetUninitializedObject(::System::RuntimeType* type);

  static inline void setStaticF_advancedTypes(::ArrayW<::System::Type*> value);

  static inline void
  setStaticF_m_MemberInfoTable(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*>>* value);

  static inline void setStaticF_s_binder(::System::Reflection::Binder* value);

  static inline void setStaticF_unsafeTypeForwardersIsEnabled(bool value);

  static inline void setStaticF_unsafeTypeForwardersIsEnabledInitialized(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatterServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormatterServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatterServices(FormatterServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatterServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatterServices(FormatterServices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3230 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::FormatterServices) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Serialization
