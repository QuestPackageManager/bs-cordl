#pragma once
// IWYU pragma private; include "UnityEngine/AnimationEventBlittable.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__AnimationEventSource_impl.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_impl.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_impl.hpp"
#include "UnityEngine/zzzz__AnimationEventBlittable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AnimationEvent_def.hpp"
#include "UnityEngine/zzzz__GCHandlePool_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimationEventBlittable.FromAnimationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationEventBlittable (*)(::UnityEngine::AnimationEvent*)>(
    &::UnityEngine::AnimationEventBlittable::FromAnimationEvent)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6800a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "FromAnimationEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationEventBlittable.FromAnimationEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*>,
                                                                                           ::UnityEngine::AnimationEventBlittable*)>(&::UnityEngine::AnimationEventBlittable::FromAnimationEvents)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6800ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "FromAnimationEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationEventBlittable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationEventBlittable.PointerToAnimationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationEvent* (*)(::System::IntPtr)>(
    &::UnityEngine::AnimationEventBlittable::PointerToAnimationEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6800ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "PointerToAnimationEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationEventBlittable.PointerToAnimationEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> (*)(::System::IntPtr, int32_t)>(
    &::UnityEngine::AnimationEventBlittable::PointerToAnimationEvents)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6801174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "PointerToAnimationEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationEventBlittable.DisposeEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AnimationEventBlittable::DisposeEvents)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6801238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "DisposeEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationEventBlittable.FreeEventsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AnimationEventBlittable::FreeEventsInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6801424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "FreeEventsInternal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationEventBlittable.ToAnimationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationEvent* (*)(::UnityEngine::AnimationEventBlittable)>(
    &::UnityEngine::AnimationEventBlittable::ToAnimationEvent)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6800ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "ToAnimationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationEventBlittable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AnimationEventBlittable.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimationEventBlittable::*)()>(&::UnityEngine::AnimationEventBlittable::Dispose)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6801298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::AnimationEventBlittable::setStaticF_s_handlePool(::UnityEngine::GCHandlePool* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GCHandlePool*, "s_handlePool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get>(
      std::forward<::UnityEngine::GCHandlePool*>(value));
}
inline ::UnityEngine::GCHandlePool* UnityEngine::AnimationEventBlittable::getStaticF_s_handlePool() {
  return ::cordl_internals::getStaticField<::UnityEngine::GCHandlePool*, "s_handlePool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get>();
}
inline ::UnityEngine::AnimationEventBlittable UnityEngine::AnimationEventBlittable::FromAnimationEvent(::UnityEngine::AnimationEvent* animationEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "FromAnimationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationEventBlittable, false>(nullptr, ___internal_method, animationEvent);
}
inline void UnityEngine::AnimationEventBlittable::FromAnimationEvents(::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> animationEvents,
                                                                      ::UnityEngine::AnimationEventBlittable* animationEventBlittables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "FromAnimationEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationEventBlittable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, animationEvents, animationEventBlittables);
}
inline ::UnityEngine::AnimationEvent* UnityEngine::AnimationEventBlittable::PointerToAnimationEvent(::System::IntPtr animationEventBlittable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "PointerToAnimationEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationEvent*, false>(nullptr, ___internal_method, animationEventBlittable);
}
inline ::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> UnityEngine::AnimationEventBlittable::PointerToAnimationEvents(::System::IntPtr animationEventBlittableArray,
                                                                                                                                                         int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "PointerToAnimationEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*>, false>(nullptr, ___internal_method, animationEventBlittableArray,
                                                                                                                                        size);
}
inline void UnityEngine::AnimationEventBlittable::DisposeEvents(::System::IntPtr animationEventBlittableArray, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "DisposeEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, animationEventBlittableArray, size);
}
inline void UnityEngine::AnimationEventBlittable::FreeEventsInternal(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "FreeEventsInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::AnimationEvent* UnityEngine::AnimationEventBlittable::ToAnimationEvent(::UnityEngine::AnimationEventBlittable animationEventBlittable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "ToAnimationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationEventBlittable>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationEvent*, false>(nullptr, ___internal_method, animationEventBlittable);
}
inline void UnityEngine::AnimationEventBlittable::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationEventBlittable>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::AnimationEventBlittable::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::AnimationEventBlittable::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FunctionName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_StringParameter", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ObjectReferenceParameter", ty: "::System::IntPtr", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_FloatParameter", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IntParameter", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_MessageOptions", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Source", ty: "::UnityEngine::AnimationEventSource", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_StateSender", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimatorStateInfo", ty:
// "::UnityEngine::AnimatorStateInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimatorClipInfo", ty: "::UnityEngine::AnimatorClipInfo", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimationEventBlittable::AnimationEventBlittable(float_t m_Time, ::System::IntPtr m_FunctionName, ::System::IntPtr m_StringParameter,
                                                                          ::System::IntPtr m_ObjectReferenceParameter, float_t m_FloatParameter, int32_t m_IntParameter, int32_t m_MessageOptions,
                                                                          ::UnityEngine::AnimationEventSource m_Source, ::System::IntPtr m_StateSender,
                                                                          ::UnityEngine::AnimatorStateInfo m_AnimatorStateInfo, ::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo) noexcept {
  this->m_Time = m_Time;
  this->m_FunctionName = m_FunctionName;
  this->m_StringParameter = m_StringParameter;
  this->m_ObjectReferenceParameter = m_ObjectReferenceParameter;
  this->m_FloatParameter = m_FloatParameter;
  this->m_IntParameter = m_IntParameter;
  this->m_MessageOptions = m_MessageOptions;
  this->m_Source = m_Source;
  this->m_StateSender = m_StateSender;
  this->m_AnimatorStateInfo = m_AnimatorStateInfo;
  this->m_AnimatorClipInfo = m_AnimatorClipInfo;
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationEventBlittable::AnimationEventBlittable() {}
