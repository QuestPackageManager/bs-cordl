#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelEndActions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILevelEndActions)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ILevelEndActions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILevelEndActions);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILevelEndActions
class CORDL_TYPE ILevelEndActions {
public:
  // Declarations
  /// @brief Method add_levelFailedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_levelFailedEvent(::System::Action* value);

  /// @brief Method add_levelFinishedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_levelFinishedEvent(::System::Action* value);

  /// @brief Method remove_levelFailedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_levelFailedEvent(::System::Action* value);

  /// @brief Method remove_levelFinishedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_levelFinishedEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "ILevelEndActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelEndActions(ILevelEndActions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5975 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILevelEndActions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILevelEndActions*, "", "ILevelEndActions");
