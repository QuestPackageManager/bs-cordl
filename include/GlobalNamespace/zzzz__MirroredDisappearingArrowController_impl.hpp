#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredDisappearingArrowController.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MirroredGameNoteController> (
    ::GlobalNamespace::MirroredDisappearingArrowController::*)()>(&::GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c5e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredDisappearingArrowController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredDisappearingArrowController::*)()>(
    &::GlobalNamespace::MirroredDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x56c5e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& GlobalNamespace::MirroredDisappearingArrowController::__cordl_internal_get__mirroredGameNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteController;
}
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& GlobalNamespace::MirroredDisappearingArrowController::__cordl_internal_get__mirroredGameNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteController;
}
constexpr void GlobalNamespace::MirroredDisappearingArrowController::__cordl_internal_set__mirroredGameNoteController(::UnityW<::GlobalNamespace::MirroredGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredGameNoteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::MirroredGameNoteController> GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MirroredGameNoteController>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredDisappearingArrowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredDisappearingArrowController* GlobalNamespace::MirroredDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MirroredDisappearingArrowController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredDisappearingArrowController::MirroredDisappearingArrowController() {}
