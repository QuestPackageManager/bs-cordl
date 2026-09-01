#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\BezierCurves\BaseBezierCurveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurveData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData.get_startPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::get_startPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData.get_endPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::get_endPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData.get_startControlPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::get_startControlPoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x332b5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { "get_startControlPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData.set_startControlPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::*)(::UnityEngine::Vector3)>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::set_startControlPoint)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x332b604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(),
                                                                                           { "set_startControlPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData.get_endControlPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::get_endControlPoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x332b650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { "get_endControlPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData.set_endControlPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::*)(::UnityEngine::Vector3)>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::set_endControlPoint)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x332b680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { "set_endControlPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::*)()>(&::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x332b6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::__cordl_internal_get__startControlPointDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startControlPointDelta;
}
constexpr ::UnityEngine::Vector3 const& BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::__cordl_internal_get__startControlPointDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startControlPointDelta;
}
constexpr void BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::__cordl_internal_set__startControlPointDelta(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startControlPointDelta = value;
}
constexpr ::UnityEngine::Vector3& BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::__cordl_internal_get__endControlPointDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endControlPointDelta;
}
constexpr ::UnityEngine::Vector3 const& BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::__cordl_internal_get__endControlPointDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endControlPointDelta;
}
constexpr void BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::__cordl_internal_set__endControlPointDelta(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endControlPointDelta = value;
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::get_startPoint() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::get_endPoint() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::get_startControlPoint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { "get_startControlPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::set_startControlPoint(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { "set_startControlPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::get_endControlPoint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { "get_endControlPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::set_endControlPoint(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { "set_endControlPoint", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData* BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData::BaseBezierCurveData() {}
