#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MissionSelectionNavigationController)
namespace GlobalNamespace {
class MissionLevelDetailViewController;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionSelectionMapViewController;
}
namespace GlobalNamespace {
class __MissionSelectionNavigationController____c__DisplayClass11_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionSelectionNavigationController;
}
namespace GlobalNamespace {
class __MissionSelectionNavigationController____c__DisplayClass11_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionSelectionNavigationController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0);
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionSelectionNavigationController::<>c__DisplayClass11_0*
class CORDL_TYPE __MissionSelectionNavigationController____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionSelectionNavigationController> __4__this;

  /// @brief Field <>9__1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::System::Action* __9__1;

  /// @brief Field finishedCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback))::System::Action_1<bool>* finishedCallback;

  static inline ::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0* New_ctor();

  /// @brief Method <PresentMissionClearedIfNeeded>b__0, addr 0x242f1c8, size 0xbc, virtual false, abstract: false, final false
  inline void _PresentMissionClearedIfNeeded_b__0();

  /// @brief Method <PresentMissionClearedIfNeeded>b__1, addr 0x242f284, size 0x20, virtual false, abstract: false, final false
  inline void _PresentMissionClearedIfNeeded_b__1();

  constexpr ::UnityW<::GlobalNamespace::MissionSelectionNavigationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionSelectionNavigationController>& __cordl_internal_get___4__this();

  constexpr ::System::Action*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get___9__1() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_finishedCallback() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionSelectionNavigationController> value);

  constexpr void __cordl_internal_set___9__1(::System::Action* value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x242f1b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionSelectionNavigationController____c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionNavigationController____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionSelectionNavigationController____c__DisplayClass11_0(__MissionSelectionNavigationController____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionNavigationController____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionSelectionNavigationController____c__DisplayClass11_0(__MissionSelectionNavigationController____c__DisplayClass11_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionSelectionNavigationController> _____4__this;

  /// @brief Field finishedCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<bool>* ___finishedCallback;

  /// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
  ::System::Action* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0, ___finishedCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0, _____9__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionSelectionNavigationController
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionSelectionNavigationController*
class CORDL_TYPE MissionSelectionNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0;

  /// @brief Field _missionLevelDetailViewController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelDetailViewController,
                      put = __cordl_internal_set__missionLevelDetailViewController))::UnityW<::GlobalNamespace::MissionLevelDetailViewController> _missionLevelDetailViewController;

  /// @brief Field _missionSelectionMapViewController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__missionSelectionMapViewController,
                      put = __cordl_internal_set__missionSelectionMapViewController))::UnityW<::GlobalNamespace::MissionSelectionMapViewController> _missionSelectionMapViewController;

  /// @brief Field didPressPlayButtonEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressPlayButtonEvent,
                      put = __cordl_internal_set_didPressPlayButtonEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionSelectionNavigationController>>* didPressPlayButtonEvent;

  __declspec(property(get = get_selectedMissionNode))::UnityW<::GlobalNamespace::MissionNode> selectedMissionNode;

  /// @brief Method DidActivate, addr 0x242ed94, size 0x174, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x242ef08, size 0x104, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleMissionLevelDetailViewControllerDidPressPlayButton, addr 0x242f080, size 0x20, virtual false, abstract: false, final false
  inline void HandleMissionLevelDetailViewControllerDidPressPlayButton(::GlobalNamespace::MissionLevelDetailViewController* viewController);

  /// @brief Method HandleMissionSelectionMapViewControllerDidSelectMissionLevel, addr 0x242f00c, size 0x74, virtual false, abstract: false, final false
  inline void HandleMissionSelectionMapViewControllerDidSelectMissionLevel(::GlobalNamespace::MissionSelectionMapViewController* viewController, ::GlobalNamespace::MissionNode* _missionNode);

  static inline ::GlobalNamespace::MissionSelectionNavigationController* New_ctor();

  /// @brief Method PresentMissionClearedIfNeeded, addr 0x242f0a0, size 0x118, virtual false, abstract: false, final false
  inline void PresentMissionClearedIfNeeded(::System::Action_1<bool>* finishedCallback);

  constexpr ::UnityW<::GlobalNamespace::MissionLevelDetailViewController> const& __cordl_internal_get__missionLevelDetailViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelDetailViewController>& __cordl_internal_get__missionLevelDetailViewController();

  constexpr ::UnityW<::GlobalNamespace::MissionSelectionMapViewController> const& __cordl_internal_get__missionSelectionMapViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionSelectionMapViewController>& __cordl_internal_get__missionSelectionMapViewController();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionSelectionNavigationController>>*& __cordl_internal_get_didPressPlayButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionSelectionNavigationController>>*> const& __cordl_internal_get_didPressPlayButtonEvent() const;

  constexpr void __cordl_internal_set__missionLevelDetailViewController(::UnityW<::GlobalNamespace::MissionLevelDetailViewController> value);

  constexpr void __cordl_internal_set__missionSelectionMapViewController(::UnityW<::GlobalNamespace::MissionSelectionMapViewController> value);

  constexpr void __cordl_internal_set_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionSelectionNavigationController>>* value);

  /// @brief Method .ctor, addr 0x242f1c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressPlayButtonEvent, addr 0x242ec18, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionSelectionNavigationController>>* value);

  /// @brief Method get_selectedMissionNode, addr 0x242ed78, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNode> get_selectedMissionNode();

  /// @brief Method remove_didPressPlayButtonEvent, addr 0x242ecc8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionSelectionNavigationController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionSelectionNavigationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionSelectionNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionSelectionNavigationController(MissionSelectionNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionSelectionNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionSelectionNavigationController(MissionSelectionNavigationController const&) = delete;

  /// @brief Field _missionSelectionMapViewController, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionSelectionMapViewController> ____missionSelectionMapViewController;

  /// @brief Field _missionLevelDetailViewController, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelDetailViewController> ____missionLevelDetailViewController;

  /// @brief Field didPressPlayButtonEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionSelectionNavigationController>>* ___didPressPlayButtonEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionSelectionNavigationController, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionNavigationController, ____missionSelectionMapViewController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionNavigationController, ____missionLevelDetailViewController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionSelectionNavigationController, ___didPressPlayButtonEvent) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionSelectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionSelectionNavigationController*, "", "MissionSelectionNavigationController");
NEED_NO_BOX(::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0*, "", "MissionSelectionNavigationController/<>c__DisplayClass11_0");
