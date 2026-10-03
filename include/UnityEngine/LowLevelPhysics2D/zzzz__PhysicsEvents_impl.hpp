#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsEvents.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsJoint_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsEvents_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsEvents_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsJoint_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShape_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent.get_transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsTransform (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::get_transform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd7188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(), { "get_transform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent.get_body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsBody (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::get_body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd7194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(), { "get_body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent.get_fellAsleep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::get_fellAsleep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(), { "get_fellAsleep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6fd71a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsTransform UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(), { "get_transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::get_body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(), { "get_body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::get_fellAsleep() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(), { "get_fellAsleep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UserData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Transform", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Body", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_FellAsleep", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::PhysicsEvents_BodyUpdateEvent(::System::IntPtr m_UserData, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_Transform,
                                                                                                         ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_Body, bool m_FellAsleep) noexcept {
  this->m_UserData = m_UserData;
  this->m_Transform = m_Transform;
  this->m_Body = m_Body;
  this->m_FellAsleep = m_FellAsleep;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_BodyUpdateEvent::PhysicsEvents_BodyUpdateEvent() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent.get_triggerShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::get_triggerShape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd72a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent>(), { "get_triggerShape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent.get_visitorShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::get_visitorShape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd72ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent>(), { "get_visitorShape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::ToString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6fd72b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::get_triggerShape() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent>(), { "get_triggerShape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::get_visitorShape() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent>(), { "get_visitorShape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_TriggerShape", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_VisitorShape",
// ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::PhysicsEvents_TriggerBeginEvent(::UnityEngine::LowLevelPhysics2D::PhysicsShape m_TriggerShape,
                                                                                                             ::UnityEngine::LowLevelPhysics2D::PhysicsShape m_VisitorShape) noexcept {
  this->m_TriggerShape = m_TriggerShape;
  this->m_VisitorShape = m_VisitorShape;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerBeginEvent::PhysicsEvents_TriggerBeginEvent() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent.get_triggerShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::get_triggerShape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd737c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent>(), { "get_triggerShape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent.get_visitorShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::get_visitorShape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd7384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent>(), { "get_visitorShape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::ToString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6fd738c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::get_triggerShape() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent>(), { "get_triggerShape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::get_visitorShape() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent>(), { "get_visitorShape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_TriggerShape", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_VisitorShape",
// ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::PhysicsEvents_TriggerEndEvent(::UnityEngine::LowLevelPhysics2D::PhysicsShape m_TriggerShape,
                                                                                                         ::UnityEngine::LowLevelPhysics2D::PhysicsShape m_VisitorShape) noexcept {
  this->m_TriggerShape = m_TriggerShape;
  this->m_VisitorShape = m_VisitorShape;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_TriggerEndEvent::PhysicsEvents_TriggerEndEvent() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent.get_shapeA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::get_shapeA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd7454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(), { "get_shapeA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent.get_shapeB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::get_shapeB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd745c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(), { "get_shapeB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent.get_contactId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::get_contactId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6fd7464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(), { "get_contactId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::ToString)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6fd7474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::get_shapeA() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(), { "get_shapeA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::get_shapeB() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(), { "get_shapeB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::get_contactId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(), { "get_contactId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ShapeA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ShapeB", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactId", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::PhysicsEvents_ContactBeginEvent(::UnityEngine::LowLevelPhysics2D::PhysicsShape m_ShapeA,
                                                                                                             ::UnityEngine::LowLevelPhysics2D::PhysicsShape m_ShapeB,
                                                                                                             ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId m_ContactId) noexcept {
  this->m_ShapeA = m_ShapeA;
  this->m_ShapeB = m_ShapeB;
  this->m_ContactId = m_ContactId;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactBeginEvent::PhysicsEvents_ContactBeginEvent() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent.get_shapeA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::get_shapeA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd7578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(), { "get_shapeA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent.get_shapeB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::get_shapeB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd7580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(), { "get_shapeB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent.get_contactId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::get_contactId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6fd7588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(), { "get_contactId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::ToString)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6fd7598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::get_shapeA() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(), { "get_shapeA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::get_shapeB() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(), { "get_shapeB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::get_contactId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(), { "get_contactId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ShapeA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ShapeB", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ContactId", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::PhysicsEvents_ContactEndEvent(::UnityEngine::LowLevelPhysics2D::PhysicsShape m_ShapeA,
                                                                                                         ::UnityEngine::LowLevelPhysics2D::PhysicsShape m_ShapeB,
                                                                                                         ::UnityEngine::LowLevelPhysics2D::PhysicsShape_ContactId m_ContactId) noexcept {
  this->m_ShapeA = m_ShapeA;
  this->m_ShapeB = m_ShapeB;
  this->m_ContactId = m_ContactId;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactEndEvent::PhysicsEvents_ContactEndEvent() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent.get_physicsWorld
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsWorld (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::get_physicsWorld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd769c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(), { "get_physicsWorld", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent.get_shapeA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::get_shapeA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd76a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(), { "get_shapeA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent.get_shapeB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::get_shapeB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd76ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(), { "get_shapeB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::ToString)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6fd76b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorld UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::get_physicsWorld() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(), { "get_physicsWorld", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::get_shapeA() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(), { "get_shapeA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::get_shapeB() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(), { "get_shapeB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PhysicsWorld", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ShapeA", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ShapeB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::PhysicsEvents_ContactFilterEvent(::UnityEngine::LowLevelPhysics2D::PhysicsWorld m_PhysicsWorld,
                                                                                                               ::UnityEngine::LowLevelPhysics2D::PhysicsShape m_ShapeA,
                                                                                                               ::UnityEngine::LowLevelPhysics2D::PhysicsShape m_ShapeB) noexcept {
  this->m_PhysicsWorld = m_PhysicsWorld;
  this->m_ShapeA = m_ShapeA;
  this->m_ShapeB = m_ShapeB;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent::PhysicsEvents_ContactFilterEvent() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent.get_physicsWorld
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsWorld (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_physicsWorld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd77b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_physicsWorld", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent.get_shapeA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_shapeA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd77c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_shapeA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent.get_shapeB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsShape (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_shapeB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd77c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_shapeB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent.get_point
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_point)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd77d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_point", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent.get_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_normal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd77d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_normal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::ToString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6fd77e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorld UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_physicsWorld() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_physicsWorld", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_shapeA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_shapeA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsShape UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_shapeB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_shapeB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsShape>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_point() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_point", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::get_normal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), { "get_normal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PhysicsWorld", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsWorld", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ShapeA", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsShape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ShapeB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsShape",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Normal",
// ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::PhysicsEvents_PreSolveEvent(::UnityEngine::LowLevelPhysics2D::PhysicsWorld m_PhysicsWorld,
                                                                                                     ::UnityEngine::LowLevelPhysics2D::PhysicsShape m_ShapeA,
                                                                                                     ::UnityEngine::LowLevelPhysics2D::PhysicsShape m_ShapeB, ::UnityEngine::Vector2 m_Point,
                                                                                                     ::UnityEngine::Vector2 m_Normal) noexcept {
  this->m_PhysicsWorld = m_PhysicsWorld;
  this->m_ShapeA = m_ShapeA;
  this->m_ShapeB = m_ShapeB;
  this->m_Point = m_Point;
  this->m_Normal = m_Normal;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent::PhysicsEvents_PreSolveEvent() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent.get_joint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsJoint (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent::get_joint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd7a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent>(), { "get_joint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6fd7a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsJoint UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent::get_joint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent>(), { "get_joint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(*this, ___internal_method);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Joint", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsJoint", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_UserData", ty:
// "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent::PhysicsEvents_JointThresholdEvent(::UnityEngine::LowLevelPhysics2D::PhysicsJoint m_Joint,
                                                                                                                 ::System::IntPtr m_UserData) noexcept {
  this->m_Joint = m_Joint;
  this->m_UserData = m_UserData;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_JointThresholdEvent::PhysicsEvents_JointThresholdEvent() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6fd7ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler::*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, float_t)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fd7b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler::Invoke(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, float_t deltaTime) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, world, deltaTime);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler* UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler::PhysicsEvents_PreSimulateEventHandler() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents.InvokePreSimulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, float_t)>(&::UnityEngine::LowLevelPhysics2D::PhysicsEvents::InvokePreSimulate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6fd6144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                             { "InvokePreSimulate", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents.InvokePostSimulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld, float_t)>(&::UnityEngine::LowLevelPhysics2D::PhysicsEvents::InvokePostSimulate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6fd62ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                             { "InvokePostSimulate", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents.SendContactFilterCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendContactFilterCallback)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6fd6414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                            { "SendContactFilterCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents.SendPreSolveCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendPreSolveCallback)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6fd650c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                         { "SendPreSolveCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents.SendBodyUpdateCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld)>(&::UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendBodyUpdateCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fd6604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                                                           { "SendBodyUpdateCallbacks", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents.SendContactCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld)>(&::UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendContactCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fd6810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                                                           { "SendContactCallbacks", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents.SendTriggerCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld)>(&::UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendTriggerCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fd6c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                                                           { "SendTriggerCallbacks", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsEvents.SendJointThresholdCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LowLevelPhysics2D::PhysicsWorld)>(&::UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendJointThresholdCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6fd6fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                             { "SendJointThresholdCallbacks", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents::setStaticF_s_PreSimulate(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*, "s_PreSimulate", ::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(
      std::forward<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*>(value));
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler* UnityEngine::LowLevelPhysics2D::PhysicsEvents::getStaticF_s_PreSimulate() {
  return ::cordl_internals::getStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*, "s_PreSimulate", ::UnityEngine::LowLevelPhysics2D::PhysicsEvents>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents::setStaticF_s_PostSimulate(::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*, "s_PostSimulate", ::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(
      std::forward<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*>(value));
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler* UnityEngine::LowLevelPhysics2D::PhysicsEvents::getStaticF_s_PostSimulate() {
  return ::cordl_internals::getStaticField<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSimulateEventHandler*, "s_PostSimulate", ::UnityEngine::LowLevelPhysics2D::PhysicsEvents>();
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents::InvokePreSimulate(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                           { "InvokePreSimulate", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, deltaTime);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents::InvokePostSimulate(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world, float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                           { "InvokePostSimulate", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, deltaTime);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendContactFilterCallback(::System::Object* callbackTarget,
                                                                                     ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent contactFilterEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                          { "SendContactFilterCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_ContactFilterEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callbackTarget, contactFilterEvent);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendPreSolveCallback(::System::Object* callbackTarget, ::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent preSolveEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                       { "SendPreSolveCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents_PreSolveEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callbackTarget, preSolveEvent);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendBodyUpdateCallbacks(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                                                         { "SendBodyUpdateCallbacks", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendContactCallbacks(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                                                         { "SendContactCallbacks", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendTriggerCallbacks(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                                                         { "SendTriggerCallbacks", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsEvents::SendJointThresholdCallbacks(::UnityEngine::LowLevelPhysics2D::PhysicsWorld world) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsEvents>(),
                                                                                         { "SendJointThresholdCallbacks", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsEvents::PhysicsEvents() {}
