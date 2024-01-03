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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5706))
// CS Name: ::MissionSelectionNavigationController::<>c__DisplayClass11_0*
class CORDL_TYPE __MissionSelectionNavigationController____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MissionSelectionNavigationController* __4__this;

  /// @brief Field finishedCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_finishedCallback, put = __set_finishedCallback))::System::Action_1<bool>* finishedCallback;

  /// @brief Field <>9__1, offset 0x20, size 0x8
  __declspec(property(get = __get___9__1, put = __set___9__1))::System::Action* __9__1;

  constexpr ::GlobalNamespace::MissionSelectionNavigationController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionNavigationController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MissionSelectionNavigationController* value);

  constexpr ::System::Action_1<bool>*& __get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_finishedCallback() const;

  constexpr void __set_finishedCallback(::System::Action_1<bool>* value);

  constexpr ::System::Action*& __get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get___9__1() const;

  constexpr void __set___9__1(::System::Action* value);

  static inline ::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0* New_ctor();

  /// @brief Method .ctor, addr 0x22cc25c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <PresentMissionClearedIfNeeded>b__0, addr 0x22cc26c, size 0xbc, virtual false, abstract: false, final false
  inline void _PresentMissionClearedIfNeeded_b__0();

  /// @brief Method <PresentMissionClearedIfNeeded>b__1, addr 0x22cc328, size 0x20, virtual false, abstract: false, final false
  inline void _PresentMissionClearedIfNeeded_b__1();

  // Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionNavigationController____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionSelectionNavigationController____c__DisplayClass11_0(__MissionSelectionNavigationController____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionNavigationController____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionSelectionNavigationController____c__DisplayClass11_0(__MissionSelectionNavigationController____c__DisplayClass11_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionSelectionNavigationController____c__DisplayClass11_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MissionSelectionNavigationController* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13588))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5707))
// CS Name: ::MissionSelectionNavigationController*
class CORDL_TYPE MissionSelectionNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::GlobalNamespace::__MissionSelectionNavigationController____c__DisplayClass11_0;

  /// @brief Field _missionSelectionMapViewController, offset 0x98, size 0x8
  __declspec(property(get = __get__missionSelectionMapViewController,
                      put = __set__missionSelectionMapViewController))::GlobalNamespace::MissionSelectionMapViewController* _missionSelectionMapViewController;

  /// @brief Field _missionLevelDetailViewController, offset 0xa0, size 0x8
  __declspec(property(get = __get__missionLevelDetailViewController,
                      put = __set__missionLevelDetailViewController))::GlobalNamespace::MissionLevelDetailViewController* _missionLevelDetailViewController;

  /// @brief Field didPressPlayButtonEvent, offset 0xa8, size 0x8
  __declspec(property(get = __get_didPressPlayButtonEvent, put = __set_didPressPlayButtonEvent))::System::Action_1<::GlobalNamespace::MissionSelectionNavigationController*>* didPressPlayButtonEvent;

  __declspec(property(get = get_selectedMissionNode))::GlobalNamespace::MissionNode* selectedMissionNode;

  constexpr ::GlobalNamespace::MissionSelectionMapViewController*& __get__missionSelectionMapViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionMapViewController*> const& __get__missionSelectionMapViewController() const;

  constexpr void __set__missionSelectionMapViewController(::GlobalNamespace::MissionSelectionMapViewController* value);

  constexpr ::GlobalNamespace::MissionLevelDetailViewController*& __get__missionLevelDetailViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelDetailViewController*> const& __get__missionLevelDetailViewController() const;

  constexpr void __set__missionLevelDetailViewController(::GlobalNamespace::MissionLevelDetailViewController* value);

  constexpr ::System::Action_1<::GlobalNamespace::MissionSelectionNavigationController*>*& __get_didPressPlayButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionSelectionNavigationController*>*> const& __get_didPressPlayButtonEvent() const;

  constexpr void __set_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionSelectionNavigationController*>* value);

  /// @brief Method add_didPressPlayButtonEvent, addr 0x22cbcbc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionSelectionNavigationController*>* value);

  /// @brief Method remove_didPressPlayButtonEvent, addr 0x22cbd6c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionSelectionNavigationController*>* value);

  /// @brief Method get_selectedMissionNode, addr 0x22cbe1c, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionNode* get_selectedMissionNode();

  /// @brief Method DidActivate, addr 0x22cbe38, size 0x174, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22cbfac, size 0x104, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleMissionSelectionMapViewControllerDidSelectMissionLevel, addr 0x22cc0b0, size 0x74, virtual false, abstract: false, final false
  inline void HandleMissionSelectionMapViewControllerDidSelectMissionLevel(::GlobalNamespace::MissionSelectionMapViewController* viewController, ::GlobalNamespace::MissionNode* _missionNode);

  /// @brief Method HandleMissionLevelDetailViewControllerDidPressPlayButton, addr 0x22cc124, size 0x20, virtual false, abstract: false, final false
  inline void HandleMissionLevelDetailViewControllerDidPressPlayButton(::GlobalNamespace::MissionLevelDetailViewController* viewController);

  /// @brief Method PresentMissionClearedIfNeeded, addr 0x22cc144, size 0x118, virtual false, abstract: false, final false
  inline void PresentMissionClearedIfNeeded(::System::Action_1<bool>* finishedCallback);

  static inline ::GlobalNamespace::MissionSelectionNavigationController* New_ctor();

  /// @brief Method .ctor, addr 0x22cc264, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionSelectionNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionSelectionNavigationController(MissionSelectionNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionSelectionNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionSelectionNavigationController(MissionSelectionNavigationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionSelectionNavigationController();

public:
  /// @brief Field _missionSelectionMapViewController, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MissionSelectionMapViewController* ____missionSelectionMapViewController;

  /// @brief Field _missionLevelDetailViewController, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelDetailViewController* ____missionLevelDetailViewController;

  /// @brief Field didPressPlayButtonEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MissionSelectionNavigationController*>* ___didPressPlayButtonEvent;

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
