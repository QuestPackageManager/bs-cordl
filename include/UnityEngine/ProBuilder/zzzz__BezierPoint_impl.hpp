#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/BezierPoint.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__BezierPoint_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__BezierTangentDirection_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__BezierTangentMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::BezierPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::BezierPoint::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                                                                        ::UnityEngine::Quaternion)>(&::UnityEngine::ProBuilder::BezierPoint::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66ae0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(), { ".ctor",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::BezierPoint.EnforceTangentMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::BezierPoint::*)(
    ::UnityEngine::ProBuilder::BezierTangentDirection, ::UnityEngine::ProBuilder::BezierTangentMode)>(&::UnityEngine::ProBuilder::BezierPoint::EnforceTangentMode)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x66ae0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                            { "EnforceTangentMode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::BezierTangentDirection>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierTangentMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::BezierPoint.SetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::BezierPoint::*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::BezierPoint::SetPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66ae3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(), { "SetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::BezierPoint.SetTangentIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::BezierPoint::*)(::UnityEngine::Vector3, ::UnityEngine::ProBuilder::BezierTangentMode)>(
    &::UnityEngine::ProBuilder::BezierPoint::SetTangentIn)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66ae42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                                                             { "SetTangentIn", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierTangentMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::BezierPoint.SetTangentOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::BezierPoint::*)(::UnityEngine::Vector3, ::UnityEngine::ProBuilder::BezierTangentMode)>(
    &::UnityEngine::ProBuilder::BezierPoint::SetTangentOut)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66ae440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                                                             { "SetTangentOut", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierTangentMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::BezierPoint.QuadraticPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::BezierPoint, ::UnityEngine::ProBuilder::BezierPoint, float_t)>(
    &::UnityEngine::ProBuilder::BezierPoint::QuadraticPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66ae454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
            { "QuadraticPosition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::BezierPoint>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierPoint>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::BezierPoint.CubicPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::BezierPoint, ::UnityEngine::ProBuilder::BezierPoint, float_t)>(
    &::UnityEngine::ProBuilder::BezierPoint::CubicPosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66ae4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                         { "CubicPosition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::BezierPoint>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierPoint>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::BezierPoint.GetLookDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::BezierPoint::GetLookDirection)> {
  constexpr static std::size_t size = 0xa38;
  constexpr static std::size_t addrs = 0x66ae558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                                                                                           { "GetLookDirection",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::BezierPoint::_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangentIn, ::UnityEngine::Vector3 tangentOut, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(), { ".ctor",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                      ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, tangentIn, tangentOut, rotation);
}
inline void UnityEngine::ProBuilder::BezierPoint::EnforceTangentMode(::UnityEngine::ProBuilder::BezierTangentDirection master, ::UnityEngine::ProBuilder::BezierTangentMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                          { "EnforceTangentMode", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::BezierTangentDirection>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierTangentMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, master, mode);
}
inline void UnityEngine::ProBuilder::BezierPoint::SetPosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(), { "SetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position);
}
inline void UnityEngine::ProBuilder::BezierPoint::SetTangentIn(::UnityEngine::Vector3 tangent, ::UnityEngine::ProBuilder::BezierTangentMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                                                           { "SetTangentIn", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierTangentMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tangent, mode);
}
inline void UnityEngine::ProBuilder::BezierPoint::SetTangentOut(::UnityEngine::Vector3 tangent, ::UnityEngine::ProBuilder::BezierTangentMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                                                           { "SetTangentOut", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierTangentMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tangent, mode);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::BezierPoint::QuadraticPosition(::UnityEngine::ProBuilder::BezierPoint a, ::UnityEngine::ProBuilder::BezierPoint b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
          { "QuadraticPosition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::BezierPoint>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierPoint>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::BezierPoint::CubicPosition(::UnityEngine::ProBuilder::BezierPoint a, ::UnityEngine::ProBuilder::BezierPoint b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                          { "CubicPosition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::BezierPoint>(), ::i2c::type_of<::UnityEngine::ProBuilder::BezierPoint>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::BezierPoint::GetLookDirection(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* points, int32_t index,
                                                                                     int32_t previous, int32_t next) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::BezierPoint>(),
                                                                                         { "GetLookDirection",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, points, index, previous, next);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tangentIn", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "tangentOut", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::BezierPoint::BezierPoint(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangentIn, ::UnityEngine::Vector3 tangentOut,
                                                              ::UnityEngine::Quaternion rotation) noexcept {
  this->position = position;
  this->tangentIn = tangentIn;
  this->tangentOut = tangentOut;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::BezierPoint::BezierPoint() {}
