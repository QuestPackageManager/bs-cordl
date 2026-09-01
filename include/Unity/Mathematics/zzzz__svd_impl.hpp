#pragma once
// IWYU pragma private; include "Unity\Mathematics\svd.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__svd_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::svd.condSwap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Unity::Mathematics::svd::condSwap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6685b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "condSwap", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.condNegSwap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::Unity::Mathematics::svd::condNegSwap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6685ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                            { "condNegSwap", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.condNegSwapQuat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(bool, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float4)>(
    &::Unity::Mathematics::svd::condNegSwapQuat)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6685bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                         { "condNegSwapQuat", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.sortSingularValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3x3>, ::by_ref<::Unity::Mathematics::quaternion>)>(
    &::Unity::Mathematics::svd::sortSingularValues)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x6685d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                         { "sortSingularValues", {}, { ::i2c::type_of<::by_ref<::Unity::Mathematics::float3x3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.approxGivensQuat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float4)>(
    &::Unity::Mathematics::svd::approxGivensQuat)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x66860c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                                             { "approxGivensQuat", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.qrGivensQuat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float4)>(&::Unity::Mathematics::svd::qrGivensQuat)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x66861cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                                             { "qrGivensQuat", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.givensQRFactorization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3x3, ::by_ref<::Unity::Mathematics::float3x3>)>(
    &::Unity::Mathematics::svd::givensQRFactorization)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x6686304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                                { "givensQRFactorization", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3x3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.jacobiIteration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::by_ref<::Unity::Mathematics::float3x3>, int32_t)>(&::Unity::Mathematics::svd::jacobiIteration)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x66867fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "jacobiIteration", {}, { ::i2c::type_of<::by_ref<::Unity::Mathematics::float3x3>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.singularValuesDecomposition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3x3, ::by_ref<::Unity::Mathematics::quaternion>,
                                                                                        ::by_ref<::Unity::Mathematics::quaternion>)>(&::Unity::Mathematics::svd::singularValuesDecomposition)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6687118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "singularValuesDecomposition",
                                                                             {},
                                                                             { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(),
                                                                               ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.rcpsafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::svd::rcpsafe)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66873d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "rcpsafe", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.svdInverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3x3 (*)(::Unity::Mathematics::float3x3)>(&::Unity::Mathematics::svd::svdInverse)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6687474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "svdInverse", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.svdRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3x3)>(&::Unity::Mathematics::svd::svdRotation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66876f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "svdRotation", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::svd::condSwap(bool c, ::by_ref<float_t> x, ::by_ref<float_t> y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "condSwap", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, x, y);
}
inline void Unity::Mathematics::svd::condNegSwap(bool c, ::by_ref<::Unity::Mathematics::float3> x, ::by_ref<::Unity::Mathematics::float3> y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                          { "condNegSwap", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, x, y);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::condNegSwapQuat(bool c, ::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float4 mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                       { "condNegSwapQuat", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, c, q, mask);
}
inline void Unity::Mathematics::svd::sortSingularValues(::by_ref<::Unity::Mathematics::float3x3> b, ::by_ref<::Unity::Mathematics::quaternion> v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                       { "sortSingularValues", {}, { ::i2c::type_of<::by_ref<::Unity::Mathematics::float3x3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, b, v);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::approxGivensQuat(::Unity::Mathematics::float3 pq, ::Unity::Mathematics::float4 mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                                           { "approxGivensQuat", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, pq, mask);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::qrGivensQuat(::Unity::Mathematics::float2 pq, ::Unity::Mathematics::float4 mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "qrGivensQuat", {}, { ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float4>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, pq, mask);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::givensQRFactorization(::Unity::Mathematics::float3x3 b, ::by_ref<::Unity::Mathematics::float3x3> r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(),
                                              { "givensQRFactorization", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3x3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, b, r);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::jacobiIteration(::by_ref<::Unity::Mathematics::float3x3> s, int32_t iterations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "jacobiIteration", {}, { ::i2c::type_of<::by_ref<::Unity::Mathematics::float3x3>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, s, iterations);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::svd::singularValuesDecomposition(::Unity::Mathematics::float3x3 a, ::by_ref<::Unity::Mathematics::quaternion> u,
                                                                                         ::by_ref<::Unity::Mathematics::quaternion> v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "singularValuesDecomposition",
                                                                           {},
                                                                           { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(),
                                                                             ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, a, u, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::svd::rcpsafe(::Unity::Mathematics::float3 x, float_t epsilon) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "rcpsafe", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, x, epsilon);
}
inline ::Unity::Mathematics::float3x3 Unity::Mathematics::svd::svdInverse(::Unity::Mathematics::float3x3 a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "svdInverse", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3x3>(nullptr, ___internal_method, a);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::svdRotation(::Unity::Mathematics::float3x3 a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::svd*>(), { "svdRotation", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(nullptr, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::svd::svd() {}
