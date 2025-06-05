#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapSaveData)
namespace BeatmapSaveDataVersion4 {
class ArcBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct Arc;
}
namespace BeatmapSaveDataVersion4 {
class BeatIndex;
}
namespace BeatmapSaveDataVersion4 {
class BeatmapBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct BombNote;
}
namespace BeatmapSaveDataVersion4 {
class ChainBeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct Chain;
}
namespace BeatmapSaveDataVersion4 {
struct ColorNote;
}
namespace BeatmapSaveDataVersion4 {
struct NoteJumpMovementSpeedEvent;
}
namespace BeatmapSaveDataVersion4 {
struct Obstacle;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
class BeatmapSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion4::BeatmapSaveData);
// Dependencies System.Object
namespace BeatmapSaveDataVersion4 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion4.BeatmapSaveData
class CORDL_TYPE BeatmapSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field arcs, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_arcs, put = __cordl_internal_set_arcs)) ::ArrayW<::BeatmapSaveDataVersion4::ArcBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ArcBeatIndex*>*> arcs;

  /// @brief Field arcsData, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_arcsData, put = __cordl_internal_set_arcsData)) ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> arcsData;

  /// @brief Field bombNotes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bombNotes,
                      put = __cordl_internal_set_bombNotes)) ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>
      bombNotes;

  /// @brief Field bombNotesData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bombNotesData, put = __cordl_internal_set_bombNotesData)) ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>
      bombNotesData;

  /// @brief Field chains, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_chains, put = __cordl_internal_set_chains)) ::ArrayW<::BeatmapSaveDataVersion4::ChainBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ChainBeatIndex*>*>
      chains;

  /// @brief Field chainsData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_chainsData, put = __cordl_internal_set_chainsData)) ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> chainsData;

  /// @brief Field colorNotes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_colorNotes,
                      put = __cordl_internal_set_colorNotes)) ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>
      colorNotes;

  /// @brief Field colorNotesData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_colorNotesData,
                      put = __cordl_internal_set_colorNotesData)) ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>
      colorNotesData;

  /// @brief Field njsEventData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_njsEventData,
                      put = __cordl_internal_set_njsEventData)) ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*>
      njsEventData;

  /// @brief Field njsEvents, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_njsEvents, put = __cordl_internal_set_njsEvents)) ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>
      njsEvents;

  /// @brief Field obstacles, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacles,
                      put = __cordl_internal_set_obstacles)) ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>
      obstacles;

  /// @brief Field obstaclesData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_obstaclesData, put = __cordl_internal_set_obstaclesData)) ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>
      obstaclesData;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  static inline ::BeatmapSaveDataVersion4::BeatmapSaveData* New_ctor();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ArcBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ArcBeatIndex*>*> const& __cordl_internal_get_arcs() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ArcBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ArcBeatIndex*>*>& __cordl_internal_get_arcs();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> const& __cordl_internal_get_arcsData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*>& __cordl_internal_get_arcsData();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> const& __cordl_internal_get_bombNotes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>& __cordl_internal_get_bombNotes();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> const& __cordl_internal_get_bombNotesData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*>& __cordl_internal_get_bombNotesData();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ChainBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ChainBeatIndex*>*> const& __cordl_internal_get_chains() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ChainBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ChainBeatIndex*>*>& __cordl_internal_get_chains();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> const& __cordl_internal_get_chainsData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*>& __cordl_internal_get_chainsData();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> const& __cordl_internal_get_colorNotes() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>& __cordl_internal_get_colorNotes();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> const& __cordl_internal_get_colorNotesData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*>& __cordl_internal_get_colorNotesData();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> const& __cordl_internal_get_njsEventData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*>& __cordl_internal_get_njsEventData();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> const& __cordl_internal_get_njsEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>& __cordl_internal_get_njsEvents();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> const& __cordl_internal_get_obstacles() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*>& __cordl_internal_get_obstacles();

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> const& __cordl_internal_get_obstaclesData() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*>& __cordl_internal_get_obstaclesData();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_arcs(::ArrayW<::BeatmapSaveDataVersion4::ArcBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ArcBeatIndex*>*> value);

  constexpr void __cordl_internal_set_arcsData(::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> value);

  constexpr void __cordl_internal_set_bombNotes(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> value);

  constexpr void __cordl_internal_set_bombNotesData(::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> value);

  constexpr void __cordl_internal_set_chains(::ArrayW<::BeatmapSaveDataVersion4::ChainBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ChainBeatIndex*>*> value);

  constexpr void __cordl_internal_set_chainsData(::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> value);

  constexpr void __cordl_internal_set_colorNotes(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> value);

  constexpr void __cordl_internal_set_colorNotesData(::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> value);

  constexpr void __cordl_internal_set_njsEventData(::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> value);

  constexpr void __cordl_internal_set_njsEvents(::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> value);

  constexpr void __cordl_internal_set_obstacles(::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> value);

  constexpr void __cordl_internal_set_obstaclesData(::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x270885c, size 0x510, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapSaveData(BeatmapSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapSaveData(BeatmapSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13370 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"4.1.0" };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field colorNotes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> ___colorNotes;

  /// @brief Field bombNotes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> ___bombNotes;

  /// @brief Field obstacles, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BeatmapBeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatmapBeatIndex*>*> ___obstacles;

  /// @brief Field chains, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ChainBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ChainBeatIndex*>*> ___chains;

  /// @brief Field arcs, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ArcBeatIndex*, ::Array<::BeatmapSaveDataVersion4::ArcBeatIndex*>*> ___arcs;

  /// @brief Field colorNotesData, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ColorNote, ::Array<::BeatmapSaveDataVersion4::ColorNote>*> ___colorNotesData;

  /// @brief Field bombNotesData, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BombNote, ::Array<::BeatmapSaveDataVersion4::BombNote>*> ___bombNotesData;

  /// @brief Field obstaclesData, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::Obstacle, ::Array<::BeatmapSaveDataVersion4::Obstacle>*> ___obstaclesData;

  /// @brief Field chainsData, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::Chain, ::Array<::BeatmapSaveDataVersion4::Chain>*> ___chainsData;

  /// @brief Field arcsData, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::Arc, ::Array<::BeatmapSaveDataVersion4::Arc>*> ___arcsData;

  /// @brief Field njsEvents, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> ___njsEvents;

  /// @brief Field njsEventData, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent, ::Array<::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent>*> ___njsEventData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___colorNotes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___bombNotes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___obstacles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___chains) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___arcs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___colorNotesData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___bombNotesData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___obstaclesData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___chainsData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___arcsData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___njsEvents) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BeatmapSaveData, ___njsEventData) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::BeatmapSaveData, 0x78>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
NEED_NO_BOX(::BeatmapSaveDataVersion4::BeatmapSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::BeatmapSaveData*, "BeatmapSaveDataVersion4", "BeatmapSaveData");
