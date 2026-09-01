#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\AnimationCurveParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AnimationCurveParameter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AnimationCurveParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AnimationCurveParameter::*)(::UnityEngine::AnimationCurve*, bool)>(
    &::UnityEngine::Rendering::AnimationCurveParameter::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67ce2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AnimationCurveParameter.Interp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AnimationCurveParameter::*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, float_t)>(
    &::UnityEngine::Rendering::AnimationCurveParameter::Interp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67ce354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AnimationCurveParameter.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AnimationCurveParameter::*)(::UnityEngine::Rendering::VolumeParameter*)>(
    &::UnityEngine::Rendering::AnimationCurveParameter::SetValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67ce360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AnimationCurveParameter.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::AnimationCurveParameter::*)()>(&::UnityEngine::Rendering::AnimationCurveParameter::Clone)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67ce400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AnimationCurveParameter.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::AnimationCurveParameter::*)()>(&::UnityEngine::Rendering::AnimationCurveParameter::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67ce4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), { ::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AnimationCurveParameter::_ctor(::UnityEngine::AnimationCurve* value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::AnimationCurveParameter::Interp(::UnityEngine::AnimationCurve* lhsCurve, ::UnityEngine::AnimationCurve* rhsCurve, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lhsCurve, rhsCurve, t);
}
inline void UnityEngine::Rendering::AnimationCurveParameter::SetValue(::UnityEngine::Rendering::VolumeParameter* parameter) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter);
}
inline ::System::Object* UnityEngine::Rendering::AnimationCurveParameter::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::AnimationCurveParameter::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::AnimationCurveParameter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::AnimationCurveParameter* UnityEngine::Rendering::AnimationCurveParameter::New_ctor(::UnityEngine::AnimationCurve* value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::AnimationCurveParameter*>(value, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AnimationCurveParameter::AnimationCurveParameter() {}
