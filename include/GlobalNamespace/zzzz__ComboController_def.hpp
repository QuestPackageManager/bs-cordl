#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComboController)
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class IComboController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class ComboController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ComboController);
// Type: ::ComboController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5311))
// CS Name: ::ComboController*
class CORDL_TYPE ComboController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x18, size 0x8
  __declspec(property(get = __get__playerHeadAndObstacleInteraction,
                      put = __set__playerHeadAndObstacleInteraction))::GlobalNamespace::PlayerHeadAndObstacleInteraction* _playerHeadAndObstacleInteraction;

  /// @brief Field _beatmapObjectManager, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field comboDidChangeEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_comboDidChangeEvent, put = __set_comboDidChangeEvent))::System::Action_1<int32_t>* comboDidChangeEvent;

  /// @brief Field comboBreakingEventHappenedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_comboBreakingEventHappenedEvent, put = __set_comboBreakingEventHappenedEvent))::System::Action* comboBreakingEventHappenedEvent;

  /// @brief Field _combo, offset 0x38, size 0x4
  __declspec(property(get = __get__combo, put = __set__combo)) int32_t _combo;

  /// @brief Field _maxCombo, offset 0x3c, size 0x4
  __declspec(property(get = __get__maxCombo, put = __set__maxCombo)) int32_t _maxCombo;

  __declspec(property(get = get_maxCombo)) int32_t maxCombo;

  /// @brief Convert operator to "::GlobalNamespace::IComboController"
  constexpr operator ::GlobalNamespace::IComboController*() noexcept;

  constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& __get__playerHeadAndObstacleInteraction();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> const& __get__playerHeadAndObstacleInteraction() const;

  constexpr void __set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::System::Action_1<int32_t>*& __get_comboDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_comboDidChangeEvent() const;

  constexpr void __set_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  constexpr ::System::Action*& __get_comboBreakingEventHappenedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_comboBreakingEventHappenedEvent() const;

  constexpr void __set_comboBreakingEventHappenedEvent(::System::Action* value);

  constexpr int32_t& __get__combo();

  constexpr int32_t const& __get__combo() const;

  constexpr void __set__combo(int32_t value);

  constexpr int32_t& __get__maxCombo();

  constexpr int32_t const& __get__maxCombo() const;

  constexpr void __set__maxCombo(int32_t value);

  /// @brief Method get_maxCombo, addr 0x2264d58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxCombo();

  /// @brief Method add_comboDidChangeEvent, addr 0x2264d60, size 0xb0, virtual true, abstract: false, final true
  inline void add_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_comboDidChangeEvent, addr 0x2264e10, size 0xb0, virtual true, abstract: false, final true
  inline void remove_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_comboBreakingEventHappenedEvent, addr 0x2264ec0, size 0x9c, virtual true, abstract: false, final true
  inline void add_comboBreakingEventHappenedEvent(::System::Action* value);

  /// @brief Method remove_comboBreakingEventHappenedEvent, addr 0x2264f5c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_comboBreakingEventHappenedEvent(::System::Action* value);

  /// @brief Method Start, addr 0x2264ff8, size 0x150, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2265148, size 0x19c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandlePlayerHeadDidEnterObstacles, addr 0x22652e4, size 0x58, virtual false, abstract: false, final false
  inline void HandlePlayerHeadDidEnterObstacles();

  /// @brief Method HandleNoteWasCut, addr 0x226533c, size 0x9c, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x22653d8, size 0x84, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  static inline ::GlobalNamespace::ComboController* New_ctor();

  /// @brief Method .ctor, addr 0x226545c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ComboController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComboController(ComboController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComboController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComboController(ComboController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComboController();

public:
  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerHeadAndObstacleInteraction* ____playerHeadAndObstacleInteraction;

  /// @brief Field _beatmapObjectManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field comboDidChangeEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___comboDidChangeEvent;

  /// @brief Field comboBreakingEventHappenedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___comboBreakingEventHappenedEvent;

  /// @brief Field _combo, offset: 0x38, size: 0x4, def value: None
  int32_t ____combo;

  /// @brief Field _maxCombo, offset: 0x3c, size: 0x4, def value: None
  int32_t ____maxCombo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ComboController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboController, ____playerHeadAndObstacleInteraction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboController, ____beatmapObjectManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboController, ___comboDidChangeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboController, ___comboBreakingEventHappenedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboController, ____combo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboController, ____maxCombo) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ComboController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboController*, "", "ComboController");
