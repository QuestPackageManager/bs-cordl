#pragma once
// IWYU pragma private; include "UnityEngine/ColorGamutUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ColorGamutUtility_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__ColorPrimaries_def.hpp"
#include "UnityEngine/zzzz__TransferFunction_def.hpp"
#include "UnityEngine/zzzz__WhitePoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ColorGamutUtility.GetColorPrimaries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ColorPrimaries (*)(::UnityEngine::ColorGamut)>(&::UnityEngine::ColorGamutUtility::GetColorPrimaries)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68576c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorGamutUtility*>::get(), "GetColorPrimaries", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorGamutUtility.GetWhitePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WhitePoint (*)(::UnityEngine::ColorGamut)>(&::UnityEngine::ColorGamutUtility::GetWhitePoint)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6857700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorGamutUtility*>::get(), "GetWhitePoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ColorGamutUtility.GetTransferFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TransferFunction (*)(::UnityEngine::ColorGamut)>(
    &::UnityEngine::ColorGamutUtility::GetTransferFunction)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x685773c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorGamutUtility*>::get(), "GetTransferFunction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ColorPrimaries UnityEngine::ColorGamutUtility::GetColorPrimaries(::UnityEngine::ColorGamut gamut) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorGamutUtility*>::get(), "GetColorPrimaries", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorPrimaries, false>(nullptr, ___internal_method, gamut);
}
inline ::UnityEngine::WhitePoint UnityEngine::ColorGamutUtility::GetWhitePoint(::UnityEngine::ColorGamut gamut) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorGamutUtility*>::get(), "GetWhitePoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::WhitePoint, false>(nullptr, ___internal_method, gamut);
}
inline ::UnityEngine::TransferFunction UnityEngine::ColorGamutUtility::GetTransferFunction(::UnityEngine::ColorGamut gamut) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ColorGamutUtility*>::get(), "GetTransferFunction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransferFunction, false>(nullptr, ___internal_method, gamut);
}
// Ctor Parameters []
constexpr ::UnityEngine::ColorGamutUtility::ColorGamutUtility() {}
