#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\APVDefinitions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/zzzz__APVDefinitions_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::APVDefinitions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::APVDefinitions::*)()>(&::UnityEngine::Rendering::APVDefinitions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6799344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::APVDefinitions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::APVDefinitions::setStaticF_probeIndexChunkSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "probeIndexChunkSize", ::UnityEngine::Rendering::APVDefinitions*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::APVDefinitions::getStaticF_probeIndexChunkSize() {
  return ::cordl_internals::getStaticField<int32_t, "probeIndexChunkSize", ::UnityEngine::Rendering::APVDefinitions*>();
}
inline void UnityEngine::Rendering::APVDefinitions::setStaticF_probeMaxRegionCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "probeMaxRegionCount", ::UnityEngine::Rendering::APVDefinitions*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::APVDefinitions::getStaticF_probeMaxRegionCount() {
  return ::cordl_internals::getStaticField<int32_t, "probeMaxRegionCount", ::UnityEngine::Rendering::APVDefinitions*>();
}
inline void UnityEngine::Rendering::APVDefinitions::setStaticF_layerMaskColors(::ArrayW<::UnityEngine::Color32> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Color32>, "layerMaskColors", ::UnityEngine::Rendering::APVDefinitions*>(std::forward<::ArrayW<::UnityEngine::Color32>>(value));
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Rendering::APVDefinitions::getStaticF_layerMaskColors() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Color32>, "layerMaskColors", ::UnityEngine::Rendering::APVDefinitions*>();
}
inline void UnityEngine::Rendering::APVDefinitions::setStaticF_debugEmptyColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "debugEmptyColor", ::UnityEngine::Rendering::APVDefinitions*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::Rendering::APVDefinitions::getStaticF_debugEmptyColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "debugEmptyColor", ::UnityEngine::Rendering::APVDefinitions*>();
}
inline void UnityEngine::Rendering::APVDefinitions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::APVDefinitions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::APVDefinitions* UnityEngine::Rendering::APVDefinitions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::APVDefinitions*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::APVDefinitions::APVDefinitions() {}
