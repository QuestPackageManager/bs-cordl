#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SpeedTreeWindManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SpeedTreeWindManager_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__SpeedTreeWindParamsBufferIterator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SpeedTreeWindManager.UpdateWindAndWriteBufferWindParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<int32_t>, ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, bool)>(
    &::UnityEngine::Rendering::SpeedTreeWindManager::UpdateWindAndWriteBufferWindParams)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6bbbf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SpeedTreeWindManager*>(),
                            { "UpdateWindAndWriteBufferWindParams",
                              {},
                              { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SpeedTreeWindManager.UpdateWindAndWriteBufferWindParams_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>, bool)>(
    &::UnityEngine::Rendering::SpeedTreeWindManager::UpdateWindAndWriteBufferWindParams_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bbbfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SpeedTreeWindManager*>(),
                                                             { "UpdateWindAndWriteBufferWindParams_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SpeedTreeWindManager::UpdateWindAndWriteBufferWindParams(::System::ReadOnlySpan_1<int32_t> renderersID,
                                                                                             ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator windParams, bool history) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SpeedTreeWindManager*>(),
                          { "UpdateWindAndWriteBufferWindParams",
                            {},
                            { ::i2c::type_of<::System::ReadOnlySpan_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderersID, windParams, history);
}
inline void UnityEngine::Rendering::SpeedTreeWindManager::UpdateWindAndWriteBufferWindParams_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> renderersID,
                                                                                                      ::by_ref<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator> windParams, bool history) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SpeedTreeWindManager*>(),
                                                           { "UpdateWindAndWriteBufferWindParams_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderersID, windParams, history);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SpeedTreeWindManager::SpeedTreeWindManager() {}
