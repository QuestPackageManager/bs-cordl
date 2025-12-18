#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Clipping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Clipping_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Clipping_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode::Clipping_OutCode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode::Clipping_OutCode() {}
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Inside{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Right{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Bottom{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping_OutCode::Top{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::ProBuilder::Clipping.ComputeOutCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Clipping_OutCode (*)(::UnityEngine::Rect, float_t, float_t)>(
    &::UnityEngine::ProBuilder::Clipping::ComputeOutCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6501424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping*>::get(), "ComputeOutCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Clipping.RectContainsLineSegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t)>(
    &::UnityEngine::ProBuilder::Clipping::RectContainsLineSegment)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6501460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping*>::get(), "RectContainsLineSegment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::Clipping_OutCode UnityEngine::ProBuilder::Clipping::ComputeOutCode(::UnityEngine::Rect rect, float_t x, float_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping*>::get(), "ComputeOutCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Clipping_OutCode, false>(nullptr, ___internal_method, rect, x, y);
}
inline bool UnityEngine::ProBuilder::Clipping::RectContainsLineSegment(::UnityEngine::Rect rect, float_t x0, float_t y0, float_t x1, float_t y1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping*>::get(), "RectContainsLineSegment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rect, x0, y0, x1, y1);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Clipping::Clipping() {}
