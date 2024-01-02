#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FinishTutorialAchievementHandler)
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class AchievementsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class FinishTutorialAchievementHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FinishTutorialAchievementHandler);
// Type: ::FinishTutorialAchievementHandler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4091))
// CS Name: ::FinishTutorialAchievementHandler*
class CORDL_TYPE FinishTutorialAchievementHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _achievementsModel, offset 0x18, size 0x8
  __declspec(property(get = __get__achievementsModel, put = __set__achievementsModel))::GlobalNamespace::AchievementsModelSO* _achievementsModel;

  /// @brief Field _tutorialFinishedSignal, offset 0x20, size 0x8
  __declspec(property(get = __get__tutorialFinishedSignal, put = __set__tutorialFinishedSignal))::GlobalNamespace::Signal* _tutorialFinishedSignal;

  /// @brief Field _finishTutorialAchievement, offset 0x28, size 0x8
  __declspec(property(get = __get__finishTutorialAchievement, put = __set__finishTutorialAchievement))::GlobalNamespace::AchievementSO* _finishTutorialAchievement;

  constexpr ::GlobalNamespace::AchievementsModelSO*& __get__achievementsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> const& __get__achievementsModel() const;

  constexpr void __set__achievementsModel(::GlobalNamespace::AchievementsModelSO* value);

  constexpr ::GlobalNamespace::Signal*& __get__tutorialFinishedSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__tutorialFinishedSignal() const;

  constexpr void __set__tutorialFinishedSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::AchievementSO*& __get__finishTutorialAchievement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementSO*> const& __get__finishTutorialAchievement() const;

  constexpr void __set__finishTutorialAchievement(::GlobalNamespace::AchievementSO* value);

  /// @brief Method Start, addr 0x2233230, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x22332bc, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleTutorialFinished, addr 0x2233348, size 0x20, virtual false, abstract: false, final false
  inline void HandleTutorialFinished();

  static inline ::GlobalNamespace::FinishTutorialAchievementHandler* New_ctor();

  /// @brief Method .ctor, addr 0x2233368, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FinishTutorialAchievementHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FinishTutorialAchievementHandler(FinishTutorialAchievementHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FinishTutorialAchievementHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FinishTutorialAchievementHandler(FinishTutorialAchievementHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FinishTutorialAchievementHandler();

public:
  /// @brief Field _achievementsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AchievementsModelSO* ____achievementsModel;

  /// @brief Field _tutorialFinishedSignal, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____tutorialFinishedSignal;

  /// @brief Field _finishTutorialAchievement, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AchievementSO* ____finishTutorialAchievement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FinishTutorialAchievementHandler, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FinishTutorialAchievementHandler, ____achievementsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FinishTutorialAchievementHandler, ____tutorialFinishedSignal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FinishTutorialAchievementHandler, ____finishTutorialAchievement) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FinishTutorialAchievementHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FinishTutorialAchievementHandler*, "", "FinishTutorialAchievementHandler");
