#pragma once
// IWYU pragma private; include "Unity\XR\OpenVR\HandedViveTracker.hpp"
#include "Unity/XR/OpenVR/zzzz__ViveTracker_impl.hpp"
#include "Unity/XR/OpenVR/zzzz__HandedViveTracker_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.get_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::Unity::XR::OpenVR::HandedViveTracker::*)()>(
    &::Unity::XR::OpenVR::HandedViveTracker::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_grip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.set_grip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::Unity::XR::OpenVR::HandedViveTracker::set_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.get_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::HandedViveTracker::*)()>(
    &::Unity::XR::OpenVR::HandedViveTracker::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_gripPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.set_gripPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::HandedViveTracker::set_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(),
                                                                                           { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.get_primary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::HandedViveTracker::*)()>(
    &::Unity::XR::OpenVR::HandedViveTracker::get_primary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_primary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.set_primary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::HandedViveTracker::set_primary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(),
                                                                                           { "set_primary", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.get_trackpadPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::HandedViveTracker::*)()>(
    &::Unity::XR::OpenVR::HandedViveTracker::get_trackpadPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_trackpadPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.set_trackpadPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::HandedViveTracker::set_trackpadPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(),
                                                                                           { "set_trackpadPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.get_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::Unity::XR::OpenVR::HandedViveTracker::*)()>(
    &::Unity::XR::OpenVR::HandedViveTracker::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_triggerPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.set_triggerPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::HandedViveTracker::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::Unity::XR::OpenVR::HandedViveTracker::set_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64d1160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(),
                                                                                           { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::HandedViveTracker::*)()>(&::Unity::XR::OpenVR::HandedViveTracker::FinishSetup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x64d1168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { ::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::OpenVR::HandedViveTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::OpenVR::HandedViveTracker::*)()>(&::Unity::XR::OpenVR::HandedViveTracker::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64d12a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__grip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__grip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grip_k__BackingField;
}
constexpr void Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__gripPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__gripPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gripPressed_k__BackingField;
}
constexpr void Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__primary_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primary_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__primary_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primary_k__BackingField;
}
constexpr void Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_set__primary_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primary_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__trackpadPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackpadPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__trackpadPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackpadPressed_k__BackingField;
}
constexpr void Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_set__trackpadPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackpadPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__triggerPressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_get__triggerPressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triggerPressed_k__BackingField;
}
constexpr void Unity::XR::OpenVR::HandedViveTracker::__cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____triggerPressed_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* Unity::XR::OpenVR::HandedViveTracker::get_grip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_grip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::HandedViveTracker::set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "set_grip", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::HandedViveTracker::get_gripPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_gripPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::HandedViveTracker::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(),
                                                                                         { "set_gripPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::HandedViveTracker::get_primary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_primary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::HandedViveTracker::set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "set_primary", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::HandedViveTracker::get_trackpadPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_trackpadPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::HandedViveTracker::set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(),
                                                                                         { "set_trackpadPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Unity::XR::OpenVR::HandedViveTracker::get_triggerPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { "get_triggerPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::HandedViveTracker::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(),
                                                                                         { "set_triggerPressed", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::OpenVR::HandedViveTracker::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::OpenVR::HandedViveTracker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::XR::OpenVR::HandedViveTracker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::OpenVR::HandedViveTracker* Unity::XR::OpenVR::HandedViveTracker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::OpenVR::HandedViveTracker*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::OpenVR::HandedViveTracker::HandedViveTracker() {}
