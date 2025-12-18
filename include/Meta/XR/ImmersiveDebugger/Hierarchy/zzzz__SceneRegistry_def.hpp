#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/SceneRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__ItemWithChildren_3_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneRegistry)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class SceneItem;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class SceneRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry);
// Dependencies Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren`3<TargetType, ChildType, ChildTargetType>, UnityEngine.SceneManagement.Scene
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Hierarchy.SceneRegistry
class CORDL_TYPE SceneRegistry
    : public ::Meta::XR::ImmersiveDebugger::Hierarchy::ItemWithChildren_3<::System::Object*, ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*, ::UnityEngine::SceneManagement::Scene> {
public:
  // Declarations
  __declspec(property(get = get_Label)) ::StringW Label;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Method BuildHandle, addr 0x58bb048, size 0xc, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle BuildHandle();

  /// @brief Method CompareChildren, addr 0x58bb054, size 0xc, virtual true, abstract: false, final false
  inline bool CompareChildren(::UnityEngine::SceneManagement::Scene lhs, ::UnityEngine::SceneManagement::Scene rhs);

  /// @brief Method FetchExpectedChildren, addr 0x58bb078, size 0x128, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::SceneManagement::Scene, ::Array<::UnityEngine::SceneManagement::Scene>*> FetchExpectedChildren();

  static inline ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry* New_ctor();

  /// @brief Method Register, addr 0x58bb064, size 0x4, virtual true, abstract: false, final false
  inline void Register(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* parent);

  /// @brief Method Unregister, addr 0x58bb060, size 0x4, virtual true, abstract: false, final false
  inline void Unregister();

  /// @brief Method .ctor, addr 0x58bb1a0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Label, addr 0x58bb068, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method get_Valid, addr 0x58bb070, size 0x8, virtual true, abstract: false, final false
  inline bool get_Valid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneRegistry(SceneRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneRegistry(SceneRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18438 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry, 0x50>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Hierarchy
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry*, "Meta.XR.ImmersiveDebugger.Hierarchy", "SceneRegistry");
