#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialSongController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialSongController)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class __TutorialSongController__InitData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBasicNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBombNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialJumpingNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObjectSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObstacleSpawnData;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialSongController;
}
namespace GlobalNamespace {
class __TutorialSongController__InitData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBasicNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBombNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialJumpingNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObjectSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObstacleSpawnData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialSongController::InitData*
class CORDL_TYPE __TutorialSongController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapData, put = __cordl_internal_set_beatmapData)) ::GlobalNamespace::BeatmapData* beatmapData;

  /// @brief Field songBpm, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_songBpm, put = __cordl_internal_set_songBpm)) float_t songBpm;

  static inline ::GlobalNamespace::__TutorialSongController__InitData* New_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData);

  constexpr ::GlobalNamespace::BeatmapData*& __cordl_internal_get_beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& __cordl_internal_get_beatmapData() const;

  constexpr float_t const& __cordl_internal_get_songBpm() const;

  constexpr float_t& __cordl_internal_get_songBpm();

  constexpr void __cordl_internal_set_beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr void __cordl_internal_set_songBpm(float_t value);

  /// @brief Method .ctor, addr 0x3b779f0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__InitData(__TutorialSongController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__InitData(__TutorialSongController__InitData const&) = delete;

  /// @brief Field songBpm, offset: 0x10, size: 0x4, def value: None
  float_t ___songBpm;

  /// @brief Field beatmapData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ___beatmapData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__InitData, ___songBpm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__InitData, ___beatmapData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialObjectSpawnData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialSongController::TutorialObjectSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialObjectSpawnData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_beatOffset, put = __cordl_internal_set_beatOffset)) int32_t beatOffset;

  /// @brief Field firstTimeBeatOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_firstTimeBeatOffset, put = __cordl_internal_set_firstTimeBeatOffset)) int32_t firstTimeBeatOffset;

  /// @brief Field lineIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lineIndex, put = __cordl_internal_set_lineIndex)) int32_t lineIndex;

  /// @brief Field signal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_signal, put = __cordl_internal_set_signal)) ::UnityW<::GlobalNamespace::Signal> signal;

  static inline ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex);

  constexpr int32_t const& __cordl_internal_get_beatOffset() const;

  constexpr int32_t& __cordl_internal_get_beatOffset();

  constexpr int32_t const& __cordl_internal_get_firstTimeBeatOffset() const;

  constexpr int32_t& __cordl_internal_get_firstTimeBeatOffset();

  constexpr int32_t const& __cordl_internal_get_lineIndex() const;

  constexpr int32_t& __cordl_internal_get_lineIndex();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get_signal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get_signal();

  constexpr void __cordl_internal_set_beatOffset(int32_t value);

  constexpr void __cordl_internal_set_firstTimeBeatOffset(int32_t value);

  constexpr void __cordl_internal_set_lineIndex(int32_t value);

  constexpr void __cordl_internal_set_signal(::UnityW<::GlobalNamespace::Signal> value);

  /// @brief Method .ctor, addr 0x3b77a28, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialObjectSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObjectSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialObjectSpawnData(__TutorialSongController__TutorialObjectSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObjectSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialObjectSpawnData(__TutorialSongController__TutorialObjectSpawnData const&) = delete;

  /// @brief Field signal, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ___signal;

  /// @brief Field beatOffset, offset: 0x18, size: 0x4, def value: None
  int32_t ___beatOffset;

  /// @brief Field firstTimeBeatOffset, offset: 0x1c, size: 0x4, def value: None
  int32_t ___firstTimeBeatOffset;

  /// @brief Field lineIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___lineIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4688 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData, ___signal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData, ___beatOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData, ___firstTimeBeatOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData, ___lineIndex) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialJumpingNoteSpawnData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialSongController::TutorialJumpingNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialJumpingNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData {
public:
  // Declarations
  /// @brief Field noteLineLayer, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLineLayer, put = __cordl_internal_set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer noteLineLayer;

  static inline ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset,
                                                                                                    int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_noteLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_noteLineLayer();

  constexpr void __cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  /// @brief Method .ctor, addr 0x3b77a6c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialJumpingNoteSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialJumpingNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialJumpingNoteSpawnData(__TutorialSongController__TutorialJumpingNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialJumpingNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialJumpingNoteSpawnData(__TutorialSongController__TutorialJumpingNoteSpawnData const&) = delete;

  /// @brief Field noteLineLayer, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___noteLineLayer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData, ___noteLineLayer) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialBasicNoteSpawnData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialSongController::TutorialBasicNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialBasicNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData {
