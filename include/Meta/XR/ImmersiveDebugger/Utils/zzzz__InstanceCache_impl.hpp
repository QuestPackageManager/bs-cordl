#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/InstanceCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceCache_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::*)()>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5831034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0._FetchObjectsHandlesOfType_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::*)(::UnityEngine::Object*)>(
        &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::_FetchObjectsHandlesOfType_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5831bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0*>::get(), "<FetchObjectsHandlesOfType>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::__cordl_internal_get_classType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___classType;
}
constexpr ::System::Type* const& Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::__cordl_internal_get_classType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___classType;
}
constexpr void Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::__cordl_internal_set_classType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___classType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::_FetchObjectsHandlesOfType_b__0(::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0*>::get(), "<FetchObjectsHandlesOfType>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, false>(this, ___internal_method, obj);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0* Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0::InstanceCache___c__DisplayClass12_0() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.add_OnCacheChangedForTypeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(::System::Action_1<::System::Type*>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::add_OnCacheChangedForTypeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5830a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "add_OnCacheChangedForTypeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.remove_OnCacheChangedForTypeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(::System::Action_1<::System::Type*>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::remove_OnCacheChangedForTypeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5830acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "remove_OnCacheChangedForTypeEvent",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.add_OnInstanceAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(
    ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::add_OnInstanceAdded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5830b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "add_OnInstanceAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.remove_OnInstanceAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(
    ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::remove_OnInstanceAdded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5830c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "remove_OnInstanceAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.add_OnInstanceRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(
    ::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*)>(&::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::add_OnInstanceRemoved)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5830d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "add_OnInstanceRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.remove_OnInstanceRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(
    ::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*)>(&::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::remove_OnInstanceRemoved)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5830dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "remove_OnInstanceRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.GetCacheDataForClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* (
    ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(::System::Type*)>(&::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::GetCacheDataForClass)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5830e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "GetCacheDataForClass",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.FetchObjectsHandlesOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* (
    ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(::System::Type*)>(&::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::FetchObjectsHandlesOfType)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5830f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "FetchObjectsHandlesOfType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.RegisterClassType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::RegisterClassType)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5831038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "RegisterClassType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.RegisterClassTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Type*>*)>(&::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::RegisterClassTypes)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5831144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "RegisterClassTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.RetrieveInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)()>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::RetrieveInstances)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x58313f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(),
                                                                               "RetrieveInstances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.RegisterHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::RegisterHandle)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x582adf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "RegisterHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache.UnregisterHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::UnregisterHandle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x582af64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "UnregisterHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::*)()>(
    &::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5831aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>*&
Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get_CacheData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CacheData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>* const&
Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get_CacheData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CacheData;
}
constexpr void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_set_CacheData(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CacheData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*& Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get__emptyCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyCache;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* const&
Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get__emptyCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyCache;
}
constexpr void
Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_set__emptyCache(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emptyCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Type*>*& Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get_OnCacheChangedForTypeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnCacheChangedForTypeEvent;
}
constexpr ::System::Action_1<::System::Type*>* const& Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get_OnCacheChangedForTypeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnCacheChangedForTypeEvent;
}
constexpr void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_set_OnCacheChangedForTypeEvent(::System::Action_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnCacheChangedForTypeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>*&
Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get_OnInstanceAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInstanceAdded;
}
constexpr ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* const&
Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get_OnInstanceAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInstanceAdded;
}
constexpr void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_set_OnInstanceAdded(
    ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInstanceAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*& Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get_OnInstanceRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInstanceRemoved;
}
constexpr ::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* const& Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_get_OnInstanceRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnInstanceRemoved;
}
constexpr void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::__cordl_internal_set_OnInstanceRemoved(::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInstanceRemoved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::add_OnCacheChangedForTypeEvent(::System::Action_1<::System::Type*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "add_OnCacheChangedForTypeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::remove_OnCacheChangedForTypeEvent(::System::Action_1<::System::Type*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "remove_OnCacheChangedForTypeEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::add_OnInstanceAdded(
    ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "add_OnInstanceAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::remove_OnInstanceAdded(
    ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "remove_OnInstanceAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::add_OnInstanceRemoved(::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "add_OnInstanceRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::remove_OnInstanceRemoved(::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "remove_OnInstanceRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*
Meta::XR::ImmersiveDebugger::Utils::InstanceCache::GetCacheDataForClass(::System::Type* classType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "GetCacheDataForClass",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*, false>(this, ___internal_method, classType);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*
Meta::XR::ImmersiveDebugger::Utils::InstanceCache::FetchObjectsHandlesOfType(::System::Type* classType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "FetchObjectsHandlesOfType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*, false>(this, ___internal_method, classType);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::RegisterClassType(::System::Type* classType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "RegisterClassType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classType);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::RegisterClassTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "RegisterClassTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, types);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::RetrieveInstances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(),
                                                                             "RetrieveInstances", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::RegisterHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "RegisterHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::UnregisterHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(), "UnregisterHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void Meta::XR::ImmersiveDebugger::Utils::InstanceCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* Meta::XR::ImmersiveDebugger::Utils::InstanceCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache::InstanceCache() {}
