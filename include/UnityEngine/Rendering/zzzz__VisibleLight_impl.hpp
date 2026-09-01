#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\VisibleLight.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLightFlags_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LightType_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.get_light
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (::UnityEngine::Rendering::VisibleLight::*)()>(&::UnityEngine::Rendering::VisibleLight::get_light)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b297c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_light", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.get_lightType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LightType (::UnityEngine::Rendering::VisibleLight::*)()>(&::UnityEngine::Rendering::VisibleLight::get_lightType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b29854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_lightType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.get_finalColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::VisibleLight::*)()>(&::UnityEngine::Rendering::VisibleLight::get_finalColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b2985c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_finalColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.get_localToWorldMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::VisibleLight::*)()>(&::UnityEngine::Rendering::VisibleLight::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b29868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_localToWorldMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.get_range
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::VisibleLight::*)()>(&::UnityEngine::Rendering::VisibleLight::get_range)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b29884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_range", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.get_spotAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::VisibleLight::*)()>(&::UnityEngine::Rendering::VisibleLight::get_spotAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2988c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_spotAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VisibleLight::*)(::UnityEngine::Rendering::VisibleLight)>(&::UnityEngine::Rendering::VisibleLight::Equals)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x6b29894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::VisibleLight>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VisibleLight::*)(::System::Object*)>(&::UnityEngine::Rendering::VisibleLight::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b29b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { ::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleLight.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VisibleLight::*)()>(&::UnityEngine::Rendering::VisibleLight::GetHashCode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b29c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { ::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Light> UnityEngine::Rendering::VisibleLight::get_light() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_light", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(*this, ___internal_method);
}
inline ::UnityEngine::LightType UnityEngine::Rendering::VisibleLight::get_lightType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_lightType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightType>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::Rendering::VisibleLight::get_finalColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_finalColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::VisibleLight::get_localToWorldMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_localToWorldMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method);
}
inline float_t UnityEngine::Rendering::VisibleLight::get_range() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_range", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Rendering::VisibleLight::get_spotAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "get_spotAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::VisibleLight::Equals(::UnityEngine::Rendering::VisibleLight other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::VisibleLight>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::VisibleLight::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::VisibleLight::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::VisibleLight>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>"
constexpr UnityEngine::Rendering::VisibleLight::operator ::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>* UnityEngine::Rendering::VisibleLight::i___System__IEquatable_1___UnityEngine__Rendering__VisibleLight_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_LightType", ty: "::UnityEngine::LightType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FinalColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_ScreenRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SpotAngle", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_InstanceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::Rendering::VisibleLightFlags", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::VisibleLight::VisibleLight(::UnityEngine::LightType m_LightType, ::UnityEngine::Color m_FinalColor, ::UnityEngine::Rect m_ScreenRect,
                                                               ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix, float_t m_Range, float_t m_SpotAngle, int32_t m_InstanceId,
                                                               ::UnityEngine::Rendering::VisibleLightFlags m_Flags) noexcept {
  this->m_LightType = m_LightType;
  this->m_FinalColor = m_FinalColor;
  this->m_ScreenRect = m_ScreenRect;
  this->m_LocalToWorldMatrix = m_LocalToWorldMatrix;
  this->m_Range = m_Range;
  this->m_SpotAngle = m_SpotAngle;
  this->m_InstanceId = m_InstanceId;
  this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VisibleLight::VisibleLight() {}
