#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/ComponentItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ComponentItem)
namespace Meta::XR::ImmersiveDebugger::Manager {
struct Category;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class ComponentItem;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem);
// Dependencies Meta.XR.ImmersiveDebugger.Hierarchy.Item`1<T>
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Hierarchy.ComponentItem
class CORDL_TYPE ComponentItem : public ::Meta::XR::ImmersiveDebugger::Hierarchy::Item_1<::UnityW<::UnityEngine::Component>> {
public:
  // Declarations
  __declspec(property(get = get_Category)) ::Meta::XR::ImmersiveDebugger::Manager::Category Category;

  __declspec(property(get = get_Label)) ::StringW Label;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Method BuildHandle, addr 0x5854714, size 0x4c, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle BuildHandle();

  static inline ::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem* New_ctor();

  /// @brief Method .ctor, addr 0x5854430, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Category, addr 0x5854704, size 0x10, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::Category get_Category();

  /// @brief Method get_Label, addr 0x5854684, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method get_Valid, addr 0x58546a0, size 0x64, virtual true, abstract: false, final false
  inline bool get_Valid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentItem(ComponentItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentItem(ComponentItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem, 0x48>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Hierarchy
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Hierarchy::ComponentItem*, "Meta.XR.ImmersiveDebugger.Hierarchy", "ComponentItem");
