#pragma once
// IWYU pragma private; include "HMUI/CurvedCanvasSettings.hpp"
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "HMUI/zzzz__CurvedCanvasSettings_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::CurvedCanvasSettings.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::CurvedCanvasSettings::*)()>(&::HMUI::CurvedCanvasSettings::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587ab84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettings.SetRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedCanvasSettings::*)(float_t)>(&::HMUI::CurvedCanvasSettings::SetRadius)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x587ab8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { "SetRadius", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettings.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedCanvasSettings::*)()>(&::HMUI::CurvedCanvasSettings::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x587ac9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { ::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettings.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedCanvasSettings::*)(::UnityEngine::UI::VertexHelper*)>(&::HMUI::CurvedCanvasSettings::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x587ad3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { ::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettings.TransformPointFromCanvasTo3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::HMUI::CurvedCanvasSettings::*)(::UnityEngine::Vector2)>(&::HMUI::CurvedCanvasSettings::TransformPointFromCanvasTo3D)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x587aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { "TransformPointFromCanvasTo3D", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettings.RebuildAndSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::HMUI::CurvedCanvasSettings::RebuildAndSetup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x587aba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { "RebuildAndSetup", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CurvedCanvasSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CurvedCanvasSettings::*)()>(&::HMUI::CurvedCanvasSettings::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x587af10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::CurvedCanvasSettings::__cordl_internal_get__radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr float_t const& HMUI::CurvedCanvasSettings::__cordl_internal_get__radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr void HMUI::CurvedCanvasSettings::__cordl_internal_set__radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius = value;
}
constexpr bool& HMUI::CurvedCanvasSettings::__cordl_internal_get__useFlatInEditMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useFlatInEditMode;
}
constexpr bool const& HMUI::CurvedCanvasSettings::__cordl_internal_get__useFlatInEditMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useFlatInEditMode;
}
constexpr void HMUI::CurvedCanvasSettings::__cordl_internal_set__useFlatInEditMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useFlatInEditMode = value;
}
inline float_t HMUI::CurvedCanvasSettings::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::CurvedCanvasSettings::SetRadius(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { "SetRadius", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::CurvedCanvasSettings::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::CurvedCanvasSettings::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline ::UnityEngine::Vector3 HMUI::CurvedCanvasSettings::TransformPointFromCanvasTo3D(::UnityEngine::Vector2 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { "TransformPointFromCanvasTo3D", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline void HMUI::CurvedCanvasSettings::RebuildAndSetup(::UnityEngine::Transform* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { "RebuildAndSetup", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline void HMUI::CurvedCanvasSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CurvedCanvasSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::CurvedCanvasSettings* HMUI::CurvedCanvasSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::CurvedCanvasSettings*>());
}
// Ctor Parameters []
constexpr ::HMUI::CurvedCanvasSettings::CurvedCanvasSettings() {}
