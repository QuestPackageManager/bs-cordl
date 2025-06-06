#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMultiplayerLevelEndActionsListener)
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMultiplayerLevelEndActionsListener);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IMultiplayerLevelEndActionsListener
class CORDL_TYPE IMultiplayerLevelEndActionsListener {
public:
  // Declarations
  /// @brief Method ReportPlayerDidFinish, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method ReportPlayerNetworkDidFailed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  // Ctor Parameters [CppParam { name: "", ty: "IMultiplayerLevelEndActionsListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultiplayerLevelEndActionsListener(IMultiplayerLevelEndActionsListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4523 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerLevelEndActionsListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerLevelEndActionsListener*, "", "IMultiplayerLevelEndActionsListener");
