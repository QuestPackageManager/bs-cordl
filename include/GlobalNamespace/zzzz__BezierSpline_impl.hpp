#pragma once
// IWYU pragma private; include "GlobalNamespace\BezierSpline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "GlobalNamespace/zzzz__BezierCurve_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BezierSpline_ComputeControlPointsResults._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline_ComputeControlPointsResults::*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(
    &::GlobalNamespace::BezierSpline_ComputeControlPointsResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3287af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline_ComputeControlPointsResults>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BezierSpline_ComputeControlPointsResults::_ctor(::ArrayW<float_t> p1, ::ArrayW<float_t> p2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline_ComputeControlPointsResults>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p1, p2);
}
// Ctor Parameters [CppParam { name: "p1", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "p2", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BezierSpline_ComputeControlPointsResults::BezierSpline_ComputeControlPointsResults(::ArrayW<float_t> p1, ::ArrayW<float_t> p2) noexcept {
  this->p1 = p1;
  this->p2 = p2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierSpline_ComputeControlPointsResults::BezierSpline_ComputeControlPointsResults() {}
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline___c::*)()>(&::GlobalNamespace::BezierSpline___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3287b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._SortSourceData_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BezierSpline___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::BezierSpline___c::_SortSourceData_b__6_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3287b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(),
                                                             { "<SortSourceData>b__6_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._ComputeControlPoints_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BezierSpline___c::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3287bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(), { "<ComputeControlPoints>b__8_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._ComputeControlPoints_b__8_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BezierSpline___c::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3287bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(), { "<ComputeControlPoints>b__8_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._ComputeControlPoints_b__8_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BezierSpline___c::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3287bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(), { "<ComputeControlPoints>b__8_2", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BezierSpline___c::setStaticF___9(::GlobalNamespace::BezierSpline___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BezierSpline___c*, "<>9", ::GlobalNamespace::BezierSpline___c*>(std::forward<::GlobalNamespace::BezierSpline___c*>(value));
}
inline ::GlobalNamespace::BezierSpline___c* GlobalNamespace::BezierSpline___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BezierSpline___c*, "<>9", ::GlobalNamespace::BezierSpline___c*>();
}
inline void GlobalNamespace::BezierSpline___c::setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Vector3>*, "<>9__6_0", ::GlobalNamespace::BezierSpline___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Vector3>* GlobalNamespace::BezierSpline___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Vector3>*, "<>9__6_0", ::GlobalNamespace::BezierSpline___c*>();
}
inline void GlobalNamespace::BezierSpline___c::setStaticF___9__8_0(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_0", ::GlobalNamespace::BezierSpline___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* GlobalNamespace::BezierSpline___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_0", ::GlobalNamespace::BezierSpline___c*>();
}
inline void GlobalNamespace::BezierSpline___c::setStaticF___9__8_1(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_1", ::GlobalNamespace::BezierSpline___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* GlobalNamespace::BezierSpline___c::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_1", ::GlobalNamespace::BezierSpline___c*>();
}
inline void GlobalNamespace::BezierSpline___c::setStaticF___9__8_2(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_2", ::GlobalNamespace::BezierSpline___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* GlobalNamespace::BezierSpline___c::getStaticF___9__8_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_2", ::GlobalNamespace::BezierSpline___c*>();
}
inline void GlobalNamespace::BezierSpline___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BezierSpline___c::_SortSourceData_b__6_0(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(),
                                                           { "<SortSourceData>b__6_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, point1, point2);
}
inline float_t GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_0(::UnityEngine::Vector3 p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(), { "<ComputeControlPoints>b__8_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p);
}
inline float_t GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_1(::UnityEngine::Vector3 p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(), { "<ComputeControlPoints>b__8_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p);
}
inline float_t GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_2(::UnityEngine::Vector3 p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline___c*>(), { "<ComputeControlPoints>b__8_2", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p);
}
inline ::GlobalNamespace::BezierSpline___c* GlobalNamespace::BezierSpline___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BezierSpline___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierSpline___c::BezierSpline___c() {}
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.get_segments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* (::GlobalNamespace::BezierSpline::*)()>(
    &::GlobalNamespace::BezierSpline::get_segments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3287454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "get_segments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.AddPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)(float_t, ::UnityEngine::Vector2)>(&::GlobalNamespace::BezierSpline::AddPoint)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3283b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "AddPoint", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.SortSourceData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::SortSourceData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x328745c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "SortSourceData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.AddArtificialStartAndFinishPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::AddArtificialStartAndFinishPoint)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x3283c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "AddArtificialStartAndFinishPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.ComputeControlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::ComputeControlPoints)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x3283e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "ComputeControlPoints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3287a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.ComputeControlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BezierSpline_ComputeControlPointsResults (::GlobalNamespace::BezierSpline::*)(
    ::System::Collections::Generic::List_1<float_t>*)>(&::GlobalNamespace::BezierSpline::ComputeControlPoints)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x3287568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "ComputeControlPoints", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3283908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*& GlobalNamespace::BezierSpline::__cordl_internal_get__segments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segments;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* const& GlobalNamespace::BezierSpline::__cordl_internal_get__segments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segments;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set__segments(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____segments = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::BezierSpline::__cordl_internal_get__sourceDataPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceDataPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::BezierSpline::__cordl_internal_get__sourceDataPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceDataPoints;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set__sourceDataPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sourceDataPoints = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* GlobalNamespace::BezierSpline::get_segments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "get_segments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::AddPoint(float_t distance, ::UnityEngine::Vector2 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "AddPoint", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, point);
}
inline void GlobalNamespace::BezierSpline::SortSourceData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "SortSourceData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::AddArtificialStartAndFinishPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "AddArtificialStartAndFinishPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::ComputeControlPoints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "ComputeControlPoints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BezierSpline_ComputeControlPointsResults GlobalNamespace::BezierSpline::ComputeControlPoints(::System::Collections::Generic::List_1<float_t>* k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { "ComputeControlPoints", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BezierSpline_ComputeControlPointsResults>(this, ___internal_method, k);
}
inline void GlobalNamespace::BezierSpline::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BezierSpline*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BezierSpline* GlobalNamespace::BezierSpline::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BezierSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierSpline::BezierSpline() {}
