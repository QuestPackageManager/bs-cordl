#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundPropertyHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPropertyHelper_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BackgroundPropertyHelper.ConvertScaleModeToBackgroundPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundPosition (*)(::UnityEngine::ScaleMode)>(
    &::UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4909540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BackgroundPropertyHelper*>::get(), "ConvertScaleModeToBackgroundPosition",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BackgroundPropertyHelper.ConvertScaleModeToBackgroundRepeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundRepeat (*)(::UnityEngine::ScaleMode)>(
    &::UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundRepeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49097ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BackgroundPropertyHelper*>::get(), "ConvertScaleModeToBackgroundRepeat",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BackgroundPropertyHelper.ConvertScaleModeToBackgroundSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundSize (*)(::UnityEngine::ScaleMode)>(
    &::UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundSize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x49097fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BackgroundPropertyHelper*>::get(), "ConvertScaleModeToBackgroundSize",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BackgroundPropertyHelper.ResolveUnityBackgroundScaleMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScaleMode (*)(
    ::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::BackgroundRepeat, ::UnityEngine::UIElements::BackgroundSize, ByRef<bool>)>(
    &::UnityEngine::UIElements::BackgroundPropertyHelper::ResolveUnityBackgroundScaleMode)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x4909904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BackgroundPropertyHelper*>::get(), "ResolveUnityBackgroundScaleMode",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPosition>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPosition>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundRepeat>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
/// @param scaleMode: ::UnityEngine::ScaleMode (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundPosition(::UnityEngine::ScaleMode scaleMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BackgroundPropertyHelper*>::get(), "ConvertScaleModeToBackgroundPosition",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition, false>(nullptr, ___internal_method, scaleMode);
}
/// @param scaleMode: ::UnityEngine::ScaleMode (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::UIElements::BackgroundRepeat UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundRepeat(::UnityEngine::ScaleMode scaleMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BackgroundPropertyHelper*>::get(), "ConvertScaleModeToBackgroundRepeat",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundRepeat, false>(nullptr, ___internal_method, scaleMode);
}
/// @param scaleMode: ::UnityEngine::ScaleMode (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundSize(::UnityEngine::ScaleMode scaleMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BackgroundPropertyHelper*>::get(), "ConvertScaleModeToBackgroundSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize, false>(nullptr, ___internal_method, scaleMode);
}
inline ::UnityEngine::ScaleMode UnityEngine::UIElements::BackgroundPropertyHelper::ResolveUnityBackgroundScaleMode(::UnityEngine::UIElements::BackgroundPosition backgroundPositionX,
                                                                                                                   ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY,
                                                                                                                   ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat,
                                                                                                                   ::UnityEngine::UIElements::BackgroundSize backgroundSize, ByRef<bool> valid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BackgroundPropertyHelper*>::get(), "ResolveUnityBackgroundScaleMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPosition>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPosition>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundRepeat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScaleMode, false>(nullptr, ___internal_method, backgroundPositionX, backgroundPositionY, backgroundRepeat, backgroundSize, valid);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BackgroundPropertyHelper::BackgroundPropertyHelper() {}
