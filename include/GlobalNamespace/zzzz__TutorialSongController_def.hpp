#pragma once
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
class __TutorialSongController__TutorialBombNoteSpawnData;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialJumpingNoteSpawnData;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class __TutorialSongController__InitData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObstacleSpawnData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBasicNoteSpawnData;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObjectSpawnData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct ColorType;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5439))
// CS Name: ::TutorialSongController::InitData*
class CORDL_TYPE __TutorialSongController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field songBpm, offset 0x10, size 0x4
  __declspec(property(get = __get_songBpm, put = __set_songBpm)) float_t songBpm;

  /// @brief Field beatmapData, offset 0x18, size 0x8
  __declspec(property(get = __get_beatmapData, put = __set_beatmapData))::GlobalNamespace::BeatmapData* beatmapData;

  constexpr float_t& __get_songBpm();

  constexpr float_t const& __get_songBpm() const;

  constexpr void __set_songBpm(float_t value);

  constexpr ::GlobalNamespace::BeatmapData*& __get_beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& __get_beatmapData() const;

  constexpr void __set_beatmapData(::GlobalNamespace::BeatmapData* value);

  static inline ::GlobalNamespace::__TutorialSongController__InitData* New_ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method .ctor addr 0x2127c1c size 0x38 virtual false final false
  inline void _ctor(float_t songBpm, ::GlobalNamespace::BeatmapData* beatmapData);

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__InitData(__TutorialSongController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__InitData(__TutorialSongController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__InitData();

public:
  /// @brief Field songBpm, offset: 0x10, size: 0x4, def value: None
  float_t ___songBpm;

  /// @brief Field beatmapData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ___beatmapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__InitData, ___songBpm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__InitData, ___beatmapData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialObjectSpawnData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5440))
// CS Name: ::TutorialSongController::TutorialObjectSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialObjectSpawnData : public ::System::Object {
public:
  // Declarations
  /// @brief Field signal, offset 0x10, size 0x8
  __declspec(property(get = __get_signal, put = __set_signal))::GlobalNamespace::Signal* signal;

  /// @brief Field beatOffset, offset 0x18, size 0x4
  __declspec(property(get = __get_beatOffset, put = __set_beatOffset)) int32_t beatOffset;

  /// @brief Field firstTimeBeatOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get_firstTimeBeatOffset, put = __set_firstTimeBeatOffset)) int32_t firstTimeBeatOffset;

  /// @brief Field lineIndex, offset 0x20, size 0x4
  __declspec(property(get = __get_lineIndex, put = __set_lineIndex)) int32_t lineIndex;

  constexpr ::GlobalNamespace::Signal*& __get_signal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get_signal() const;

  constexpr void __set_signal(::GlobalNamespace::Signal* value);

  constexpr int32_t& __get_beatOffset();

  constexpr int32_t const& __get_beatOffset() const;

  constexpr void __set_beatOffset(int32_t value);

  constexpr int32_t& __get_firstTimeBeatOffset();

  constexpr int32_t const& __get_firstTimeBeatOffset() const;

  constexpr void __set_firstTimeBeatOffset(int32_t value);

  constexpr int32_t& __get_lineIndex();

  constexpr int32_t const& __get_lineIndex() const;

  constexpr void __set_lineIndex(int32_t value);

  static inline ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex);

  /// @brief Method .ctor addr 0x2127c54 size 0x44 virtual false final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex);

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObjectSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialObjectSpawnData(__TutorialSongController__TutorialObjectSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObjectSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialObjectSpawnData(__TutorialSongController__TutorialObjectSpawnData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialObjectSpawnData();

public:
  /// @brief Field signal, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ___signal;

  /// @brief Field beatOffset, offset: 0x18, size: 0x4, def value: None
  int32_t ___beatOffset;

  /// @brief Field firstTimeBeatOffset, offset: 0x1c, size: 0x4, def value: None
  int32_t ___firstTimeBeatOffset;

  /// @brief Field lineIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___lineIndex;

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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5440)), TypeDefinitionIndex(TypeDefinitionIndex(14973))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5441))
// CS Name: ::TutorialSongController::TutorialJumpingNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialJumpingNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData {
public:
  // Declarations
  /// @brief Field noteLineLayer, offset 0x24, size 0x4
  __declspec(property(get = __get_noteLineLayer, put = __set_noteLineLayer))::GlobalNamespace::NoteLineLayer noteLineLayer;

  constexpr ::GlobalNamespace::NoteLineLayer& __get_noteLineLayer();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get_noteLineLayer() const;

  constexpr void __set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  static inline ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset,
                                                                                                    int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method .ctor addr 0x2127c98 size 0x50 virtual false final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialJumpingNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialJumpingNoteSpawnData(__TutorialSongController__TutorialJumpingNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialJumpingNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialJumpingNoteSpawnData(__TutorialSongController__TutorialJumpingNoteSpawnData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialJumpingNoteSpawnData();

public:
  /// @brief Field noteLineLayer, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___noteLineLayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData, ___noteLineLayer) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialBasicNoteSpawnData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14968)), TypeDefinitionIndex(TypeDefinitionIndex(5441)), TypeDefinitionIndex(TypeDefinitionIndex(14965))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5442))
// CS Name: ::TutorialSongController::TutorialBasicNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialBasicNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData {
public:
  // Declarations
  /// @brief Field cutDirection, offset 0x28, size 0x4
  __declspec(property(get = __get_cutDirection, put = __set_cutDirection))::GlobalNamespace::NoteCutDirection cutDirection;

  /// @brief Field colorType, offset 0x2c, size 0x4
  __declspec(property(get = __get_colorType, put = __set_colorType))::GlobalNamespace::ColorType colorType;

  constexpr ::GlobalNamespace::NoteCutDirection& __get_cutDirection();

  constexpr ::GlobalNamespace::NoteCutDirection const& __get_cutDirection() const;

  constexpr void __set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr ::GlobalNamespace::ColorType& __get_colorType();

  constexpr ::GlobalNamespace::ColorType const& __get_colorType() const;

  constexpr void __set_colorType(::GlobalNamespace::ColorType value);

  static inline ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                                  ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                                                  ::GlobalNamespace::ColorType colorType);

  /// @brief Method .ctor addr 0x2127290 size 0x64 virtual false final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                    ::GlobalNamespace::NoteCutDirection cutDirection, ::GlobalNamespace::ColorType colorType);

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBasicNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialBasicNoteSpawnData(__TutorialSongController__TutorialBasicNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBasicNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialBasicNoteSpawnData(__TutorialSongController__TutorialBasicNoteSpawnData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialBasicNoteSpawnData();

public:
  /// @brief Field cutDirection, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___cutDirection;

  /// @brief Field colorType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData, ___cutDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData, ___colorType) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialBombNoteSpawnData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5443))
// CS Name: ::TutorialSongController::TutorialBombNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialBombNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData {
public:
  // Declarations
  static inline ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                                 ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method .ctor addr 0x21272f4 size 0x50 virtual false final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBombNoteSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialBombNoteSpawnData(__TutorialSongController__TutorialBombNoteSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBombNoteSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialBombNoteSpawnData(__TutorialSongController__TutorialBombNoteSpawnData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialBombNoteSpawnData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialObstacleSpawnData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5440)), TypeDefinitionIndex(TypeDefinitionIndex(14973))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5444))
// CS Name: ::TutorialSongController::TutorialObstacleSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialObstacleSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData {
public:
  // Declarations
  /// @brief Field noteLineLayer, offset 0x24, size 0x4
  __declspec(property(get = __get_noteLineLayer, put = __set_noteLineLayer))::GlobalNamespace::NoteLineLayer noteLineLayer;

  /// @brief Field width, offset 0x28, size 0x4
  __declspec(property(get = __get_width, put = __set_width)) int32_t width;

  /// @brief Field height, offset 0x2c, size 0x4
  __declspec(property(get = __get_height, put = __set_height)) int32_t height;

  constexpr ::GlobalNamespace::NoteLineLayer& __get_noteLineLayer();

  constexpr ::GlobalNamespace::NoteLineLayer const& __get_noteLineLayer() const;

  constexpr void __set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr int32_t& __get_width();

  constexpr int32_t const& __get_width() const;

  constexpr void __set_width(int32_t value);

  constexpr int32_t& __get_height();

  constexpr int32_t const& __get_height() const;

  constexpr void __set_height(int32_t value);

  static inline ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex,
                                                                                                 int32_t width, int32_t height, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method .ctor addr 0x2127344 size 0x64 virtual false final false
  inline void _ctor(::GlobalNamespace::Signal* signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width, int32_t height,
                    ::GlobalNamespace::NoteLineLayer noteLineLayer);

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObstacleSpawnData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialSongController__TutorialObstacleSpawnData(__TutorialSongController__TutorialObstacleSpawnData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObstacleSpawnData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialSongController__TutorialObstacleSpawnData(__TutorialSongController__TutorialObstacleSpawnData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialSongController__TutorialObstacleSpawnData();

public:
  /// @brief Field noteLineLayer, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___noteLineLayer;

  /// @brief Field width, offset: 0x28, size: 0x4, def value: None
  int32_t ___width;

  /// @brief Field height, offset: 0x2c, size: 0x4, def value: None
  int32_t ___height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, ___noteLineLayer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, ___width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, ___height) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialSongController
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5429))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5445))
// CS Name: ::TutorialSongController*
class CORDL_TYPE TutorialSongController : public ::GlobalNamespace::SongController {
public:
  // Declarations
  using TutorialObstacleSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData;

