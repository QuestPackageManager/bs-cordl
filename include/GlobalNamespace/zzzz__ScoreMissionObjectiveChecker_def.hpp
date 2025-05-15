#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreMissionObjectiveChecker)
namespace GlobalNamespace {
class IScoreController;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreMissionObjectiveChecker);
// Dependencies SimpleValueMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreMissionObjectiveChecker
class CORDL_TYPE ScoreMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _scoreController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Method HandleScoreDidChange, addr 0x3bb4f88, size 0x48, virtual false, abstract: false, final false
  inline void HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore);

  /// @brief Method Init, addr 0x3bb4fd0, size 0x200, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::ScoreMissionObjectiveChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bb4e88, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method .ctor, addr 0x3bb51d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreMissionObjectiveChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreMissionObjectiveChecker(ScoreMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreMissionObjectiveChecker(ScoreMissionObjectiveChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4475 };

  /// @brief Field _scoreController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoreMissionObjectiveChecker, ____scoreController) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreMissionObjectiveChecker, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMissionObjectiveChecker*, "", "ScoreMissionObjectiveChecker");
