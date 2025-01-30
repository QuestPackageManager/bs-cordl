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
class BeatmapObjectSpawnController_InitData;
}
namespace GlobalNamespace {
struct BeatmapObjectSpawnMovementData_NoteJumpValueType;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IVariableMovementDataProvider;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnController);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnController_InitData);
// Dependencies BeatmapObjectSpawnMovementData::NoteJumpValueType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectSpawnController/InitData
class CORDL_TYPE BeatmapObjectSpawnController_InitData : public ::System::Object {
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
                      put = __cordl_internal_set_noteJumpValueType)) ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType noteJumpValueType;

  /// @brief Field noteLinesCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLinesCount, put = __cordl_internal_set_noteLinesCount)) int32_t noteLinesCount;

  static inline ::GlobalNamespace::BeatmapObjectSpawnController_InitData* New_ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed,
                                                                                   ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType noteJumpValueType, float_t noteJumpValue);

  constexpr float_t const& __cordl_internal_get_beatsPerMinute() const;

  constexpr float_t& __cordl_internal_get_beatsPerMinute();

  constexpr float_t const& __cordl_internal_get_noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get_noteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get_noteJumpValue() const;

  constexpr float_t& __cordl_internal_get_noteJumpValue();

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType const& __cordl_internal_get_noteJumpValueType() const;

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType& __cordl_internal_get_noteJumpValueType();

  constexpr int32_t const& __cordl_internal_get_noteLinesCount() const;

  constexpr int32_t& __cordl_internal_get_noteLinesCount();

  constexpr void __cordl_internal_set_beatsPerMinute(float_t value);

  constexpr void __cordl_internal_set_noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set_noteJumpValue(float_t value);

  constexpr void __cordl_internal_set_noteJumpValueType(::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType value);

  constexpr void __cordl_internal_set_noteLinesCount(int32_t value);

  /// @brief Method .ctor, addr 0x3ae4e14, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed, ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType noteJumpValueType,
                    float_t noteJumpValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectSpawnController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectSpawnController_InitData(BeatmapObjectSpawnController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectSpawnController_InitData(BeatmapObjectSpawnController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4071 };

  /// @brief Field beatsPerMinute, offset: 0x10, size: 0x4, def value: None
  float_t ___beatsPerMinute;

  /// @brief Field noteLinesCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___noteLinesCount;

  /// @brief Field noteJumpMovementSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ___noteJumpMovementSpeed;

  /// @brief Field noteJumpValueType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType ___noteJumpValueType;

  /// @brief Field noteJumpValue, offset: 0x20, size: 0x4, def value: None
  float_t ___noteJumpValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController_InitData, ___beatsPerMinute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController_InitData, ___noteLinesCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController_InitData, ___noteJumpMovementSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController_InitData, ___noteJumpValueType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController_InitData, ___noteJumpValue) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnController_InitData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectSpawnController
