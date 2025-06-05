#pragma once
// IWYU pragma private; include "GlobalNamespace/VariableMovementDataProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VariableMovementDataProvider)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct BeatmapObjectSpawnMovementData_NoteJumpValueType;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class NoteJumpSpeedEventData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
struct VariableMovementDataProvider_InterpolationData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VariableMovementDataProvider;
}
namespace GlobalNamespace {
struct VariableMovementDataProvider_InterpolationData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VariableMovementDataProvider);
MARK_VAL_T(::GlobalNamespace::VariableMovementDataProvider_InterpolationData);
// Dependencies EaseType
namespace GlobalNamespace {
// Is value type: true
// CS Name: VariableMovementDataProvider/InterpolationData
struct CORDL_TYPE VariableMovementDataProvider_InterpolationData {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x3ae56a0, size 0x8c, virtual false, abstract: false, final false
  inline float_t GetValue(float_t time);

  /// @brief Method SetValues, addr 0x3ae5430, size 0x14, virtual false, abstract: false, final false
  inline void SetValues(float_t fromValue, float_t toValue, float_t fromTime, float_t toTime, ::GlobalNamespace::EaseType easeType);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VariableMovementDataProvider_InterpolationData();

  // Ctor Parameters [CppParam { name: "_fromValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_toValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "_fromTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_easeType", ty:
  // "::GlobalNamespace::EaseType", modifiers: "", def_value: None }]
  constexpr VariableMovementDataProvider_InterpolationData(float_t _fromValue, float_t _toValue, float_t _fromTime, float_t _duration, ::GlobalNamespace::EaseType _easeType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4087 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field _fromValue, offset: 0x0, size: 0x4, def value: None
  float_t _fromValue;

  /// @brief Field _toValue, offset: 0x4, size: 0x4, def value: None
  float_t _toValue;

  /// @brief Field _fromTime, offset: 0x8, size: 0x4, def value: None
  float_t _fromTime;

  /// @brief Field _duration, offset: 0xc, size: 0x4, def value: None
  float_t _duration;

  /// @brief Field _easeType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::EaseType _easeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider_InterpolationData, _fromValue) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider_InterpolationData, _toValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider_InterpolationData, _fromTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider_InterpolationData, _duration) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider_InterpolationData, _easeType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VariableMovementDataProvider_InterpolationData, 0x14>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapObjectSpawnMovementData::NoteJumpValueType, IVariableMovementDataProvider, System.IDisposable, System.Object, UnityEngine.Vector3,
// VariableMovementDataProvider::InterpolationData
namespace GlobalNamespace {
// Is value type: false
// CS Name: VariableMovementDataProvider
class CORDL_TYPE VariableMovementDataProvider : public ::System::Object {
public:
  // Declarations
  using InterpolationData = ::GlobalNamespace::VariableMovementDataProvider_InterpolationData;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _centerPosition, offset 0x88, size 0xc
  __declspec(property(get = __cordl_internal_get__centerPosition, put = __cordl_internal_set__centerPosition)) ::UnityEngine::Vector3 _centerPosition;

  /// @brief Field _forwardVector, offset 0x94, size 0xc
  __declspec(property(get = __cordl_internal_get__forwardVector, put = __cordl_internal_set__forwardVector)) ::UnityEngine::Vector3 _forwardVector;

  /// @brief Field _halfJumpDistance, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__halfJumpDistance, put = __cordl_internal_set__halfJumpDistance)) float_t _halfJumpDistance;

  /// @brief Field _halfJumpDuration, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__halfJumpDuration, put = __cordl_internal_set__halfJumpDuration)) float_t _halfJumpDuration;

  /// @brief Field _halfJumpDurationInBeats, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__halfJumpDurationInBeats, put = __cordl_internal_set__halfJumpDurationInBeats)) float_t _halfJumpDurationInBeats;

  /// @brief Field _initNoteJumpMovementSpeed, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__initNoteJumpMovementSpeed, put = __cordl_internal_set__initNoteJumpMovementSpeed)) float_t _initNoteJumpMovementSpeed;

  /// @brief Field _initOneBeatDuration, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__initOneBeatDuration, put = __cordl_internal_set__initOneBeatDuration)) float_t _initOneBeatDuration;

  /// @brief Field _jumpDistance, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpDistance, put = __cordl_internal_set__jumpDistance)) float_t _jumpDistance;

  /// @brief Field _jumpDuration, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpDuration, put = __cordl_internal_set__jumpDuration)) float_t _jumpDuration;

  /// @brief Field _jumpEndPosition, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get__jumpEndPosition, put = __cordl_internal_set__jumpEndPosition)) ::UnityEngine::Vector3 _jumpEndPosition;

  /// @brief Field _moveEndPosition, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get__moveEndPosition, put = __cordl_internal_set__moveEndPosition)) ::UnityEngine::Vector3 _moveEndPosition;

  /// @brief Field _moveStartPosition, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__moveStartPosition, put = __cordl_internal_set__moveStartPosition)) ::UnityEngine::Vector3 _moveStartPosition;

  /// @brief Field _njsDataCallbackWrapper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__njsDataCallbackWrapper, put = __cordl_internal_set__njsDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _njsDataCallbackWrapper;

  /// @brief Field _noteJumpMovementSpeed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpMovementSpeed, put = __cordl_internal_set__noteJumpMovementSpeed)) float_t _noteJumpMovementSpeed;

  /// @brief Field _noteJumpValueType, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpValueType,
                      put = __cordl_internal_set__noteJumpValueType)) ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType _noteJumpValueType;

  /// @brief Field _playerTransforms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _prevNoteJumpMovementSpeed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__prevNoteJumpMovementSpeed, put = __cordl_internal_set__prevNoteJumpMovementSpeed)) float_t _prevNoteJumpMovementSpeed;

  /// @brief Field _relativeNoteJumpSpeedInterpolation, offset 0xa0, size 0x14
  __declspec(property(get = __cordl_internal_get__relativeNoteJumpSpeedInterpolation,
                      put = __cordl_internal_set__relativeNoteJumpSpeedInterpolation)) ::GlobalNamespace::VariableMovementDataProvider_InterpolationData _relativeNoteJumpSpeedInterpolation;

  /// @brief Field _spawnAheadTime, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__spawnAheadTime, put = __cordl_internal_set__spawnAheadTime)) float_t _spawnAheadTime;

  /// @brief Field _targetNoteJumpMovementSpeed, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__targetNoteJumpMovementSpeed, put = __cordl_internal_set__targetNoteJumpMovementSpeed)) float_t _targetNoteJumpMovementSpeed;

  /// @brief Field _waitingDuration, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__waitingDuration, put = __cordl_internal_set__waitingDuration)) float_t _waitingDuration;

  /// @brief Field <wasUpdatedThisFrame>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__wasUpdatedThisFrame_k__BackingField, put = __cordl_internal_set__wasUpdatedThisFrame_k__BackingField)) bool _wasUpdatedThisFrame_k__BackingField;

  __declspec(property(get = get_halfJumpDuration)) float_t halfJumpDuration;

  __declspec(property(get = get_jumpDistance)) float_t jumpDistance;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpEndPosition)) ::UnityEngine::Vector3 jumpEndPosition;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_moveEndPosition)) ::UnityEngine::Vector3 moveEndPosition;

  __declspec(property(get = get_moveStartPosition)) ::UnityEngine::Vector3 moveStartPosition;

  __declspec(property(get = get_noteJumpSpeed)) float_t noteJumpSpeed;

  __declspec(property(get = get_spawnAheadTime)) float_t spawnAheadTime;

  __declspec(property(get = get_targetNoteJumpSpeed)) float_t targetNoteJumpSpeed;

  __declspec(property(get = get_waitingDuration)) float_t waitingDuration;

  __declspec(property(get = get_wasUpdatedThisFrame, put = set_wasUpdatedThisFrame)) bool wasUpdatedThisFrame;

  /// @brief Convert operator to "::GlobalNamespace::IVariableMovementDataProvider"
  constexpr operator ::GlobalNamespace::IVariableMovementDataProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CalculateCurrentNoteJumpGravity, addr 0x3ae31e8, size 0x14, virtual true, abstract: false, final true
  inline float_t CalculateCurrentNoteJumpGravity(float_t gravityBase);

  /// @brief Method Dispose, addr 0x3ae5260, size 0xa8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleNoteJumpMovementSpeedEvent, addr 0x3ae572c, size 0xc4, virtual false, abstract: false, final false
  inline void HandleNoteJumpMovementSpeedEvent(::GlobalNamespace::NoteJumpSpeedEventData* currentEventData);

  /// @brief Method Init, addr 0x3ae5308, size 0x128, virtual true, abstract: false, final true
  inline void Init(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t minRelativeNoteJumpSpeed, float_t bpm,
                   ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType noteJumpValueType, float_t noteJumpValue, ::UnityEngine::Vector3 centerPosition,
                   ::UnityEngine::Vector3 forwardVector);

  /// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset, addr 0x3ae55c8, size 0x90, virtual true, abstract: false, final true
  inline float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(float_t highestJumpPosY, float_t distanceFromPlayer);

  /// @brief Method ManualUpdate, addr 0x3ae5444, size 0x184, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t songTime);

  static inline ::GlobalNamespace::VariableMovementDataProvider* New_ctor(::GlobalNamespace::PlayerTransforms* playerTransforms,
                                                                          ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method NoteJumpGravityForLineLayerWithoutJumpOffset, addr 0x3ae5658, size 0x48, virtual false, abstract: false, final false
  inline float_t NoteJumpGravityForLineLayerWithoutJumpOffset(float_t highestJumpPosY, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer);

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__centerPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__centerPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__forwardVector() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__forwardVector();

  constexpr float_t const& __cordl_internal_get__halfJumpDistance() const;

  constexpr float_t& __cordl_internal_get__halfJumpDistance();

  constexpr float_t const& __cordl_internal_get__halfJumpDuration() const;

  constexpr float_t& __cordl_internal_get__halfJumpDuration();

  constexpr float_t const& __cordl_internal_get__halfJumpDurationInBeats() const;

  constexpr float_t& __cordl_internal_get__halfJumpDurationInBeats();

  constexpr float_t const& __cordl_internal_get__initNoteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get__initNoteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get__initOneBeatDuration() const;

  constexpr float_t& __cordl_internal_get__initOneBeatDuration();

  constexpr float_t const& __cordl_internal_get__jumpDistance() const;

  constexpr float_t& __cordl_internal_get__jumpDistance();

  constexpr float_t const& __cordl_internal_get__jumpDuration() const;

  constexpr float_t& __cordl_internal_get__jumpDuration();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__jumpEndPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__jumpEndPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__moveEndPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__moveEndPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__moveStartPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__moveStartPosition();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__njsDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__njsDataCallbackWrapper();

  constexpr float_t const& __cordl_internal_get__noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get__noteJumpMovementSpeed();

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType const& __cordl_internal_get__noteJumpValueType() const;

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType& __cordl_internal_get__noteJumpValueType();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr float_t const& __cordl_internal_get__prevNoteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get__prevNoteJumpMovementSpeed();

  constexpr ::GlobalNamespace::VariableMovementDataProvider_InterpolationData const& __cordl_internal_get__relativeNoteJumpSpeedInterpolation() const;

  constexpr ::GlobalNamespace::VariableMovementDataProvider_InterpolationData& __cordl_internal_get__relativeNoteJumpSpeedInterpolation();

  constexpr float_t const& __cordl_internal_get__spawnAheadTime() const;

  constexpr float_t& __cordl_internal_get__spawnAheadTime();

  constexpr float_t const& __cordl_internal_get__targetNoteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get__targetNoteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get__waitingDuration() const;

  constexpr float_t& __cordl_internal_get__waitingDuration();

  constexpr bool const& __cordl_internal_get__wasUpdatedThisFrame_k__BackingField() const;

  constexpr bool& __cordl_internal_get__wasUpdatedThisFrame_k__BackingField();

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__centerPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__forwardVector(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__halfJumpDistance(float_t value);

  constexpr void __cordl_internal_set__halfJumpDuration(float_t value);

  constexpr void __cordl_internal_set__halfJumpDurationInBeats(float_t value);

  constexpr void __cordl_internal_set__initNoteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set__initOneBeatDuration(float_t value);

  constexpr void __cordl_internal_set__jumpDistance(float_t value);

  constexpr void __cordl_internal_set__jumpDuration(float_t value);

  constexpr void __cordl_internal_set__jumpEndPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__moveEndPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__moveStartPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__njsDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set__noteJumpValueType(::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__prevNoteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set__relativeNoteJumpSpeedInterpolation(::GlobalNamespace::VariableMovementDataProvider_InterpolationData value);

  constexpr void __cordl_internal_set__spawnAheadTime(float_t value);

  constexpr void __cordl_internal_set__targetNoteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set__waitingDuration(float_t value);

  constexpr void __cordl_internal_set__wasUpdatedThisFrame_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3ae5140, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerTransforms* playerTransforms, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController);

  /// @brief Method get_halfJumpDuration, addr 0x3ae5074, size 0x8, virtual true, abstract: false, final true
  inline float_t get_halfJumpDuration();

  /// @brief Method get_jumpDistance, addr 0x3ae5064, size 0x8, virtual true, abstract: false, final true
  inline float_t get_jumpDistance();

  /// @brief Method get_jumpDuration, addr 0x3ae506c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpEndPosition, addr 0x3ae510c, size 0x34, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_jumpEndPosition();

  /// @brief Method get_moveDuration, addr 0x3ae507c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_moveDuration();

  /// @brief Method get_moveEndPosition, addr 0x3ae50d8, size 0x34, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_moveEndPosition();

  /// @brief Method get_moveStartPosition, addr 0x3ae50a4, size 0x34, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_moveStartPosition();

  /// @brief Method get_noteJumpSpeed, addr 0x3ae5094, size 0x8, virtual true, abstract: false, final true
  inline float_t get_noteJumpSpeed();

  /// @brief Method get_spawnAheadTime, addr 0x3ae5084, size 0x8, virtual true, abstract: false, final true
  inline float_t get_spawnAheadTime();

  /// @brief Method get_targetNoteJumpSpeed, addr 0x3ae509c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetNoteJumpSpeed();

  /// @brief Method get_waitingDuration, addr 0x3ae508c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_waitingDuration();

  /// @brief Method get_wasUpdatedThisFrame, addr 0x3ae5050, size 0x8, virtual true, abstract: false, final true
  inline bool get_wasUpdatedThisFrame();

  /// @brief Convert to "::GlobalNamespace::IVariableMovementDataProvider"
  constexpr ::GlobalNamespace::IVariableMovementDataProvider* i___GlobalNamespace__IVariableMovementDataProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_wasUpdatedThisFrame, addr 0x3ae5058, size 0xc, virtual false, abstract: false, final false
  inline void set_wasUpdatedThisFrame(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VariableMovementDataProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VariableMovementDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VariableMovementDataProvider(VariableMovementDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VariableMovementDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VariableMovementDataProvider(VariableMovementDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4088 };

  /// @brief Field kInitMoveSpeed offset 0xffffffff size 0x4
  static constexpr float_t kInitMoveSpeed{ static_cast<float_t>(200.0f) };

  /// @brief Field kMinNoteJumpMovementSpeed offset 0xffffffff size 0x4
  static constexpr float_t kMinNoteJumpMovementSpeed{ static_cast<float_t>(0.01f) };

  /// @brief Field kMoveDistance offset 0xffffffff size 0x4
  static constexpr float_t kMoveDistance{ static_cast<float_t>(100.0f) };

  /// @brief Field kMoveDuration offset 0xffffffff size 0x4
  static constexpr float_t kMoveDuration{ static_cast<float_t>(0.5f) };

  /// @brief Field <wasUpdatedThisFrame>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____wasUpdatedThisFrame_k__BackingField;

  /// @brief Field _playerTransforms, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _njsDataCallbackWrapper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____njsDataCallbackWrapper;

  /// @brief Field _targetNoteJumpMovementSpeed, offset: 0x30, size: 0x4, def value: None
  float_t ____targetNoteJumpMovementSpeed;

  /// @brief Field _noteJumpMovementSpeed, offset: 0x34, size: 0x4, def value: None
  float_t ____noteJumpMovementSpeed;

  /// @brief Field _prevNoteJumpMovementSpeed, offset: 0x38, size: 0x4, def value: None
  float_t ____prevNoteJumpMovementSpeed;

  /// @brief Field _jumpDistance, offset: 0x3c, size: 0x4, def value: None
  float_t ____jumpDistance;

  /// @brief Field _halfJumpDistance, offset: 0x40, size: 0x4, def value: None
  float_t ____halfJumpDistance;

  /// @brief Field _jumpDuration, offset: 0x44, size: 0x4, def value: None
  float_t ____jumpDuration;

  /// @brief Field _halfJumpDuration, offset: 0x48, size: 0x4, def value: None
  float_t ____halfJumpDuration;

  /// @brief Field _waitingDuration, offset: 0x4c, size: 0x4, def value: None
  float_t ____waitingDuration;

  /// @brief Field _moveStartPosition, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveStartPosition;

  /// @brief Field _moveEndPosition, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveEndPosition;

  /// @brief Field _jumpEndPosition, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____jumpEndPosition;

  /// @brief Field _noteJumpValueType, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType ____noteJumpValueType;

  /// @brief Field _halfJumpDurationInBeats, offset: 0x78, size: 0x4, def value: None
  float_t ____halfJumpDurationInBeats;

  /// @brief Field _initOneBeatDuration, offset: 0x7c, size: 0x4, def value: None
  float_t ____initOneBeatDuration;

  /// @brief Field _initNoteJumpMovementSpeed, offset: 0x80, size: 0x4, def value: None
  float_t ____initNoteJumpMovementSpeed;

  /// @brief Field _spawnAheadTime, offset: 0x84, size: 0x4, def value: None
  float_t ____spawnAheadTime;

  /// @brief Field _centerPosition, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____centerPosition;

  /// @brief Field _forwardVector, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____forwardVector;

  /// @brief Field _relativeNoteJumpSpeedInterpolation, offset: 0xa0, size: 0x14, def value: None
  ::GlobalNamespace::VariableMovementDataProvider_InterpolationData ____relativeNoteJumpSpeedInterpolation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____wasUpdatedThisFrame_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____playerTransforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____njsDataCallbackWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____targetNoteJumpMovementSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____noteJumpMovementSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____prevNoteJumpMovementSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____jumpDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____halfJumpDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____jumpDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____halfJumpDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____waitingDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____moveStartPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____moveEndPosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____jumpEndPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____noteJumpValueType) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____halfJumpDurationInBeats) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____initOneBeatDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____initNoteJumpMovementSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____spawnAheadTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____centerPosition) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____forwardVector) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VariableMovementDataProvider, ____relativeNoteJumpSpeedInterpolation) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VariableMovementDataProvider, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VariableMovementDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VariableMovementDataProvider*, "", "VariableMovementDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VariableMovementDataProvider_InterpolationData, "", "VariableMovementDataProvider/InterpolationData");
