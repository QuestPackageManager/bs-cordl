#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXInputTouchBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXInputTouchBinder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchControl_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXInputTouchBinder_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputTouchBinder___c::*)()>(&::UnityEngine::VFX::Utility::VFXInputTouchBinder___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69e535c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c._GetTouchCount_b__20_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXInputTouchBinder___c::*)(::UnityEngine::InputSystem::Controls::TouchControl*)>(
    &::UnityEngine::VFX::Utility::VFXInputTouchBinder___c::_GetTouchCount_b__20_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69e5360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>(),
                                                             { "<GetTouchCount>b__20_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchControl*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::Utility::VFXInputTouchBinder___c::setStaticF___9(::UnityEngine::VFX::Utility::VFXInputTouchBinder___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*, "<>9", ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>(
      std::forward<::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>(value));
}
inline ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c* UnityEngine::VFX::Utility::VFXInputTouchBinder___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*, "<>9", ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>();
}
inline void UnityEngine::VFX::Utility::VFXInputTouchBinder___c::setStaticF___9__20_0(::System::Func_2<::UnityEngine::InputSystem::Controls::TouchControl*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Controls::TouchControl*, bool>*, "<>9__20_0", ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Controls::TouchControl*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Controls::TouchControl*, bool>* UnityEngine::VFX::Utility::VFXInputTouchBinder___c::getStaticF___9__20_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Controls::TouchControl*, bool>*, "<>9__20_0", ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>();
}
inline void UnityEngine::VFX::Utility::VFXInputTouchBinder___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::Utility::VFXInputTouchBinder___c::_GetTouchCount_b__20_0(::UnityEngine::InputSystem::Controls::TouchControl* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>(),
                                                                                         { "<GetTouchCount>b__20_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::TouchControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c* UnityEngine::VFX::Utility::VFXInputTouchBinder___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXInputTouchBinder___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXInputTouchBinder___c::VFXInputTouchBinder___c() {}
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.get_TouchEnabledProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)()>(
    &::UnityEngine::VFX::Utility::VFXInputTouchBinder::get_TouchEnabledProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e48b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "get_TouchEnabledProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.set_TouchEnabledProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)(::StringW)>(
    &::UnityEngine::VFX::Utility::VFXInputTouchBinder::set_TouchEnabledProperty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69e48cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "set_TouchEnabledProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.get_Parameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)()>(&::UnityEngine::VFX::Utility::VFXInputTouchBinder::get_Parameter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e48e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "get_Parameter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.set_Parameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXInputTouchBinder::set_Parameter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69e4900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "set_Parameter", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.get_VelocityParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)()>(&::UnityEngine::VFX::Utility::VFXInputTouchBinder::get_VelocityParameter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e491c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "get_VelocityParameter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.set_VelocityParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)(::StringW)>(
    &::UnityEngine::VFX::Utility::VFXInputTouchBinder::set_VelocityParameter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69e4934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "set_VelocityParameter", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXInputTouchBinder::IsValid)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69e4950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.UpdateBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXInputTouchBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x69e4a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.GetTouchCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)()>(&::UnityEngine::VFX::Utility::VFXInputTouchBinder::GetTouchCount)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x69e4c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "GetTouchCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.GetTouchPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)(int32_t)>(
    &::UnityEngine::VFX::Utility::VFXInputTouchBinder::GetTouchPosition)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x69e4e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "GetTouchPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)()>(&::UnityEngine::VFX::Utility::VFXInputTouchBinder::ToString)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x69e50c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXInputTouchBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXInputTouchBinder::*)()>(&::UnityEngine::VFX::Utility::VFXInputTouchBinder::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x69e51e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_TouchEnabledProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchEnabledProperty;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_TouchEnabledProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchEnabledProperty;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_m_TouchEnabledProperty(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchEnabledProperty = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_Parameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parameter;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_Parameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parameter;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_m_Parameter(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Parameter = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_VelocityParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VelocityParameter;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_VelocityParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VelocityParameter;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_m_VelocityParameter(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VelocityParameter = value;
}
constexpr int32_t& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_TouchIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TouchIndex;
}
constexpr int32_t const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_TouchIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TouchIndex;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_TouchIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TouchIndex = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_Target(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Target = value;
}
constexpr float_t& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_Distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Distance;
}
constexpr float_t const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_Distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Distance;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_Distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Distance = value;
}
constexpr bool& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_SetVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SetVelocity;
}
constexpr bool const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_SetVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SetVelocity;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_SetVelocity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SetVelocity = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_PreviousPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_PreviousPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPosition;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_m_PreviousPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousPosition = value;
}
constexpr bool& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_PreviousTouch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousTouch;
}
constexpr bool const& UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_get_m_PreviousTouch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousTouch;
}
constexpr void UnityEngine::VFX::Utility::VFXInputTouchBinder::__cordl_internal_set_m_PreviousTouch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousTouch = value;
}
inline ::StringW UnityEngine::VFX::Utility::VFXInputTouchBinder::get_TouchEnabledProperty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "get_TouchEnabledProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXInputTouchBinder::set_TouchEnabledProperty(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "set_TouchEnabledProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::VFX::Utility::VFXInputTouchBinder::get_Parameter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "get_Parameter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXInputTouchBinder::set_Parameter(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "set_Parameter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::VFX::Utility::VFXInputTouchBinder::get_VelocityParameter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "get_VelocityParameter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXInputTouchBinder::set_VelocityParameter(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "set_VelocityParameter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::VFX::Utility::VFXInputTouchBinder::IsValid(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXInputTouchBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline int32_t UnityEngine::VFX::Utility::VFXInputTouchBinder::GetTouchCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "GetTouchCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::VFX::Utility::VFXInputTouchBinder::GetTouchPosition(int32_t touchIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { "GetTouchPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, touchIndex);
}
inline ::StringW UnityEngine::VFX::Utility::VFXInputTouchBinder::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXInputTouchBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXInputTouchBinder* UnityEngine::VFX::Utility::VFXInputTouchBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXInputTouchBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXInputTouchBinder::VFXInputTouchBinder() {}
