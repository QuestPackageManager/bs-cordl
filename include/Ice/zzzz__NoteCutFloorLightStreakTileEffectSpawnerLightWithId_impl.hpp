#pragma once
// IWYU pragma private; include "Ice/NoteCutFloorLightStreakTileEffectSpawnerLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "Ice/zzzz__NoteCutFloorLightStreakTileEffectSpawnerLightWithId_def.hpp"
#include "Ice/zzzz__NoteCutFloorLightStreakTileEffectSpawner_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::*)(::UnityEngine::Color)>(
    &::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x226a308;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::*)()>(
    &::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226a328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner>& Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::__cordl_internal_get__noteCutFloorLightStreakTileEffectSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutFloorLightStreakTileEffectSpawner;
}
constexpr ::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner> const&
Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::__cordl_internal_get__noteCutFloorLightStreakTileEffectSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutFloorLightStreakTileEffectSpawner;
}
constexpr void
Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::__cordl_internal_set__noteCutFloorLightStreakTileEffectSpawner(::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteCutFloorLightStreakTileEffectSpawner)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId* Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*>());
}
// Ctor Parameters []
constexpr ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId::NoteCutFloorLightStreakTileEffectSpawnerLightWithId() {}
