#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__FakeMirrorObjectsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FakeMirrorObjectsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredSliderController_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FakeMirrorObjectsInstaller____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FakeMirrorObjectsInstaller____c::*)()>(
    &::GlobalNamespace::__FakeMirrorObjectsInstaller____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226fea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FakeMirrorObjectsInstaller____c._InstallBindings_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__FakeMirrorObjectsInstaller____c::*)(::Zenject::BindingId)>(
    &::GlobalNamespace::__FakeMirrorObjectsInstaller____c::_InstallBindings_b__11_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x226fea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>::get(), "<InstallBindings>b__11_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__FakeMirrorObjectsInstaller____c::setStaticF___9(::GlobalNamespace::__FakeMirrorObjectsInstaller____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>::get>(
      std::forward<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>(value));
}
inline ::GlobalNamespace::__FakeMirrorObjectsInstaller____c* GlobalNamespace::__FakeMirrorObjectsInstaller____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>::get>();
}
inline void GlobalNamespace::__FakeMirrorObjectsInstaller____c::setStaticF___9__11_0(::System::Func_2<::Zenject::BindingId, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::BindingId, bool>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>::get>(
      std::forward<::System::Func_2<::Zenject::BindingId, bool>*>(value));
}
inline ::System::Func_2<::Zenject::BindingId, bool>* GlobalNamespace::__FakeMirrorObjectsInstaller____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::BindingId, bool>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>::get>();
}
inline ::GlobalNamespace::__FakeMirrorObjectsInstaller____c* GlobalNamespace::__FakeMirrorObjectsInstaller____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>());
}
inline void GlobalNamespace::__FakeMirrorObjectsInstaller____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__FakeMirrorObjectsInstaller____c::_InstallBindings_b__11_0(::Zenject::BindingId t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FakeMirrorObjectsInstaller____c*>::get(), "<InstallBindings>b__11_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FakeMirrorObjectsInstaller____c::__FakeMirrorObjectsInstaller____c() {}
//  Writing Method size for method: ::GlobalNamespace::FakeMirrorObjectsInstaller.get_mirroredGameNoteControllerPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MirroredGameNoteController* (::GlobalNamespace::FakeMirrorObjectsInstaller::*)()>(
    &::GlobalNamespace::FakeMirrorObjectsInstaller::get_mirroredGameNoteControllerPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FakeMirrorObjectsInstaller*>::get(),
                                                                               "get_mirroredGameNoteControllerPrefab", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeMirrorObjectsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FakeMirrorObjectsInstaller::*)()>(
    &::GlobalNamespace::FakeMirrorObjectsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x226f8b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FakeMirrorObjectsInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FakeMirrorObjectsInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeMirrorObjectsInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FakeMirrorObjectsInstaller::*)()>(&::GlobalNamespace::FakeMirrorObjectsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226fe34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FakeMirrorObjectsInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MirroredGameNoteController*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirroredGameNoteControllerPrefab(::GlobalNamespace::MirroredGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredGameNoteControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirroredGameNoteController*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredBurstSliderHeadGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderHeadGameNoteControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const&
GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredBurstSliderHeadGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderHeadGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirroredBurstSliderHeadGameNoteControllerPrefab(::GlobalNamespace::MirroredGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBurstSliderHeadGameNoteControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirroredGameNoteController*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredBurstSliderGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderGameNoteControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const&
GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredBurstSliderGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirroredBurstSliderGameNoteControllerPrefab(::GlobalNamespace::MirroredGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBurstSliderGameNoteControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirroredGameNoteController*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredBurstSliderFillControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderFillControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const&
GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredBurstSliderFillControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderFillControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirroredBurstSliderFillControllerPrefab(::GlobalNamespace::MirroredGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBurstSliderFillControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirroredBombNoteController*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredBombNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBombNoteControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredBombNoteController*> const& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredBombNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBombNoteControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirroredBombNoteControllerPrefab(::GlobalNamespace::MirroredBombNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBombNoteControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirroredObstacleController*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredObstacleControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredObstacleControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredObstacleController*> const& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredObstacleControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredObstacleControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirroredObstacleControllerPrefab(::GlobalNamespace::MirroredObstacleController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredObstacleControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirroredSliderController*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredSliderControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredSliderControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredSliderController*> const& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirroredSliderControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredSliderControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirroredSliderControllerPrefab(::GlobalNamespace::MirroredSliderController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredSliderControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirrorGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorGraphicsSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirrorGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorGraphicsSettings;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirrorGraphicsSettings(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*& GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirrorRendererGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*> const&
GlobalNamespace::FakeMirrorObjectsInstaller::__get__mirrorRendererGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__set__mirrorRendererGraphicsSettingsPresets(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRendererGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MirroredGameNoteController* GlobalNamespace::FakeMirrorObjectsInstaller::get_mirroredGameNoteControllerPrefab() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FakeMirrorObjectsInstaller*>::get(),
                                                                             "get_mirroredGameNoteControllerPrefab", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MirroredGameNoteController*, false>(this, ___internal_method);
}
inline void GlobalNamespace::FakeMirrorObjectsInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FakeMirrorObjectsInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FakeMirrorObjectsInstaller* GlobalNamespace::FakeMirrorObjectsInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FakeMirrorObjectsInstaller*>());
}
inline void GlobalNamespace::FakeMirrorObjectsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FakeMirrorObjectsInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FakeMirrorObjectsInstaller::FakeMirrorObjectsInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
