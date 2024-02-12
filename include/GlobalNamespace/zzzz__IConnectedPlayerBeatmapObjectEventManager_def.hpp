#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConnectedPlayerBeatmapObjectEventManager)
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager);
// Type: ::IConnectedPlayerBeatmapObjectEventManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12677))
// CS Name: ::IConnectedPlayerBeatmapObjectEventManager*
class CORDL_TYPE IConnectedPlayerBeatmapObjectEventManager {
public:
  // Declarations
  /// @brief Method add_connectedPlayerNoteWasSpawnedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerNoteWasSpawnedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerObstacleWasSpawnedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerObstacleWasSpawnedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerSliderWasSpawnedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerSliderWasSpawnedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerNoteWasCutEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerNoteWasCutEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method add_connectedPlayerNoteWasMissedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method remove_connectedPlayerNoteWasMissedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Pause();

  /// @brief Method Resume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Resume();

  // Ctor Parameters [CppParam { name: "", ty: "IConnectedPlayerBeatmapObjectEventManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConnectedPlayerBeatmapObjectEventManager(IConnectedPlayerBeatmapObjectEventManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConnectedPlayerBeatmapObjectEventManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConnectedPlayerBeatmapObjectEventManager(IConnectedPlayerBeatmapObjectEventManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*, "", "IConnectedPlayerBeatmapObjectEventManager");
