#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityScenesHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityScenesHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityScenesHelper.SetRootObjectsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, bool)>(&::GlobalNamespace::UnityScenesHelper::SetRootObjectsActive)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x332564c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityScenesHelper*>(),
                                                             { "SetRootObjectsActive", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
template <typename T>
inline void GlobalNamespace::UnityScenesHelper::GetComponentsInScene(::UnityEngine::SceneManagement::Scene scene, ::System::Collections::Generic::List_1<T>* components, bool includeInactive) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityScenesHelper*>(),
                                              { "GetComponentsInScene",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, components, includeInactive);
}
inline void GlobalNamespace::UnityScenesHelper::SetRootObjectsActive(::UnityEngine::SceneManagement::Scene scene, bool active) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityScenesHelper*>(),
                                                           { "SetRootObjectsActive", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, active);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityScenesHelper::UnityScenesHelper() {}
