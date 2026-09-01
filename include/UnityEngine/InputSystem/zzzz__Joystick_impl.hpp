#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Joystick.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Joystick_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__StickControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.get_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Joystick::*)()>(
    &::UnityEngine::InputSystem::Joystick::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6521bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_trigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.set_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Joystick::set_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6521bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.get_stick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::StickControl* (::UnityEngine::InputSystem::Joystick::*)()>(
    &::UnityEngine::InputSystem::Joystick::get_stick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6521bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_stick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.set_stick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)(::UnityEngine::InputSystem::Controls::StickControl*)>(
    &::UnityEngine::InputSystem::Joystick::set_stick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6521be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "set_stick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::StickControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.get_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::InputSystem::Joystick::*)()>(
    &::UnityEngine::InputSystem::Joystick::get_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6521be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_twist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.set_twist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(
    &::UnityEngine::InputSystem::Joystick::set_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6521bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "set_twist", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.get_hatswitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::InputSystem::Joystick::*)()>(
    &::UnityEngine::InputSystem::Joystick::get_hatswitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6521bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_hatswitch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.set_hatswitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(
    &::UnityEngine::InputSystem::Joystick::set_hatswitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6521c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(),
                                                                                           { "set_hatswitch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Joystick* (*)()>(&::UnityEngine::InputSystem::Joystick::get_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6521c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Joystick*)>(&::UnityEngine::InputSystem::Joystick::set_current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6521c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Joystick*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.get_all
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*> (*)()>(
    &::UnityEngine::InputSystem::Joystick::get_all)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6521ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_all", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)()>(&::UnityEngine::InputSystem::Joystick::FinishSetup)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6521d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)()>(&::UnityEngine::InputSystem::Joystick::MakeCurrent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6521e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.OnAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)()>(&::UnityEngine::InputSystem::Joystick::OnAdded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6521e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick.OnRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)()>(&::UnityEngine::InputSystem::Joystick::OnRemoved)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6521f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Joystick._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Joystick::*)()>(&::UnityEngine::InputSystem::Joystick::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x652204c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Joystick::__cordl_internal_get__trigger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Joystick::__cordl_internal_get__trigger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trigger_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Joystick::__cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::StickControl*& UnityEngine::InputSystem::Joystick::__cordl_internal_get__stick_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::StickControl* const& UnityEngine::InputSystem::Joystick::__cordl_internal_get__stick_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stick_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Joystick::__cordl_internal_set__stick_k__BackingField(::UnityEngine::InputSystem::Controls::StickControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::InputSystem::Joystick::__cordl_internal_get__twist_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____twist_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::InputSystem::Joystick::__cordl_internal_get__twist_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____twist_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Joystick::__cordl_internal_set__twist_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____twist_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::InputSystem::Joystick::__cordl_internal_get__hatswitch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hatswitch_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::InputSystem::Joystick::__cordl_internal_get__hatswitch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hatswitch_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Joystick::__cordl_internal_set__hatswitch_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hatswitch_k__BackingField = value;
}
inline void UnityEngine::InputSystem::Joystick::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Joystick* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Joystick*, "<current>k__BackingField", ::UnityEngine::InputSystem::Joystick*>(
      std::forward<::UnityEngine::InputSystem::Joystick*>(value));
}
inline ::UnityEngine::InputSystem::Joystick* UnityEngine::InputSystem::Joystick::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Joystick*, "<current>k__BackingField", ::UnityEngine::InputSystem::Joystick*>();
}
inline void UnityEngine::InputSystem::Joystick::setStaticF_s_JoystickCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_JoystickCount", ::UnityEngine::InputSystem::Joystick*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::Joystick::getStaticF_s_JoystickCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_JoystickCount", ::UnityEngine::InputSystem::Joystick*>();
}
inline void UnityEngine::InputSystem::Joystick::setStaticF_s_Joysticks(::ArrayW<::UnityEngine::InputSystem::Joystick*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputSystem::Joystick*>, "s_Joysticks", ::UnityEngine::InputSystem::Joystick*>(
      std::forward<::ArrayW<::UnityEngine::InputSystem::Joystick*>>(value));
}
inline ::ArrayW<::UnityEngine::InputSystem::Joystick*> UnityEngine::InputSystem::Joystick::getStaticF_s_Joysticks() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputSystem::Joystick*>, "s_Joysticks", ::UnityEngine::InputSystem::Joystick*>();
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Joystick::get_trigger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_trigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::set_trigger(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "set_trigger", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::StickControl* UnityEngine::InputSystem::Joystick::get_stick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_stick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::StickControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::set_stick(::UnityEngine::InputSystem::Controls::StickControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "set_stick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::StickControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::Joystick::get_twist() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_twist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::set_twist(::UnityEngine::InputSystem::Controls::AxisControl* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "set_twist", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::InputSystem::Joystick::get_hatswitch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_hatswitch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::set_hatswitch(::UnityEngine::InputSystem::Controls::Vector2Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(),
                                                                                         { "set_hatswitch", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Joystick* UnityEngine::InputSystem::Joystick::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Joystick*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::set_current(::UnityEngine::InputSystem::Joystick* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Joystick*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*> UnityEngine::InputSystem::Joystick::get_all() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { "get_all", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::MakeCurrent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::OnAdded() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::OnRemoved() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Joystick::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Joystick*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Joystick* UnityEngine::InputSystem::Joystick::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Joystick*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Joystick::Joystick() {}
