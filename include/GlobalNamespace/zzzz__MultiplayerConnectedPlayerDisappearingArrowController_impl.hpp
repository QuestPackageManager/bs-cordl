#pragma once
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* (
    ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d77ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23d77f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__get__gameNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameNoteController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> const&
GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__get__gameNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameNoteController;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__set__gameNoteController(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameNoteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(),
                                               "get_gameNoteController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController* GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::MultiplayerConnectedPlayerDisappearingArrowController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
