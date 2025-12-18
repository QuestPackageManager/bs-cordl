#pragma once
// IWYU pragma private; include "GlobalNamespace/NoUserAgeWarningViewController.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_impl.hpp"
#include "GlobalNamespace/zzzz__NoUserAgeWarningViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoUserAgeWarningViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoUserAgeWarningViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::NoUserAgeWarningViewController::DidActivate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x57334b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoUserAgeWarningViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoUserAgeWarningViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoUserAgeWarningViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoUserAgeWarningViewController::*)(bool, bool)>(
    &::GlobalNamespace::NoUserAgeWarningViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x573359c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoUserAgeWarningViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoUserAgeWarningViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoUserAgeWarningViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoUserAgeWarningViewController::*)()>(
    &::GlobalNamespace::NoUserAgeWarningViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57335d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoUserAgeWarningViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::NoUserAgeWarningViewController::__cordl_internal_get__confirmButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____confirmButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::NoUserAgeWarningViewController::__cordl_internal_get__confirmButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____confirmButton;
}
constexpr void GlobalNamespace::NoUserAgeWarningViewController::__cordl_internal_set__confirmButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____confirmButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NoUserAgeWarningViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoUserAgeWarningViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::NoUserAgeWarningViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoUserAgeWarningViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::NoUserAgeWarningViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoUserAgeWarningViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoUserAgeWarningViewController* GlobalNamespace::NoUserAgeWarningViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoUserAgeWarningViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoUserAgeWarningViewController::NoUserAgeWarningViewController() {}
