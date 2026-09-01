#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RTHandleStaticHelpers.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleStaticHelpers_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleStaticHelpers.SetRTHandleStaticWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::RTHandleStaticHelpers::SetRTHandleStaticWrapper)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67aae94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleStaticHelpers>(),
                                                             { "SetRTHandleStaticWrapper", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandleStaticHelpers.SetRTHandleUserManagedWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::RTHandleStaticHelpers::SetRTHandleUserManagedWrapper)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x67ab004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RTHandleStaticHelpers>(),
            { "SetRTHandleUserManagedWrapper", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RTHandleStaticHelpers::setStaticF_s_RTHandleWrapper(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "s_RTHandleWrapper", ::UnityEngine::Rendering::RTHandleStaticHelpers>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandleStaticHelpers::getStaticF_s_RTHandleWrapper() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "s_RTHandleWrapper", ::UnityEngine::Rendering::RTHandleStaticHelpers>();
}
inline void UnityEngine::Rendering::RTHandleStaticHelpers::SetRTHandleStaticWrapper(::UnityEngine::Rendering::RenderTargetIdentifier rtId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandleStaticHelpers>(),
                                                                                         { "SetRTHandleStaticWrapper", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rtId);
}
inline void UnityEngine::Rendering::RTHandleStaticHelpers::SetRTHandleUserManagedWrapper(::by_ref<::UnityEngine::Rendering::RTHandle*> rtWrapper,
                                                                                         ::UnityEngine::Rendering::RenderTargetIdentifier rtId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RTHandleStaticHelpers>(),
          { "SetRTHandleUserManagedWrapper", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rtWrapper, rtId);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandleStaticHelpers::RTHandleStaticHelpers() {}
