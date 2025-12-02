#pragma once
// IWYU pragma private; include "GlobalNamespace/IComboController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComboController)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IComboController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IComboController);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IComboController
class CORDL_TYPE IComboController {
public:
  // Declarations
  /// @brief Method add_comboBreakingEventHappenedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_comboBreakingEventHappenedEvent(::System::Action* value);

  /// @brief Method add_comboDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_comboBreakingEventHappenedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_comboBreakingEventHappenedEvent(::System::Action* value);

  /// @brief Method remove_comboDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IComboController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComboController(IComboController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6259 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IComboController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IComboController*, "", "IComboController");
