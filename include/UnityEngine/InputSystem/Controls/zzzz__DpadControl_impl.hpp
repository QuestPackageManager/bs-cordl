#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DpadControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DpadControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DpadControl_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl.get_component
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::get_component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f6380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), { "get_component", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl.set_component
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::*)(int32_t)>(
    &::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::set_component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f6388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), { "set_component", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::FinishSetup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64f6390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x64f641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f6514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::__cordl_internal_get__component_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::__cordl_internal_get__component_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::__cordl_internal_set__component_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____component_k__BackingField = value;
}
inline int32_t UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::get_component() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), { "get_component", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::set_component(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), { "set_component", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl* UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl::DpadControl_DpadAxisControl() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits::DpadControl_ButtonBits(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits::DpadControl_ButtonBits() {}
constexpr ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits UnityEngine::InputSystem::Controls::DpadControl_ButtonBits::Up{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits UnityEngine::InputSystem::Controls::DpadControl_ButtonBits::Down{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits UnityEngine::InputSystem::Controls::DpadControl_ButtonBits::Left{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits UnityEngine::InputSystem::Controls::DpadControl_ButtonBits::Right{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.get_up
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Controls::DpadControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DpadControl::get_up)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { "get_up", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.set_up
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Controls::DpadControl::set_up)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                                                           { "set_up", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.get_down
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Controls::DpadControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DpadControl::get_down)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { "get_down", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.set_down
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Controls::DpadControl::set_down)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                                                           { "set_down", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.get_left
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Controls::DpadControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DpadControl::get_left)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { "get_left", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.set_left
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Controls::DpadControl::set_left)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                                                           { "set_left", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.get_right
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Controls::DpadControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DpadControl::get_right)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { "get_right", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.set_right
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Controls::DpadControl::set_right)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f5d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                                                           { "set_right", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl::*)()>(&::UnityEngine::InputSystem::Controls::DpadControl::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64f5d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl::*)()>(&::UnityEngine::InputSystem::Controls::DpadControl::FinishSetup)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x64f5e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::Controls::DpadControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::DpadControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x64f5f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Controls::DpadControl::*)(::UnityEngine::Vector2, void*)>(
    &::UnityEngine::InputSystem::Controls::DpadControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x64f61bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.MakeDpadVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(bool, bool, bool, bool, bool)>(&::UnityEngine::InputSystem::Controls::DpadControl::MakeDpadVector)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64f6160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                { "MakeDpadVector", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DpadControl.MakeDpadVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::InputSystem::Controls::DpadControl::MakeDpadVector)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64f6370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                { "MakeDpadVector", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_get__up_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____up_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_get__up_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____up_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_set__up_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____up_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_get__down_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____down_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_get__down_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____down_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_set__down_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____down_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_get__left_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____left_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_get__left_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____left_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_set__left_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____left_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_get__right_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____right_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_get__right_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____right_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Controls::DpadControl::__cordl_internal_set__right_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____right_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Controls::DpadControl::get_up() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { "get_up", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::DpadControl::set_up(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                                                         { "set_up", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Controls::DpadControl::get_down() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { "get_down", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::DpadControl::set_down(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                                                         { "set_down", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Controls::DpadControl::get_left() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { "get_left", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::DpadControl::set_left(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                                                         { "set_left", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Controls::DpadControl::get_right() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { "get_right", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::DpadControl::set_right(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                                                         { "set_right", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Controls::DpadControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::DpadControl::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Controls::DpadControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::DpadControl::WriteValueIntoState(::UnityEngine::Vector2 value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Controls::DpadControl::MakeDpadVector(bool up, bool down, bool left, bool right, bool normalize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                              { "MakeDpadVector", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, up, down, left, right, normalize);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Controls::DpadControl::MakeDpadVector(float_t up, float_t down, float_t left, float_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Controls::DpadControl*>(),
                                                           { "MakeDpadVector", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, up, down, left, right);
}
inline ::UnityEngine::InputSystem::Controls::DpadControl* UnityEngine::InputSystem::Controls::DpadControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Controls::DpadControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::DpadControl::DpadControl() {}
