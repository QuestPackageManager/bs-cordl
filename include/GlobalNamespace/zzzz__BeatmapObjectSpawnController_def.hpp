#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectSpawnController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectSpawnController)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
class __BeatmapObjectSpawnController__InitData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class __BeatmapObjectSpawnController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnController);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapObjectSpawnController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapObjectSpawnController::InitData*
class CORDL_TYPE __BeatmapObjectSpawnController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatsPerMinute, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_beatsPerMinute, put = __cordl_internal_set_beatsPerMinute)) float_t beatsPerMinute;

  /// @brief Field noteJumpMovementSpeed, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpMovementSpeed, put = __cordl_internal_set_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  /// @brief Field noteJumpValue, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpValue, put = __cordl_internal_set_noteJumpValue)) float_t noteJumpValue;

  /// @brief Field noteJumpValueType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpValueType,
                      put = __cordl_internal_set_noteJumpValueType))::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType;

  /// @brief Field noteLinesCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLinesCount, put = __cordl_internal_set_noteLinesCount)) int32_t noteLinesCount;

  static inline ::GlobalNamespace::__BeatmapObjectSpawnController__InitData* New_ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed,
                                                                                      ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue);

  constexpr float_t const& __cordl_internal_get_beatsPerMinute() const;

  constexpr float_t& __cordl_internal_get_beatsPerMinute();

  constexpr float_t const& __cordl_internal_get_noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get_noteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get_noteJumpValue() const;

  constexpr float_t& __cordl_internal_get_noteJumpValue();

  constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType const& __cordl_internal_get_noteJumpValueType() const;

  constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType& __cordl_internal_get_noteJumpValueType();

  constexpr int32_t const& __cordl_internal_get_noteLinesCount() const;

  constexpr int32_t& __cordl_internal_get_noteLinesCount();

  constexpr void __cordl_internal_set_beatsPerMinute(float_t value);

  constexpr void __cordl_internal_set_noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set_noteJumpValue(float_t value);

  constexpr void __cordl_internal_set_noteJumpValueType(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType value);

  constexpr void __cordl_internal_set_noteLinesCount(int32_t value);

  /// @brief Method .ctor, addr 0x2643f0c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType,
                    float_t noteJumpValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectSpawnController__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectSpawnController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapObjectSpawnController__InitData(__BeatmapObjectSpawnController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectSpawnController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapObjectSpawnController__InitData(__BeatmapObjectSpawnController__InitData const&) = delete;

  /// @brief Field beatsPerMinute, offset: 0x10, size: 0x4, def value: None
  float_t ___beatsPerMinute;

  /// @brief Field noteLinesCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___noteLinesCount;

  /// @brief Field noteJumpMovementSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ___noteJumpMovementSpeed;

  /// @brief Field noteJumpValueType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType ___noteJumpValueType;

  /// @brief Field noteJumpValue, offset: 0x20, size: 0x4, def value: None
  float_t ___noteJumpValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectSpawnController__InitData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnController__InitData, ___beatsPerMinute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnController__InitData, ___noteLinesCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnController__InitData, ___noteJumpMovementSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnController__InitData, ___noteJumpValueType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnController__InitData, ___noteJumpValue) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapObjectSpawnController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapObjectSpawnController*
