#pragma once
// IWYU pragma private; include "Unity/Mathematics/svd.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__svd_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::svd.condSwap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::ByRef<float_t>, ::ByRef<float_t>)>(&::Unity::Mathematics::svd::condSwap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64cf358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "condSwap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.condNegSwap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::ByRef<::Unity::Mathematics::float3>, ::ByRef<::Unity::Mathematics::float3>)>(
    &::Unity::Mathematics::svd::condNegSwap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64cf37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "condNegSwap", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.condNegSwapQuat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::quaternion (*)(bool, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float4)>(
    &::Unity::Mathematics::svd::condNegSwapQuat)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x64cf3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "condNegSwapQuat", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::quaternion>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.sortSingularValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Mathematics::float3x3>, ::ByRef<::Unity::Mathematics::quaternion>)>(
    &::Unity::Mathematics::svd::sortSingularValues)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x64cf500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "sortSingularValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3x3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.approxGivensQuat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float4)>(
    &::Unity::Mathematics::svd::approxGivensQuat)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x64cf898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "approxGivensQuat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.qrGivensQuat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float4)>(
    &::Unity::Mathematics::svd::qrGivensQuat)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x64cf9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "qrGivensQuat", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.givensQRFactorization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3x3, ::ByRef<::Unity::Mathematics::float3x3>)>(
    &::Unity::Mathematics::svd::givensQRFactorization)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x64cfadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "givensQRFactorization", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3x3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.jacobiIteration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::quaternion (*)(::ByRef<::Unity::Mathematics::float3x3>, int32_t)>(
    &::Unity::Mathematics::svd::jacobiIteration)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x64cffd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "jacobiIteration", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3x3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.singularValuesDecomposition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(
    ::Unity::Mathematics::float3x3, ::ByRef<::Unity::Mathematics::quaternion>, ::ByRef<::Unity::Mathematics::quaternion>)>(&::Unity::Mathematics::svd::singularValuesDecomposition)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x64d08f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "singularValuesDecomposition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::quaternion>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.rcpsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::svd::rcpsafe)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64d0ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "rcpsafe", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.svdInverse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3x3 (*)(::Unity::Mathematics::float3x3)>(&::Unity::Mathematics::svd::svdInverse)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x64d0c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "svdInverse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::svd.svdRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::quaternion (*)(::Unity::Mathematics::float3x3)>(&::Unity::Mathematics::svd::svdRotation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x64d0ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "svdRotation", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::svd::condSwap(bool c, ::ByRef<float_t> x, ::ByRef<float_t> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "condSwap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c, x, y);
}
inline void Unity::Mathematics::svd::condNegSwap(bool c, ::ByRef<::Unity::Mathematics::float3> x, ::ByRef<::Unity::Mathematics::float3> y) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "condNegSwap", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c, x, y);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::condNegSwapQuat(bool c, ::Unity::Mathematics::quaternion q, ::Unity::Mathematics::float4 mask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "condNegSwapQuat", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion, false>(nullptr, ___internal_method, c, q, mask);
}
inline void Unity::Mathematics::svd::sortSingularValues(::ByRef<::Unity::Mathematics::float3x3> b, ::ByRef<::Unity::Mathematics::quaternion> v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "sortSingularValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3x3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, b, v);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::approxGivensQuat(::Unity::Mathematics::float3 pq, ::Unity::Mathematics::float4 mask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "approxGivensQuat", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion, false>(nullptr, ___internal_method, pq, mask);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::qrGivensQuat(::Unity::Mathematics::float2 pq, ::Unity::Mathematics::float4 mask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "qrGivensQuat", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion, false>(nullptr, ___internal_method, pq, mask);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::givensQRFactorization(::Unity::Mathematics::float3x3 b, ::ByRef<::Unity::Mathematics::float3x3> r) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "givensQRFactorization", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3x3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion, false>(nullptr, ___internal_method, b, r);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::jacobiIteration(::ByRef<::Unity::Mathematics::float3x3> s, int32_t iterations) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "jacobiIteration", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::float3x3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion, false>(nullptr, ___internal_method, s, iterations);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::svd::singularValuesDecomposition(::Unity::Mathematics::float3x3 a, ::ByRef<::Unity::Mathematics::quaternion> u,
                                                                                         ::ByRef<::Unity::Mathematics::quaternion> v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "singularValuesDecomposition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::quaternion>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Mathematics::quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, a, u, v);
}
inline ::Unity::Mathematics::float3 Unity::Mathematics::svd::rcpsafe(::Unity::Mathematics::float3 x, float_t epsilon) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "rcpsafe", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, x, epsilon);
}
inline ::Unity::Mathematics::float3x3 Unity::Mathematics::svd::svdInverse(::Unity::Mathematics::float3x3 a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "svdInverse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3x3, false>(nullptr, ___internal_method, a);
}
inline ::Unity::Mathematics::quaternion Unity::Mathematics::svd::svdRotation(::Unity::Mathematics::float3x3 a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::svd*>::get(), "svdRotation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion, false>(nullptr, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::svd::svd() {}