  using TutorialBombNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData;

  using TutorialBasicNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData;

  using TutorialJumpingNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData;

  using TutorialObjectSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData;

  using InitData = ::GlobalNamespace::__TutorialSongController__InitData;

  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _startWaitTimeInBeats, offset 0x28, size 0x4
  __declspec(property(get = __get__startWaitTimeInBeats, put = __set__startWaitTimeInBeats)) int32_t _startWaitTimeInBeats;

  /// @brief Field _numberOfBeatsToSnap, offset 0x2c, size 0x4
  __declspec(property(get = __get__numberOfBeatsToSnap, put = __set__numberOfBeatsToSnap)) int32_t _numberOfBeatsToSnap;

  /// @brief Field _obstacleDurationInBeats, offset 0x30, size 0x4
  __declspec(property(get = __get__obstacleDurationInBeats, put = __set__obstacleDurationInBeats)) int32_t _obstacleDurationInBeats;

  /// @brief Field _noteCuttingTutorialPartDidStartSignal, offset 0x38, size 0x8
  __declspec(property(get = __get__noteCuttingTutorialPartDidStartSignal, put = __set__noteCuttingTutorialPartDidStartSignal))::GlobalNamespace::Signal* _noteCuttingTutorialPartDidStartSignal;

  /// @brief Field _noteCuttingInAnyDirectionDidStartSignal, offset 0x40, size 0x8
  __declspec(property(get = __get__noteCuttingInAnyDirectionDidStartSignal, put = __set__noteCuttingInAnyDirectionDidStartSignal))::GlobalNamespace::Signal* _noteCuttingInAnyDirectionDidStartSignal;

