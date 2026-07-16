#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/IDebugUIPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugUIPanel)
namespace Meta::XR::ImmersiveDebugger::Manager {
struct Category;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IInspector;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IDebugUIPanel;
}
// Write type traits
MARK_REF_T(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*);
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*, "Meta.XR.ImmersiveDebugger.UserInterface", "IDebugUIPanel");
// Dependencies
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.IDebugUIPanel
class CORDL_TYPE IDebugUIPanel {
public:
  // Declarations
  /// @brief Method GetInspector, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* GetInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance,
                                                                                ::Meta::XR::ImmersiveDebugger::Manager::Category category);

  /// @brief Method RegisterInspector, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* RegisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance,
                                                                                     ::Meta::XR::ImmersiveDebugger::Manager::Category category);

  /// @brief Method UnregisterInspector, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterInspector(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance, ::Meta::XR::ImmersiveDebugger::Manager::Category category, bool allCategories);

  // Ctor Parameters [CppParam { name: "", ty: "IDebugUIPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugUIPanel(IDebugUIPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18337 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::UserInterface
