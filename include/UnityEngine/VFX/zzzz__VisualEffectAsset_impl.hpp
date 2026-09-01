#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectAsset.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectObject_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectAsset_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpace_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectAsset.GetExposedSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXSpace (::UnityEngine::VFX::VisualEffectAsset::*)(int32_t)>(&::UnityEngine::VFX::VisualEffectAsset::GetExposedSpace)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6e2dc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectAsset*>(), { "GetExposedSpace", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectAsset::*)()>(&::UnityEngine::VFX::VisualEffectAsset::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e2dd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectAsset.GetExposedSpace_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXSpace (*)(::System::IntPtr, int32_t)>(&::UnityEngine::VFX::VisualEffectAsset::GetExposedSpace_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2dcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectAsset*>(),
                                                                                           { "GetExposedSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VisualEffectAsset::setStaticF_PlayEventID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PlayEventID", ::UnityEngine::VFX::VisualEffectAsset*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::VisualEffectAsset::getStaticF_PlayEventID() {
  return ::cordl_internals::getStaticField<int32_t, "PlayEventID", ::UnityEngine::VFX::VisualEffectAsset*>();
}
inline void UnityEngine::VFX::VisualEffectAsset::setStaticF_StopEventID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "StopEventID", ::UnityEngine::VFX::VisualEffectAsset*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::VFX::VisualEffectAsset::getStaticF_StopEventID() {
  return ::cordl_internals::getStaticField<int32_t, "StopEventID", ::UnityEngine::VFX::VisualEffectAsset*>();
}
inline ::UnityEngine::VFX::VFXSpace UnityEngine::VFX::VisualEffectAsset::GetExposedSpace(int32_t nameID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectAsset*>(), { "GetExposedSpace", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXSpace>(this, ___internal_method, nameID);
}
inline void UnityEngine::VFX::VisualEffectAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VFXSpace UnityEngine::VFX::VisualEffectAsset::GetExposedSpace_Injected(::System::IntPtr _unity_self, int32_t nameID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectAsset*>(),
                                                                                         { "GetExposedSpace_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXSpace>(nullptr, ___internal_method, _unity_self, nameID);
}
inline ::UnityEngine::VFX::VisualEffectAsset* UnityEngine::VFX::VisualEffectAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectAsset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectAsset::VisualEffectAsset() {}