  /// @brief Field _bombCuttingTutorialPartDidStartSignal, offset 0x48, size 0x8
  __declspec(property(get = __get__bombCuttingTutorialPartDidStartSignal, put = __set__bombCuttingTutorialPartDidStartSignal))::GlobalNamespace::Signal* _bombCuttingTutorialPartDidStartSignal;

  /// @brief Field _leftObstacleTutorialPartDidStartSignal, offset 0x50, size 0x8
  __declspec(property(get = __get__leftObstacleTutorialPartDidStartSignal, put = __set__leftObstacleTutorialPartDidStartSignal))::GlobalNamespace::Signal* _leftObstacleTutorialPartDidStartSignal;

  /// @brief Field _rightObstacleTutorialPartDidStartSignal, offset 0x58, size 0x8
  __declspec(property(get = __get__rightObstacleTutorialPartDidStartSignal, put = __set__rightObstacleTutorialPartDidStartSignal))::GlobalNamespace::Signal* _rightObstacleTutorialPartDidStartSignal;

  /// @brief Field _topObstacleTutorialPartDidStartSignal, offset 0x60, size 0x8
  __declspec(property(get = __get__topObstacleTutorialPartDidStartSignal, put = __set__topObstacleTutorialPartDidStartSignal))::GlobalNamespace::Signal* _topObstacleTutorialPartDidStartSignal;

