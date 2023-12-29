#pragma once
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
class __BeatmapObjectSpawnController__InitData;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteJumpValueType;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(4846))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4840))
// CS Name: ::BeatmapObjectSpawnController::InitData*
class CORDL_TYPE __BeatmapObjectSpawnController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatsPerMinute, offset 0x10, size 0x4
  __declspec(property(get = __get_beatsPerMinute, put = __set_beatsPerMinute)) float_t beatsPerMinute;

  /// @brief Field noteLinesCount, offset 0x14, size 0x4
  __declspec(property(get = __get_noteLinesCount, put = __set_noteLinesCount)) int32_t noteLinesCount;

  /// @brief Field noteJumpMovementSpeed, offset 0x18, size 0x4
  __declspec(property(get = __get_noteJumpMovementSpeed, put = __set_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  /// @brief Field noteJumpValueType, offset 0x1c, size 0x4
  __declspec(property(get = __get_noteJumpValueType, put = __set_noteJumpValueType))::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType;

  /// @brief Field noteJumpValue, offset 0x20, size 0x4
  __declspec(property(get = __get_noteJumpValue, put = __set_noteJumpValue)) float_t noteJumpValue;

  constexpr float_t& __get_beatsPerMinute();

  constexpr float_t const& __get_beatsPerMinute() const;

  constexpr void __set_beatsPerMinute(float_t value);

  constexpr int32_t& __get_noteLinesCount();

  constexpr int32_t const& __get_noteLinesCount() const;

  constexpr void __set_noteLinesCount(int32_t value);

  constexpr float_t& __get_noteJumpMovementSpeed();

  constexpr float_t const& __get_noteJumpMovementSpeed() const;

  constexpr void __set_noteJumpMovementSpeed(float_t value);

  constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType& __get_noteJumpValueType();

  constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType const& __get_noteJumpValueType() const;

  constexpr void __set_noteJumpValueType(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType value);

  constexpr float_t& __get_noteJumpValue();

  constexpr float_t const& __get_noteJumpValue() const;

  constexpr void __set_noteJumpValue(float_t value);

  static inline ::GlobalNamespace::__BeatmapObjectSpawnController__InitData* New_ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed,
                                                                                      ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue);

  /// @brief Method .ctor addr 0x224bf60 size 0x58 virtual false final false
  inline void _ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType,
                    float_t noteJumpValue);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectSpawnController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapObjectSpawnController__InitData(__BeatmapObjectSpawnController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectSpawnController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapObjectSpawnController__InitData(__BeatmapObjectSpawnController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectSpawnController__InitData();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4841))
