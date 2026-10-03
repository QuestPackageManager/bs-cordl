#pragma once
// IWYU pragma private; include "GlobalNamespace/FullScreenPassRendererFeature_OldGUID.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FullScreenPassRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__FullScreenPassRendererFeature_OldGUID_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_OldGUID.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_OldGUID::*)()>(
    &::GlobalNamespace::FullScreenPassRendererFeature_OldGUID::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c719c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FullScreenPassRendererFeature_OldGUID*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_OldGUID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_OldGUID::*)()>(&::GlobalNamespace::FullScreenPassRendererFeature_OldGUID::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c719c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FullScreenPassRendererFeature_OldGUID*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FullScreenPassRendererFeature_OldGUID::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FullScreenPassRendererFeature_OldGUID*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_OldGUID::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FullScreenPassRendererFeature_OldGUID*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FullScreenPassRendererFeature_OldGUID* GlobalNamespace::FullScreenPassRendererFeature_OldGUID::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FullScreenPassRendererFeature_OldGUID*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr GlobalNamespace::FullScreenPassRendererFeature_OldGUID::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::FullScreenPassRendererFeature_OldGUID::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_OldGUID::FullScreenPassRendererFeature_OldGUID() {}
