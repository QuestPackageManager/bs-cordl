#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\FormatterServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FormatterServices_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__FormatterServices_def.hpp"
#include "System/Runtime/Serialization/zzzz__MemberHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::*)()>(
    &::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4e3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0._GetSerializableMembers_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::*)(
    ::System::Runtime::Serialization::MemberHolder*)>(&::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::_GetSerializableMembers_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b4f754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0*>(),
                                                             { "<GetSerializableMembers>b__0", {}, { ::i2c::type_of<::System::Runtime::Serialization::MemberHolder*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::MemberInfo*>
System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::_GetSerializableMembers_b__0(::System::Runtime::Serialization::MemberHolder* _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0*>(),
                                                           { "<GetSerializableMembers>b__0", {}, { ::i2c::type_of<::System::Runtime::Serialization::MemberHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, _);
}
inline ::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0* System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::FormatterServices___c__DisplayClass9_0() {}
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetSerializableMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (*)(::System::RuntimeType*)>(
    &::System::Runtime::Serialization::FormatterServices::GetSerializableMembers)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b4d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetSerializableMembers", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.CheckSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::Runtime::Serialization::FormatterServices::CheckSerializable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b4d640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "CheckSerializable", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.InternalGetSerializableMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (*)(::System::RuntimeType*)>(
    &::System::Runtime::Serialization::FormatterServices::InternalGetSerializableMembers)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x5b4d65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                                                           { "InternalGetSerializableMembers", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetParentTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::by_ref<::ArrayW<::System::RuntimeType*>>, ::by_ref<int32_t>)>(
    &::System::Runtime::Serialization::FormatterServices::GetParentTypes)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5b4dd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                         { "GetParentTypes", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::by_ref<::ArrayW<::System::RuntimeType*>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetSerializableMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::FormatterServices::GetSerializableMembers)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5b4e170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                { "GetSerializableMembers", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetUninitializedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Runtime::Serialization::FormatterServices::GetUninitializedObject)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b4e400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetUninitializedObject", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.nativeGetUninitializedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::RuntimeType*)>(&::System::Runtime::Serialization::FormatterServices::nativeGetUninitializedObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4e5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                                                           { "nativeGetUninitializedObject", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetEnableUnsafeTypeForwarders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Runtime::Serialization::FormatterServices::GetEnableUnsafeTypeForwarders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4e5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetEnableUnsafeTypeForwarders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.UnsafeTypeForwardersIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Runtime::Serialization::FormatterServices::UnsafeTypeForwardersIsEnabled)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b4e5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "UnsafeTypeForwardersIsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.SerializationSetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*)>(
    &::System::Runtime::Serialization::FormatterServices::SerializationSetValue)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5b4e674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                            { "SerializationSetValue", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.PopulateObjectMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::ArrayW<::System::Reflection::MemberInfo*>, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Serialization::FormatterServices::PopulateObjectMembers)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5b4e88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
            { "PopulateObjectMembers", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Reflection::MemberInfo*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(::System::Object*, ::ArrayW<::System::Reflection::MemberInfo*>)>(
    &::System::Runtime::Serialization::FormatterServices::GetObjectData)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5b4eb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                             { "GetObjectData", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Reflection::MemberInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetTypeFromAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Reflection::Assembly*, ::StringW)>(&::System::Runtime::Serialization::FormatterServices::GetTypeFromAssembly)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b4eeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                             { "GetTypeFromAssembly", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.LoadAssemblyFromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Runtime::Serialization::FormatterServices::LoadAssemblyFromString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4ef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "LoadAssemblyFromString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.LoadAssemblyFromStringNoThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Runtime::Serialization::FormatterServices::LoadAssemblyFromStringNoThrow)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b4ef8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "LoadAssemblyFromStringNoThrow", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetClrAssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*, ::by_ref<bool>)>(&::System::Runtime::Serialization::FormatterServices::GetClrAssemblyName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b4f068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                                                           { "GetClrAssemblyName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetClrTypeFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::FormatterServices::GetClrTypeFullName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b4f1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetClrTypeFullName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetClrTypeFullNameForArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForArray)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5b4f268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetClrTypeFullNameForArray", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetClrTypeFullNameForNonArrayTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForNonArrayTypes)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5b4f4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                                                           { "GetClrTypeFullNameForNonArrayTypes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::FormatterServices::setStaticF_m_MemberInfoTable(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*>>*,
                                    "m_MemberInfoTable", ::System::Runtime::Serialization::FormatterServices*>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*>>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*>>*
System::Runtime::Serialization::FormatterServices::getStaticF_m_MemberInfoTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::ArrayW<::System::Reflection::MemberInfo*>>*,
                                           "m_MemberInfoTable", ::System::Runtime::Serialization::FormatterServices*>();
}
inline void System::Runtime::Serialization::FormatterServices::setStaticF_unsafeTypeForwardersIsEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "unsafeTypeForwardersIsEnabled", ::System::Runtime::Serialization::FormatterServices*>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::FormatterServices::getStaticF_unsafeTypeForwardersIsEnabled() {
  return ::cordl_internals::getStaticField<bool, "unsafeTypeForwardersIsEnabled", ::System::Runtime::Serialization::FormatterServices*>();
}
inline void System::Runtime::Serialization::FormatterServices::setStaticF_unsafeTypeForwardersIsEnabledInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "unsafeTypeForwardersIsEnabledInitialized", ::System::Runtime::Serialization::FormatterServices*>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::FormatterServices::getStaticF_unsafeTypeForwardersIsEnabledInitialized() {
  return ::cordl_internals::getStaticField<bool, "unsafeTypeForwardersIsEnabledInitialized", ::System::Runtime::Serialization::FormatterServices*>();
}
inline void System::Runtime::Serialization::FormatterServices::setStaticF_advancedTypes(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "advancedTypes", ::System::Runtime::Serialization::FormatterServices*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::Runtime::Serialization::FormatterServices::getStaticF_advancedTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "advancedTypes", ::System::Runtime::Serialization::FormatterServices*>();
}
inline void System::Runtime::Serialization::FormatterServices::setStaticF_s_binder(::System::Reflection::Binder* value) {
  ::cordl_internals::setStaticField<::System::Reflection::Binder*, "s_binder", ::System::Runtime::Serialization::FormatterServices*>(std::forward<::System::Reflection::Binder*>(value));
}
inline ::System::Reflection::Binder* System::Runtime::Serialization::FormatterServices::getStaticF_s_binder() {
  return ::cordl_internals::getStaticField<::System::Reflection::Binder*, "s_binder", ::System::Runtime::Serialization::FormatterServices*>();
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Runtime::Serialization::FormatterServices::GetSerializableMembers(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetSerializableMembers", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::FormatterServices::CheckSerializable(::System::RuntimeType* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "CheckSerializable", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Runtime::Serialization::FormatterServices::InternalGetSerializableMembers(::System::RuntimeType* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                                                         { "InternalGetSerializableMembers", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::FormatterServices::GetParentTypes(::System::RuntimeType* parentType, ::by_ref<::ArrayW<::System::RuntimeType*>> parentTypes,
                                                                              ::by_ref<int32_t> parentTypeCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                          { "GetParentTypes", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::by_ref<::ArrayW<::System::RuntimeType*>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, parentType, parentTypes, parentTypeCount);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Runtime::Serialization::FormatterServices::GetSerializableMembers(::System::Type* type,
                                                                                                                             ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                              { "GetSerializableMembers", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(nullptr, ___internal_method, type, context);
}
inline ::System::Object* System::Runtime::Serialization::FormatterServices::GetUninitializedObject(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetUninitializedObject", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::Runtime::Serialization::FormatterServices::nativeGetUninitializedObject(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "nativeGetUninitializedObject", {}, { ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::FormatterServices::GetEnableUnsafeTypeForwarders() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetEnableUnsafeTypeForwarders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Runtime::Serialization::FormatterServices::UnsafeTypeForwardersIsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "UnsafeTypeForwardersIsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Runtime::Serialization::FormatterServices::SerializationSetValue(::System::Reflection::MemberInfo* fi, ::System::Object* target, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                          { "SerializationSetValue", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fi, target, value);
}
inline ::System::Object* System::Runtime::Serialization::FormatterServices::PopulateObjectMembers(::System::Object* obj, ::ArrayW<::System::Reflection::MemberInfo*> members,
                                                                                                  ::ArrayW<::System::Object*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
          { "PopulateObjectMembers", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Reflection::MemberInfo*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, obj, members, data);
}
inline ::ArrayW<::System::Object*> System::Runtime::Serialization::FormatterServices::GetObjectData(::System::Object* obj, ::ArrayW<::System::Reflection::MemberInfo*> members) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                           { "GetObjectData", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Reflection::MemberInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, obj, members);
}
inline ::System::Type* System::Runtime::Serialization::FormatterServices::GetTypeFromAssembly(::System::Reflection::Assembly* assem, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                           { "GetTypeFromAssembly", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, assem, name);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::FormatterServices::LoadAssemblyFromString(::StringW assemblyName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "LoadAssemblyFromString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyName);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::FormatterServices::LoadAssemblyFromStringNoThrow(::StringW assemblyName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "LoadAssemblyFromStringNoThrow", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyName);
}
inline ::StringW System::Runtime::Serialization::FormatterServices::GetClrAssemblyName(::System::Type* type, ::by_ref<bool> hasTypeForwardedFrom) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(),
                                                                                         { "GetClrAssemblyName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type, hasTypeForwardedFrom);
}
inline ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullName(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetClrTypeFullName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForArray(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetClrTypeFullNameForArray", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForNonArrayTypes(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FormatterServices*>(), { "GetClrTypeFullNameForNonArrayTypes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::FormatterServices::FormatterServices() {}
