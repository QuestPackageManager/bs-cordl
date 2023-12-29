#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SceneLoadedCallbacksOrderDebug)
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneLoadedCallbacksOrderDebug;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneLoadedCallbacksOrderDebug);
// Type: ::SceneLoadedCallbacksOrderDebug
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13889))
// CS Name: ::SceneLoadedCallbacksOrderDebug*
class CORDL_TYPE SceneLoadedCallbacksOrderDebug : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake addr 0x1f98a0c size 0x68 virtual false final false
  inline void Awake();

  /// @brief Method OnEnable addr 0x1f98a74 size 0xe8 virtual false final false
  inline void OnEnable();

  /// @brief Method OnSceneLoaded addr 0x1f98b5c size 0xd0 virtual false final false
  inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method Start addr 0x1f98c2c size 0x68 virtual false final false
  inline void Start();

  /// @brief Method OnDisable addr 0x1f98c94 size 0xe8 virtual false final false
  inline void OnDisable();

  static inline ::GlobalNamespace::SceneLoadedCallbacksOrderDebug* New_ctor();

  /// @brief Method .ctor addr 0x1f98d7c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SceneLoadedCallbacksOrderDebug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneLoadedCallbacksOrderDebug(SceneLoadedCallbacksOrderDebug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneLoadedCallbacksOrderDebug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneLoadedCallbacksOrderDebug(SceneLoadedCallbacksOrderDebug const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneLoadedCallbacksOrderDebug();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneLoadedCallbacksOrderDebug, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneLoadedCallbacksOrderDebug);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneLoadedCallbacksOrderDebug*, "", "SceneLoadedCallbacksOrderDebug");
