#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\BezierCurves\GenericBezierCurveData.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurveData_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__GenericBezierCurveData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData.get_startPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::get_startPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x332c0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData.get_endPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::get_endPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x332c0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData.SetStartPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::*)(::UnityEngine::Vector3)>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::SetStartPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x332c0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), { "SetStartPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData.SetEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::*)(::UnityEngine::Vector3)>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::SetEndPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x332c0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), { "SetEndPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData.RotatePointsAroundPivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData* (::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
        &::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::RotatePointsAroundPivot)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x332c0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(),
                                                             { "RotatePointsAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData.RotatePointAroundPivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::RotatePointAroundPivot)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x332c34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(),
                            { "RotatePointAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x332c39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::__cordl_internal_get__startPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPoint;
}
constexpr ::UnityEngine::Vector3 const& BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::__cordl_internal_get__startPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPoint;
}
constexpr void BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::__cordl_internal_set__startPoint(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPoint = value;
}
constexpr ::UnityEngine::Vector3& BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::__cordl_internal_get__endPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPoint;
}
constexpr ::UnityEngine::Vector3 const& BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::__cordl_internal_get__endPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPoint;
}
constexpr void BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::__cordl_internal_set__endPoint(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endPoint = value;
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::get_startPoint() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::get_endPoint() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::SetStartPoint(::UnityEngine::Vector3 newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), { "SetStartPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::SetEndPoint(::UnityEngine::Vector3 newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), { "SetEndPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData* BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::RotatePointsAroundPivot(::UnityEngine::Vector3 pivot,
                                                                                                                                                           ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(),
                                                           { "RotatePointsAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(this, ___internal_method, pivot, rot);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::RotatePointAroundPivot(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 pivot,
                                                                                                                  ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(),
                          { "RotatePointAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, pivot, rot);
}
inline void BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData* BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData::GenericBezierCurveData() {}
