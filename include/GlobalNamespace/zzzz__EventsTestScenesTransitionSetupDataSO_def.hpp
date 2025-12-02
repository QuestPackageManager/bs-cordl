#pragma once
// IWYU pragma private; include "GlobalNamespace/EventsTestScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(EventsTestScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class EnvironmentsListModel;
}
// Forward declare root types
namespace GlobalNamespace {
class EventsTestScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO);
// Dependencies ScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventsTestScenesTransitionSetupDataSO
class CORDL_TYPE EventsTestScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Method Init, addr 0x571edf8, size 0x1d8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::EnvironmentsListModel* environmentsListModel);

  static inline ::GlobalNamespace::EventsTestScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x571efd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventsTestScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestScenesTransitionSetupDataSO(EventsTestScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestScenesTransitionSetupDataSO(EventsTestScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6832 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestScenesTransitionSetupDataSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*, "", "EventsTestScenesTransitionSetupDataSO");