  /// @brief Field _noteWasCutOKSignal, offset 0x68, size 0x8
  __declspec(property(get = __get__noteWasCutOKSignal, put = __set__noteWasCutOKSignal))::GlobalNamespace::Signal* _noteWasCutOKSignal;

  /// @brief Field _noteWasCutTooSoonSignal, offset 0x70, size 0x8
  __declspec(property(get = __get__noteWasCutTooSoonSignal, put = __set__noteWasCutTooSoonSignal))::GlobalNamespace::Signal* _noteWasCutTooSoonSignal;

  /// @brief Field _noteWasCutWithWrongColorSignal, offset 0x78, size 0x8
  __declspec(property(get = __get__noteWasCutWithWrongColorSignal, put = __set__noteWasCutWithWrongColorSignal))::GlobalNamespace::Signal* _noteWasCutWithWrongColorSignal;

  /// @brief Field _noteWasCutFromDifferentDirectionSignal, offset 0x80, size 0x8
  __declspec(property(get = __get__noteWasCutFromDifferentDirectionSignal, put = __set__noteWasCutFromDifferentDirectionSignal))::GlobalNamespace::Signal* _noteWasCutFromDifferentDirectionSignal;

  /// @brief Field _noteWasCutWithSlowSpeedSignal, offset 0x88, size 0x8
  __declspec(property(get = __get__noteWasCutWithSlowSpeedSignal, put = __set__noteWasCutWithSlowSpeedSignal))::GlobalNamespace::Signal* _noteWasCutWithSlowSpeedSignal;

  /// @brief Field _bombWasCutSignal, offset 0x90, size 0x8
  __declspec(property(get = __get__bombWasCutSignal, put = __set__bombWasCutSignal))::GlobalNamespace::Signal* _bombWasCutSignal;

  /// @brief Field _initData, offset 0x98, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__TutorialSongController__InitData* _initData;

  /// @brief Field _beatmapObjectManager, offset 0xa0, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _tutorialBeatmapObjectIndex, offset 0xa8, size 0x4
  __declspec(property(get = __get__tutorialBeatmapObjectIndex, put = __set__tutorialBeatmapObjectIndex)) int32_t _tutorialBeatmapObjectIndex;

  /// @brief Field _prevSpawnedBeatmapObjectIndex, offset 0xac, size 0x4
  __declspec(property(get = __get__prevSpawnedBeatmapObjectIndex, put = __set__prevSpawnedBeatmapObjectIndex)) int32_t _prevSpawnedBeatmapObjectIndex;

  /// @brief Field _songBpm, offset 0xb0, size 0x4
  __declspec(property(get = __get__songBpm, put = __set__songBpm)) float_t _songBpm;

  /// @brief Field _beatmapData, offset 0xb8, size 0x8
  __declspec(property(get = __get__beatmapData, put = __set__beatmapData))::GlobalNamespace::BeatmapData* _beatmapData;

  /// @brief Field _normalModeTutorialObjectsSpawnData, offset 0xc0, size 0x8
  __declspec(property(get = __get__normalModeTutorialObjectsSpawnData,
                      put = __set__normalModeTutorialObjectsSpawnData))::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*,
                                                                                ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*> _normalModeTutorialObjectsSpawnData;

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr int32_t& __get__startWaitTimeInBeats();

  constexpr int32_t const& __get__startWaitTimeInBeats() const;

  constexpr void __set__startWaitTimeInBeats(int32_t value);

  constexpr int32_t& __get__numberOfBeatsToSnap();

  constexpr int32_t const& __get__numberOfBeatsToSnap() const;

  constexpr void __set__numberOfBeatsToSnap(int32_t value);

  constexpr int32_t& __get__obstacleDurationInBeats();

  constexpr int32_t const& __get__obstacleDurationInBeats() const;

  constexpr void __set__obstacleDurationInBeats(int32_t value);

  constexpr ::GlobalNamespace::Signal*& __get__noteCuttingTutorialPartDidStartSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__noteCuttingTutorialPartDidStartSignal() const;

  constexpr void __set__noteCuttingTutorialPartDidStartSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__noteCuttingInAnyDirectionDidStartSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__noteCuttingInAnyDirectionDidStartSignal() const;

  constexpr void __set__noteCuttingInAnyDirectionDidStartSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__bombCuttingTutorialPartDidStartSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__bombCuttingTutorialPartDidStartSignal() const;

