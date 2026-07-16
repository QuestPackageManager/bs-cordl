#pragma once
// IWYU pragma private; include "GlobalNamespace/LayerMasks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__LayerMasks_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LayerMasks.GetLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (*)(::StringW)>(&::GlobalNamespace::LayerMasks::GetLayerMask)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36f618c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LayerMasks*>(), { "GetLayerMask", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayerMasks.GetLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (*)(int32_t)>(&::GlobalNamespace::LayerMasks::GetLayerMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36f61a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LayerMasks*>(), { "GetLayerMask", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayerMasks.GetLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::LayerMasks::GetLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f61b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LayerMasks*>(), { "GetLayer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayerMasks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LayerMasks::*)()>(&::GlobalNamespace::LayerMasks::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36f61bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LayerMasks*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LayerMasks::setStaticF_saberLayerMask(::UnityEngine::LayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LayerMask, "saberLayerMask", ::GlobalNamespace::LayerMasks*>(std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::getStaticF_saberLayerMask() {
  return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "saberLayerMask", ::GlobalNamespace::LayerMasks*>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_noteLayerMask(::UnityEngine::LayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LayerMask, "noteLayerMask", ::GlobalNamespace::LayerMasks*>(std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::getStaticF_noteLayerMask() {
  return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "noteLayerMask", ::GlobalNamespace::LayerMasks*>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_noteDebrisLayer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "noteDebrisLayer", ::GlobalNamespace::LayerMasks*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LayerMasks::getStaticF_noteDebrisLayer() {
  return ::cordl_internals::getStaticField<int32_t, "noteDebrisLayer", ::GlobalNamespace::LayerMasks*>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_cutEffectParticlesLayer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "cutEffectParticlesLayer", ::GlobalNamespace::LayerMasks*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LayerMasks::getStaticF_cutEffectParticlesLayer() {
  return ::cordl_internals::getStaticField<int32_t, "cutEffectParticlesLayer", ::GlobalNamespace::LayerMasks*>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_noteDebrisLayerMask(::UnityEngine::LayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LayerMask, "noteDebrisLayerMask", ::GlobalNamespace::LayerMasks*>(std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::getStaticF_noteDebrisLayerMask() {
  return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "noteDebrisLayerMask", ::GlobalNamespace::LayerMasks*>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_cutEffectParticlesLayerMask(::UnityEngine::LayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LayerMask, "cutEffectParticlesLayerMask", ::GlobalNamespace::LayerMasks*>(std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::getStaticF_cutEffectParticlesLayerMask() {
  return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "cutEffectParticlesLayerMask", ::GlobalNamespace::LayerMasks*>();
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::GetLayerMask(::StringW layerName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LayerMasks*>(), { "GetLayerMask", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(nullptr, ___internal_method, layerName);
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::GetLayerMask(int32_t layerNum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LayerMasks*>(), { "GetLayerMask", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(nullptr, ___internal_method, layerNum);
}
inline int32_t GlobalNamespace::LayerMasks::GetLayer(::StringW layerName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LayerMasks*>(), { "GetLayer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, layerName);
}
inline void GlobalNamespace::LayerMasks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LayerMasks*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LayerMasks* GlobalNamespace::LayerMasks::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LayerMasks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayerMasks::LayerMasks() {}
