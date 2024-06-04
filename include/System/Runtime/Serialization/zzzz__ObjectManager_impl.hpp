#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectManager.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectManager_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__DeserializationEventHandler_def.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventHandler_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(
    ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, bool, bool)>(&::System::Runtime::Serialization::ObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2853ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.CanCallGetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectManager::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectManager::CanCallGetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "CanCallGetType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.set_TopObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectManager::set_TopObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "set_TopObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.get_TopObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::ObjectManager::*)()>(
    &::System::Runtime::Serialization::ObjectManager::get_TopObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                                               "get_TopObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.get_SpecialFixupObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectHolderList* (::System::Runtime::Serialization::ObjectManager::*)()>(
    &::System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2854090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                                               "get_SpecialFixupObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.FindObjectHolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectHolder* (::System::Runtime::Serialization::ObjectManager::*)(int64_t)>(
    &::System::Runtime::Serialization::ObjectManager::FindObjectHolder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2854104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "FindObjectHolder",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.FindOrCreateObjectHolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectHolder* (::System::Runtime::Serialization::ObjectManager::*)(int64_t)>(
    &::System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x285415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "FindOrCreateObjectHolder",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.AddObjectHolder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*)>(
    &::System::Runtime::Serialization::ObjectManager::AddObjectHolder)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2854234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "AddObjectHolder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.GetCompletionInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectManager::*)(
    ::System::Runtime::Serialization::FixupHolder*, ByRef<::System::Runtime::Serialization::ObjectHolder*>, ByRef<::System::Object*>, bool)>(
    &::System::Runtime::Serialization::ObjectManager::GetCompletionInfo)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2854360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "GetCompletionInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::FixupHolder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::ObjectHolder*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.FixupSpecialObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*)>(
    &::System::Runtime::Serialization::ObjectManager::FixupSpecialObject)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2854668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "FixupSpecialObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.ResolveObjectReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*)>(
    &::System::Runtime::Serialization::ObjectManager::ResolveObjectReference)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x285542c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "ResolveObjectReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.DoValueTypeFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectManager::*)(
    ::System::Reflection::FieldInfo*, ::System::Runtime::Serialization::ObjectHolder*, ::System::Object*)>(&::System::Runtime::Serialization::ObjectManager::DoValueTypeFixup)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x2854df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "DoValueTypeFixup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.CompleteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*, bool)>(
    &::System::Runtime::Serialization::ObjectManager::CompleteObject)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x28556d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "CompleteObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.DoNewlyRegisteredObjectFixups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Runtime::Serialization::ObjectHolder*)>(
    &::System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2855354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "DoNewlyRegisteredObjectFixups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.GetObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::ObjectManager::*)(int64_t)>(
    &::System::Runtime::Serialization::ObjectManager::GetObject)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2855ef4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RegisterString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(
    ::StringW, int64_t, ::System::Runtime::Serialization::SerializationInfo*, int64_t, ::System::Reflection::MemberInfo*)>(&::System::Runtime::Serialization::ObjectManager::RegisterString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2855fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "RegisterString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RegisterObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(
    ::System::Object*, int64_t, ::System::Runtime::Serialization::SerializationInfo*, int64_t, ::System::Reflection::MemberInfo*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::System::Runtime::Serialization::ObjectManager::RegisterObject)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x285618c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.CompleteISerializableObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Runtime::Serialization::ObjectManager::CompleteISerializableObject)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2854b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "CompleteISerializableObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.GetConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeConstructorInfo* (*)(::System::RuntimeType*)>(
    &::System::Runtime::Serialization::ObjectManager::GetConstructor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2856ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "GetConstructor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.DoFixups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)()>(
    &::System::Runtime::Serialization::ObjectManager::DoFixups)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2856c08;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RegisterFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(
    ::System::Runtime::Serialization::FixupHolder*, int64_t, int64_t)>(&::System::Runtime::Serialization::ObjectManager::RegisterFixup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2857084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "RegisterFixup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::FixupHolder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RecordFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(int64_t, ::System::Reflection::MemberInfo*, int64_t)>(
    &::System::Runtime::Serialization::ObjectManager::RecordFixup)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2857294;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RecordDelayedFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(int64_t, ::StringW, int64_t)>(
    &::System::Runtime::Serialization::ObjectManager::RecordDelayedFixup)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2857570;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RecordArrayElementFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(int64_t, ::ArrayW<int32_t, ::Array<int32_t>*>, int64_t)>(
    &::System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x28576d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RaiseDeserializationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)()>(
    &::System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2857840;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.AddOnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(
    ::System::Runtime::Serialization::DeserializationEventHandler*)>(&::System::Runtime::Serialization::ObjectManager::AddOnDeserialization)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x285788c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.AddOnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectManager::AddOnDeserialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x285790c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RaiseOnDeserializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x285799c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectManager.RaiseOnDeserializingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectManager::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2857a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "RaiseOnDeserializingEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::DeserializationEventHandler*& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_onDeserializationHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_onDeserializationHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::DeserializationEventHandler*> const&
System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_onDeserializationHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_onDeserializationHandler;
}
constexpr void System::Runtime::Serialization::ObjectManager::__cordl_internal_set_m_onDeserializationHandler(::System::Runtime::Serialization::DeserializationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_onDeserializationHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationEventHandler*& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_onDeserializedHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_onDeserializedHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationEventHandler*> const&
System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_onDeserializedHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_onDeserializedHandler;
}
constexpr void System::Runtime::Serialization::ObjectManager::__cordl_internal_set_m_onDeserializedHandler(::System::Runtime::Serialization::SerializationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_onDeserializedHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*>&
System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objects;
}
constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> const&
System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objects;
}
constexpr void System::Runtime::Serialization::ObjectManager::__cordl_internal_set_m_objects(
    ::ArrayW<::System::Runtime::Serialization::ObjectHolder*, ::Array<::System::Runtime::Serialization::ObjectHolder*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_topObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_topObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_topObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_topObject;
}
constexpr void System::Runtime::Serialization::ObjectManager::__cordl_internal_set_m_topObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_topObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ObjectHolderList*& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_specialFixupObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_specialFixupObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectHolderList*> const&
System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_specialFixupObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_specialFixupObjects;
}
constexpr void System::Runtime::Serialization::ObjectManager::__cordl_internal_set_m_specialFixupObjects(::System::Runtime::Serialization::ObjectHolderList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_specialFixupObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_fixupCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupCount;
}
constexpr int64_t const& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_fixupCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupCount;
}
constexpr void System::Runtime::Serialization::ObjectManager::__cordl_internal_set_m_fixupCount(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fixupCount = value;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_selector;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_selector;
}
constexpr void System::Runtime::Serialization::ObjectManager::__cordl_internal_set_m_selector(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::ObjectManager::__cordl_internal_get_m_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_context;
}
constexpr void System::Runtime::Serialization::ObjectManager::__cordl_internal_set_m_context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_context = value;
}
inline ::System::Runtime::Serialization::ObjectManager* System::Runtime::Serialization::ObjectManager::New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector,
                                                                                                                ::System::Runtime::Serialization::StreamingContext context, bool checkSecurity,
                                                                                                                bool isCrossAppDomain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ObjectManager*>(selector, context, checkSecurity, isCrossAppDomain));
}
inline void System::Runtime::Serialization::ObjectManager::_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
                                                                 bool checkSecurity, bool isCrossAppDomain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selector, context, checkSecurity, isCrossAppDomain);
}
inline bool System::Runtime::Serialization::ObjectManager::CanCallGetType(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "CanCallGetType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::ObjectManager::set_TopObject(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "set_TopObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Serialization::ObjectManager::get_TopObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                                             "get_TopObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ObjectHolderList* System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(),
                                                                             "get_SpecialFixupObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ObjectHolderList*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectManager::FindObjectHolder(int64_t objectID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "FindObjectHolder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ObjectHolder*, false>(this, ___internal_method, objectID);
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder(int64_t objectID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "FindOrCreateObjectHolder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ObjectHolder*, false>(this, ___internal_method, objectID);
}
inline void System::Runtime::Serialization::ObjectManager::AddObjectHolder(::System::Runtime::Serialization::ObjectHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "AddObjectHolder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, holder);
}
inline bool System::Runtime::Serialization::ObjectManager::GetCompletionInfo(::System::Runtime::Serialization::FixupHolder* fixup, ByRef<::System::Runtime::Serialization::ObjectHolder*> holder,
                                                                             ByRef<::System::Object*> member, bool bThrowIfMissing) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "GetCompletionInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::FixupHolder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::ObjectHolder*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fixup, holder, member, bThrowIfMissing);
}
inline void System::Runtime::Serialization::ObjectManager::FixupSpecialObject(::System::Runtime::Serialization::ObjectHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "FixupSpecialObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, holder);
}
inline bool System::Runtime::Serialization::ObjectManager::ResolveObjectReference(::System::Runtime::Serialization::ObjectHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "ResolveObjectReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, holder);
}
inline bool System::Runtime::Serialization::ObjectManager::DoValueTypeFixup(::System::Reflection::FieldInfo* memberToFix, ::System::Runtime::Serialization::ObjectHolder* holder,
                                                                            ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "DoValueTypeFixup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, memberToFix, holder, value);
}
inline void System::Runtime::Serialization::ObjectManager::CompleteObject(::System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "CompleteObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, holder, bObjectFullyComplete);
}
inline void System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups(::System::Runtime::Serialization::ObjectHolder* holder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "DoNewlyRegisteredObjectFixups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, holder);
}
inline ::System::Object* System::Runtime::Serialization::ObjectManager::GetObject(int64_t objectID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, objectID);
}
inline void System::Runtime::Serialization::ObjectManager::RegisterString(::StringW obj, int64_t objectID, ::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj,
                                                                          ::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "RegisterString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, objectID, info, idOfContainingObj, member);
}
inline void System::Runtime::Serialization::ObjectManager::RegisterObject(::System::Object* obj, int64_t objectID, ::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj,
                                                                          ::System::Reflection::MemberInfo* member, ::ArrayW<int32_t, ::Array<int32_t>*> arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "RegisterObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, objectID, info, idOfContainingObj, member, arrayIndex);
}
inline void System::Runtime::Serialization::ObjectManager::CompleteISerializableObject(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "CompleteISerializableObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, info, context);
}
inline ::System::Reflection::RuntimeConstructorInfo* System::Runtime::Serialization::ObjectManager::GetConstructor(::System::RuntimeType* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "GetConstructor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeConstructorInfo*, false>(nullptr, ___internal_method, t);
}
inline void System::Runtime::Serialization::ObjectManager::DoFixups() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectManager::RegisterFixup(::System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "RegisterFixup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::FixupHolder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fixup, objectToBeFixed, objectRequired);
}
inline void System::Runtime::Serialization::ObjectManager::RecordFixup(int64_t objectToBeFixed, ::System::Reflection::MemberInfo* member, int64_t objectRequired) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectToBeFixed, member, objectRequired);
}
inline void System::Runtime::Serialization::ObjectManager::RecordDelayedFixup(int64_t objectToBeFixed, ::StringW memberName, int64_t objectRequired) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectToBeFixed, memberName, objectRequired);
}
inline void System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup(int64_t arrayToBeFixed, ::ArrayW<int32_t, ::Array<int32_t>*> indices, int64_t objectRequired) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arrayToBeFixed, indices, objectRequired);
}
inline void System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectManager::AddOnDeserialization(::System::Runtime::Serialization::DeserializationEventHandler* handler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline void System::Runtime::Serialization::ObjectManager::AddOnDeserialized(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectManager*>::get(), "RaiseOnDeserializingEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectManager::ObjectManager() {}
