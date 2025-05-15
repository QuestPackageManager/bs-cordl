#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectivesGameUIController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MissionObjectivesGameUIController)
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class MissionObjectiveGameUIView;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectivesGameUIController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectivesGameUIController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionObjectivesGameUIController
class CORDL_TYPE MissionObjectivesGameUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _elementWidth, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__elementWidth, put = __cordl_internal_set__elementWidth)) float_t _elementWidth;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveCheckersManager,
                      put = __cordl_internal_set__missionObjectiveCheckersManager)) ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>
      _missionObjectiveCheckersManager;

  /// @brief Field _missionObjectiveGameUIViewPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveGameUIViewPrefab,
                      put = __cordl_internal_set__missionObjectiveGameUIViewPrefab)) ::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>
      _missionObjectiveGameUIViewPrefab;

  /// @brief Field _missionObjectiveGameUIViews, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__missionObjectiveGameUIViews,
      put = __cordl_internal_set__missionObjectiveGameUIViews)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>>* _missionObjectiveGameUIViews;

  /// @brief Field _separator, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__separator, put = __cordl_internal_set__separator)) float_t _separator;

  /// @brief Method CreateUIElements, addr 0x3ba8070, size 0x398, virtual false, abstract: false, final false
  inline void CreateUIElements();

  /// @brief Method HandleMissionObjectiveCheckersManagerObjectivesListDidChange, addr 0x3ba84d8, size 0x4, virtual false, abstract: false, final false
  inline void HandleMissionObjectiveCheckersManagerObjectivesListDidChange();

  static inline ::GlobalNamespace::MissionObjectivesGameUIController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ba8408, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ba7fd8, size 0x98, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get__elementWidth() const;

  constexpr float_t& __cordl_internal_get__elementWidth();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& __cordl_internal_get__missionObjectiveCheckersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& __cordl_internal_get__missionObjectiveCheckersManager();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveGameUIView> const& __cordl_internal_get__missionObjectiveGameUIViewPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>& __cordl_internal_get__missionObjectiveGameUIViewPrefab();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>>* const& __cordl_internal_get__missionObjectiveGameUIViews() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>>*& __cordl_internal_get__missionObjectiveGameUIViews();

  constexpr float_t const& __cordl_internal_get__separator() const;

  constexpr float_t& __cordl_internal_get__separator();

  constexpr void __cordl_internal_set__elementWidth(float_t value);

  constexpr void __cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value);

  constexpr void __cordl_internal_set__missionObjectiveGameUIViewPrefab(::UnityW<::GlobalNamespace::MissionObjectiveGameUIView> value);

  constexpr void __cordl_internal_set__missionObjectiveGameUIViews(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>>* value);

  constexpr void __cordl_internal_set__separator(float_t value);

  /// @brief Method .ctor, addr 0x3ba84dc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectivesGameUIController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectivesGameUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectivesGameUIController(MissionObjectivesGameUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectivesGameUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectivesGameUIController(MissionObjectivesGameUIController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4412 };

  /// @brief Field _missionObjectiveGameUIViewPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveGameUIView> ____missionObjectiveGameUIViewPrefab;

  /// @brief Field _separator, offset: 0x28, size: 0x4, def value: None
  float_t ____separator;

  /// @brief Field _elementWidth, offset: 0x2c, size: 0x4, def value: None
  float_t ____elementWidth;

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> ____missionObjectiveCheckersManager;

  /// @brief Field _missionObjectiveGameUIViews, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MissionObjectiveGameUIView>>* ____missionObjectiveGameUIViews;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____missionObjectiveGameUIViewPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____separator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____elementWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____missionObjectiveCheckersManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____missionObjectiveGameUIViews) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectivesGameUIController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectivesGameUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectivesGameUIController*, "", "MissionObjectivesGameUIController");
