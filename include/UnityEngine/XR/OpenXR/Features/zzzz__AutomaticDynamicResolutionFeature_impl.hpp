#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/AutomaticDynamicResolutionFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__AutomaticDynamicResolutionFeature_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.get_minResolutionScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::get_minResolutionScalar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e49b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "get_minResolutionScalar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.set_minResolutionScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::*)(float_t)>(
    &::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::set_minResolutionScalar)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e49b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                           { "set_minResolutionScalar", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.get_maxResolutionScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::get_maxResolutionScalar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e49c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "get_maxResolutionScalar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.set_maxResolutionScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::*)(float_t)>(
    &::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::set_maxResolutionScalar)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6e49c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                           { "set_maxResolutionScalar", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.get_usingSuggestedResolutionScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::get_usingSuggestedResolutionScale)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e49d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "get_usingSuggestedResolutionScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.set_usingSuggestedResolutionScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::set_usingSuggestedResolutionScale)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e49de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                           { "set_usingSuggestedResolutionScale", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6e49e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.IsAutomaticDynamicResolutionScalingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::IsAutomaticDynamicResolutionScalingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e4a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "IsAutomaticDynamicResolutionScalingSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.SetUsingSuggestedResolutionScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::SetUsingSuggestedResolutionScale)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e4a2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                           { "SetUsingSuggestedResolutionScale", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.Internal_IsAutomaticDynamicResolutionScalingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::Internal_IsAutomaticDynamicResolutionScalingSupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e4a140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                           { "Internal_IsAutomaticDynamicResolutionScalingSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.Internal_SetMinMaxScalerResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t)>(&::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::Internal_SetMinMaxScalerResolution)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e4a228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                           { "Internal_SetMinMaxScalerResolution", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature.Internal_SetUsingSuggestedResolutionScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::Internal_SetUsingSuggestedResolutionScale)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e4a1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                           { "Internal_SetUsingSuggestedResolutionScale", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e4a39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::__cordl_internal_get_m_MinResolutionScalar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinResolutionScalar;
}
constexpr float_t const& UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::__cordl_internal_get_m_MinResolutionScalar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinResolutionScalar;
}
constexpr void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::__cordl_internal_set_m_MinResolutionScalar(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinResolutionScalar = value;
}
constexpr float_t& UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::__cordl_internal_get_m_MaxResolutionScalar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxResolutionScalar;
}
constexpr float_t const& UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::__cordl_internal_get_m_MaxResolutionScalar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxResolutionScalar;
}
constexpr void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::__cordl_internal_set_m_MaxResolutionScalar(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxResolutionScalar = value;
}
inline void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::setStaticF__usingSuggestedResolutionScale_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<usingSuggestedResolutionScale>k__BackingField", ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::getStaticF__usingSuggestedResolutionScale_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<usingSuggestedResolutionScale>k__BackingField", ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>();
}
inline float_t UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::get_minResolutionScalar() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "get_minResolutionScalar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::set_minResolutionScalar(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "set_minResolutionScalar", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::get_maxResolutionScalar() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "get_maxResolutionScalar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::set_maxResolutionScalar(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "set_maxResolutionScalar", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::get_usingSuggestedResolutionScale() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "get_usingSuggestedResolutionScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::set_usingSuggestedResolutionScale(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                         { "set_usingSuggestedResolutionScale", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::OnInstanceCreate(uint64_t instance) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline bool UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::IsAutomaticDynamicResolutionScalingSupported() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { "IsAutomaticDynamicResolutionScalingSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::SetUsingSuggestedResolutionScale(bool usingSuggestedScale) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                         { "SetUsingSuggestedResolutionScale", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, usingSuggestedScale);
}
inline bool UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::Internal_IsAutomaticDynamicResolutionScalingSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                         { "Internal_IsAutomaticDynamicResolutionScalingSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::Internal_SetMinMaxScalerResolution(float_t min, float_t max) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                         { "Internal_SetMinMaxScalerResolution", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, min, max);
}
inline void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::Internal_SetUsingSuggestedResolutionScale(bool usingSuggestedScale) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(),
                                                                                         { "Internal_SetUsingSuggestedResolutionScale", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, usingSuggestedScale);
}
inline void UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature* UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::AutomaticDynamicResolutionFeature::AutomaticDynamicResolutionFeature() {}
