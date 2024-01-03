#pragma once
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimationNodeMorphTargetHandler_def.hpp"
// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "nodes", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "animationNodes", ty:
// "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "animationNodeLookup", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "morphTargetHandlers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::OVRGLTFScene::OVRGLTFScene(
    ::UnityEngine::GameObject* root, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* nodes,
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* animationNodes,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*, ::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* animationNodeLookup,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* morphTargetHandlers) noexcept {
  this->root = root;
  this->nodes = nodes;
  this->animationNodes = animationNodes;
  this->animationNodeLookup = animationNodeLookup;
  this->morphTargetHandlers = morphTargetHandlers;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFScene::OVRGLTFScene() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