// CS Name: ::BeatmapObjectSpawnController*
class CORDL_TYPE BeatmapObjectSpawnController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__BeatmapObjectSpawnController__InitData;

  /// @brief Field _beatmapObjectSpawnMovementData, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnMovementData, put = __set__beatmapObjectSpawnMovementData))::GlobalNamespace::BeatmapObjectSpawnMovementData* _beatmapObjectSpawnMovementData;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapObjectSpawner, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawner, put = __set__beatmapObjectSpawner))::GlobalNamespace::IBeatmapObjectSpawner* _beatmapObjectSpawner;

  /// @brief Field _jumpOffsetYProvider, offset 0x30, size 0x8
  __declspec(property(get = __get__jumpOffsetYProvider, put = __set__jumpOffsetYProvider))::GlobalNamespace::IJumpOffsetYProvider* _jumpOffsetYProvider;

  /// @brief Field _initData, offset 0x38, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__BeatmapObjectSpawnController__InitData* _initData;

  /// @brief Field didInitEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_didInitEvent, put = __set_didInitEvent))::System::Action* didInitEvent;

  /// @brief Field _disableSpawning, offset 0x48, size 0x1
  __declspec(property(get = __get__disableSpawning, put = __set__disableSpawning)) bool _disableSpawning;

  /// @brief Field _isInitialized, offset 0x49, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  /// @brief Field _obstacleDataCallbackWrapper, offset 0x50, size 0x8
  __declspec(property(get = __get__obstacleDataCallbackWrapper, put = __set__obstacleDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _obstacleDataCallbackWrapper;

  /// @brief Field _noteDataCallbackWrapper, offset 0x58, size 0x8
  __declspec(property(get = __get__noteDataCallbackWrapper, put = __set__noteDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _noteDataCallbackWrapper;

  /// @brief Field _sliderDataCallbackWrapper, offset 0x60, size 0x8
  __declspec(property(get = __get__sliderDataCallbackWrapper, put = __set__sliderDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _sliderDataCallbackWrapper;

  /// @brief Field _spawnRotationCallbackWrapper, offset 0x68, size 0x8
  __declspec(property(get = __get__spawnRotationCallbackWrapper, put = __set__spawnRotationCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _spawnRotationCallbackWrapper;

  /// @brief Field _spawnRotation, offset 0x70, size 0x4
  __declspec(property(get = __get__spawnRotation, put = __set__spawnRotation)) float_t _spawnRotation;

  __declspec(property(get = get_noteLinesCount)) int32_t noteLinesCount;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpDistance)) float_t jumpDistance;

  __declspec(property(get = get_verticalLayerDistance)) float_t verticalLayerDistance;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteLinesDistance)) float_t noteLinesDistance;

  __declspec(property(get = get_beatmapObjectSpawnMovementData))::GlobalNamespace::BeatmapObjectSpawnMovementData* beatmapObjectSpawnMovementData;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectSpawnController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectSpawnController*() noexcept;

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData*& __get__beatmapObjectSpawnMovementData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnMovementData*> const& __get__beatmapObjectSpawnMovementData() const;

  constexpr void __set__beatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::IBeatmapObjectSpawner*& __get__beatmapObjectSpawner();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawner*> const& __get__beatmapObjectSpawner() const;

  constexpr void __set__beatmapObjectSpawner(::GlobalNamespace::IBeatmapObjectSpawner* value);

  constexpr ::GlobalNamespace::IJumpOffsetYProvider*& __get__jumpOffsetYProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IJumpOffsetYProvider*> const& __get__jumpOffsetYProvider() const;

  constexpr void __set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value);

  constexpr ::GlobalNamespace::__BeatmapObjectSpawnController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectSpawnController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__BeatmapObjectSpawnController__InitData* value);

  constexpr ::System::Action*& __get_didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didInitEvent() const;

  constexpr void __set_didInitEvent(::System::Action* value);

  constexpr bool& __get__disableSpawning();

  constexpr bool const& __get__disableSpawning() const;

  constexpr void __set__disableSpawning(bool value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__obstacleDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__obstacleDataCallbackWrapper() const;

  constexpr void __set__obstacleDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__noteDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__noteDataCallbackWrapper() const;

  constexpr void __set__noteDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__sliderDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__sliderDataCallbackWrapper() const;

  constexpr void __set__sliderDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__spawnRotationCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__spawnRotationCallbackWrapper() const;

  constexpr void __set__spawnRotationCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr float_t& __get__spawnRotation();

  constexpr float_t const& __get__spawnRotation() const;

  constexpr void __set__spawnRotation(float_t value);

  /// @brief Method get_noteLinesCount addr 0x224ae88 size 0x1c virtual true final true
  inline int32_t get_noteLinesCount();

  /// @brief Method get_jumpOffsetY addr 0x224aea4 size 0x18 virtual true final true
  inline float_t get_jumpOffsetY();

  /// @brief Method get_moveDuration addr 0x224af5c size 0x1c virtual true final true
  inline float_t get_moveDuration();

  /// @brief Method get_jumpDuration addr 0x224af78 size 0x1c virtual true final true
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpDistance addr 0x224af94 size 0x1c virtual true final true
  inline float_t get_jumpDistance();

  /// @brief Method get_verticalLayerDistance addr 0x224afb0 size 0x20 virtual true final true
  inline float_t get_verticalLayerDistance();

  /// @brief Method get_noteJumpMovementSpeed addr 0x224afdc size 0x1c virtual true final true
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteLinesDistance addr 0x224aff8 size 0x20 virtual true final true
  inline float_t get_noteLinesDistance();

  /// @brief Method get_beatmapObjectSpawnMovementData addr 0x224b024 size 0x8 virtual true final true
  inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* get_beatmapObjectSpawnMovementData();

  /// @brief Method get_isInitialized addr 0x224b02c size 0x8 virtual true final true
  inline bool get_isInitialized();

  /// @brief Method add_didInitEvent addr 0x224b034 size 0x9c virtual true final true
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method remove_didInitEvent addr 0x224b0d0 size 0x9c virtual true final true
  inline void remove_didInitEvent(::System::Action* value);

  /// @brief Method Start addr 0x224b16c size 0x384 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x224b640 size 0x58 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleObstacleDataCallback addr 0x224b698 size 0x110 virtual false final false
  inline void HandleObstacleDataCallback(::GlobalNamespace::ObstacleData* obstacleData);

  /// @brief Method HandleNoteDataCallback addr 0x224b918 size 0x108 virtual false final false
  inline void HandleNoteDataCallback(::GlobalNamespace::NoteData* noteData);

  /// @brief Method HandleSliderDataCallback addr 0x224bb18 size 0x118 virtual false final false
  inline void HandleSliderDataCallback(::GlobalNamespace::SliderData* sliderNoteData);

  /// @brief Method HandleSpawnRotationCallback addr 0x224bdb8 size 0x1c virtual false final false
  inline void HandleSpawnRotationCallback(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);

  /// @brief Method StopSpawning addr 0x224bdd4 size 0xc virtual false final false
  inline void StopSpawning();

  /// @brief Method Get2DNoteOffset addr 0x224bde0 size 0x24 virtual true final true
  inline ::UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset addr 0x224be18 size 0x18 virtual true final true
  inline float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer);

  static inline ::GlobalNamespace::BeatmapObjectSpawnController* New_ctor();

  /// @brief Method .ctor addr 0x224bea0 size 0x90 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectSpawnController(BeatmapObjectSpawnController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectSpawnController(BeatmapObjectSpawnController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectSpawnController();

public:
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
