#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectPoolsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineConnectionController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(
    &::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x227356c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(
    &::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22736f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TutorialNoteController*& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__basicNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicNotePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialNoteController*> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__basicNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicNotePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__set__basicNotePrefab(::GlobalNamespace::TutorialNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____basicNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BombNoteController*& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__bombNotePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombNoteController*> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__bombNotePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__set__bombNotePrefab(::GlobalNamespace::BombNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombNotePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObstacleController*& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__obstaclePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> const& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__obstaclePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__set__obstaclePrefab(::GlobalNamespace::ObstacleController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstaclePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteLineConnectionController*& GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__noteLineConnectionControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineConnectionControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteLineConnectionController*> const&
GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__noteLineConnectionControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineConnectionControllerPrefab;
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__set__noteLineConnectionControllerPrefab(::GlobalNamespace::NoteLineConnectionController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteLineConnectionControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller* GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>());
}
inline void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::TutorialBeatmapObjectPoolsInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
