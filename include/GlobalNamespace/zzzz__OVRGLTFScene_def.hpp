#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::OVRGLTFScene
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7567))
// CS Name: ::OVRGLTFScene
struct CORDL_TYPE OVRGLTFScene {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "root", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "nodes", ty:
  // "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None }, CppParam { name: "animationNodes", ty:
  // "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*", modifiers: "", def_value: None }, CppParam { name:
  // "animationNodeLookup", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*",
  // modifiers: "", def_value: None }, CppParam { name: "morphTargetHandlers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*", modifiers: "",
  // def_value: None }]
  constexpr OVRGLTFScene(
      ::UnityW<::UnityEngine::GameObject> root, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* nodes,
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* animationNodes,
      ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* animationNodeLookup,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* morphTargetHandlers) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFScene();

  /// @brief Field root, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> root;

  /// @brief Field nodes, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* nodes;

  /// @brief Field animationNodes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* animationNodes;

  /// @brief Field animationNodeLookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* animationNodeLookup;

  /// @brief Field morphTargetHandlers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* morphTargetHandlers;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFScene, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, root) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, nodes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, animationNodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, animationNodeLookup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFScene, morphTargetHandlers) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFScene, "", "OVRGLTFScene");
