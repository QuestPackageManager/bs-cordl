#pragma once
// IWYU pragma private; include "Unity/Mathematics/Geometry/Plane.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/Geometry/zzzz__Plane_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::Plane::*)(float_t, float_t, float_t, float_t)>(&::Unity::Mathematics::Geometry::Plane::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x66183ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::Plane::*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::Geometry::Plane::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x661845c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::Plane::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::Geometry::Plane::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x661850c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::Plane::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::Geometry::Plane::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x66185f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                            { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.CreateFromUnitNormalAndDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::Plane (*)(::Unity::Mathematics::float3, float_t)>(
    &::Unity::Mathematics::Geometry::Plane::CreateFromUnitNormalAndDistance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6618704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                                                             { "CreateFromUnitNormalAndDistance", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.CreateFromUnitNormalAndPointInPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::Plane (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::Geometry::Plane::CreateFromUnitNormalAndPointInPlane)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6618708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                                                { "CreateFromUnitNormalAndPointInPlane", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.get_Normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Geometry::Plane::*)()>(&::Unity::Mathematics::Geometry::Plane::get_Normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6618724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "get_Normal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.set_Normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::Plane::*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::Geometry::Plane::set_Normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6618730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "set_Normal", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.get_Distance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::Geometry::Plane::*)()>(&::Unity::Mathematics::Geometry::Plane::get_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x661873c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "get_Distance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.set_Distance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::Plane::*)(float_t)>(&::Unity::Mathematics::Geometry::Plane::set_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6618744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "set_Distance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.Normalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::Plane (*)(::Unity::Mathematics::Geometry::Plane)>(&::Unity::Mathematics::Geometry::Plane::Normalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x661874c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "Normalize", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::Plane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.Normalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::Geometry::Plane::Normalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x66187ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "Normalize", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.SignedDistanceToPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::Geometry::Plane::*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::Geometry::Plane::SignedDistanceToPoint)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x661888c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "SignedDistanceToPoint", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.Projection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::Unity::Mathematics::Geometry::Plane::*)(::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::Geometry::Plane::Projection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66188b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "Projection", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.get_Flipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::Geometry::Plane (::Unity::Mathematics::Geometry::Plane::*)()>(&::Unity::Mathematics::Geometry::Plane::get_Flipped)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66188ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "get_Flipped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.op_Implicit___Unity__Mathematics__float4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::Geometry::Plane)>(
    &::Unity::Mathematics::Geometry::Plane::op_Implicit___Unity__Mathematics__float4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6618908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::Plane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Plane.CheckPlaneIsNormalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Geometry::Plane::*)()>(&::Unity::Mathematics::Geometry::Plane::CheckPlaneIsNormalized)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x661890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "CheckPlaneIsNormalized", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::Geometry::Plane::_ctor(float_t coefficientA, float_t coefficientB, float_t coefficientC, float_t coefficientD) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, coefficientA, coefficientB, coefficientC, coefficientD);
}
inline void Unity::Mathematics::Geometry::Plane::_ctor(::Unity::Mathematics::float3 normal, float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, normal, distance);
}
inline void Unity::Mathematics::Geometry::Plane::_ctor(::Unity::Mathematics::float3 normal, ::Unity::Mathematics::float3 pointInPlane) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, normal, pointInPlane);
}
inline void Unity::Mathematics::Geometry::Plane::_ctor(::Unity::Mathematics::float3 vector1InPlane, ::Unity::Mathematics::float3 vector2InPlane, ::Unity::Mathematics::float3 pointInPlane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vector1InPlane, vector2InPlane, pointInPlane);
}
inline ::Unity::Mathematics::Geometry::Plane Unity::Mathematics::Geometry::Plane::CreateFromUnitNormalAndDistance(::Unity::Mathematics::float3 unitNormal, float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                                                           { "CreateFromUnitNormalAndDistance", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::Plane>(nullptr, ___internal_method, unitNormal, distance);
}
inline ::Unity::Mathematics::Geometry::Plane Unity::Mathematics::Geometry::Plane::CreateFromUnitNormalAndPointInPlane(::Unity::Mathematics::float3 unitNormal,
                                                                                                                      ::Unity::Mathematics::float3 pointInPlane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(),
                                              { "CreateFromUnitNormalAndPointInPlane", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::Plane>(nullptr, ___internal_method, unitNormal, pointInPlane);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Geometry::Plane::get_Normal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "get_Normal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void Unity::Mathematics::Geometry::Plane::set_Normal(::Unity::Mathematics::float3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "set_Normal", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Unity::Mathematics::Geometry::Plane::get_Distance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "get_Distance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Unity::Mathematics::Geometry::Plane::set_Distance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "set_Distance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::Geometry::Plane Unity::Mathematics::Geometry::Plane::Normalize(::Unity::Mathematics::Geometry::Plane plane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "Normalize", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::Plane>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::Plane>(nullptr, ___internal_method, plane);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::Geometry::Plane::Normalize(::Unity::Mathematics::float4 planeCoefficients) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "Normalize", {}, { ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, planeCoefficients);
}
inline float_t Unity::Mathematics::Geometry::Plane::SignedDistanceToPoint(::Unity::Mathematics::float3 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "SignedDistanceToPoint", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, point);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::Geometry::Plane::Projection(::Unity::Mathematics::float3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "Projection", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, point);
}
inline ::Unity::Mathematics::Geometry::Plane Unity::Mathematics::Geometry::Plane::get_Flipped() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "get_Flipped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::Plane>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::Geometry::Plane::op_Implicit___Unity__Mathematics__float4(::Unity::Mathematics::Geometry::Plane plane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::Geometry::Plane>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, plane);
}
inline void Unity::Mathematics::Geometry::Plane::CheckPlaneIsNormalized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::Geometry::Plane>(), { "CheckPlaneIsNormalized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "NormalAndDistance", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Mathematics::Geometry::Plane::Plane(::Unity::Mathematics::float4 NormalAndDistance) noexcept {
  this->NormalAndDistance = NormalAndDistance;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::Geometry::Plane::Plane() {}
