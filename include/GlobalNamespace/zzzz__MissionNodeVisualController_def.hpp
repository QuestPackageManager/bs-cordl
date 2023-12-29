#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MissionNodeVisualController)
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionToggle;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5644))
// CS Name: ::MissionNodeVisualController*
class CORDL_TYPE MissionNodeVisualController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionToggle, offset 0x18, size 0x8
  __declspec(property(get = __get__missionToggle, put = __set__missionToggle))::GlobalNamespace::MissionToggle* _missionToggle;

  /// @brief Field _missionNode, offset 0x20, size 0x8
  __declspec(property(get = __get__missionNode, put = __set__missionNode))::GlobalNamespace::MissionNode* _missionNode;

  /// @brief Field nodeWasSelectEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_nodeWasSelectEvent, put = __set_nodeWasSelectEvent))::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* nodeWasSelectEvent;

  /// @brief Field nodeWasDisplayedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_nodeWasDisplayedEvent, put = __set_nodeWasDisplayedEvent))::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* nodeWasDisplayedEvent;

  /// @brief Field _selected, offset 0x38, size 0x1
  __declspec(property(get = __get__selected, put = __set__selected)) bool _selected;

  /// @brief Field _isInitialized, offset 0x39, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  /// @brief Field _cleared, offset 0x3a, size 0x1
  __declspec(property(get = __get__cleared, put = __set__cleared)) bool _cleared;

  /// @brief Field _interactable, offset 0x3b, size 0x1
  __declspec(property(get = __get__interactable, put = __set__interactable)) bool _interactable;

  __declspec(property(get = get_missionNode))::GlobalNamespace::MissionNode* missionNode;

  __declspec(property(get = get_selected)) bool selected;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_cleared)) bool cleared;

  __declspec(property(get = get_interactable)) bool interactable;

  constexpr ::GlobalNamespace::MissionToggle*& __get__missionToggle();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionToggle*> const& __get__missionToggle() const;

  constexpr void __set__missionToggle(::GlobalNamespace::MissionToggle* value);

  constexpr ::GlobalNamespace::MissionNode*& __get__missionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& __get__missionNode() const;

  constexpr void __set__missionNode(::GlobalNamespace::MissionNode* value);

  constexpr ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*& __get_nodeWasSelectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*> const& __get_nodeWasSelectEvent() const;

  constexpr void __set_nodeWasSelectEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*& __get_nodeWasDisplayedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>*> const& __get_nodeWasDisplayedEvent() const;

  constexpr void __set_nodeWasDisplayedEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  constexpr bool& __get__selected();

  constexpr bool const& __get__selected() const;

  constexpr void __set__selected(bool value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  constexpr bool& __get__cleared();

  constexpr bool const& __get__cleared() const;

  constexpr void __set__cleared(bool value);

  constexpr bool& __get__interactable();

  constexpr bool const& __get__interactable() const;

  constexpr void __set__interactable(bool value);

  /// @brief Method add_nodeWasSelectEvent addr 0x215bc54 size 0xb0 virtual false final false
  inline void add_nodeWasSelectEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  /// @brief Method remove_nodeWasSelectEvent addr 0x215bf24 size 0xb0 virtual false final false
  inline void remove_nodeWasSelectEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  /// @brief Method add_nodeWasDisplayedEvent addr 0x215bd04 size 0xb0 virtual false final false
  inline void add_nodeWasDisplayedEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  /// @brief Method remove_nodeWasDisplayedEvent addr 0x215bfd4 size 0xb0 virtual false final false
  inline void remove_nodeWasDisplayedEvent(::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* value);

  /// @brief Method get_missionNode addr 0x215ce04 size 0x8 virtual false final false
  inline ::GlobalNamespace::MissionNode* get_missionNode();

  /// @brief Method get_selected addr 0x215ce0c size 0x8 virtual false final false
  inline bool get_selected();

  /// @brief Method get_isInitialized addr 0x215ce14 size 0x8 virtual false final false
  inline bool get_isInitialized();

  /// @brief Method get_cleared addr 0x215ce1c size 0x8 virtual false final false
  inline bool get_cleared();

  /// @brief Method get_interactable addr 0x215ce24 size 0x8 virtual false final false
  inline bool get_interactable();

  /// @brief Method SetSelected addr 0x215baf0 size 0x2c virtual false final false
  inline void SetSelected(bool value);

  /// @brief Method OnEnable addr 0x215ce3c size 0x20 virtual false final false
  inline void OnEnable();

  /// @brief Method Awake addr 0x215ce5c size 0x9c virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x215cfb4 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method Reset addr 0x215cdc4 size 0x8 virtual false final false
  inline void Reset();

  /// @brief Method OnDestroy addr 0x215d014 size 0xcc virtual false final false
  inline void OnDestroy();

  /// @brief Method Init addr 0x215cfb8 size 0x5c virtual false final false
  inline void Init();

  /// @brief Method Setup addr 0x215cdd8 size 0x1c virtual false final false
  inline void Setup(bool cleared, bool interactable);

  /// @brief Method SetupToggle addr 0x215d1b4 size 0x2c virtual false final false
  inline void SetupToggle();

  /// @brief Method SetMissionCleared addr 0x215abb8 size 0xc virtual false final false
  inline void SetMissionCleared();

  /// @brief Method SetInteractable addr 0x215b4e8 size 0xc virtual false final false
  inline void SetInteractable();

  /// @brief Method ChangeNodeSelection addr 0x215d1e0 size 0x34 virtual false final false
  inline void ChangeNodeSelection(bool selected);

  /// @brief Method HandleMissionToggleSelectionDidChange addr 0x215d278 size 0x40 virtual false final false
  inline void HandleMissionToggleSelectionDidChange(::GlobalNamespace::MissionToggle* toggle);

  static inline ::GlobalNamespace::MissionNodeVisualController* New_ctor();

  /// @brief Method .ctor addr 0x215d2b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeVisualController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeVisualController(MissionNodeVisualController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeVisualController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeVisualController(MissionNodeVisualController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeVisualController();

public:
  /// @brief Field _missionToggle, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionToggle* ____missionToggle;

  /// @brief Field _missionNode, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionNode* ____missionNode;

  /// @brief Field nodeWasSelectEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* ___nodeWasSelectEvent;

  /// @brief Field nodeWasDisplayedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MissionNodeVisualController*>* ___nodeWasDisplayedEvent;

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