public:
  // Declarations
  /// @brief Field colorType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType)) ::GlobalNamespace::ColorType colorType;

  /// @brief Field cutDirection, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_cutDirection, put = __cordl_internal_set_cutDirection)) ::GlobalNamespace::NoteCutDirection cutDirection;

  static inline ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                                  ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                                                  ::GlobalNamespace::ColorType colorType);

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get_colorType();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get_cutDirection() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get_cutDirection();

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  /// @brief Method .ctor, addr 0x3b76fec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                    ::GlobalNamespace::NoteCutDirection cutDirection, ::GlobalNamespace::ColorType colorType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialBasicNoteSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBasicNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialBasicNoteSpawnData(__TutorialSongController__TutorialBasicNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBasicNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialBasicNoteSpawnData(__TutorialSongController__TutorialBasicNoteSpawnData const&) = delete;

  /// @brief Field cutDirection, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___cutDirection;

  /// @brief Field colorType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData, ___cutDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData, ___colorType) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialBombNoteSpawnData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialSongController::TutorialBombNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialBombNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData {
public:
  // Declarations
  static inline ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                                 ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method .ctor, addr 0x3b77050, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialBombNoteSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBombNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialBombNoteSpawnData(__TutorialSongController__TutorialBombNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBombNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialBombNoteSpawnData(__TutorialSongController__TutorialBombNoteSpawnData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4691 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialObstacleSpawnData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialSongController::TutorialObstacleSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialObstacleSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData {
public:
  // Declarations
  /// @brief Field height, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) int32_t height;

  /// @brief Field noteLineLayer, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLineLayer, put = __cordl_internal_set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer noteLineLayer;

  /// @brief Field width, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) int32_t width;

  static inline ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                                 int32_t width, int32_t height, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  constexpr int32_t const& __cordl_internal_get_height() const;

  constexpr int32_t& __cordl_internal_get_height();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_noteLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_noteLineLayer();

  constexpr int32_t const& __cordl_internal_get_width() const;

  constexpr int32_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_height(int32_t value);

  constexpr void __cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_width(int32_t value);

  /// @brief Method .ctor, addr 0x3b770a0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width, int32_t height,
                    ::GlobalNamespace::NoteLineLayer noteLineLayer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialObstacleSpawnData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObstacleSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialObstacleSpawnData(__TutorialSongController__TutorialObstacleSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObstacleSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialObstacleSpawnData(__TutorialSongController__TutorialObstacleSpawnData const&) = delete;

  /// @brief Field noteLineLayer, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___noteLineLayer;

  /// @brief Field width, offset: 0x28, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x2c, size: 0x4, def value: None
  int32_t ___height;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4692 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, ___noteLineLayer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, ___width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, ___height) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialSongController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialSongController*
class CORDL_TYPE TutorialSongController : public ::GlobalNamespace::SongController {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__TutorialSongController__InitData;

  using TutorialBasicNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData;

  using TutorialBombNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData;

  using TutorialJumpingNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData;

  using TutorialObjectSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData;

  using TutorialObstacleSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData;

  /// @brief Field _audioTimeSyncController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _beatmapData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData)) ::GlobalNamespace::BeatmapData* _beatmapData;

  /// @brief Field _beatmapObjectManager, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _bombCuttingTutorialPartDidStartSignal, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bombCuttingTutorialPartDidStartSignal, put = __cordl_internal_set__bombCuttingTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _bombCuttingTutorialPartDidStartSignal;

  /// @brief Field _bombWasCutSignal, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__bombWasCutSignal, put = __cordl_internal_set__bombWasCutSignal)) ::UnityW<::GlobalNamespace::Signal> _bombWasCutSignal;

  /// @brief Field _initData, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__TutorialSongController__InitData* _initData;

  /// @brief Field _leftObstacleTutorialPartDidStartSignal, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__leftObstacleTutorialPartDidStartSignal, put = __cordl_internal_set__leftObstacleTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _leftObstacleTutorialPartDidStartSignal;

  /// @brief Field _normalModeTutorialObjectsSpawnData, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__normalModeTutorialObjectsSpawnData,
                      put = __cordl_internal_set__normalModeTutorialObjectsSpawnData)) ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*,
                                                                                                ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>
      _normalModeTutorialObjectsSpawnData;

  /// @brief Field _noteCuttingInAnyDirectionDidStartSignal, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCuttingInAnyDirectionDidStartSignal, put = __cordl_internal_set__noteCuttingInAnyDirectionDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteCuttingInAnyDirectionDidStartSignal;

  /// @brief Field _noteCuttingTutorialPartDidStartSignal, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCuttingTutorialPartDidStartSignal, put = __cordl_internal_set__noteCuttingTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteCuttingTutorialPartDidStartSignal;

  /// @brief Field _noteWasCutFromDifferentDirectionSignal, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutFromDifferentDirectionSignal, put = __cordl_internal_set__noteWasCutFromDifferentDirectionSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteWasCutFromDifferentDirectionSignal;

  /// @brief Field _noteWasCutOKSignal, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutOKSignal, put = __cordl_internal_set__noteWasCutOKSignal)) ::UnityW<::GlobalNamespace::Signal> _noteWasCutOKSignal;

  /// @brief Field _noteWasCutTooSoonSignal, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutTooSoonSignal, put = __cordl_internal_set__noteWasCutTooSoonSignal)) ::UnityW<::GlobalNamespace::Signal> _noteWasCutTooSoonSignal;

  /// @brief Field _noteWasCutWithSlowSpeedSignal, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutWithSlowSpeedSignal, put = __cordl_internal_set__noteWasCutWithSlowSpeedSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteWasCutWithSlowSpeedSignal;

  /// @brief Field _noteWasCutWithWrongColorSignal, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutWithWrongColorSignal, put = __cordl_internal_set__noteWasCutWithWrongColorSignal)) ::UnityW<::GlobalNamespace::Signal>
      _noteWasCutWithWrongColorSignal;

  /// @brief Field _numberOfBeatsToSnap, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfBeatsToSnap, put = __cordl_internal_set__numberOfBeatsToSnap)) int32_t _numberOfBeatsToSnap;

  /// @brief Field _obstacleDurationInBeats, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleDurationInBeats, put = __cordl_internal_set__obstacleDurationInBeats)) int32_t _obstacleDurationInBeats;

  /// @brief Field _prevSpawnedBeatmapObjectIndex, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__prevSpawnedBeatmapObjectIndex, put = __cordl_internal_set__prevSpawnedBeatmapObjectIndex)) int32_t _prevSpawnedBeatmapObjectIndex;

  /// @brief Field _rightObstacleTutorialPartDidStartSignal, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__rightObstacleTutorialPartDidStartSignal, put = __cordl_internal_set__rightObstacleTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _rightObstacleTutorialPartDidStartSignal;

  /// @brief Field _songBpm, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__songBpm, put = __cordl_internal_set__songBpm)) float_t _songBpm;

  /// @brief Field _startWaitTimeInBeats, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startWaitTimeInBeats, put = __cordl_internal_set__startWaitTimeInBeats)) int32_t _startWaitTimeInBeats;

  /// @brief Field _topObstacleTutorialPartDidStartSignal, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__topObstacleTutorialPartDidStartSignal, put = __cordl_internal_set__topObstacleTutorialPartDidStartSignal)) ::UnityW<::GlobalNamespace::Signal>
      _topObstacleTutorialPartDidStartSignal;

  /// @brief Field _tutorialBeatmapObjectIndex, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__tutorialBeatmapObjectIndex, put = __cordl_internal_set__tutorialBeatmapObjectIndex)) int32_t _tutorialBeatmapObjectIndex;

  /// @brief Method Awake, addr 0x3b76b08, size 0x4e4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateBasicNoteData, addr 0x3b778a4, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData* CreateBasicNoteData(float_t time, int32_t beat, ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData* tutorialBasicNoteSpawnData);

  /// @brief Method CreateBombNoteData, addr 0x3b778d0, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteData* CreateBombNoteData(float_t time, int32_t beat, ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData* tutorialBombNoteSpawnData);

  /// @brief Method CreateObstacleData, addr 0x3b778f4, size 0xdc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleData* CreateObstacleData(float_t time, int32_t beat, ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData* tutorialObstacleSpawnData);

  /// @brief Method GetNextBeatmapObjectBeat, addr 0x3b7780c, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetNextBeatmapObjectBeat(int32_t beatOffset);

  /// @brief Method GetTimeFromBeat, addr 0x3b7787c, size 0x28, virtual false, abstract: false, final false
  inline float_t GetTimeFromBeat(int32_t beatNumber);

  /// @brief Method HandleNoteWasCut, addr 0x3b77690, size 0xf0, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x3b77780, size 0x74, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleObstacleDidPassThreeQuartersOfMove2, addr 0x3b777f4, size 0x18, virtual false, abstract: false, final false
  inline void HandleObstacleDidPassThreeQuartersOfMove2(::GlobalNamespace::ObstacleController* obstacleController);

  static inline ::GlobalNamespace::TutorialSongController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b77264, size 0x148, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PauseSong, addr 0x3b7764c, size 0x28, virtual true, abstract: false, final false
  inline void PauseSong();

  /// @brief Method ResumeSong, addr 0x3b77674, size 0x1c, virtual true, abstract: false, final false
  inline void ResumeSong();

  /// @brief Method Start, addr 0x3b77104, size 0x160, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartSong, addr 0x3b75fc8, size 0x80, virtual false, abstract: false, final false
  inline void StartSong(float_t startTimeOffset);

  /// @brief Method StopSong, addr 0x3b77624, size 0x28, virtual true, abstract: false, final false
  inline void StopSong();

  /// @brief Method UpdateBeatmapData, addr 0x3b773ac, size 0x278, virtual false, abstract: false, final false
  inline void UpdateBeatmapData(float_t noteTime, int32_t noteBeat);

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::BeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__bombCuttingTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__bombCuttingTutorialPartDidStartSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__bombWasCutSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__bombWasCutSignal();

  constexpr ::GlobalNamespace::__TutorialSongController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TutorialSongController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__leftObstacleTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__leftObstacleTutorialPartDidStartSignal();

  constexpr ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*> const&
  __cordl_internal_get__normalModeTutorialObjectsSpawnData() const;

  constexpr ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>&
  __cordl_internal_get__normalModeTutorialObjectsSpawnData();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteCuttingInAnyDirectionDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteCuttingInAnyDirectionDidStartSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteCuttingTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteCuttingTutorialPartDidStartSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutFromDifferentDirectionSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutFromDifferentDirectionSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutOKSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutOKSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutTooSoonSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutTooSoonSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutWithSlowSpeedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutWithSlowSpeedSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__noteWasCutWithWrongColorSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__noteWasCutWithWrongColorSignal();

  constexpr int32_t const& __cordl_internal_get__numberOfBeatsToSnap() const;

  constexpr int32_t& __cordl_internal_get__numberOfBeatsToSnap();

  constexpr int32_t const& __cordl_internal_get__obstacleDurationInBeats() const;

  constexpr int32_t& __cordl_internal_get__obstacleDurationInBeats();

  constexpr int32_t const& __cordl_internal_get__prevSpawnedBeatmapObjectIndex() const;

  constexpr int32_t& __cordl_internal_get__prevSpawnedBeatmapObjectIndex();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__rightObstacleTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__rightObstacleTutorialPartDidStartSignal();

  constexpr float_t const& __cordl_internal_get__songBpm() const;

  constexpr float_t& __cordl_internal_get__songBpm();

  constexpr int32_t const& __cordl_internal_get__startWaitTimeInBeats() const;

  constexpr int32_t& __cordl_internal_get__startWaitTimeInBeats();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__topObstacleTutorialPartDidStartSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__topObstacleTutorialPartDidStartSignal();

  constexpr int32_t const& __cordl_internal_get__tutorialBeatmapObjectIndex() const;

  constexpr int32_t& __cordl_internal_get__tutorialBeatmapObjectIndex();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__bombCuttingTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__bombWasCutSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__TutorialSongController__InitData* value);

  constexpr void __cordl_internal_set__leftObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__normalModeTutorialObjectsSpawnData(
      ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*> value);

  constexpr void __cordl_internal_set__noteCuttingInAnyDirectionDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteCuttingTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutFromDifferentDirectionSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutOKSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutTooSoonSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutWithSlowSpeedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__noteWasCutWithWrongColorSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__numberOfBeatsToSnap(int32_t value);

  constexpr void __cordl_internal_set__obstacleDurationInBeats(int32_t value);

  constexpr void __cordl_internal_set__prevSpawnedBeatmapObjectIndex(int32_t value);

  constexpr void __cordl_internal_set__rightObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__songBpm(float_t value);

  constexpr void __cordl_internal_set__startWaitTimeInBeats(int32_t value);

  constexpr void __cordl_internal_set__topObstacleTutorialPartDidStartSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__tutorialBeatmapObjectIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3b779d0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController(TutorialSongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController(TutorialSongController const&) = delete;

  /// @brief Field _audioTimeSyncController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _startWaitTimeInBeats, offset: 0x38, size: 0x4, def value: None
  int32_t ____startWaitTimeInBeats;

  /// @brief Field _numberOfBeatsToSnap, offset: 0x3c, size: 0x4, def value: None
  int32_t ____numberOfBeatsToSnap;

  /// @brief Field _obstacleDurationInBeats, offset: 0x40, size: 0x4, def value: None
  int32_t ____obstacleDurationInBeats;

  /// @brief Field _noteCuttingTutorialPartDidStartSignal, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteCuttingTutorialPartDidStartSignal;

  /// @brief Field _noteCuttingInAnyDirectionDidStartSignal, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteCuttingInAnyDirectionDidStartSignal;

  /// @brief Field _bombCuttingTutorialPartDidStartSignal, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____bombCuttingTutorialPartDidStartSignal;

  /// @brief Field _leftObstacleTutorialPartDidStartSignal, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____leftObstacleTutorialPartDidStartSignal;

  /// @brief Field _rightObstacleTutorialPartDidStartSignal, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____rightObstacleTutorialPartDidStartSignal;

  /// @brief Field _topObstacleTutorialPartDidStartSignal, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____topObstacleTutorialPartDidStartSignal;

  /// @brief Field _noteWasCutOKSignal, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutOKSignal;

  /// @brief Field _noteWasCutTooSoonSignal, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutTooSoonSignal;

  /// @brief Field _noteWasCutWithWrongColorSignal, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutWithWrongColorSignal;

  /// @brief Field _noteWasCutFromDifferentDirectionSignal, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutFromDifferentDirectionSignal;

  /// @brief Field _noteWasCutWithSlowSpeedSignal, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____noteWasCutWithSlowSpeedSignal;

  /// @brief Field _bombWasCutSignal, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____bombWasCutSignal;

  /// @brief Field _initData, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::__TutorialSongController__InitData* ____initData;

  /// @brief Field _beatmapObjectManager, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _tutorialBeatmapObjectIndex, offset: 0xb8, size: 0x4, def value: None
  int32_t ____tutorialBeatmapObjectIndex;

  /// @brief Field _prevSpawnedBeatmapObjectIndex, offset: 0xbc, size: 0x4, def value: None
  int32_t ____prevSpawnedBeatmapObjectIndex;

  /// @brief Field _songBpm, offset: 0xc0, size: 0x4, def value: None
  float_t ____songBpm;

  /// @brief Field _beatmapData, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ____beatmapData;

  /// @brief Field _normalModeTutorialObjectsSpawnData, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>
      ____normalModeTutorialObjectsSpawnData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4693 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____audioTimeSyncController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____startWaitTimeInBeats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____numberOfBeatsToSnap) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____obstacleDurationInBeats) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteCuttingTutorialPartDidStartSignal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteCuttingInAnyDirectionDidStartSignal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____bombCuttingTutorialPartDidStartSignal) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____leftObstacleTutorialPartDidStartSignal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____rightObstacleTutorialPartDidStartSignal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____topObstacleTutorialPartDidStartSignal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutOKSignal) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutTooSoonSignal) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutWithWrongColorSignal) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutFromDifferentDirectionSignal) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutWithSlowSpeedSignal) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____bombWasCutSignal) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____initData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____beatmapObjectManager) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____tutorialBeatmapObjectIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____prevSpawnedBeatmapObjectIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____songBpm) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____beatmapData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____normalModeTutorialObjectsSpawnData) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController*, "", "TutorialSongController");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__InitData*, "", "TutorialSongController/InitData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*, "", "TutorialSongController/TutorialBasicNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*, "", "TutorialSongController/TutorialBombNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData*, "", "TutorialSongController/TutorialJumpingNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, "", "TutorialSongController/TutorialObjectSpawnData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*, "", "TutorialSongController/TutorialObstacleSpawnData");
