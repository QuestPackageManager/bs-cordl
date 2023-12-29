#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySO_def.hpp"
#include "GlobalNamespace/zzzz__CompetetiveActivitySO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5ActivityIdsModelSO.get_progressActivities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::ProgressActivitySO*, ::Array<::GlobalNamespace::ProgressActivitySO*>*> (
    ::GlobalNamespace::PS5ActivityIdsModelSO::*)()>(&::GlobalNamespace::PS5ActivityIdsModelSO::get_progressActivities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222e36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(),
                                                                               "get_progressActivities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5ActivityIdsModelSO.get_competetiveActivities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::CompetetiveActivitySO*, ::Array<::GlobalNamespace::CompetetiveActivitySO*>*> (
    ::GlobalNamespace::PS5ActivityIdsModelSO::*)()>(&::GlobalNamespace::PS5ActivityIdsModelSO::get_competetiveActivities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222e374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(),
                                                                               "get_competetiveActivities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5ActivityIdsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5ActivityIdsModelSO::*)()>(&::GlobalNamespace::PS5ActivityIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222e37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySO*, ::Array<::GlobalNamespace::ProgressActivitySO*>*>& GlobalNamespace::PS5ActivityIdsModelSO::__get__progressActivities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressActivities;
}
constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySO*, ::Array<::GlobalNamespace::ProgressActivitySO*>*> const& GlobalNamespace::PS5ActivityIdsModelSO::__get__progressActivities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____progressActivities;
}
constexpr void GlobalNamespace::PS5ActivityIdsModelSO::__set__progressActivities(::ArrayW<::GlobalNamespace::ProgressActivitySO*, ::Array<::GlobalNamespace::ProgressActivitySO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____progressActivities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::CompetetiveActivitySO*, ::Array<::GlobalNamespace::CompetetiveActivitySO*>*>& GlobalNamespace::PS5ActivityIdsModelSO::__get__competetiveActivities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____competetiveActivities;
}
constexpr ::ArrayW<::GlobalNamespace::CompetetiveActivitySO*, ::Array<::GlobalNamespace::CompetetiveActivitySO*>*> const& GlobalNamespace::PS5ActivityIdsModelSO::__get__competetiveActivities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____competetiveActivities;
}
constexpr void GlobalNamespace::PS5ActivityIdsModelSO::__set__competetiveActivities(::ArrayW<::GlobalNamespace::CompetetiveActivitySO*, ::Array<::GlobalNamespace::CompetetiveActivitySO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____competetiveActivities)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::ProgressActivitySO*, ::Array<::GlobalNamespace::ProgressActivitySO*>*> GlobalNamespace::PS5ActivityIdsModelSO::get_progressActivities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(),
                                                                             "get_progressActivities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ProgressActivitySO*, ::Array<::GlobalNamespace::ProgressActivitySO*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::CompetetiveActivitySO*, ::Array<::GlobalNamespace::CompetetiveActivitySO*>*> GlobalNamespace::PS5ActivityIdsModelSO::get_competetiveActivities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(),
                                                                             "get_competetiveActivities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::CompetetiveActivitySO*, ::Array<::GlobalNamespace::CompetetiveActivitySO*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS5ActivityIdsModelSO* GlobalNamespace::PS5ActivityIdsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5ActivityIdsModelSO*>());
}
inline void GlobalNamespace::PS5ActivityIdsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityIdsModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5ActivityIdsModelSO::PS5ActivityIdsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
