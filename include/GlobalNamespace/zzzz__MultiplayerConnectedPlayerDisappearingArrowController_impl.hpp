#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerDisappearingArrowController.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> (
    ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bbb1dc;

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
  constexpr static std::size_t addrs = 0x3bbb1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>&
GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__cordl_internal_get__gameNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> const&
GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__cordl_internal_get__gameNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteController;
}
constexpr void
GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::__cordl_internal_set__gameNoteController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameNoteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController* GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::MultiplayerConnectedPlayerDisappearingArrowController() {}
