#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeVisualController)
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionToggle;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeVisualController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeVisualController);
// Type: ::MissionNodeVisualController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionNodeVisualController*
class CORDL_TYPE MissionNodeVisualController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cleared, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__cleared, put = __cordl_internal_set__cleared)) bool _cleared;

  /// @brief Field _interactable, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get__interactable, put = __cordl_internal_set__interactable)) bool _interactable;

  /// @brief Field _isInitialized, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _missionNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNode, put = __cordl_internal_set__missionNode))::UnityW<::GlobalNamespace::MissionNode> _missionNode;

  /// @brief Field _missionToggle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionToggle, put = __cordl_internal_set__missionToggle))::UnityW<::GlobalNamespace::MissionToggle> _missionToggle;

  /// @brief Field _selected, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__selected, put = __cordl_internal_set__selected)) bool _selected;

  __declspec(property(get = get_cleared)) bool cleared;

  __declspec(property(get = get_interactable)) bool interactable;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_missionNode))::UnityW<::GlobalNamespace::MissionNode> missionNode;

  /// @brief Field nodeWasDisplayedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nodeWasDisplayedEvent,
                      put = __cordl_internal_set_nodeWasDisplayedEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* nodeWasDisplayedEvent;

  /// @brief Field nodeWasSelectEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nodeWasSelectEvent,
                      put = __cordl_internal_set_nodeWasSelectEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* nodeWasSelectEvent;

  __declspec(property(get = get_selected)) bool selected;

  /// @brief Method Awake, addr 0x2407628, size 0x9c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ChangeNodeSelection, addr 0x24079ac, size 0x34, virtual false, abstract: false, final false
  inline void ChangeNodeSelection(bool selected);

  /// @brief Method HandleMissionToggleSelectionDidChange, addr 0x2407a44, size 0x40, virtual false, abstract: false, final false
  inline void HandleMissionToggleSelectionDidChange(::GlobalNamespace::MissionToggle* toggle);

  /// @brief Method Init, addr 0x2407784, size 0x5c, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::MissionNodeVisualController* New_ctor();

  /// @brief Method OnDestroy, addr 0x24077e0, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x2407608, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Reset, addr 0x2407590, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetInteractable, addr 0x2405c78, size 0xc, virtual false, abstract: false, final false
  inline void SetInteractable();

  /// @brief Method SetMissionCleared, addr 0x2405348, size 0xc, virtual false, abstract: false, final false
  inline void SetMissionCleared();

  /// @brief Method SetSelected, addr 0x24062ac, size 0x2c, virtual false, abstract: false, final false
  inline void SetSelected(bool value);

  /// @brief Method Setup, addr 0x24075a4, size 0x1c, virtual false, abstract: false, final false
  inline void Setup(bool cleared, bool interactable);

  /// @brief Method SetupToggle, addr 0x2407980, size 0x2c, virtual false, abstract: false, final false
  inline void SetupToggle();

  /// @brief Method Start, addr 0x2407780, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__cleared() const;

  constexpr bool& __cordl_internal_get__cleared();

  constexpr bool const& __cordl_internal_get__interactable() const;

  constexpr bool& __cordl_internal_get__interactable();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get__missionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get__missionNode();

  constexpr ::UnityW<::GlobalNamespace::MissionToggle> const& __cordl_internal_get__missionToggle() const;

  constexpr ::UnityW<::GlobalNamespace::MissionToggle>& __cordl_internal_get__missionToggle();

  constexpr bool const& __cordl_internal_get__selected() const;

  constexpr bool& __cordl_internal_get__selected();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>*& __cordl_internal_get_nodeWasDisplayedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>*> const& __cordl_internal_get_nodeWasDisplayedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>*& __cordl_internal_get_nodeWasSelectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>*> const& __cordl_internal_get_nodeWasSelectEvent() const;

  constexpr void __cordl_internal_set__cleared(bool value);

  constexpr void __cordl_internal_set__interactable(bool value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__missionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  constexpr void __cordl_internal_set__missionToggle(::UnityW<::GlobalNamespace::MissionToggle> value);

  constexpr void __cordl_internal_set__selected(bool value);

  constexpr void __cordl_internal_set_nodeWasDisplayedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  constexpr void __cordl_internal_set_nodeWasSelectEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  /// @brief Method .ctor, addr 0x2407a84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_nodeWasDisplayedEvent, addr 0x24064c0, size 0xb0, virtual false, abstract: false, final false
  inline void add_nodeWasDisplayedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  /// @brief Method add_nodeWasSelectEvent, addr 0x2406410, size 0xb0, virtual false, abstract: false, final false
  inline void add_nodeWasSelectEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  /// @brief Method get_cleared, addr 0x24075e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_cleared();

  /// @brief Method get_interactable, addr 0x24075f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_isInitialized, addr 0x24075e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_missionNode, addr 0x24075d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNode> get_missionNode();

  /// @brief Method get_selected, addr 0x24075d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_selected();

  /// @brief Method remove_nodeWasDisplayedEvent, addr 0x2406790, size 0xb0, virtual false, abstract: false, final false
  inline void remove_nodeWasDisplayedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

  /// @brief Method remove_nodeWasSelectEvent, addr 0x24066e0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_nodeWasSelectEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeVisualController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeVisualController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeVisualController(MissionNodeVisualController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeVisualController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeVisualController(MissionNodeVisualController const&) = delete;

  /// @brief Field _missionToggle, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionToggle> ____missionToggle;

  /// @brief Field _missionNode, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ____missionNode;

  /// @brief Field nodeWasSelectEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* ___nodeWasSelectEvent;

  /// @brief Field nodeWasDisplayedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionNodeVisualController>>* ___nodeWasDisplayedEvent;

  /// @brief Field _selected, offset: 0x38, size: 0x1, def value: None
  bool ____selected;

  /// @brief Field _isInitialized, offset: 0x39, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _cleared, offset: 0x3a, size: 0x1, def value: None
  bool ____cleared;

  /// @brief Field _interactable, offset: 0x3b, size: 0x1, def value: None
  bool ____interactable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeVisualController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeVisualController, ____missionToggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeVisualController, ____missionNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeVisualController, ___nodeWasSelectEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeVisualController, ___nodeWasDisplayedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeVisualController, ____selected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeVisualController, ____isInitialized) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeVisualController, ____cleared) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeVisualController, ____interactable) == 0x3b, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeVisualController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeVisualController*, "", "MissionNodeVisualController");
