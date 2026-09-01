#pragma once
// IWYU pragma private; include "GlobalNamespace\LightGroupEditorPrefabContext.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupEditorPrefabContext_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupEditorPrefabContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupEditorPrefabContext::*)()>(&::GlobalNamespace::LightGroupEditorPrefabContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586bd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupEditorPrefabContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*& GlobalNamespace::LightGroupEditorPrefabContext::__cordl_internal_get_lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroups;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* const& GlobalNamespace::LightGroupEditorPrefabContext::__cordl_internal_get_lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroups;
}
constexpr void GlobalNamespace::LightGroupEditorPrefabContext::__cordl_internal_set_lightGroups(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroups = value;
}
inline void GlobalNamespace::LightGroupEditorPrefabContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupEditorPrefabContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupEditorPrefabContext* GlobalNamespace::LightGroupEditorPrefabContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupEditorPrefabContext*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupEditorPrefabContext::LightGroupEditorPrefabContext() {}
