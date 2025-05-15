#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleController)
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class ObstacleController_Pool;
}
namespace GlobalNamespace {
class ObstacleController__DissolveCoroutine_d__64;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class ObstacleMaterialSetter;
}
namespace GlobalNamespace {
struct ObstacleSpawnData;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class StretchableObstacle;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleController_Pool;
}
namespace GlobalNamespace {
class ObstacleController__DissolveCoroutine_d__64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleController);
MARK_REF_PTR_T(::GlobalNamespace::ObstacleController_Pool);
MARK_REF_PTR_T(::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleController/Pool
class CORDL_TYPE ObstacleController_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::ObstacleController>> {
public:
  // Declarations
  /// @brief Field _settingsManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  static inline ::GlobalNamespace::ObstacleController_Pool* New_ctor();

  /// @brief Method OnCreated, addr 0x3af204c, size 0xa0, virtual true, abstract: false, final false
  inline void OnCreated(::GlobalNamespace::ObstacleController* item);

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3af20ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleController_Pool(ObstacleController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleController_Pool(ObstacleController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4144 };

  /// @brief Field _settingsManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleController_Pool, ____settingsManager) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleController_Pool, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleController/<DissolveCoroutine>d__64
class CORDL_TYPE ObstacleController__DissolveCoroutine_d__64 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ObstacleController> __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3af2138, size 0xe4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3af221c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3af2224, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3af225c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3af2134, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ObstacleController> value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x3af1fcc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleController__DissolveCoroutine_d__64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController__DissolveCoroutine_d__64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleController__DissolveCoroutine_d__64(ObstacleController__DissolveCoroutine_d__64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController__DissolveCoroutine_d__64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleController__DissolveCoroutine_d__64(ObstacleController__DissolveCoroutine_d__64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4145 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleController> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64, ___duration) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatmapObjectController, ObstacleControllerBase, ObstacleSpawnData, UnityEngine.Bounds, UnityEngine.Color, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleController
class CORDL_TYPE ObstacleController : public ::GlobalNamespace::ObstacleControllerBase {
public:
  // Declarations
  using Pool = ::GlobalNamespace::ObstacleController_Pool;

  using _DissolveCoroutine_d__64 = ::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64;

  /// @brief Field _audioTimeSyncController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _bounds, offset 0xa4, size 0x18
  __declspec(property(get = __cordl_internal_get__bounds, put = __cordl_internal_set__bounds)) ::UnityEngine::Bounds _bounds;

  /// @brief Field _color, offset 0xdc, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _dissolving, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get__dissolving, put = __cordl_internal_set__dissolving)) bool _dissolving;

  /// @brief Field _endDistanceOffset, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__endDistanceOffset, put = __cordl_internal_set__endDistanceOffset)) float_t _endDistanceOffset;

  /// @brief Field _endPos, offset 0x104, size 0xc
  __declspec(property(get = __cordl_internal_get__endPos, put = __cordl_internal_set__endPos)) ::UnityEngine::Vector3 _endPos;

  /// @brief Field _finishMovementTime, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get__finishMovementTime, put = __cordl_internal_set__finishMovementTime)) float_t _finishMovementTime;

  /// @brief Field _height, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__height, put = __cordl_internal_set__height)) float_t _height;

  /// @brief Field _length, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) float_t _length;

  /// @brief Field _midPos, offset 0xf8, size 0xc
  __declspec(property(get = __cordl_internal_get__midPos, put = __cordl_internal_set__midPos)) ::UnityEngine::Vector3 _midPos;

  /// @brief Field _obstacleData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleData, put = __cordl_internal_set__obstacleData)) ::GlobalNamespace::ObstacleData* _obstacleData;

  /// @brief Field _obstacleDuration, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleDuration, put = __cordl_internal_set__obstacleDuration)) float_t _obstacleDuration;

  /// @brief Field _obstacleMaterialSetter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleMaterialSetter, put = __cordl_internal_set__obstacleMaterialSetter)) ::UnityW<::GlobalNamespace::ObstacleMaterialSetter>
      _obstacleMaterialSetter;

  /// @brief Field _obstacleSpawnData, offset 0xc8, size 0x14
  __declspec(property(get = __cordl_internal_get__obstacleSpawnData, put = __cordl_internal_set__obstacleSpawnData)) ::GlobalNamespace::ObstacleSpawnData _obstacleSpawnData;

  /// @brief Field _passedAvoidedMarkReported, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__passedAvoidedMarkReported, put = __cordl_internal_set__passedAvoidedMarkReported)) bool _passedAvoidedMarkReported;

  /// @brief Field _passedAvoidedMarkTime, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__passedAvoidedMarkTime, put = __cordl_internal_set__passedAvoidedMarkTime)) float_t _passedAvoidedMarkTime;

  /// @brief Field _passedThreeQuartersOfJumpDurationReported, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__passedThreeQuartersOfJumpDurationReported,
                      put = __cordl_internal_set__passedThreeQuartersOfJumpDurationReported)) bool _passedThreeQuartersOfJumpDurationReported;

  /// @brief Field _passedThreeQuartersOfJumpDurationTime, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get__passedThreeQuartersOfJumpDurationTime,
                      put = __cordl_internal_set__passedThreeQuartersOfJumpDurationTime)) float_t _passedThreeQuartersOfJumpDurationTime;

  /// @brief Field _startPos, offset 0xec, size 0xc
  __declspec(property(get = __cordl_internal_get__startPos, put = __cordl_internal_set__startPos)) ::UnityEngine::Vector3 _startPos;

  /// @brief Field _startTimeOffset, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get__startTimeOffset, put = __cordl_internal_set__startTimeOffset)) float_t _startTimeOffset;

  /// @brief Field _stretchableObstacle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__stretchableObstacle, put = __cordl_internal_set__stretchableObstacle)) ::UnityW<::GlobalNamespace::StretchableObstacle> _stretchableObstacle;

  /// @brief Field _visualWrappers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__visualWrappers,
                      put = __cordl_internal_set__visualWrappers)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _visualWrappers;

  /// @brief Field _width, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__width, put = __cordl_internal_set__width)) float_t _width;

  /// @brief Field _worldRotation, offset 0x120, size 0x10
  __declspec(property(get = __cordl_internal_get__worldRotation, put = __cordl_internal_set__worldRotation)) ::UnityEngine::Quaternion _worldRotation;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  /// @brief Field didDissolveEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didDissolveEvent, put = __cordl_internal_set_didDissolveEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* didDissolveEvent;

  /// @brief Field didUpdateProgress, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didUpdateProgress,
                      put = __cordl_internal_set_didUpdateProgress)) ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* didUpdateProgress;

  /// @brief Field finishedMovementEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedMovementEvent,
                      put = __cordl_internal_set_finishedMovementEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* finishedMovementEvent;

  __declspec(property(get = get_hasPassedAvoidedMark)) bool hasPassedAvoidedMark;

  __declspec(property(get = get_height)) float_t height;

  __declspec(property(get = get_length)) float_t length;

  __declspec(property(get = get_manualUvOffset)) float_t manualUvOffset;

  __declspec(property(get = get_obstacleData)) ::GlobalNamespace::ObstacleData* obstacleData;

  /// @brief Field passedAvoidedMarkEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_passedAvoidedMarkEvent,
                      put = __cordl_internal_set_passedAvoidedMarkEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* passedAvoidedMarkEvent;

  /// @brief Field passedThreeQuartersOfJumpDurationEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_passedThreeQuartersOfJumpDurationEvent,
                      put = __cordl_internal_set_passedThreeQuartersOfJumpDurationEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* passedThreeQuartersOfJumpDurationEvent;

  __declspec(property(get = get_width)) float_t width;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectController*() noexcept;

  /// @brief Method Dissolve, addr 0x3af1ff4, size 0x38, virtual true, abstract: false, final true
  inline void Dissolve(float_t duration);

  /// @brief Method DissolveCoroutine, addr 0x3af1f5c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t duration);

  /// @brief Method GetObstacleLength, addr 0x3af1e28, size 0x134, virtual false, abstract: false, final false
  inline float_t GetObstacleLength();

  /// @brief Method GetPosForTime, addr 0x3af1b98, size 0x290, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosForTime(float_t time);

  /// @brief Method Hide, addr 0x3adfc58, size 0x6c, virtual true, abstract: false, final true
  inline void Hide(bool hide);

  /// @brief Method Init, addr 0x3af1668, size 0x4a8, virtual true, abstract: false, final false
  inline void Init(::GlobalNamespace::ObstacleData* obstacleData, ::ByRef<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData);

  /// @brief Method InitGraphics, addr 0x3af1b10, size 0x48, virtual false, abstract: false, final false
  inline void InitGraphics(::BeatSaber::Settings::Settings settings);

  /// @brief Method ManualUpdate, addr 0x3adf44c, size 0x80c, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::ObstacleController* New_ctor();

  /// @brief Method Pause, addr 0x3af202c, size 0x10, virtual true, abstract: false, final true
  inline void Pause(bool pause);

  /// @brief Method Update, addr 0x3af1b94, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get__bounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get__bounds();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr bool const& __cordl_internal_get__dissolving() const;

  constexpr bool& __cordl_internal_get__dissolving();

  constexpr float_t const& __cordl_internal_get__endDistanceOffset() const;

  constexpr float_t& __cordl_internal_get__endDistanceOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__endPos();

  constexpr float_t const& __cordl_internal_get__finishMovementTime() const;

  constexpr float_t& __cordl_internal_get__finishMovementTime();

  constexpr float_t const& __cordl_internal_get__height() const;

  constexpr float_t& __cordl_internal_get__height();

  constexpr float_t const& __cordl_internal_get__length() const;

  constexpr float_t& __cordl_internal_get__length();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__midPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__midPos();

  constexpr ::GlobalNamespace::ObstacleData* const& __cordl_internal_get__obstacleData() const;

  constexpr ::GlobalNamespace::ObstacleData*& __cordl_internal_get__obstacleData();

  constexpr float_t const& __cordl_internal_get__obstacleDuration() const;

  constexpr float_t& __cordl_internal_get__obstacleDuration();

  constexpr ::UnityW<::GlobalNamespace::ObstacleMaterialSetter> const& __cordl_internal_get__obstacleMaterialSetter() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleMaterialSetter>& __cordl_internal_get__obstacleMaterialSetter();

  constexpr ::GlobalNamespace::ObstacleSpawnData const& __cordl_internal_get__obstacleSpawnData() const;

  constexpr ::GlobalNamespace::ObstacleSpawnData& __cordl_internal_get__obstacleSpawnData();

  constexpr bool const& __cordl_internal_get__passedAvoidedMarkReported() const;

  constexpr bool& __cordl_internal_get__passedAvoidedMarkReported();

  constexpr float_t const& __cordl_internal_get__passedAvoidedMarkTime() const;

  constexpr float_t& __cordl_internal_get__passedAvoidedMarkTime();

  constexpr bool const& __cordl_internal_get__passedThreeQuartersOfJumpDurationReported() const;

  constexpr bool& __cordl_internal_get__passedThreeQuartersOfJumpDurationReported();

  constexpr float_t const& __cordl_internal_get__passedThreeQuartersOfJumpDurationTime() const;

  constexpr float_t& __cordl_internal_get__passedThreeQuartersOfJumpDurationTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos();

  constexpr float_t const& __cordl_internal_get__startTimeOffset() const;

  constexpr float_t& __cordl_internal_get__startTimeOffset();

  constexpr ::UnityW<::GlobalNamespace::StretchableObstacle> const& __cordl_internal_get__stretchableObstacle() const;

  constexpr ::UnityW<::GlobalNamespace::StretchableObstacle>& __cordl_internal_get__stretchableObstacle();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__visualWrappers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__visualWrappers();

  constexpr float_t const& __cordl_internal_get__width() const;

  constexpr float_t& __cordl_internal_get__width();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__worldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__worldRotation();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& __cordl_internal_get_didDissolveEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_didDissolveEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* const& __cordl_internal_get_didUpdateProgress() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*& __cordl_internal_get_didUpdateProgress();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& __cordl_internal_get_finishedMovementEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_finishedMovementEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& __cordl_internal_get_passedAvoidedMarkEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_passedAvoidedMarkEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& __cordl_internal_get_passedThreeQuartersOfJumpDurationEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_passedThreeQuartersOfJumpDurationEvent();

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__bounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__dissolving(bool value);

  constexpr void __cordl_internal_set__endDistanceOffset(float_t value);

  constexpr void __cordl_internal_set__endPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__finishMovementTime(float_t value);

  constexpr void __cordl_internal_set__height(float_t value);

  constexpr void __cordl_internal_set__length(float_t value);

  constexpr void __cordl_internal_set__midPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__obstacleData(::GlobalNamespace::ObstacleData* value);

  constexpr void __cordl_internal_set__obstacleDuration(float_t value);

  constexpr void __cordl_internal_set__obstacleMaterialSetter(::UnityW<::GlobalNamespace::ObstacleMaterialSetter> value);

  constexpr void __cordl_internal_set__obstacleSpawnData(::GlobalNamespace::ObstacleSpawnData value);

  constexpr void __cordl_internal_set__passedAvoidedMarkReported(bool value);

  constexpr void __cordl_internal_set__passedAvoidedMarkTime(float_t value);

  constexpr void __cordl_internal_set__passedThreeQuartersOfJumpDurationReported(bool value);

  constexpr void __cordl_internal_set__passedThreeQuartersOfJumpDurationTime(float_t value);

  constexpr void __cordl_internal_set__startPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startTimeOffset(float_t value);

  constexpr void __cordl_internal_set__stretchableObstacle(::UnityW<::GlobalNamespace::StretchableObstacle> value);

  constexpr void __cordl_internal_set__visualWrappers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__width(float_t value);

  constexpr void __cordl_internal_set__worldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value);

  constexpr void __cordl_internal_set_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_passedThreeQuartersOfJumpDurationEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method .ctor, addr 0x3af203c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didDissolveEvent, addr 0x3ae0a80, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_didUpdateProgress, addr 0x3af14c0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value);

  /// @brief Method add_finishedMovementEvent, addr 0x3ae0870, size 0xb0, virtual false, abstract: false, final false
  inline void add_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_passedAvoidedMarkEvent, addr 0x3ae09d0, size 0xb0, virtual false, abstract: false, final false
  inline void add_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_passedThreeQuartersOfJumpDurationEvent, addr 0x3ae0920, size 0xb0, virtual false, abstract: false, final false
  inline void add_passedThreeQuartersOfJumpDurationEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method get_bounds, addr 0x3af1620, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_color, addr 0x3af165c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_hasPassedAvoidedMark, addr 0x3af163c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasPassedAvoidedMark();

  /// @brief Method get_height, addr 0x3af164c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_height();

  /// @brief Method get_length, addr 0x3af1654, size 0x8, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_manualUvOffset, addr 0x3af1210, size 0xa0, virtual false, abstract: false, final false
  inline float_t get_manualUvOffset();

  /// @brief Method get_obstacleData, addr 0x3af1634, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleData* get_obstacleData();

  /// @brief Method get_width, addr 0x3af1644, size 0x8, virtual false, abstract: false, final false
  inline float_t get_width();

  /// @brief Convert to "::GlobalNamespace::IBeatmapObjectController"
  constexpr ::GlobalNamespace::IBeatmapObjectController* i___GlobalNamespace__IBeatmapObjectController() noexcept;

  /// @brief Method remove_didDissolveEvent, addr 0x3ae0e88, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_didUpdateProgress, addr 0x3af1570, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value);

  /// @brief Method remove_finishedMovementEvent, addr 0x3ae0c78, size 0xb0, virtual false, abstract: false, final false
  inline void remove_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_passedAvoidedMarkEvent, addr 0x3ae0dd8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_passedThreeQuartersOfJumpDurationEvent, addr 0x3ae0d28, size 0xb0, virtual false, abstract: false, final false
  inline void remove_passedThreeQuartersOfJumpDurationEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleController(ObstacleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleController(ObstacleController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4146 };

  /// @brief Field kAvoidMarkTimeOffset offset 0xffffffff size 0x4
  static constexpr float_t kAvoidMarkTimeOffset{ static_cast<float_t>(0.15f) };

  /// @brief Field _stretchableObstacle, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StretchableObstacle> ____stretchableObstacle;

  /// @brief Field _endDistanceOffset, offset: 0x40, size: 0x4, def value: None
  float_t ____endDistanceOffset;

  /// @brief Field _visualWrappers, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____visualWrappers;

  /// @brief Field _obstacleMaterialSetter, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleMaterialSetter> ____obstacleMaterialSetter;

  /// @brief Field _audioTimeSyncController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _colorManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field finishedMovementEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___finishedMovementEvent;

  /// @brief Field passedThreeQuartersOfJumpDurationEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___passedThreeQuartersOfJumpDurationEvent;

  /// @brief Field passedAvoidedMarkEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___passedAvoidedMarkEvent;

  /// @brief Field didDissolveEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___didDissolveEvent;

  /// @brief Field didUpdateProgress, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* ___didUpdateProgress;

  /// @brief Field _width, offset: 0x90, size: 0x4, def value: None
  float_t ____width;

  /// @brief Field _height, offset: 0x94, size: 0x4, def value: None
  float_t ____height;

  /// @brief Field _length, offset: 0x98, size: 0x4, def value: None
  float_t ____length;

  /// @brief Field _obstacleDuration, offset: 0x9c, size: 0x4, def value: None
  float_t ____obstacleDuration;

  /// @brief Field _passedThreeQuartersOfJumpDurationReported, offset: 0xa0, size: 0x1, def value: None
  bool ____passedThreeQuartersOfJumpDurationReported;

  /// @brief Field _passedAvoidedMarkReported, offset: 0xa1, size: 0x1, def value: None
  bool ____passedAvoidedMarkReported;

  /// @brief Field _bounds, offset: 0xa4, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  /// @brief Field _dissolving, offset: 0xbc, size: 0x1, def value: None
  bool ____dissolving;

  /// @brief Field _obstacleData, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::ObstacleData* ____obstacleData;

  /// @brief Field _obstacleSpawnData, offset: 0xc8, size: 0x14, def value: None
  ::GlobalNamespace::ObstacleSpawnData ____obstacleSpawnData;

  /// @brief Field _color, offset: 0xdc, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _startPos, offset: 0xec, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _midPos, offset: 0xf8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____midPos;

  /// @brief Field _endPos, offset: 0x104, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPos;

  /// @brief Field _startTimeOffset, offset: 0x110, size: 0x4, def value: None
  float_t ____startTimeOffset;

  /// @brief Field _passedThreeQuartersOfJumpDurationTime, offset: 0x114, size: 0x4, def value: None
  float_t ____passedThreeQuartersOfJumpDurationTime;

  /// @brief Field _passedAvoidedMarkTime, offset: 0x118, size: 0x4, def value: None
  float_t ____passedAvoidedMarkTime;

  /// @brief Field _finishMovementTime, offset: 0x11c, size: 0x4, def value: None
  float_t ____finishMovementTime;

  /// @brief Field _worldRotation, offset: 0x120, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleController, ____stretchableObstacle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____endDistanceOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____visualWrappers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____obstacleMaterialSetter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____audioTimeSyncController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____colorManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___finishedMovementEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___passedThreeQuartersOfJumpDurationEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___passedAvoidedMarkEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___didDissolveEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___didUpdateProgress) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____width) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____height) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____length) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____obstacleDuration) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedThreeQuartersOfJumpDurationReported) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedAvoidedMarkReported) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____bounds) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____dissolving) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____obstacleData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____obstacleSpawnData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____color) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____startPos) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____midPos) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____endPos) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____startTimeOffset) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedThreeQuartersOfJumpDurationTime) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedAvoidedMarkTime) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____finishMovementTime) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____worldRotation) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleController, 0x130>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleController*, "", "ObstacleController");
NEED_NO_BOX(::GlobalNamespace::ObstacleController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleController_Pool*, "", "ObstacleController/Pool");
NEED_NO_BOX(::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleController__DissolveCoroutine_d__64*, "", "ObstacleController/<DissolveCoroutine>d__64");
