#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BackgroundPropertyHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPropertyHelper_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BackgroundPropertyHelper.ConvertScaleModeToBackgroundPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundPosition (*)(::UnityEngine::ScaleMode)>(
    &::UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c2f3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BackgroundPropertyHelper*>(),
                                                                                           { "ConvertScaleModeToBackgroundPosition", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BackgroundPropertyHelper.ConvertScaleModeToBackgroundRepeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundRepeat (*)(::UnityEngine::ScaleMode)>(
    &::UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundRepeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c2f8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BackgroundPropertyHelper*>(),
                                                                                           { "ConvertScaleModeToBackgroundRepeat", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BackgroundPropertyHelper.ConvertScaleModeToBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundSize (*)(::UnityEngine::ScaleMode)>(
    &::UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c2f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BackgroundPropertyHelper*>(),
                                                                                           { "ConvertScaleModeToBackgroundSize", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BackgroundPropertyHelper.ResolveUnityBackgroundScaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ScaleMode (*)(::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::BackgroundPosition,
                                                                                    ::UnityEngine::UIElements::BackgroundRepeat, ::UnityEngine::UIElements::BackgroundSize, ::by_ref<bool>)>(
    &::UnityEngine::UIElements::BackgroundPropertyHelper::ResolveUnityBackgroundScaleMode)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6c2f910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BackgroundPropertyHelper*>(),
                            { "ResolveUnityBackgroundScaleMode",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>(),
                                ::i2c::type_of<::UnityEngine::UIElements::BackgroundRepeat>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundPosition(::UnityEngine::ScaleMode scaleMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BackgroundPropertyHelper*>(),
                                                                                         { "ConvertScaleModeToBackgroundPosition", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition>(nullptr, ___internal_method, scaleMode);
}
inline ::UnityEngine::UIElements::BackgroundRepeat UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundRepeat(::UnityEngine::ScaleMode scaleMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BackgroundPropertyHelper*>(),
                                                                                         { "ConvertScaleModeToBackgroundRepeat", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundRepeat>(nullptr, ___internal_method, scaleMode);
}
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundSize(::UnityEngine::ScaleMode scaleMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BackgroundPropertyHelper*>(),
                                                                                         { "ConvertScaleModeToBackgroundSize", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize>(nullptr, ___internal_method, scaleMode);
}
inline ::UnityEngine::ScaleMode UnityEngine::UIElements::BackgroundPropertyHelper::ResolveUnityBackgroundScaleMode(::UnityEngine::UIElements::BackgroundPosition backgroundPositionX,
                                                                                                                   ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY,
                                                                                                                   ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat,
                                                                                                                   ::UnityEngine::UIElements::BackgroundSize backgroundSize, ::by_ref<bool> valid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BackgroundPropertyHelper*>(),
                          { "ResolveUnityBackgroundScaleMode",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>(),
                              ::i2c::type_of<::UnityEngine::UIElements::BackgroundRepeat>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScaleMode>(nullptr, ___internal_method, backgroundPositionX, backgroundPositionY, backgroundRepeat, backgroundSize, valid);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BackgroundPropertyHelper::BackgroundPropertyHelper() {}