class CORDL_TYPE BeatmapObjectSpawnController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__BeatmapObjectSpawnController__InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapObjectSpawnMovementData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnMovementData,
                      put = __cordl_internal_set__beatmapObjectSpawnMovementData))::GlobalNamespace::BeatmapObjectSpawnMovementData* _beatmapObjectSpawnMovementData;

  /// @brief Field _beatmapObjectSpawner, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawner, put = __cordl_internal_set__beatmapObjectSpawner))::GlobalNamespace::IBeatmapObjectSpawner* _beatmapObjectSpawner;

  /// @brief Field _disableSpawning, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__disableSpawning, put = __cordl_internal_set__disableSpawning)) bool _disableSpawning;

  /// @brief Field _initData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__BeatmapObjectSpawnController__InitData* _initData;

  /// @brief Field _isInitialized, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _jumpOffsetYProvider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpOffsetYProvider, put = __cordl_internal_set__jumpOffsetYProvider))::GlobalNamespace::IJumpOffsetYProvider* _jumpOffsetYProvider;

  /// @brief Field _noteDataCallbackWrapper, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDataCallbackWrapper, put = __cordl_internal_set__noteDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _noteDataCallbackWrapper;

  /// @brief Field _obstacleDataCallbackWrapper, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleDataCallbackWrapper,
                      put = __cordl_internal_set__obstacleDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _obstacleDataCallbackWrapper;

  /// @brief Field _sliderDataCallbackWrapper, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderDataCallbackWrapper,
                      put = __cordl_internal_set__sliderDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _sliderDataCallbackWrapper;

  /// @brief Field _spawnRotation, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__spawnRotation, put = __cordl_internal_set__spawnRotation)) float_t _spawnRotation;

  /// @brief Field _spawnRotationCallbackWrapper, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnRotationCallbackWrapper,
                      put = __cordl_internal_set__spawnRotationCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _spawnRotationCallbackWrapper;

  __declspec(property(get = get_beatmapObjectSpawnMovementData))::GlobalNamespace::BeatmapObjectSpawnMovementData* beatmapObjectSpawnMovementData;

  /// @brief Field didInitEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_didInitEvent, put = __cordl_internal_set_didInitEvent))::System::Action* didInitEvent;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_jumpDistance)) float_t jumpDistance;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteLinesCount)) int32_t noteLinesCount;

  __declspec(property(get = get_noteLinesDistance)) float_t noteLinesDistance;

  __declspec(property(get = get_verticalLayerDistance)) float_t verticalLayerDistance;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectSpawnController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectSpawnController*() noexcept;

  /// @brief Method Get2DNoteOffset, addr 0x2643d8c, size 0x24, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method HandleNoteDataCallback, addr 0x26438c4, size 0x108, virtual false, abstract: false, final false
  inline void HandleNoteDataCallback(::GlobalNamespace::NoteData* noteData);

  /// @brief Method HandleObstacleDataCallback, addr 0x2643644, size 0x110, virtual false, abstract: false, final false
  inline void HandleObstacleDataCallback(::GlobalNamespace::ObstacleData* obstacleData);

  /// @brief Method HandleSliderDataCallback, addr 0x2643ac4, size 0x118, virtual false, abstract: false, final false
  inline void HandleSliderDataCallback(::GlobalNamespace::SliderData* sliderNoteData);

  /// @brief Method HandleSpawnRotationCallback, addr 0x2643d64, size 0x1c, virtual false, abstract: false, final false
  inline void HandleSpawnRotationCallback(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);

  /// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset, addr 0x2643dc4, size 0x18, virtual true, abstract: false, final true
  inline float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer);

  static inline ::GlobalNamespace::BeatmapObjectSpawnController* New_ctor();

  /// @brief Method OnDestroy, addr 0x26435ec, size 0x58, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x2643118, size 0x384, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopSpawning, addr 0x2643d80, size 0xc, virtual false, abstract: false, final false
  inline void StopSpawning();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData*& __cordl_internal_get__beatmapObjectSpawnMovementData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnMovementData*> const& __cordl_internal_get__beatmapObjectSpawnMovementData() const;

  constexpr ::GlobalNamespace::IBeatmapObjectSpawner*& __cordl_internal_get__beatmapObjectSpawner();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawner*> const& __cordl_internal_get__beatmapObjectSpawner() const;

  constexpr bool const& __cordl_internal_get__disableSpawning() const;

  constexpr bool& __cordl_internal_get__disableSpawning();

  constexpr ::GlobalNamespace::__BeatmapObjectSpawnController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectSpawnController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::GlobalNamespace::IJumpOffsetYProvider*& __cordl_internal_get__jumpOffsetYProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IJumpOffsetYProvider*> const& __cordl_internal_get__jumpOffsetYProvider() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__noteDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__noteDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__obstacleDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__obstacleDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__sliderDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__sliderDataCallbackWrapper() const;

  constexpr float_t const& __cordl_internal_get__spawnRotation() const;

  constexpr float_t& __cordl_internal_get__spawnRotation();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__spawnRotationCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__spawnRotationCallbackWrapper() const;

  constexpr ::System::Action*& __cordl_internal_get_didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didInitEvent() const;

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawner(::GlobalNamespace::IBeatmapObjectSpawner* value);

  constexpr void __cordl_internal_set__disableSpawning(bool value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__BeatmapObjectSpawnController__InitData* value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value);

  constexpr void __cordl_internal_set__noteDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__obstacleDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__sliderDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__spawnRotation(float_t value);

  constexpr void __cordl_internal_set__spawnRotationCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set_didInitEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2643e4c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInitEvent, addr 0x2642fe0, size 0x9c, virtual true, abstract: false, final true
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method get_beatmapObjectSpawnMovementData, addr 0x2642fd0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* get_beatmapObjectSpawnMovementData();

  /// @brief Method get_isInitialized, addr 0x2642fd8, size 0x8, virtual true, abstract: false, final true
  inline bool get_isInitialized();

  /// @brief Method get_jumpDistance, addr 0x2642f40, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_jumpDistance();

  /// @brief Method get_jumpDuration, addr 0x2642f24, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpOffsetY, addr 0x2642e50, size 0x18, virtual true, abstract: false, final true
  inline float_t get_jumpOffsetY();

  /// @brief Method get_moveDuration, addr 0x2642f08, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_moveDuration();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x2642f88, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteLinesCount, addr 0x2642e34, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_noteLinesCount();

  /// @brief Method get_noteLinesDistance, addr 0x2642fa4, size 0x20, virtual true, abstract: false, final true
  inline float_t get_noteLinesDistance();

  /// @brief Method get_verticalLayerDistance, addr 0x2642f5c, size 0x20, virtual true, abstract: false, final true
  inline float_t get_verticalLayerDistance();

  /// @brief Convert to "::GlobalNamespace::IBeatmapObjectSpawnController"
  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController* i___GlobalNamespace__IBeatmapObjectSpawnController() noexcept;

  /// @brief Method remove_didInitEvent, addr 0x264307c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didInitEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectSpawnController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectSpawnController(BeatmapObjectSpawnController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectSpawnController(BeatmapObjectSpawnController const&) = delete;

  /// @brief Field _beatmapObjectSpawnMovementData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnMovementData* ____beatmapObjectSpawnMovementData;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapObjectSpawner, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawner* ____beatmapObjectSpawner;

  /// @brief Field _jumpOffsetYProvider, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IJumpOffsetYProvider* ____jumpOffsetYProvider;

  /// @brief Field _initData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapObjectSpawnController__InitData* ____initData;

  /// @brief Field didInitEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___didInitEvent;

  /// @brief Field _disableSpawning, offset: 0x48, size: 0x1, def value: None
  bool ____disableSpawning;

  /// @brief Field _isInitialized, offset: 0x49, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _obstacleDataCallbackWrapper, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____obstacleDataCallbackWrapper;

  /// @brief Field _noteDataCallbackWrapper, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____noteDataCallbackWrapper;

  /// @brief Field _sliderDataCallbackWrapper, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____sliderDataCallbackWrapper;

  /// @brief Field _spawnRotationCallbackWrapper, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____spawnRotationCallbackWrapper;

  /// @brief Field _spawnRotation, offset: 0x70, size: 0x4, def value: None
  float_t ____spawnRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnController, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____beatmapObjectSpawnMovementData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____beatmapObjectSpawner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____jumpOffsetYProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____initData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ___didInitEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____disableSpawning) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____isInitialized) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____obstacleDataCallbackWrapper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____noteDataCallbackWrapper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____sliderDataCallbackWrapper) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____spawnRotationCallbackWrapper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____spawnRotation) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnController*, "", "BeatmapObjectSpawnController");
NEED_NO_BOX(::GlobalNamespace::__BeatmapObjectSpawnController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectSpawnController__InitData*, "", "BeatmapObjectSpawnController/InitData");