  constexpr void __set__bombCuttingTutorialPartDidStartSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__leftObstacleTutorialPartDidStartSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__leftObstacleTutorialPartDidStartSignal() const;

  constexpr void __set__leftObstacleTutorialPartDidStartSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__rightObstacleTutorialPartDidStartSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__rightObstacleTutorialPartDidStartSignal() const;

  constexpr void __set__rightObstacleTutorialPartDidStartSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__topObstacleTutorialPartDidStartSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__topObstacleTutorialPartDidStartSignal() const;

  constexpr void __set__topObstacleTutorialPartDidStartSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__noteWasCutOKSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__noteWasCutOKSignal() const;

  constexpr void __set__noteWasCutOKSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__noteWasCutTooSoonSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__noteWasCutTooSoonSignal() const;

  constexpr void __set__noteWasCutTooSoonSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__noteWasCutWithWrongColorSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__noteWasCutWithWrongColorSignal() const;

  constexpr void __set__noteWasCutWithWrongColorSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__noteWasCutFromDifferentDirectionSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__noteWasCutFromDifferentDirectionSignal() const;

  constexpr void __set__noteWasCutFromDifferentDirectionSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__noteWasCutWithSlowSpeedSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__noteWasCutWithSlowSpeedSignal() const;

  constexpr void __set__noteWasCutWithSlowSpeedSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::Signal*& __get__bombWasCutSignal();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> const& __get__bombWasCutSignal() const;

  constexpr void __set__bombWasCutSignal(::GlobalNamespace::Signal* value);

  constexpr ::GlobalNamespace::__TutorialSongController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TutorialSongController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__TutorialSongController__InitData* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr int32_t& __get__tutorialBeatmapObjectIndex();

  constexpr int32_t const& __get__tutorialBeatmapObjectIndex() const;

  constexpr void __set__tutorialBeatmapObjectIndex(int32_t value);

  constexpr int32_t& __get__prevSpawnedBeatmapObjectIndex();

  constexpr int32_t const& __get__prevSpawnedBeatmapObjectIndex() const;

  constexpr void __set__prevSpawnedBeatmapObjectIndex(int32_t value);

  constexpr float_t& __get__songBpm();

  constexpr float_t const& __get__songBpm() const;

  constexpr void __set__songBpm(float_t value);

  constexpr ::GlobalNamespace::BeatmapData*& __get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& __get__beatmapData() const;

  constexpr void __set__beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>&
  __get__normalModeTutorialObjectsSpawnData();

  constexpr ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*> const&
  __get__normalModeTutorialObjectsSpawnData() const;

  constexpr void __set__normalModeTutorialObjectsSpawnData(
      ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*> value);

  /// @brief Method Awake addr 0x2126d84 size 0x50c virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x21273a8 size 0x16c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2127514 size 0x154 virtual false final false
  inline void OnDestroy();

  /// @brief Method StartSong addr 0x2126250 size 0x5c virtual false final false
  inline void StartSong(float_t startTimeOffset);

  /// @brief Method StopSong addr 0x21278a0 size 0x28 virtual true final false
  inline void StopSong();

  /// @brief Method PauseSong addr 0x21278c8 size 0x28 virtual true final false
  inline void PauseSong();

  /// @brief Method ResumeSong addr 0x21278f0 size 0x1c virtual true final false
  inline void ResumeSong();

