#pragma once
#include "RootMotion/FinalIK/zzzz__InteractionObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTarget_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionSystem_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__InteractionEvent.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__InteractionEvent::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::__InteractionObject__InteractionEvent::Activate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1285e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>::get(), "Activate",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__InteractionEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__InteractionEvent::*)()>(
    &::RootMotion::FinalIK::__InteractionObject__InteractionEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12876e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
constexpr bool& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_pause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pause;
}
constexpr bool const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_pause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pause;
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_pause(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pause = value;
}
constexpr bool& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_pickUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pickUp;
}
constexpr bool const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_pickUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pickUp;
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_pickUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pickUp = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*>&
RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_animations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animations;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*> const&
RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_animations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animations;
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_animations(
    ::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*, ::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*>&
RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_messages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messages;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*, ::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*> const&
RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_messages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messages;
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_messages(
    ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*, ::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___messages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent*& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_unityEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unityEvent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& RootMotion::FinalIK::__InteractionObject__InteractionEvent::__get_unityEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unityEvent;
}
constexpr void RootMotion::FinalIK::__InteractionObject__InteractionEvent::__set_unityEvent(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unityEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::__InteractionObject__InteractionEvent::Activate(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>::get(), "Activate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* RootMotion::FinalIK::__InteractionObject__InteractionEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>());
}
inline void RootMotion::FinalIK::__InteractionObject__InteractionEvent::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionObject__InteractionEvent::__InteractionObject__InteractionEvent() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__Message.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__Message::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::__InteractionObject__Message::Send)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x12875ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Message*>::get(), "Send", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__Message._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__Message::*)()>(
    &::RootMotion::FinalIK::__InteractionObject__Message::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12876ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Message*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& RootMotion::FinalIK::__InteractionObject__Message::__get_function() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___function;
}
constexpr ::StringW const& RootMotion::FinalIK::__InteractionObject__Message::__get_function() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___function;
}
constexpr void RootMotion::FinalIK::__InteractionObject__Message::__set_function(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___function)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& RootMotion::FinalIK::__InteractionObject__Message::__get_recipient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipient;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& RootMotion::FinalIK::__InteractionObject__Message::__get_recipient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recipient;
}
constexpr void RootMotion::FinalIK::__InteractionObject__Message::__set_recipient(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recipient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::__InteractionObject__Message::Send(::UnityEngine::Transform* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Message*>::get(), "Send", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::RootMotion::FinalIK::__InteractionObject__Message* RootMotion::FinalIK::__InteractionObject__Message::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__Message*>());
}
inline void RootMotion::FinalIK::__InteractionObject__Message::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Message*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionObject__Message::__InteractionObject__Message() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::*)(bool)>(
    &::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1287510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(), "Activate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::*)(::UnityEngine::Animator*)>(
    &::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12876f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(), "Activate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::*)(::UnityEngine::Animation*)>(
    &::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x12877a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(), "Activate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::*)()>(
    &::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x128787c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Animator*& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animator;
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_animator(::UnityEngine::Animator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Animation*& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animation;
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_animation(::UnityEngine::Animation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animationState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationState;
}
constexpr ::StringW const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_animationState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationState;
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_animationState(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animationState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_crossfadeTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossfadeTime;
}
constexpr float_t const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_crossfadeTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossfadeTime;
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_crossfadeTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crossfadeTime = value;
}
constexpr int32_t& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_layer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layer;
}
constexpr int32_t const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_layer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layer;
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_layer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layer = value;
}
constexpr bool& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_resetNormalizedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetNormalizedTime;
}
constexpr bool const& RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__get_resetNormalizedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetNormalizedTime;
}
constexpr void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__set_resetNormalizedTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetNormalizedTime = value;
}
inline void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate(bool pickUp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(), "Activate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pickUp);
}
inline void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate(::UnityEngine::Animator* animator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(), "Activate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animator);
}
inline void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::Activate(::UnityEngine::Animation* animation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(), "Activate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animation);
}
inline ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent* RootMotion::FinalIK::__InteractionObject__AnimatorEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>());
}
inline void RootMotion::FinalIK::__InteractionObject__AnimatorEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent::__InteractionObject__AnimatorEvent() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type::__InteractionObject__WeightCurve__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type::__InteractionObject__WeightCurve__Type() {}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::PositionWeight{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::RotationWeight{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::PositionOffsetX{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::PositionOffsetY{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::PositionOffsetZ{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::Pull{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::Reach{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::RotateBoneWeight{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::Push{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::PushParent{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::PoserWeight{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type GlobalNamespace::__InteractionObject__WeightCurve__Type::BendGoalWeight{ static_cast<int32_t>(0xb) };
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__WeightCurve.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__InteractionObject__WeightCurve::*)(float_t)>(
    &::RootMotion::FinalIK::__InteractionObject__WeightCurve::GetValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1286e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(), "GetValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__WeightCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__WeightCurve::*)()>(
    &::RootMotion::FinalIK::__InteractionObject__WeightCurve::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1287890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& RootMotion::FinalIK::__InteractionObject__WeightCurve::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& RootMotion::FinalIK::__InteractionObject__WeightCurve::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void RootMotion::FinalIK::__InteractionObject__WeightCurve::__set_type(::GlobalNamespace::__InteractionObject__WeightCurve__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::FinalIK::__InteractionObject__WeightCurve::__get_curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::FinalIK::__InteractionObject__WeightCurve::__get_curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr void RootMotion::FinalIK::__InteractionObject__WeightCurve::__set_curve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t RootMotion::FinalIK::__InteractionObject__WeightCurve::GetValue(float_t timer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(), "GetValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, timer);
}
inline ::RootMotion::FinalIK::__InteractionObject__WeightCurve* RootMotion::FinalIK::__InteractionObject__WeightCurve::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>());
}
inline void RootMotion::FinalIK::__InteractionObject__WeightCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionObject__WeightCurve::__InteractionObject__WeightCurve() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__Multiplier.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__InteractionObject__Multiplier::*)(
    ::RootMotion::FinalIK::__InteractionObject__WeightCurve*, float_t)>(&::RootMotion::FinalIK::__InteractionObject__Multiplier::GetValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1287428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Multiplier*>::get(), "GetValue", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionObject__Multiplier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionObject__Multiplier::*)()>(
    &::RootMotion::FinalIK::__InteractionObject__Multiplier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1287898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Multiplier*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr void RootMotion::FinalIK::__InteractionObject__Multiplier::__set_curve(::GlobalNamespace::__InteractionObject__WeightCurve__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curve = value;
}
constexpr float_t& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr float_t const& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplier;
}
constexpr void RootMotion::FinalIK::__InteractionObject__Multiplier::__set_multiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplier = value;
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& RootMotion::FinalIK::__InteractionObject__Multiplier::__get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void RootMotion::FinalIK::__InteractionObject__Multiplier::__set_result(::GlobalNamespace::__InteractionObject__WeightCurve__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___result = value;
}
inline float_t RootMotion::FinalIK::__InteractionObject__Multiplier::GetValue(::RootMotion::FinalIK::__InteractionObject__WeightCurve* weightCurve, float_t timer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Multiplier*>::get(), "GetValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, weightCurve, timer);
}
inline ::RootMotion::FinalIK::__InteractionObject__Multiplier* RootMotion::FinalIK::__InteractionObject__Multiplier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__InteractionObject__Multiplier*>());
}
inline void RootMotion::FinalIK::__InteractionObject__Multiplier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionObject__Multiplier*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionObject__Multiplier::__InteractionObject__Multiplier() {}
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenUserManual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "OpenUserManual", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(
    &::RootMotion::FinalIK::InteractionObject::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12867ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "OpenScriptReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12867f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "OpenTutorial1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial2)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "OpenTutorial2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial3)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "OpenTutorial3", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OpenTutorial4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::OpenTutorial4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12868bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "OpenTutorial4", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.SupportGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "SupportGroup",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.ASThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1286944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "ASThread",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1286988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "get_length",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.set_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(float_t)>(&::RootMotion::FinalIK::InteractionObject::set_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1286990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "set_length", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_lastUsedInteractionSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionSystem* (::RootMotion::FinalIK::InteractionObject::*)()>(
    &::RootMotion::FinalIK::InteractionObject::get_lastUsedInteractionSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1286998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "get_lastUsedInteractionSystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.set_lastUsedInteractionSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::InteractionSystem*)>(
    &::RootMotion::FinalIK::InteractionObject::set_lastUsedInteractionSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12869a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "set_lastUsedInteractionSystem", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::Initiate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x12869a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "Initiate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_lookAtTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::InteractionObject::*)()>(
    &::RootMotion::FinalIK::InteractionObject::get_lookAtTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1286b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "get_lookAtTarget", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::InteractionTarget* (
    ::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionSystem*)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1286bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetTarget", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.CurveUsed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::__InteractionObject__WeightCurve__Type)>(
    &::RootMotion::FinalIK::InteractionObject::CurveUsed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1284720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "CurveUsed", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*> (
    ::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::GetTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1286d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetTargets",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (
    ::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::StringW)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x12845dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetTarget", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.OnStartInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::InteractionSystem*)>(
    &::RootMotion::FinalIK::InteractionObject::OnStartInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1284718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "OnStartInteraction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(
    ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionTarget*, float_t, float_t)>(
    &::RootMotion::FinalIK::InteractionObject::Apply)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x1285298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "Apply", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::InteractionObject::*)(
    ::GlobalNamespace::__InteractionObject__WeightCurve__Type, ::RootMotion::FinalIK::InteractionTarget*, float_t)>(&::RootMotion::FinalIK::InteractionObject::GetValue)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x1285ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetValue", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.get_targetsRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::InteractionObject::*)()>(
    &::RootMotion::FinalIK::InteractionObject::get_targetsRoot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1285f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                               "get_targetsRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1287458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)(
    ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::RootMotion::FinalIK::FullBodyBipedEffector, ::GlobalNamespace::__InteractionObject__WeightCurve__Type, float_t, float_t)>(
    &::RootMotion::FinalIK::InteractionObject::Apply)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x1286e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "Apply", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Transform* (::RootMotion::FinalIK::InteractionObject::*)(::RootMotion::FinalIK::FullBodyBipedEffector)>(&::RootMotion::FinalIK::InteractionObject::GetTarget)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1286d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetTarget", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetWeightCurveIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::__InteractionObject__WeightCurve__Type)>(
    &::RootMotion::FinalIK::InteractionObject::GetWeightCurveIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x12873cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetWeightCurveIndex", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject.GetMultiplierIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionObject::*)(::GlobalNamespace::__InteractionObject__WeightCurve__Type)>(
    &::RootMotion::FinalIK::InteractionObject::GetMultiplierIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x128745c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetMultiplierIndex", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionObject::*)()>(&::RootMotion::FinalIK::InteractionObject::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12874b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::InteractionObject::__get_otherLookAtTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherLookAtTarget;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::InteractionObject::__get_otherLookAtTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherLookAtTarget;
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_otherLookAtTarget(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___otherLookAtTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::InteractionObject::__get_otherTargetsRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherTargetsRoot;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::InteractionObject::__get_otherTargetsRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherTargetsRoot;
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_otherTargetsRoot(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___otherTargetsRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::InteractionObject::__get_positionOffsetSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionOffsetSpace;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::InteractionObject::__get_positionOffsetSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionOffsetSpace;
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_positionOffsetSpace(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positionOffsetSpace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*, ::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*>&
RootMotion::FinalIK::InteractionObject::__get_weightCurves() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weightCurves;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*, ::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*> const&
RootMotion::FinalIK::InteractionObject::__get_weightCurves() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weightCurves;
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_weightCurves(
    ::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*, ::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___weightCurves)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*>&
RootMotion::FinalIK::InteractionObject::__get_multipliers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipliers;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*> const&
RootMotion::FinalIK::InteractionObject::__get_multipliers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipliers;
}
constexpr void
RootMotion::FinalIK::InteractionObject::__set_multipliers(::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___multipliers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*>&
RootMotion::FinalIK::InteractionObject::__get_events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___events;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*> const&
RootMotion::FinalIK::InteractionObject::__get_events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___events;
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_events(
    ::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___events)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::InteractionObject::__get__length_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length_k__BackingField;
}
constexpr float_t const& RootMotion::FinalIK::InteractionObject::__get__length_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length_k__BackingField;
}
constexpr void RootMotion::FinalIK::InteractionObject::__set__length_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length_k__BackingField = value;
}
constexpr ::RootMotion::FinalIK::InteractionSystem*& RootMotion::FinalIK::InteractionObject::__get__lastUsedInteractionSystem_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedInteractionSystem_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionSystem*> const& RootMotion::FinalIK::InteractionObject::__get__lastUsedInteractionSystem_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastUsedInteractionSystem_k__BackingField;
}
constexpr void RootMotion::FinalIK::InteractionObject::__set__lastUsedInteractionSystem_k__BackingField(::RootMotion::FinalIK::InteractionSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastUsedInteractionSystem_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*>& RootMotion::FinalIK::InteractionObject::__get_targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targets;
}
constexpr ::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*> const& RootMotion::FinalIK::InteractionObject::__get_targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targets;
}
constexpr void RootMotion::FinalIK::InteractionObject::__set_targets(::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::InteractionObject::OpenUserManual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "OpenUserManual",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenScriptReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                             "OpenScriptReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenTutorial1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "OpenTutorial1",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenTutorial2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "OpenTutorial2",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenTutorial3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "OpenTutorial3",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::OpenTutorial4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "OpenTutorial4",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::SupportGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "SupportGroup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::ASThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "ASThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t RootMotion::FinalIK::InteractionObject::get_length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "get_length",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::set_length(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "set_length", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::InteractionSystem* RootMotion::FinalIK::InteractionObject::get_lastUsedInteractionSystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                             "get_lastUsedInteractionSystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionSystem*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::set_lastUsedInteractionSystem(::RootMotion::FinalIK::InteractionSystem* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "set_lastUsedInteractionSystem", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::InteractionObject::Initiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "Initiate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::get_lookAtTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                             "get_lookAtTarget", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::InteractionTarget* RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType,
                                                                                                   ::RootMotion::FinalIK::InteractionSystem* interactionSystem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetTarget", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::InteractionTarget*, false>(this, ___internal_method, effectorType, interactionSystem);
}
inline bool RootMotion::FinalIK::InteractionObject::CurveUsed(::GlobalNamespace::__InteractionObject__WeightCurve__Type type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "CurveUsed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*> RootMotion::FinalIK::InteractionObject::GetTargets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetTargets",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::StringW tag) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetTarget", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method, effectorType, tag);
}
inline void RootMotion::FinalIK::InteractionObject::OnStartInteraction(::RootMotion::FinalIK::InteractionSystem* interactionSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "OnStartInteraction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactionSystem);
}
inline void RootMotion::FinalIK::InteractionObject::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::RootMotion::FinalIK::FullBodyBipedEffector effector,
                                                          ::RootMotion::FinalIK::InteractionTarget* target, float_t timer, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "Apply", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, effector, target, timer, weight);
}
inline float_t RootMotion::FinalIK::InteractionObject::GetValue(::GlobalNamespace::__InteractionObject__WeightCurve__Type weightCurveType, ::RootMotion::FinalIK::InteractionTarget* target,
                                                                float_t timer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::InteractionTarget*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, weightCurveType, target, timer);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::get_targetsRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(),
                                                                             "get_targetsRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionObject::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::RootMotion::FinalIK::FullBodyBipedEffector effector,
                                                          ::GlobalNamespace::__InteractionObject__WeightCurve__Type type, float_t value, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "Apply", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, effector, type, value, weight);
}
inline ::UnityEngine::Transform* RootMotion::FinalIK::InteractionObject::GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetTarget", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method, effectorType);
}
inline int32_t RootMotion::FinalIK::InteractionObject::GetWeightCurveIndex(::GlobalNamespace::__InteractionObject__WeightCurve__Type weightCurveType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetWeightCurveIndex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, weightCurveType);
}
inline int32_t RootMotion::FinalIK::InteractionObject::GetMultiplierIndex(::GlobalNamespace::__InteractionObject__WeightCurve__Type weightCurveType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), "GetMultiplierIndex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__InteractionObject__WeightCurve__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, weightCurveType);
}
inline ::RootMotion::FinalIK::InteractionObject* RootMotion::FinalIK::InteractionObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::InteractionObject*>());
}
inline void RootMotion::FinalIK::InteractionObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionObject*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::InteractionObject::InteractionObject() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
