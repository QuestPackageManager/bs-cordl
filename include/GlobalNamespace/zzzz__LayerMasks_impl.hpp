#pragma once
// IWYU pragma private; include "GlobalNamespace/LayerMasks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__LayerMasks_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LayerMasks.GetLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::StringW)>(&::GlobalNamespace::LayerMasks::GetLayerMask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26a23d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get(), "GetLayerMask", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayerMasks.GetLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(int32_t)>(&::GlobalNamespace::LayerMasks::GetLayerMask)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26a2408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get(), "GetLayerMask", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayerMasks.GetLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::LayerMasks::GetLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a2430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get(), "GetLayer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayerMasks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LayerMasks::*)()>(&::GlobalNamespace::LayerMasks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a2438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LayerMasks::setStaticF_saberLayerMask(::UnityEngine::LayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LayerMask, "saberLayerMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>(
      std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::getStaticF_saberLayerMask() {
  return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "saberLayerMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_noteLayerMask(::UnityEngine::LayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LayerMask, "noteLayerMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>(
      std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::getStaticF_noteLayerMask() {
  return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "noteLayerMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_noteDebrisLayer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "noteDebrisLayer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LayerMasks::getStaticF_noteDebrisLayer() {
  return ::cordl_internals::getStaticField<int32_t, "noteDebrisLayer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_cutEffectParticlesLayer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "cutEffectParticlesLayer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LayerMasks::getStaticF_cutEffectParticlesLayer() {
  return ::cordl_internals::getStaticField<int32_t, "cutEffectParticlesLayer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_noteDebrisLayerMask(::UnityEngine::LayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LayerMask, "noteDebrisLayerMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>(
      std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::getStaticF_noteDebrisLayerMask() {
  return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "noteDebrisLayerMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>();
}
inline void GlobalNamespace::LayerMasks::setStaticF_cutEffectParticlesLayerMask(::UnityEngine::LayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::LayerMask, "cutEffectParticlesLayerMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>(
      std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::getStaticF_cutEffectParticlesLayerMask() {
  return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "cutEffectParticlesLayerMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get>();
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::GetLayerMask(::StringW layerName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get(), "GetLayerMask", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(nullptr, ___internal_method, layerName);
}
inline ::UnityEngine::LayerMask GlobalNamespace::LayerMasks::GetLayerMask(int32_t layerNum) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get(), "GetLayerMask", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(nullptr, ___internal_method, layerNum);
}
inline int32_t GlobalNamespace::LayerMasks::GetLayer(::StringW layerName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get(), "GetLayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, layerName);
}
inline void GlobalNamespace::LayerMasks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LayerMasks*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LayerMasks* GlobalNamespace::LayerMasks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LayerMasks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayerMasks::LayerMasks() {}
