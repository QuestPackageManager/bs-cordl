#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormatterServices)
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Runtime::Serialization {
class __FormatterServices____c__DisplayClass9_0;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class MemberHolder;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Object;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
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
class __FormatterServices____c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::FormatterServices);
MARK_REF_PTR_T(::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0);
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3212))
// CS Name: ::FormatterServices::<>c__DisplayClass9_0*
class CORDL_TYPE __FormatterServices____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  static inline ::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0* New_ctor();

  /// @brief Method .ctor addr 0x24b6e70 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetSerializableMembers>b__0 addr 0x24b828c size 0xac virtual false final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> _GetSerializableMembers_b__0(::System::Runtime::Serialization::MemberHolder* _);

  // Ctor Parameters [CppParam { name: "", ty: "__FormatterServices____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FormatterServices____c__DisplayClass9_0(__FormatterServices____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FormatterServices____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FormatterServices____c__DisplayClass9_0(__FormatterServices____c__DisplayClass9_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FormatterServices____c__DisplayClass9_0();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Type: System.Runtime.Serialization::FormatterServices
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3213))
// CS Name: ::System.Runtime.Serialization::FormatterServices*
class CORDL_TYPE FormatterServices : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass9_0 = ::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0;

  /// @brief Field m_MemberInfoTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_MemberInfoTable, put = setStaticF_m_MemberInfoTable))::System::Collections::Concurrent::ConcurrentDictionary_2<
      ::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>* m_MemberInfoTable;

  /// @brief Field unsafeTypeForwardersIsEnabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_unsafeTypeForwardersIsEnabled, put = setStaticF_unsafeTypeForwardersIsEnabled)) bool unsafeTypeForwardersIsEnabled;

  /// @brief Field unsafeTypeForwardersIsEnabledInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_unsafeTypeForwardersIsEnabledInitialized, put = setStaticF_unsafeTypeForwardersIsEnabledInitialized)) bool unsafeTypeForwardersIsEnabledInitialized;

  /// @brief Field advancedTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_advancedTypes, put = setStaticF_advancedTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> advancedTypes;

  /// @brief Field s_binder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_binder, put = setStaticF_s_binder))::System::Reflection::Binder* s_binder;

  static inline void
  setStaticF_m_MemberInfoTable(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                                         ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>* value);

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                          ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>*
  getStaticF_m_MemberInfoTable();

  static inline void setStaticF_unsafeTypeForwardersIsEnabled(bool value);

  static inline bool getStaticF_unsafeTypeForwardersIsEnabled();

  static inline void setStaticF_unsafeTypeForwardersIsEnabledInitialized(bool value);

  static inline bool getStaticF_unsafeTypeForwardersIsEnabledInitialized();

  static inline void setStaticF_advancedTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_advancedTypes();

  static inline void setStaticF_s_binder(::System::Reflection::Binder* value);

  static inline ::System::Reflection::Binder* getStaticF_s_binder();

  /// @brief Method GetSerializableMembers addr 0x24b5e88 size 0x198 virtual false final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetSerializableMembers(::System::RuntimeType* type);

  /// @brief Method CheckSerializable addr 0x24b6020 size 0x20 virtual false final false
  static inline bool CheckSerializable(::System::RuntimeType* type);

  /// @brief Method InternalGetSerializableMembers addr 0x24b6040 size 0x700 virtual false final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> InternalGetSerializableMembers(::System::RuntimeType* type);

  /// @brief Method GetParentTypes addr 0x24b6740 size 0x408 virtual false final false
  static inline bool GetParentTypes(::System::RuntimeType* parentType, ByRef<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>> parentTypes, ByRef<int32_t> parentTypeCount);

  /// @brief Method GetSerializableMembers addr 0x24b6bd8 size 0x298 virtual false final false
  static inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetSerializableMembers(::System::Type* type,
                                                                                                                                ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetUninitializedObject addr 0x24b6e78 size 0x1cc virtual false final false
  static inline ::System::Object* GetUninitializedObject(::System::Type* type);

  /// @brief Method nativeGetUninitializedObject addr 0x24b7044 size 0x8 virtual false final false
  static inline ::System::Object* nativeGetUninitializedObject(::System::RuntimeType* type);

  /// @brief Method GetEnableUnsafeTypeForwarders addr 0x24b704c size 0x8 virtual false final false
  static inline bool GetEnableUnsafeTypeForwarders();

  /// @brief Method UnsafeTypeForwardersIsEnabled addr 0x24b7054 size 0xa8 virtual false final false
  static inline bool UnsafeTypeForwardersIsEnabled();

  /// @brief Method SerializationSetValue addr 0x24b70fc size 0x1e4 virtual false final false
  static inline void SerializationSetValue(::System::Reflection::MemberInfo* fi, ::System::Object* target, ::System::Object* value);

  /// @brief Method PopulateObjectMembers addr 0x24b7390 size 0x314 virtual false final false
  static inline ::System::Object* PopulateObjectMembers(::System::Object* obj, ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members,
                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data);

  /// @brief Method GetObjectData addr 0x24b76a4 size 0x36c virtual false final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetObjectData(::System::Object* obj,
                                                                                       ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members);

  /// @brief Method GetTypeFromAssembly addr 0x24b7a90 size 0x9c virtual false final false
  static inline ::System::Type* GetTypeFromAssembly(::System::Reflection::Assembly* assem, ::StringW name);

  /// @brief Method LoadAssemblyFromString addr 0x24b7b2c size 0x8 virtual false final false
  static inline ::System::Reflection::Assembly* LoadAssemblyFromString(::StringW assemblyName);

  /// @brief Method LoadAssemblyFromStringNoThrow addr 0x24b7b34 size 0xd4 virtual false final false
  static inline ::System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(::StringW assemblyName);

  /// @brief Method GetClrAssemblyName addr 0x24b7c08 size 0x16c virtual false final false
  static inline ::StringW GetClrAssemblyName(::System::Type* type, ByRef<bool> hasTypeForwardedFrom);

  /// @brief Method GetClrTypeFullName addr 0x24b7d74 size 0x80 virtual false final false
  static inline ::StringW GetClrTypeFullName(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForArray addr 0x24b7df4 size 0x224 virtual false final false
  static inline ::StringW GetClrTypeFullNameForArray(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForNonArrayTypes addr 0x24b8018 size 0x274 virtual false final false
  static inline ::StringW GetClrTypeFullNameForNonArrayTypes(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "FormatterServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormatterServices(FormatterServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormatterServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormatterServices(FormatterServices const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatterServices();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FormatterServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FormatterServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FormatterServices*, "System.Runtime.Serialization", "FormatterServices");
NEED_NO_BOX(::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0*, "System.Runtime.Serialization", "FormatterServices/<>c__DisplayClass9_0");