  /// @brief Method HandleNoteWasCut addr 0x212790c size 0xe8 virtual false final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed addr 0x21279f4 size 0x6c virtual false final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleObstacleDidPassThreeQuartersOfMove2 addr 0x2127a60 size 0x14 virtual false final false
  inline void HandleObstacleDidPassThreeQuartersOfMove2(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method UpdateBeatmapData addr 0x2127668 size 0x238 virtual false final false
  inline void UpdateBeatmapData(float_t noteTime);

  /// @brief Method GetNextBeatmapObjectTime addr 0x2127a74 size 0x78 virtual false final false
  inline float_t GetNextBeatmapObjectTime(int32_t beatOffset);

  /// @brief Method CreateObstacleData addr 0x2127b30 size 0xcc virtual false final false
  inline ::GlobalNamespace::ObstacleData* CreateObstacleData(float_t time, ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData* tutorialObstacleSpawnData);

  /// @brief Method CreateBasicNoteData addr 0x2127aec size 0x24 virtual false final false
  inline ::GlobalNamespace::NoteData* CreateBasicNoteData(float_t time, ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData* tutorialBasicNoteSpawnData);

  /// @brief Method CreateBombNoteData addr 0x2127b10 size 0x20 virtual false final false
  inline ::GlobalNamespace::NoteData* CreateBombNoteData(float_t time, ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData* tutorialBombNoteSpawnData);

  static inline ::GlobalNamespace::TutorialSongController* New_ctor();

  /// @brief Method .ctor addr 0x2127bfc size 0x20 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialSongController(TutorialSongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialSongController(TutorialSongController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialSongController();

public:
  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _startWaitTimeInBeats, offset: 0x28, size: 0x4, def value: None
  int32_t ____startWaitTimeInBeats;

  /// @brief Field _numberOfBeatsToSnap, offset: 0x2c, size: 0x4, def value: None
  int32_t ____numberOfBeatsToSnap;

  /// @brief Field _obstacleDurationInBeats, offset: 0x30, size: 0x4, def value: None
  int32_t ____obstacleDurationInBeats;

  /// @brief Field _noteCuttingTutorialPartDidStartSignal, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____noteCuttingTutorialPartDidStartSignal;

  /// @brief Field _noteCuttingInAnyDirectionDidStartSignal, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____noteCuttingInAnyDirectionDidStartSignal;

  /// @brief Field _bombCuttingTutorialPartDidStartSignal, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____bombCuttingTutorialPartDidStartSignal;

  /// @brief Field _leftObstacleTutorialPartDidStartSignal, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____leftObstacleTutorialPartDidStartSignal;

  /// @brief Field _rightObstacleTutorialPartDidStartSignal, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____rightObstacleTutorialPartDidStartSignal;

  /// @brief Field _topObstacleTutorialPartDidStartSignal, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____topObstacleTutorialPartDidStartSignal;

  /// @brief Field _noteWasCutOKSignal, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____noteWasCutOKSignal;

  /// @brief Field _noteWasCutTooSoonSignal, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____noteWasCutTooSoonSignal;

  /// @brief Field _noteWasCutWithWrongColorSignal, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____noteWasCutWithWrongColorSignal;

  /// @brief Field _noteWasCutFromDifferentDirectionSignal, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____noteWasCutFromDifferentDirectionSignal;

  /// @brief Field _noteWasCutWithSlowSpeedSignal, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____noteWasCutWithSlowSpeedSignal;

  /// @brief Field _bombWasCutSignal, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::Signal* ____bombWasCutSignal;

  /// @brief Field _initData, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::__TutorialSongController__InitData* ____initData;

  /// @brief Field _beatmapObjectManager, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _tutorialBeatmapObjectIndex, offset: 0xa8, size: 0x4, def value: None
  int32_t ____tutorialBeatmapObjectIndex;

  /// @brief Field _prevSpawnedBeatmapObjectIndex, offset: 0xac, size: 0x4, def value: None
  int32_t ____prevSpawnedBeatmapObjectIndex;

  /// @brief Field _songBpm, offset: 0xb0, size: 0x4, def value: None
  float_t ____songBpm;

  /// @brief Field _beatmapData, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ____beatmapData;

  /// @brief Field _normalModeTutorialObjectsSpawnData, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, ::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>
      ____normalModeTutorialObjectsSpawnData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____audioTimeSyncController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____startWaitTimeInBeats) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____numberOfBeatsToSnap) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____obstacleDurationInBeats) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteCuttingTutorialPartDidStartSignal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteCuttingInAnyDirectionDidStartSignal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____bombCuttingTutorialPartDidStartSignal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____leftObstacleTutorialPartDidStartSignal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____rightObstacleTutorialPartDidStartSignal) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____topObstacleTutorialPartDidStartSignal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutOKSignal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutTooSoonSignal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutWithWrongColorSignal) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutFromDifferentDirectionSignal) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____noteWasCutWithSlowSpeedSignal) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____bombWasCutSignal) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____initData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____beatmapObjectManager) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____tutorialBeatmapObjectIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____prevSpawnedBeatmapObjectIndex) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____songBpm) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____beatmapData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialSongController, ____normalModeTutorialObjectsSpawnData) == 0xc0, "Offset mismatch!");

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
