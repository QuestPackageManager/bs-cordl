#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__LongList_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__TypeLoadExceptionHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ValueTypeFixupInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int64_t)>(
    &::System::Runtime::Serialization::ObjectHolder::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3c96784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::System::Object*, int64_t, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, int64_t, ::System::Reflection::FieldInfo*,
    ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::System::Runtime::Serialization::ObjectHolder::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3c98c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializationSurrogate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::StringW, int64_t, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, int64_t, ::System::Reflection::FieldInfo*,
    ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::System::Runtime::Serialization::ObjectHolder::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3c985a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializationSurrogate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.IncrementDescendentFixups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int32_t)>(
    &::System::Runtime::Serialization::ObjectHolder::IncrementDescendentFixups)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c99f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "IncrementDescendentFixups",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.DecrementFixupsRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Runtime::Serialization::ObjectManager*)>(
    &::System::Runtime::Serialization::ObjectHolder::DecrementFixupsRemaining)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c982d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "DecrementFixupsRemaining", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.RemoveDependency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int64_t)>(
    &::System::Runtime::Serialization::ObjectHolder::RemoveDependency)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c982f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "RemoveDependency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.AddFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::System::Runtime::Serialization::FixupHolder*, ::System::Runtime::Serialization::ObjectManager*)>(&::System::Runtime::Serialization::ObjectHolder::AddFixup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3c99608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "AddFixup", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::FixupHolder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.UpdateDescendentDependencyChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int32_t, ::System::Runtime::Serialization::ObjectManager*)>(
    &::System::Runtime::Serialization::ObjectHolder::UpdateDescendentDependencyChain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3c99f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "UpdateDescendentDependencyChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.AddDependency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int64_t)>(
    &::System::Runtime::Serialization::ObjectHolder::AddDependency)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3c996c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "AddDependency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.UpdateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, int64_t, ::System::Reflection::FieldInfo*,
    ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Runtime::Serialization::ObjectManager*)>(&::System::Runtime::Serialization::ObjectHolder::UpdateData)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3c98e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "UpdateData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializationSurrogate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.MarkForCompletionWhenAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::MarkForCompletionWhenAvailable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c98374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "MarkForCompletionWhenAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.SetFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::SetFlags)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3c96f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "SetFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_IsIncompleteObjectReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_IsIncompleteObjectReference)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c96ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "get_IsIncompleteObjectReference",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_IsIncompleteObjectReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(bool)>(
    &::System::Runtime::Serialization::ObjectHolder::set_IsIncompleteObjectReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c97bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_IsIncompleteObjectReference",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_RequiresDelayedFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_RequiresDelayedFixup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c98dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_RequiresDelayedFixup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_RequiresValueTypeFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_RequiresValueTypeFixup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c972e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_RequiresValueTypeFixup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_ValueTypeFixupPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_ValueTypeFixupPerformed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3c972ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_ValueTypeFixupPerformed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_ValueTypeFixupPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(bool)>(
    &::System::Runtime::Serialization::ObjectHolder::set_ValueTypeFixupPerformed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3c98320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_ValueTypeFixupPerformed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_HasISerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_HasISerializable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c981e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_HasISerializable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_HasSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_HasSurrogate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c96de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_HasSurrogate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_CanSurrogatedObjectValueChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_CanSurrogatedObjectValueChange)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3c96dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "get_CanSurrogatedObjectValueChange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_CanObjectValueChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_CanObjectValueChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c96b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_CanObjectValueChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_DirectlyDependentObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_DirectlyDependentObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_DirectlyDependentObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_TotalDependentObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_TotalDependentObjects)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c98f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_TotalDependentObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_Reachable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_Reachable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_Reachable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_Reachable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(bool)>(
    &::System::Runtime::Serialization::ObjectHolder::set_Reachable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c9a0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_Reachable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_TypeLoadExceptionReachable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_TypeLoadExceptionReachable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c98310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_TypeLoadExceptionReachable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_TypeLoadException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::TypeLoadExceptionHolder* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_TypeLoadException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_TypeLoadException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_TypeLoadException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Runtime::Serialization::TypeLoadExceptionHolder*)>(
    &::System::Runtime::Serialization::ObjectHolder::set_TypeLoadException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_TypeLoadException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::TypeLoadExceptionHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_ObjectValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_ObjectValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_ObjectValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.SetObjectValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::System::Object*, ::System::Runtime::Serialization::ObjectManager*)>(&::System::Runtime::Serialization::ObjectHolder::SetObjectValue)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3c96e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "SetObjectValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_SerializationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationInfo* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_SerializationInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_SerializationInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_SerializationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Runtime::Serialization::SerializationInfo*)>(
    &::System::Runtime::Serialization::ObjectHolder::set_SerializationInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_SerializationInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_Surrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_Surrogate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_Surrogate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_DependentObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::LongList* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_DependentObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_DependentObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_DependentObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Runtime::Serialization::LongList*)>(
    &::System::Runtime::Serialization::ObjectHolder::set_DependentObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_DependentObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::LongList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_RequiresSerInfoFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_RequiresSerInfoFixup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3c99458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_RequiresSerInfoFixup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_RequiresSerInfoFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(bool)>(
    &::System::Runtime::Serialization::ObjectHolder::set_RequiresSerInfoFixup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c972c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_RequiresSerInfoFixup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_ValueFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ValueTypeFixupInfo* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_ValueFixup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c9a104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_ValueFixup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_CompletelyFixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_CompletelyFixed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c96b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_CompletelyFixed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_ContainerID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_ContainerID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c9a008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                               "get_ContainerID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_object() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_object;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_object() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_object;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_object(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_object)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_id;
}
constexpr int64_t const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_id;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_id(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_id = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingElementsRemaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingElementsRemaining;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingElementsRemaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingElementsRemaining;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_missingElementsRemaining(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_missingElementsRemaining = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingDecendents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingDecendents;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingDecendents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingDecendents;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_missingDecendents(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_missingDecendents = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_serInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_serInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serInfo;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_serInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_serInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_surrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const&
System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_surrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogate;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_surrogate(::System::Runtime::Serialization::ISerializationSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_surrogate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::FixupHolderList*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingElements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::FixupHolderList*> const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingElements;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_missingElements(::System::Runtime::Serialization::FixupHolderList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_missingElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::LongList*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_dependentObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dependentObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::LongList*> const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_dependentObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dependentObjects;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_dependentObjects(::System::Runtime::Serialization::LongList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_dependentObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ObjectHolder*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_next;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectHolder*> const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_next;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_next(::System::Runtime::Serialization::ObjectHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_flags;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_flags;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_flags(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_flags = value;
}
constexpr bool& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_markForFixupWhenAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_markForFixupWhenAvailable;
}
constexpr bool const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_markForFixupWhenAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_markForFixupWhenAvailable;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_markForFixupWhenAvailable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_markForFixupWhenAvailable = value;
}
constexpr ::System::Runtime::Serialization::ValueTypeFixupInfo*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_valueFixup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueFixup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ValueTypeFixupInfo*> const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_valueFixup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueFixup;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_valueFixup(::System::Runtime::Serialization::ValueTypeFixupInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_valueFixup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::TypeLoadExceptionHolder*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_typeLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_typeLoad;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::TypeLoadExceptionHolder*> const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_typeLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_typeLoad;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_typeLoad(::System::Runtime::Serialization::TypeLoadExceptionHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_typeLoad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_reachable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reachable;
}
constexpr bool const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_reachable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reachable;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_reachable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_reachable = value;
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(int64_t objID) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ObjectHolder*>(objID));
}
inline void System::Runtime::Serialization::ObjectHolder::_ctor(int64_t objID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objID);
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(::System::Object* obj, int64_t objID,
                                                                                                              ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                              ::System::Runtime::Serialization::ISerializationSurrogate* surrogate,
                                                                                                              int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field,
                                                                                                              ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ObjectHolder*>(obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex));
}
inline void System::Runtime::Serialization::ObjectHolder::_ctor(::System::Object* obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field,
                                                                ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializationSurrogate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex);
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(::StringW obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                              ::System::Runtime::Serialization::ISerializationSurrogate* surrogate,
                                                                                                              int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field,
                                                                                                              ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ObjectHolder*>(obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex));
}
inline void System::Runtime::Serialization::ObjectHolder::_ctor(::StringW obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field,
                                                                ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializationSurrogate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex);
}
inline void System::Runtime::Serialization::ObjectHolder::IncrementDescendentFixups(int32_t amount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "IncrementDescendentFixups",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void System::Runtime::Serialization::ObjectHolder::DecrementFixupsRemaining(::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "DecrementFixupsRemaining", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline void System::Runtime::Serialization::ObjectHolder::RemoveDependency(int64_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "RemoveDependency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void System::Runtime::Serialization::ObjectHolder::AddFixup(::System::Runtime::Serialization::FixupHolder* fixup, ::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "AddFixup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::FixupHolder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fixup, manager);
}
inline void System::Runtime::Serialization::ObjectHolder::UpdateDescendentDependencyChain(int32_t amount, ::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "UpdateDescendentDependencyChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount, manager);
}
inline void System::Runtime::Serialization::ObjectHolder::AddDependency(int64_t dependentObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "AddDependency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dependentObject);
}
inline void System::Runtime::Serialization::ObjectHolder::UpdateData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                     ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainer,
                                                                     ::System::Reflection::FieldInfo* field, ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex,
                                                                     ::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "UpdateData", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializationSurrogate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, info, surrogate, idOfContainer, field, arrayIndex, manager);
}
inline void System::Runtime::Serialization::ObjectHolder::MarkForCompletionWhenAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "MarkForCompletionWhenAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::SetFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "SetFlags",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_IsIncompleteObjectReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_IsIncompleteObjectReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_IsIncompleteObjectReference(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_IsIncompleteObjectReference",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_RequiresDelayedFixup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_RequiresDelayedFixup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_RequiresValueTypeFixup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_RequiresValueTypeFixup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_ValueTypeFixupPerformed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_ValueTypeFixupPerformed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_ValueTypeFixupPerformed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_ValueTypeFixupPerformed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_HasISerializable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_HasISerializable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_HasSurrogate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_HasSurrogate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_CanSurrogatedObjectValueChange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "get_CanSurrogatedObjectValueChange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_CanObjectValueChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_CanObjectValueChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectHolder::get_DirectlyDependentObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_DirectlyDependentObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectHolder::get_TotalDependentObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_TotalDependentObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_Reachable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_Reachable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_Reachable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_Reachable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_TypeLoadExceptionReachable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_TypeLoadExceptionReachable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::TypeLoadExceptionHolder* System::Runtime::Serialization::ObjectHolder::get_TypeLoadException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_TypeLoadException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::TypeLoadExceptionHolder*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_TypeLoadException(::System::Runtime::Serialization::TypeLoadExceptionHolder* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_TypeLoadException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::TypeLoadExceptionHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Serialization::ObjectHolder::get_ObjectValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_ObjectValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::SetObjectValue(::System::Object* obj, ::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "SetObjectValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, manager);
}
inline ::System::Runtime::Serialization::SerializationInfo* System::Runtime::Serialization::ObjectHolder::get_SerializationInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_SerializationInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationInfo*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_SerializationInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_SerializationInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Serialization::ObjectHolder::get_Surrogate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_Surrogate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::LongList* System::Runtime::Serialization::ObjectHolder::get_DependentObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_DependentObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::LongList*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_DependentObjects(::System::Runtime::Serialization::LongList* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_DependentObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::LongList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_RequiresSerInfoFixup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_RequiresSerInfoFixup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_RequiresSerInfoFixup(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(), "set_RequiresSerInfoFixup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::ValueTypeFixupInfo* System::Runtime::Serialization::ObjectHolder::get_ValueFixup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_ValueFixup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ValueTypeFixupInfo*, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_CompletelyFixed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_CompletelyFixed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::ObjectHolder::get_ContainerID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                                                             "get_ContainerID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectHolder::ObjectHolder() {}
