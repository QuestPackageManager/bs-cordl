#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFScene.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFScene)
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFScene;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFScene);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFScene
struct CORDL_TYPE OVRGLTFScene {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFScene();

  // Ctor Parameters [CppParam { name: "root", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "animationNodes", ty:
  // "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*", modifiers: "", def_value: None }, CppParam { name:
  // "animationNodeLookup", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*",
  // modifiers: "", def_value: None }, CppParam { name: "morphTargetHandlers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*", modifiers: "",
  // def_value: None }]
  constexpr OVRGLTFScene(
      ::UnityW<::UnityEngine::GameObject> root, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* animationNodes,
      ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* animationNodeLookup,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* morphTargetHandlers) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7148 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field root, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> root;

  /// @brief Field animationNodes, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* animationNodes;

  /// @brief Field animationNodeLookup, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* animationNodeLookup;

  /// @brief Field morphTargetHandlers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* morphTargetHandlers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, root) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, animationNodes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, animationNodeLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, morphTargetHandlers) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFScene, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFScene, "", "OVRGLTFScene");
