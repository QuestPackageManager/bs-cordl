#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__TestFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::TestFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229e188;

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
  constexpr static std::size_t addrs = 0x229e1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::ViewController*& GlobalNamespace::TestFlowCoordinator::__get__viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____viewController;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& GlobalNamespace::TestFlowCoordinator::__get__viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____viewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__viewController(::HMUI::ViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController*& GlobalNamespace::TestFlowCoordinator::__get__leftViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____leftViewController;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& GlobalNamespace::TestFlowCoordinator::__get__leftViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____leftViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__leftViewController(::HMUI::ViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController*& GlobalNamespace::TestFlowCoordinator::__get__rightViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rightViewController;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& GlobalNamespace::TestFlowCoordinator::__get__rightViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rightViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__rightViewController(::HMUI::ViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController*& GlobalNamespace::TestFlowCoordinator::__get__bottomScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomScreenViewController;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& GlobalNamespace::TestFlowCoordinator::__get__bottomScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomScreenViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__bottomScreenViewController(::HMUI::ViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bottomScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController*& GlobalNamespace::TestFlowCoordinator::__get__topScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____topScreenViewController;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& GlobalNamespace::TestFlowCoordinator::__get__topScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____topScreenViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__set__topScreenViewController(::HMUI::ViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TestFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::TestFlowCoordinator* GlobalNamespace::TestFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TestFlowCoordinator*>());
}
inline void GlobalNamespace::TestFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestFlowCoordinator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestFlowCoordinator::TestFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
