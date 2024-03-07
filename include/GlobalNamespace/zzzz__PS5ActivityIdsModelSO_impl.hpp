#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__CompetetiveActivitySO_def.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5ActivityIdsModelSO.get_progressActivities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> (
    ::GlobalNamespace::PS5ActivityIdsModelSO::*)()>(&::GlobalNamespace::PS5ActivityIdsModelSO::get_progressActivities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1311f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(),
                                                                               "get_progressActivities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5ActivityIdsModelSO.get_competetiveActivities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> (::GlobalNamespace::PS5ActivityIdsModelSO::*)()>(
        &::GlobalNamespace::PS5ActivityIdsModelSO::get_competetiveActivities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1311f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(),
                                                                               "get_competetiveActivities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5ActivityIdsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5ActivityIdsModelSO::*)()>(&::GlobalNamespace::PS5ActivityIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1311f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*>&
GlobalNamespace::PS5ActivityIdsModelSO::__cordl_internal_get__progressActivities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressActivities;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> const&
GlobalNamespace::PS5ActivityIdsModelSO::__cordl_internal_get__progressActivities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressActivities;
}
constexpr void GlobalNamespace::PS5ActivityIdsModelSO::__cordl_internal_set__progressActivities(
    ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressActivities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*>&
GlobalNamespace::PS5ActivityIdsModelSO::__cordl_internal_get__competetiveActivities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____competetiveActivities;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> const&
GlobalNamespace::PS5ActivityIdsModelSO::__cordl_internal_get__competetiveActivities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____competetiveActivities;
}
constexpr void GlobalNamespace::PS5ActivityIdsModelSO::__cordl_internal_set__competetiveActivities(
    ::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____competetiveActivities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> GlobalNamespace::PS5ActivityIdsModelSO::get_progressActivities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(),
                                                                             "get_progressActivities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> GlobalNamespace::PS5ActivityIdsModelSO::get_competetiveActivities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(),
                                                                             "get_competetiveActivities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*>, false>(this,
                                                                                                                                                                                ___internal_method);
}
inline ::GlobalNamespace::PS5ActivityIdsModelSO* GlobalNamespace::PS5ActivityIdsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PS5ActivityIdsModelSO*>());
}
inline void GlobalNamespace::PS5ActivityIdsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5ActivityIdsModelSO::PS5ActivityIdsModelSO() {}
