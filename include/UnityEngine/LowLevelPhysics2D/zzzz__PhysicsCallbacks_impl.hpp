#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsCallbacks.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsEvents_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsLowLevelScripting2D_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsCallbacks_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsCallbacks_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsEvents_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback.OnBodyUpdate2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback::*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent)>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback::OnBodyUpdate2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback::OnBodyUpdate2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent bodyUpdateEvent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyUpdateEvent);
}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback.OnContactFilter2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback::*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent)>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback::OnContactFilter2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback::OnContactFilter2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent contactFilterEvent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactFilterCallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contactFilterEvent);
}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback.OnPreSolve2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback::*)(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback::OnPreSolve2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback::OnPreSolve2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent preSolveEvent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IPreSolveCallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, preSolveEvent);
}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback.OnTriggerBegin2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback::*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent)>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback::OnTriggerBegin2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback.OnTriggerEnd2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback::*)(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback::OnTriggerEnd2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback::OnTriggerBegin2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent beginEvent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beginEvent);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback::OnTriggerEnd2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent endEvent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endEvent);
}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback.OnContactBegin2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback::*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent)>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback::OnContactBegin2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback.OnContactEnd2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback::*)(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback::OnContactEnd2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback::OnContactBegin2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent beginEvent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beginEvent);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback::OnContactEnd2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent endEvent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endEvent);
}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback.OnJointThreshold2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback::*)(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent)>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback::OnJointThreshold2D)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback::OnJointThreshold2D(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent thresholdEvent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thresholdEvent);
}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget.get_bodyUpdateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent (::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget::get_bodyUpdateEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6fd552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget>(), { "get_bodyUpdateEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget.get_bodyTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback* (::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget::get_bodyTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget>(), { "get_bodyTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget::get_bodyUpdateEvent() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget>(), { "get_bodyUpdateEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback* UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget::get_bodyTarget() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget>(), { "get_bodyTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IBodyUpdateCallback*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BodyUpdateEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent m_BodyUpdateEvent) noexcept {
  this->m_BodyUpdateEvent = m_BodyUpdateEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets.get_bodyUpdateCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::get_bodyUpdateCallbackTargets)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd5490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets>(), { "get_bodyUpdateCallbackTargets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6fd54dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget>
UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::get_bodyUpdateCallbackTargets() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets>(), { "get_bodyUpdateCallbackTargets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::BodyUpdateCallbackTargets_PhysicsCallbacks_BodyUpdateTarget>>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BodyUpdateCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::PhysicsCallbacks_BodyUpdateCallbackTargets(
    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BodyUpdateCallbackTargets) noexcept {
  this->m_BodyUpdateCallbackTargets = m_BodyUpdateCallbackTargets;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_BodyUpdateCallbackTargets::PhysicsCallbacks_BodyUpdateCallbackTargets() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget.get_beginEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent (::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::get_beginEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd5738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget>(), { "get_beginEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget.get_triggerShapeTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* (::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::get_triggerShapeTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget>(), { "get_triggerShapeTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget.get_visitorShapeTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* (::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::get_visitorShapeTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget>(), { "get_visitorShapeTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::get_beginEvent() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget>(), { "get_beginEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::get_triggerShapeTarget() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget>(), { "get_triggerShapeTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::get_visitorShapeTarget() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget>(), { "get_visitorShapeTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BeginEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent m_BeginEvent) noexcept {
  this->m_BeginEvent = m_BeginEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget.get_endEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent (::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::get_endEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd5950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget>(), { "get_endEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget.get_triggerShapeTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* (::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::get_triggerShapeTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd595c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget>(), { "get_triggerShapeTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget.get_visitorShapeTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* (::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::get_visitorShapeTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget>(), { "get_visitorShapeTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::get_endEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget>(), { "get_endEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::get_triggerShapeTarget() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget>(), { "get_triggerShapeTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback* UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::get_visitorShapeTarget() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget>(), { "get_visitorShapeTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ITriggerCallback*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_EndEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent m_EndEvent) noexcept {
  this->m_EndEvent = m_EndEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets.get_BeginCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::get_BeginCallbackTargets)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd5600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>(), { "get_BeginCallbackTargets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets.get_EndCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::get_EndCallbackTargets)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd564c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>(), { "get_EndCallbackTargets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6fd5698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget>
UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::get_BeginCallbackTargets() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>(), { "get_BeginCallbackTargets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerBeginTarget>>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget>
UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::get_EndCallbackTargets() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>(), { "get_EndCallbackTargets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::TriggerCallbackTargets_PhysicsCallbacks_TriggerEndTarget>>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BeginCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "m_EndCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::PhysicsCallbacks_TriggerCallbackTargets(
    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BeginCallbackTargets,
    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_EndCallbackTargets) noexcept {
  this->m_BeginCallbackTargets = m_BeginCallbackTargets;
  this->m_EndCallbackTargets = m_EndCallbackTargets;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_TriggerCallbackTargets::PhysicsCallbacks_TriggerCallbackTargets() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget.get_beginEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent (::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::get_beginEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6fd5c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget>(), { "get_beginEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget.get_shapeTargetA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* (::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::get_shapeTargetA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget>(), { "get_shapeTargetA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget.get_shapeTargetB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* (::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::get_shapeTargetB)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget>(), { "get_shapeTargetB", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::get_beginEvent() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget>(), { "get_beginEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::get_shapeTargetA() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget>(), { "get_shapeTargetA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::get_shapeTargetB() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget>(), { "get_shapeTargetB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BeginEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent m_BeginEvent) noexcept {
  this->m_BeginEvent = m_BeginEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget.get_endEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent (::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::get_endEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6fd5da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget>(), { "get_endEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget.get_shapeTargetA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* (::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::get_shapeTargetA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget>(), { "get_shapeTargetA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget.get_shapeTargetB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* (::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::get_shapeTargetB)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget>(), { "get_shapeTargetB", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::get_endEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget>(), { "get_endEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::get_shapeTargetA() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget>(), { "get_shapeTargetA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback* UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::get_shapeTargetB() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget>(), { "get_shapeTargetB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IContactCallback*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_EndEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent m_EndEvent) noexcept {
  this->m_EndEvent = m_EndEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets.get_BeginCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::get_BeginCallbackTargets)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd5adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>(), { "get_BeginCallbackTargets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets.get_EndCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::get_EndCallbackTargets)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd5b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>(), { "get_EndCallbackTargets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6fd5b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget>
UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::get_BeginCallbackTargets() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>(), { "get_BeginCallbackTargets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactBeginTarget>>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget>
UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::get_EndCallbackTargets() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>(), { "get_EndCallbackTargets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::ContactCallbackTargets_PhysicsCallbacks_ContactEndTarget>>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BeginCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "m_EndCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::PhysicsCallbacks_ContactCallbackTargets(
    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_BeginCallbackTargets,
    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_EndCallbackTargets) noexcept {
  this->m_BeginCallbackTargets = m_BeginCallbackTargets;
  this->m_EndCallbackTargets = m_EndCallbackTargets;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_ContactCallbackTargets::PhysicsCallbacks_ContactCallbackTargets() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget.get_jointThresholdEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent (::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget::*)()>(
        &::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget::get_jointThresholdEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd5fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget>(), { "get_jointThresholdEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget.get_jointTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback* (
    ::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget::*)()>(
    &::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget::get_jointTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd5fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget>(), { "get_jointTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent
UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget::get_jointThresholdEvent() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget>(), { "get_jointThresholdEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback*
UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget::get_jointTarget() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget>(), { "get_jointTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_IJointThresholdCallback*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_JointThresholdEvent", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget(
    ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent m_JointThresholdEvent) noexcept {
  this->m_JointThresholdEvent = m_JointThresholdEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets.get_jointThresholdCallbackTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget> (
    ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::get_jointThresholdCallbackTargets)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fd5f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets>(), { "get_jointThresholdCallbackTargets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6fd5f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget>
UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::get_jointThresholdCallbackTargets() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets>(), { "get_jointThresholdCallbackTargets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::LowLevelPhysics2D::JointThresholdCallbackTargets_PhysicsCallbacks_JointThresholdTarget>>(*this,
                                                                                                                                                                              ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_JointThresholdCallbackTargets", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::PhysicsCallbacks_JointThresholdCallbackTargets(
    ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelScripting2D_PhysicsBuffer m_JointThresholdCallbackTargets) noexcept {
  this->m_JointThresholdCallbackTargets = m_JointThresholdCallbackTargets;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks_JointThresholdCallbackTargets::PhysicsCallbacks_JointThresholdCallbackTargets() {}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsCallbacks::PhysicsCallbacks() {}
