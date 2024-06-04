#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllersValueSettingsOffsets.hpp"
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_impl.hpp"
#include "GlobalNamespace/zzzz__VRControllersValueSettingsOffsets_def.hpp"
#include "BeatSaber/GameSettings/zzzz__MainSettingsHandler_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets.get_positionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSettingsOffsets::get_positionOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14f6edc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSettingsOffsets*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSettingsOffsets*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets.get_rotationOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSettingsOffsets::get_rotationOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14f6f44;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSettingsOffsets*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSettingsOffsets*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSettingsOffsets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14f6fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSettingsOffsets*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_get__mainSettingsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const&
GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_get__mainSettingsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsHandler;
}
constexpr void GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRControllersValueSettingsOffsets::get_positionOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSettingsOffsets*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRControllersValueSettingsOffsets::get_rotationOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSettingsOffsets*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRControllersValueSettingsOffsets* GlobalNamespace::VRControllersValueSettingsOffsets::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VRControllersValueSettingsOffsets*>());
}
inline void GlobalNamespace::VRControllersValueSettingsOffsets::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSettingsOffsets*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRControllersValueSettingsOffsets::VRControllersValueSettingsOffsets() {}
