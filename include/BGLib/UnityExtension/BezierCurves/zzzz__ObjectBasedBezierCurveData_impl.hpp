#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\BezierCurves\ObjectBasedBezierCurveData.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurveData_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__ObjectBasedBezierCurveData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData.get_startPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_startPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x332c6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData.get_endPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_endPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x332c6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData.get_hasReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_hasReferences)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x332c454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(), { "get_hasReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x332c6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_get__startPointTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_get__startPointTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPointTransform;
}
constexpr void BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_set__startPointTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPointTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_get__endPointTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_get__endPointTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPointTransform;
}
constexpr void BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_set__endPointTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endPointTransform = value;
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_startPoint() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_endPoint() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_hasReferences() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(), { "get_hasReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData* BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::ObjectBasedBezierCurveData() {}
