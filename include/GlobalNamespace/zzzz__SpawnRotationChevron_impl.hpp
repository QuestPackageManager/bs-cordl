#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevron::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::SpawnRotationChevron::ColorWasSet)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2374794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron.SetLightAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevron::*)(float_t)>(
    &::GlobalNamespace::SpawnRotationChevron::SetLightAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2374810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(), "SetLightAmount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron.UpdateLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevron::*)()>(&::GlobalNamespace::SpawnRotationChevron::UpdateLights)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23747a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(), "UpdateLights",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnRotationChevron._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnRotationChevron::*)()>(&::GlobalNamespace::SpawnRotationChevron::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2374818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>&
GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const&
GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr void
GlobalNamespace::SpawnRotationChevron::__cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::SpawnRotationChevron::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__lightAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightAmount;
}
constexpr float_t const& GlobalNamespace::SpawnRotationChevron::__cordl_internal_get__lightAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightAmount;
}
constexpr void GlobalNamespace::SpawnRotationChevron::__cordl_internal_set__lightAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightAmount = value;
}
inline void GlobalNamespace::SpawnRotationChevron::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::SpawnRotationChevron::SetLightAmount(float_t amount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(), "SetLightAmount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void GlobalNamespace::SpawnRotationChevron::UpdateLights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(), "UpdateLights",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnRotationChevron* GlobalNamespace::SpawnRotationChevron::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpawnRotationChevron*>());
}
inline void GlobalNamespace::SpawnRotationChevron::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnRotationChevron*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnRotationChevron::SpawnRotationChevron() {}
//  Writing Method size for method: ::GlobalNamespace::__SpawnRotationChevron__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SpawnRotationChevron__Pool::*)()>(
    &::GlobalNamespace::__SpawnRotationChevron__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2374820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SpawnRotationChevron__Pool*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SpawnRotationChevron__Pool* GlobalNamespace::__SpawnRotationChevron__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SpawnRotationChevron__Pool*>());
}
inline void GlobalNamespace::__SpawnRotationChevron__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SpawnRotationChevron__Pool*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SpawnRotationChevron__Pool::__SpawnRotationChevron__Pool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
