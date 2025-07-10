#pragma once
// IWYU pragma private; include "GlobalNamespace/TestFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__TestFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::TestFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b53ce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestFlowCoordinator::*)()>(&::GlobalNamespace::TestFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b53cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__leftViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__leftViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__leftViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__rightViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__rightViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__rightViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__bottomScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__bottomScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreenViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__bottomScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bottomScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__topScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__topScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreenViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__topScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TestFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::TestFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TestFlowCoordinator* GlobalNamespace::TestFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TestFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestFlowCoordinator::TestFlowCoordinator() {}