class CORDL_TYPE BeatmapObjectSpawnController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::BeatmapObjectSpawnController_InitData;

  /// @brief Field _beatmapCallbacksController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _beatmapObjectSpawnMovementData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnMovementData,
                      put = __cordl_internal_set__beatmapObjectSpawnMovementData)) ::GlobalNamespace::BeatmapObjectSpawnMovementData* _beatmapObjectSpawnMovementData;

  /// @brief Field _beatmapObjectSpawner, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawner, put = __cordl_internal_set__beatmapObjectSpawner)) ::GlobalNamespace::IBeatmapObjectSpawner* _beatmapObjectSpawner;

  /// @brief Field _disableSpawning, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__disableSpawning, put = __cordl_internal_set__disableSpawning)) bool _disableSpawning;

  /// @brief Field _initData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::BeatmapObjectSpawnController_InitData* _initData;

  /// @brief Field _isInitialized, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _jumpOffsetYProvider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpOffsetYProvider, put = __cordl_internal_set__jumpOffsetYProvider)) ::GlobalNamespace::IJumpOffsetYProvider* _jumpOffsetYProvider;

  /// @brief Field _noteDataCallbackWrapper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDataCallbackWrapper,
                      put = __cordl_internal_set__noteDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _noteDataCallbackWrapper;

  /// @brief Field _obstacleDataCallbackWrapper, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleDataCallbackWrapper,
                      put = __cordl_internal_set__obstacleDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _obstacleDataCallbackWrapper;

  /// @brief Field _sliderDataCallbackWrapper, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderDataCallbackWrapper,
                      put = __cordl_internal_set__sliderDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _sliderDataCallbackWrapper;

  /// @brief Field _variableMovementDataProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  __declspec(property(get = get_beatmapObjectSpawnMovementData)) ::GlobalNamespace::BeatmapObjectSpawnMovementData* beatmapObjectSpawnMovementData;

  /// @brief Field didInitEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didInitEvent, put = __cordl_internal_set_didInitEvent)) ::System::Action* didInitEvent;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_noteLinesCount)) int32_t noteLinesCount;

  __declspec(property(get = get_noteLinesDistance)) float_t noteLinesDistance;

  __declspec(property(get = get_verticalLayerDistance)) float_t verticalLayerDistance;

  /// @brief Method HandleNoteDataCallback, addr 0x3ae479c, size 0xf8, virtual false, abstract: false, final false
  inline void HandleNoteDataCallback(::GlobalNamespace::NoteData* noteData);

  /// @brief Method HandleObstacleDataCallback, addr 0x3ae4958, size 0xf0, virtual false, abstract: false, final false
  inline void HandleObstacleDataCallback(::GlobalNamespace::ObstacleData* obstacleData);

  /// @brief Method HandleSliderDataCallback, addr 0x3ae4b94, size 0xe8, virtual false, abstract: false, final false
  inline void HandleSliderDataCallback(::GlobalNamespace::SliderData* sliderNoteData);

  static inline ::GlobalNamespace::BeatmapObjectSpawnController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ae4748, size 0x54, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ae3f54, size 0x7e0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopSpawning, addr 0x3ae4d50, size 0xc, virtual false, abstract: false, final false
  inline void StopSpawning();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData* const& __cordl_internal_get__beatmapObjectSpawnMovementData() const;

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData*& __cordl_internal_get__beatmapObjectSpawnMovementData();

  constexpr ::GlobalNamespace::IBeatmapObjectSpawner* const& __cordl_internal_get__beatmapObjectSpawner() const;

  constexpr ::GlobalNamespace::IBeatmapObjectSpawner*& __cordl_internal_get__beatmapObjectSpawner();

  constexpr bool const& __cordl_internal_get__disableSpawning() const;

  constexpr bool& __cordl_internal_get__disableSpawning();

  constexpr ::GlobalNamespace::BeatmapObjectSpawnController_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::BeatmapObjectSpawnController_InitData*& __cordl_internal_get__initData();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& __cordl_internal_get__jumpOffsetYProvider() const;

  constexpr ::GlobalNamespace::IJumpOffsetYProvider*& __cordl_internal_get__jumpOffsetYProvider();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__noteDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__noteDataCallbackWrapper();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__obstacleDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__obstacleDataCallbackWrapper();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__sliderDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__sliderDataCallbackWrapper();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr ::System::Action* const& __cordl_internal_get_didInitEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didInitEvent();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawner(::GlobalNamespace::IBeatmapObjectSpawner* value);

  constexpr void __cordl_internal_set__disableSpawning(bool value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::BeatmapObjectSpawnController_InitData* value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value);

  constexpr void __cordl_internal_set__noteDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__obstacleDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__sliderDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  constexpr void __cordl_internal_set_didInitEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3ae4d5c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInitEvent, addr 0x3ae3e1c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method get_beatmapObjectSpawnMovementData, addr 0x3ae3d98, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* get_beatmapObjectSpawnMovementData();

  /// @brief Method get_isInitialized, addr 0x3ae3e14, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_noteLinesCount, addr 0x3ae3da0, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_noteLinesCount();

  /// @brief Method get_noteLinesDistance, addr 0x3ae3dbc, size 0x20, virtual false, abstract: false, final false
  inline float_t get_noteLinesDistance();

  /// @brief Method get_verticalLayerDistance, addr 0x3ae3de8, size 0x20, virtual false, abstract: false, final false
  inline float_t get_verticalLayerDistance();

  /// @brief Method remove_didInitEvent, addr 0x3ae3eb8, size 0x9c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4072 };

  /// @brief Field _beatmapObjectSpawnMovementData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnMovementData* ____beatmapObjectSpawnMovementData;

  /// @brief Field _beatmapCallbacksController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapObjectSpawner, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawner* ____beatmapObjectSpawner;

  /// @brief Field _jumpOffsetYProvider, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IJumpOffsetYProvider* ____jumpOffsetYProvider;

  /// @brief Field _variableMovementDataProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _beatmapData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _initData, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnController_InitData* ____initData;

  /// @brief Field didInitEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___didInitEvent;

  /// @brief Field _disableSpawning, offset: 0x60, size: 0x1, def value: None
  bool ____disableSpawning;

  /// @brief Field _isInitialized, offset: 0x61, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _obstacleDataCallbackWrapper, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____obstacleDataCallbackWrapper;

  /// @brief Field _noteDataCallbackWrapper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____noteDataCallbackWrapper;

  /// @brief Field _sliderDataCallbackWrapper, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____sliderDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____beatmapObjectSpawnMovementData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____beatmapCallbacksController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____beatmapObjectSpawner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____jumpOffsetYProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____variableMovementDataProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____beatmapData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____initData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ___didInitEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____disableSpawning) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____isInitialized) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____obstacleDataCallbackWrapper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____noteDataCallbackWrapper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnController, ____sliderDataCallbackWrapper) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnController, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnController*, "", "BeatmapObjectSpawnController");
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnController_InitData*, "", "BeatmapObjectSpawnController/InitData");
