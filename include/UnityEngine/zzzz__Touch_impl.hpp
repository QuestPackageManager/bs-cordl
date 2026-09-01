#pragma once
// IWYU pragma private; include "UnityEngine\Touch.hpp"
#include "UnityEngine/zzzz__TouchPhase_impl.hpp"
#include "UnityEngine/zzzz__TouchType_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/zzzz__TouchType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Touch.get_fingerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_fingerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_fingerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Touch::*)(::UnityEngine::Vector2)>(&::UnityEngine::Touch::set_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_rawPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_rawPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_rawPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.set_rawPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Touch::*)(::UnityEngine::Vector2)>(&::UnityEngine::Touch::set_rawPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "set_rawPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_deltaPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_deltaPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_deltaPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.set_deltaPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Touch::*)(::UnityEngine::Vector2)>(&::UnityEngine::Touch::set_deltaPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "set_deltaPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_deltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_deltaTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_tapCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_tapCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_tapCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchPhase (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_phase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_pressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_pressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_maximumPossiblePressure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_maximumPossiblePressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_maximumPossiblePressure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TouchType (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_altitudeAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_altitudeAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_azimuthAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_azimuthAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_radius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Touch.get_radiusVariance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Touch::*)()>(&::UnityEngine::Touch::get_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b611e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_radiusVariance", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Touch::get_fingerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_fingerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Touch::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::Touch::set_position(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Touch::get_rawPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_rawPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::Touch::set_rawPosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "set_rawPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Touch::get_deltaPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_deltaPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::Touch::set_deltaPosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "set_deltaPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Touch::get_deltaTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_deltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Touch::get_tapCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_tapCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::TouchPhase UnityEngine::Touch::get_phase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_phase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchPhase>(*this, ___internal_method);
}
inline float_t UnityEngine::Touch::get_pressure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_pressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Touch::get_maximumPossiblePressure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_maximumPossiblePressure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::TouchType UnityEngine::Touch::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchType>(*this, ___internal_method);
}
inline float_t UnityEngine::Touch::get_altitudeAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_altitudeAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Touch::get_azimuthAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_azimuthAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Touch::get_radius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_radius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Touch::get_radiusVariance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Touch>(), { "get_radiusVariance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_FingerId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_RawPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PositionDelta", ty: "::UnityEngine::Vector2", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_TimeDelta", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TapCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Phase", ty: "::UnityEngine::TouchPhase", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::UnityEngine::TouchType", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_maximumPossiblePressure", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Radius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RadiusVariance", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Touch::Touch(int32_t m_FingerId, ::UnityEngine::Vector2 m_Position, ::UnityEngine::Vector2 m_RawPosition, ::UnityEngine::Vector2 m_PositionDelta, float_t m_TimeDelta,
                                      int32_t m_TapCount, ::UnityEngine::TouchPhase m_Phase, ::UnityEngine::TouchType m_Type, float_t m_Pressure, float_t m_maximumPossiblePressure, float_t m_Radius,
                                      float_t m_RadiusVariance, float_t m_AltitudeAngle, float_t m_AzimuthAngle) noexcept {
  this->m_FingerId = m_FingerId;
  this->m_Position = m_Position;
  this->m_RawPosition = m_RawPosition;
  this->m_PositionDelta = m_PositionDelta;
  this->m_TimeDelta = m_TimeDelta;
  this->m_TapCount = m_TapCount;
  this->m_Phase = m_Phase;
  this->m_Type = m_Type;
  this->m_Pressure = m_Pressure;
  this->m_maximumPossiblePressure = m_maximumPossiblePressure;
  this->m_Radius = m_Radius;
  this->m_RadiusVariance = m_RadiusVariance;
  this->m_AltitudeAngle = m_AltitudeAngle;
  this->m_AzimuthAngle = m_AzimuthAngle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Touch::Touch() {}
