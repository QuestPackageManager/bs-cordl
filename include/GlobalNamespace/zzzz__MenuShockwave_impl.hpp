#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__MenuShockwave_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VRUIControls/zzzz__VRPointer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2517250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2517260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2517334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.HandleButtonClickEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::HandleButtonClickEvent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2517408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(),
                                                                               "HandleButtonClickEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave.SpawnShockwave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MenuShockwave::SpawnShockwave)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2517430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "SpawnShockwave", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuShockwave._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuShockwave::*)()>(&::GlobalNamespace::MenuShockwave::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25174d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::MenuShockwave::__cordl_internal_get__shockwavePS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwavePS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::MenuShockwave::__cordl_internal_get__shockwavePS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwavePS;
}
constexpr void GlobalNamespace::MenuShockwave::__cordl_internal_set__shockwavePS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shockwavePS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VRUIControls::VRPointer>& GlobalNamespace::MenuShockwave::__cordl_internal_get__vrPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPointer;
}
constexpr ::UnityW<::VRUIControls::VRPointer> const& GlobalNamespace::MenuShockwave::__cordl_internal_get__vrPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPointer;
}
constexpr void GlobalNamespace::MenuShockwave::__cordl_internal_set__vrPointer(::UnityW<::VRUIControls::VRPointer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPointer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*>& GlobalNamespace::MenuShockwave::__cordl_internal_get__buttonClickEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonClickEvents;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> const& GlobalNamespace::MenuShockwave::__cordl_internal_get__buttonClickEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonClickEvents;
}
constexpr void GlobalNamespace::MenuShockwave::__cordl_internal_set__buttonClickEvents(::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonClickEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::MenuShockwave::__cordl_internal_get__shockwavePSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwavePSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::MenuShockwave::__cordl_internal_get__shockwavePSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwavePSEmitParams;
}
constexpr void GlobalNamespace::MenuShockwave::__cordl_internal_set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shockwavePSEmitParams = value;
}
inline void GlobalNamespace::MenuShockwave::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuShockwave::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuShockwave::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuShockwave::HandleButtonClickEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "HandleButtonClickEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuShockwave::SpawnShockwave(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), "SpawnShockwave", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline ::GlobalNamespace::MenuShockwave* GlobalNamespace::MenuShockwave::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MenuShockwave*>());
}
inline void GlobalNamespace::MenuShockwave::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuShockwave*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuShockwave::MenuShockwave() {}
