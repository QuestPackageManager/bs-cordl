#pragma once
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarColorBehaviour_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarVisualController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AvatarColorBehaviour.OnGraphStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarColorBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::AvatarColorBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2315250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarColorBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarColorBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::AvatarColorBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x23152c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarColorBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarColorBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::AvatarColorBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23154ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarColorBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarColorBehaviour::*)()>(&::GlobalNamespace::AvatarColorBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2315538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__startColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__startColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColor;
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__cordl_internal_set__startColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__endColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__endColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endColor;
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__cordl_internal_set__endColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endColor = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType;
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__cordl_internal_set__easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeType = value;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController>& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__avatarVisualController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarVisualController;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController> const& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__avatarVisualController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarVisualController;
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__cordl_internal_set__avatarVisualController(::UnityW<::BeatSaber::AvatarCore::AvatarVisualController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarVisualController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::AvatarColorBehaviour::__cordl_internal_get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::AvatarColorBehaviour::__cordl_internal_set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
inline void GlobalNamespace::AvatarColorBehaviour::OnGraphStart(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline void GlobalNamespace::AvatarColorBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::AvatarColorBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline ::GlobalNamespace::AvatarColorBehaviour* GlobalNamespace::AvatarColorBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AvatarColorBehaviour*>());
}
inline void GlobalNamespace::AvatarColorBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarColorBehaviour*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AvatarColorBehaviour::AvatarColorBehaviour() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
