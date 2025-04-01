#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupElementsSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupElementsSpawner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupElementsSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupElementsSpawner::*)()>(&::GlobalNamespace::LightGroupElementsSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39db890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupElementsSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__lightPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__lightPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightPrefab;
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_set__lightPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__useAlternatePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAlternatePrefab;
}
constexpr bool const& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__useAlternatePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAlternatePrefab;
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_set__useAlternatePrefab(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useAlternatePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__alternateLightPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternateLightPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__alternateLightPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternateLightPrefab;
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_set__alternateLightPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alternateLightPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LightGroupElementsSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupElementsSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupElementsSpawner* GlobalNamespace::LightGroupElementsSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightGroupElementsSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupElementsSpawner::LightGroupElementsSpawner() {}
