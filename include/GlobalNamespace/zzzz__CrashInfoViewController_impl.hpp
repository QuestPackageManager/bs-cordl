#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrashInfoViewController_def.hpp"
#include "GlobalNamespace/zzzz__CrashManagerSO_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrashInfoViewController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CrashInfoViewController::*)()>(&::GlobalNamespace::CrashInfoViewController::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22af4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CrashInfoViewController*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrashInfoViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CrashInfoViewController::*)()>(&::GlobalNamespace::CrashInfoViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22af520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CrashInfoViewController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CrashManagerSO*& GlobalNamespace::CrashInfoViewController::__get__crashManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crashManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CrashManagerSO*> const& GlobalNamespace::CrashInfoViewController::__get__crashManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crashManager;
}
constexpr void GlobalNamespace::CrashInfoViewController::__set__crashManager(::GlobalNamespace::CrashManagerSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____crashManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::CrashInfoViewController::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::CrashInfoViewController::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::CrashInfoViewController::__set__text(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CrashInfoViewController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CrashInfoViewController*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CrashInfoViewController* GlobalNamespace::CrashInfoViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CrashInfoViewController*>());
}
inline void GlobalNamespace::CrashInfoViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CrashInfoViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrashInfoViewController::CrashInfoViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
