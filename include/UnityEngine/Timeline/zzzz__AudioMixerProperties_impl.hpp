#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AudioMixerProperties_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::AudioMixerProperties.PrepareFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AudioMixerProperties::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::AudioMixerProperties::PrepareFrame)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2c61ad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioMixerProperties*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioMixerProperties*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AudioMixerProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AudioMixerProperties::*)()>(&::UnityEngine::Timeline::AudioMixerProperties::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c61d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioMixerProperties*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr float_t const& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_set_volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volume = value;
}
constexpr float_t& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_stereoPan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoPan;
}
constexpr float_t const& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_stereoPan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoPan;
}
constexpr void UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_set_stereoPan(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stereoPan = value;
}
constexpr float_t& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_spatialBlend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spatialBlend;
}
constexpr float_t const& UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_get_spatialBlend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spatialBlend;
}
constexpr void UnityEngine::Timeline::AudioMixerProperties::__cordl_internal_set_spatialBlend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spatialBlend = value;
}
inline void UnityEngine::Timeline::AudioMixerProperties::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioMixerProperties*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline ::UnityEngine::Timeline::AudioMixerProperties* UnityEngine::Timeline::AudioMixerProperties::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::AudioMixerProperties*>());
}
inline void UnityEngine::Timeline::AudioMixerProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AudioMixerProperties*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AudioMixerProperties::AudioMixerProperties() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
