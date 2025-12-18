#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/SceneItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__ItemWithChildren_3_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneItem)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class GameObjectItem;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class SceneItem;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem);
// Dependencies Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren`3<TargetType, ChildType, ChildTargetType>, UnityEngine.SceneManagement.Scene
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Hierarchy.SceneItem
class CORDL_TYPE SceneItem : public ::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<::UnityEngine::SceneManagement::Scene, ::Meta::XR::ImmersiveDebugger::Hierarchy::GameObjectItem*,
                                                                                                 ::UnityW<::UnityEngine::GameObject>> {
public:
  // Declarations
  __declspec(property(get = get_Label)) ::StringW Label;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Method BuildHandle, addr 0x58bafd8, size 0x18, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle BuildHandle();

  /// @brief Method CompareChildren, addr 0x58baec4, size 0x6c, virtual true, abstract: false, final false
  inline bool CompareChildren(::UnityEngine::GameObject* lhs, ::UnityEngine::GameObject* rhs);

  /// @brief Method FetchExpectedChildren, addr 0x58baff0, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> FetchExpectedChildren();

  static inline ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem* New_ctor();

  /// @brief Method .ctor, addr 0x58baffc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Label, addr 0x58baf30, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method get_Valid, addr 0x58baf9c, size 0x3c, virtual true, abstract: false, final false
  inline bool get_Valid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneItem(SceneItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneItem(SceneItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem, 0x48>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Hierarchy
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*, "Meta.XR.ImmersiveDebugger.Hierarchy", "SceneItem");
