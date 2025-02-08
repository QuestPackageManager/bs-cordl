#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/GroupOperation.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ICachable_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::GroupOperation_GroupOperationSettings(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::GroupOperation_GroupOperationSettings() {}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::None{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings
    UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::ReleaseDependenciesOnFailure{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings
    UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::AllowFailedDependencies{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x47a93bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x47a94f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey* (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
        &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47a98c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                    "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(
        &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47a98d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                    "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDependentOps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* (
    ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependentOps)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4793f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "GetDependentOps",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependencies)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x47a98d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.ReleaseDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::ReleaseDependencies)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x47a993c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDownloadStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (
    ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(::System::Collections::Generic::HashSet_1<::System::Object*>*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDownloadStatus)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x47a9b88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.DependenciesAreUnchanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::DependenciesAreUnchanged)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x47a9de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "DependenciesAreUnchanged",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.get_DebugName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x47a9fb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Execute)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x47aa28c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.CompleteIfDependenciesComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::CompleteIfDependenciesComplete)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x47aa49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                 "CompleteIfDependenciesComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Destroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Destroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x47aa790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.get_Progress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_Progress)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x47aa7a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool, bool)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4793e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,
    ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings)>(&::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x47aa98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.OnOperationCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::OnOperationCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x47aaa24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "OnOperationCompleted",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_InternalOnComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalOnComplete;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_InternalOnComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalOnComplete;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_m_InternalOnComplete(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalOnComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_LoadedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadedCount;
}
constexpr int32_t const& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_LoadedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadedCount;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_m_LoadedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoadedCount = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings const&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_m_Settings(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_debugName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugName;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_debugName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugName;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_debugName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;
}
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* const&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(
    ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_CachedDependencyLocations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDependencyLocations;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_CachedDependencyLocations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDependencyLocations;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_m_CachedDependencyLocations(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedDependencyLocations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, false>(this, ___internal_method);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                  "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependentOps() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "GetDependentOps",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deps);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::ReleaseDependencies() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::DependenciesAreUnchanged(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "DependenciesAreUnchanged",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, deps);
}
inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_DebugName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Execute() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::CompleteIfDependenciesComplete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(),
                                               "CompleteIfDependenciesComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Destroy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_Progress() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations,
                                                                       bool releaseDependenciesOnFailure, bool allowFailedDependencies) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operations, releaseDependenciesOnFailure, allowFailedDependencies);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations,
                                                                       ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operations, settings);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::OnOperationCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>::get(), "OnOperationCompleted",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
constexpr UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::operator ::UnityEngine::ResourceManagement::AsyncOperations::ICachable*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::ICachable*
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::i___UnityEngine__ResourceManagement__AsyncOperations__ICachable() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperation() {}
