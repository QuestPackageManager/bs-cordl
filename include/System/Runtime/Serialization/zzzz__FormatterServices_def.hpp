#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/FormatterServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Runtime::Serialization::FormatterServices);
MARK_REF_PTR_T(::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0);
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

  /// @brief Method <GetSerializableMembers>b__0, addr 0x3cfbc3c, size 0xac, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> _GetSerializableMembers_b__0(::System::Runtime::Serialization::MemberHolder* _);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x3cfa854, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3212 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.FormatterServices
class CORDL_TYPE FormatterServices : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass9_0 = ::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0;

  /// @brief Field advancedTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_advancedTypes, put = setStaticF_advancedTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> advancedTypes;

  /// @brief Field m_MemberInfoTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_MemberInfoTable, put = setStaticF_m_MemberInfoTable)) ::System::Collections::Concurrent::ConcurrentDictionary_2<
      ::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>* m_MemberInfoTable;

  /// @brief Field s_binder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_binder, put = setStaticF_s_binder)) ::System::Reflection::Binder* s_binder;

  /// @brief Field unsafeTypeForwardersIsEnabled, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_unsafeTypeForwardersIsEnabled, put = setStaticF_unsafeTypeForwardersIsEnabled)) bool unsafeTypeForwardersIsEnabled;

  /// @brief Field unsafeTypeForwardersIsEnabledInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_unsafeTypeForwardersIsEnabledInitialized, put = setStaticF_unsafeTypeForwardersIsEnabledInitialized)) bool unsafeTypeForwardersIsEnabledInitialized;

  /// @brief Method CheckSerializable, addr 0x3cf9a2c, size 0x20, virtual false, abstract: false, final false
  static inline bool CheckSerializable(::System::RuntimeType* type);

  /// @brief Method GetClrAssemblyName, addr 0x3cfb5bc, size 0x168, virtual false, abstract: false, final false
  static inline ::StringW GetClrAssemblyName(::System::Type* type, ::ByRef<bool> hasTypeForwardedFrom);

  /// @brief Method GetClrTypeFullName, addr 0x3cfb724, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullName(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForArray, addr 0x3cfb7a4, size 0x224, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameForArray(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForNonArrayTypes, addr 0x3cfb9c8, size 0x274, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameForNonArrayTypes(::System::Type* type);

  /// @brief Method GetEnableUnsafeTypeForwarders, addr 0x3cfaa1c, size 0x8, virtual false, abstract: false, final false
  static inline bool GetEnableUnsafeTypeForwarders();

  /// @brief Method GetObjectData, addr 0x3cfb060, size 0x368, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetObjectData(::System::Object* obj,
                                                                                       ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members);

  /// @brief Method GetParentTypes, addr 0x3cfa13c, size 0x3fc, virtual false, abstract: false, final false
  static inline bool GetParentTypes(::System::RuntimeType* parentType, ::ByRef<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>> parentTypes, ::ByRef<int32_t> parentTypeCount);

  /// @brief Method GetSerializableMembers, addr 0x3cf989c, size 0x190, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetSerializableMembers(::System::RuntimeType* type);

  /// @brief Method GetSerializableMembers, addr 0x3cfa5c8, size 0x28c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetSerializableMembers(::System::Type* type,
                                                                                                                                ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetTypeFromAssembly, addr 0x3cfb448, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromAssembly(::System::Reflection::Assembly* assem, ::StringW name);

  /// @brief Method GetUninitializedObject, addr 0x3cfa85c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Object* GetUninitializedObject(::System::Type* type);

  /// @brief Method InternalGetSerializableMembers, addr 0x3cf9a4c, size 0x6f0, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> InternalGetSerializableMembers(::System::RuntimeType* type);

  /// @brief Method LoadAssemblyFromString, addr 0x3cfb4e0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadAssemblyFromString(::StringW assemblyName);

  /// @brief Method LoadAssemblyFromStringNoThrow, addr 0x3cfb4e8, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(::StringW assemblyName);

  /// @brief Method PopulateObjectMembers, addr 0x3cfad6c, size 0x2f4, virtual false, abstract: false, final false
  static inline ::System::Object* PopulateObjectMembers(::System::Object* obj, ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members,
                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data);

  /// @brief Method SerializationSetValue, addr 0x3cfaacc, size 0x1f0, virtual false, abstract: false, final false
  static inline void SerializationSetValue(::System::Reflection::MemberInfo* fi, ::System::Object* target, ::System::Object* value);

  /// @brief Method UnsafeTypeForwardersIsEnabled, addr 0x3cfaa24, size 0xa8, virtual false, abstract: false, final false
  static inline bool UnsafeTypeForwardersIsEnabled();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_advancedTypes();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                          ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>*
  getStaticF_m_MemberInfoTable();

  static inline ::System::Reflection::Binder* getStaticF_s_binder();

  static inline bool getStaticF_unsafeTypeForwardersIsEnabled();

  static inline bool getStaticF_unsafeTypeForwardersIsEnabledInitialized();

  /// @brief Method nativeGetUninitializedObject, addr 0x3cfaa14, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* nativeGetUninitializedObject(::System::RuntimeType* type);

  static inline void setStaticF_advancedTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void
  setStaticF_m_MemberInfoTable(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                                         ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3213 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FormatterServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FormatterServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FormatterServices*, "System.Runtime.Serialization", "FormatterServices");
NEED_NO_BOX(::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0*, "System.Runtime.Serialization", "FormatterServices/<>c__DisplayClass9_0");
