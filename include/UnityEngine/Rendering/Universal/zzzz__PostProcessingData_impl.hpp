#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessingData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalPostProcessingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessingData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessingData::*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::PostProcessingData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e17c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessingData.get_universalPostProcessingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalPostProcessingData* (::UnityEngine::Rendering::Universal::PostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessingData::get_universalPostProcessingData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68e17d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_universalPostProcessingData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessingData.get_gradingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::ColorGradingMode> (::UnityEngine::Rendering::Universal::PostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessingData::get_gradingMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e1824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_gradingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessingData.get_lutSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::PostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessingData::get_lutSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e1884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_lutSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessingData.get_useFastSRGBLinearConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::PostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessingData::get_useFastSRGBLinearConversion)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e18e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_useFastSRGBLinearConversion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessingData.get_supportScreenSpaceLensFlare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::PostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessingData::get_supportScreenSpaceLensFlare)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e1944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_supportScreenSpaceLensFlare", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessingData.get_supportDataDrivenLensFlare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::PostProcessingData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessingData::get_supportDataDrivenLensFlare)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e19a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_supportDataDrivenLensFlare", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::PostProcessingData::_ctor(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* UnityEngine::Rendering::Universal::PostProcessingData::get_universalPostProcessingData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_universalPostProcessingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::ColorGradingMode> UnityEngine::Rendering::Universal::PostProcessingData::get_gradingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_gradingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::ColorGradingMode>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::PostProcessingData::get_lutSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_lutSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::PostProcessingData::get_useFastSRGBLinearConversion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_useFastSRGBLinearConversion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::PostProcessingData::get_supportScreenSpaceLensFlare() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_supportScreenSpaceLensFlare", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::PostProcessingData::get_supportDataDrivenLensFlare() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessingData>(), { "get_supportDataDrivenLensFlare", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessingData::PostProcessingData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept {
  this->frameData = frameData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessingData::PostProcessingData() {}
