#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5ActivityDataSO.get_activityId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PS5ActivityDataSO::*)()>(&::GlobalNamespace::PS5ActivityDataSO::get_activityId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityDataSO*>::get(), "get_activityId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5ActivityDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5ActivityDataSO::*)()>(&::GlobalNamespace::PS5ActivityDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityDataSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PS5ActivityDataSO::__get__activityId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activityId;
}
constexpr ::StringW const& GlobalNamespace::PS5ActivityDataSO::__get__activityId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activityId;
}
constexpr void GlobalNamespace::PS5ActivityDataSO::__set__activityId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activityId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PS5ActivityDataSO::get_activityId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityDataSO*>::get(), "get_activityId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS5ActivityDataSO* GlobalNamespace::PS5ActivityDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5ActivityDataSO*>());
}
inline void GlobalNamespace::PS5ActivityDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5ActivityDataSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5ActivityDataSO::PS5ActivityDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
