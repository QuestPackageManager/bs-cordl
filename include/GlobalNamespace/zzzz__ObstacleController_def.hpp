#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleController)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class StretchableObstacle;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace UnityEngine {
struct Bounds;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class __ObstacleController___DissolveCoroutine_d__65;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
class __ObstacleController___DissolveCoroutine_d__65;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleController);
MARK_REF_PTR_T(::GlobalNamespace::__ObstacleController__Pool);
MARK_REF_PTR_T(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65);
// Type: ::ObstacleController
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10092)), TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(4914)),
// TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(10179))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4913)) CS Name: ::ObstacleController*
class CORDL_TYPE ObstacleController : public ::GlobalNamespace::ObstacleControllerBase {
public:
  // Declarations
  using _DissolveCoroutine_d__65 = ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65;

  using Pool = ::GlobalNamespace::__ObstacleController__Pool;

  /// @brief Field _stretchableObstacle, offset 0x28, size 0x8
  __declspec(property(get = __get__stretchableObstacle, put = __set__stretchableObstacle))::GlobalNamespace::StretchableObstacle* _stretchableObstacle;

  /// @brief Field _endDistanceOffset, offset 0x30, size 0x4
  __declspec(property(get = __get__endDistanceOffset, put = __set__endDistanceOffset)) float_t _endDistanceOffset;

  /// @brief Field _visualWrappers, offset 0x38, size 0x8
  __declspec(property(get = __get__visualWrappers, put = __set__visualWrappers))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _visualWrappers;

  /// @brief Field _playerTransforms, offset 0x40, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _audioTimeSyncController, offset 0x48, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _colorManager, offset 0x50, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field finishedMovementEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_finishedMovementEvent, put = __set_finishedMovementEvent))::System::Action_1<::GlobalNamespace::ObstacleController*>* finishedMovementEvent;

  /// @brief Field passedThreeQuartersOfMove2Event, offset 0x60, size 0x8
  __declspec(property(get = __get_passedThreeQuartersOfMove2Event,
                      put = __set_passedThreeQuartersOfMove2Event))::System::Action_1<::GlobalNamespace::ObstacleController*>* passedThreeQuartersOfMove2Event;

  /// @brief Field passedAvoidedMarkEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_passedAvoidedMarkEvent, put = __set_passedAvoidedMarkEvent))::System::Action_1<::GlobalNamespace::ObstacleController*>* passedAvoidedMarkEvent;

  /// @brief Field didDissolveEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_didDissolveEvent, put = __set_didDissolveEvent))::System::Action_1<::GlobalNamespace::ObstacleController*>* didDissolveEvent;

  /// @brief Field didUpdateProgress, offset 0x78, size 0x8
  __declspec(property(get = __get_didUpdateProgress, put = __set_didUpdateProgress))::System::Action_2<::GlobalNamespace::ObstacleController*, float_t>* didUpdateProgress;

  /// @brief Field _width, offset 0x80, size 0x4
  __declspec(property(get = __get__width, put = __set__width)) float_t _width;

  /// @brief Field _height, offset 0x84, size 0x4
  __declspec(property(get = __get__height, put = __set__height)) float_t _height;

  /// @brief Field _length, offset 0x88, size 0x4
  __declspec(property(get = __get__length, put = __set__length)) float_t _length;

  /// @brief Field _startPos, offset 0x8c, size 0xc
  __declspec(property(get = __get__startPos, put = __set__startPos))::UnityEngine::Vector3 _startPos;

  /// @brief Field _midPos, offset 0x98, size 0xc
  __declspec(property(get = __get__midPos, put = __set__midPos))::UnityEngine::Vector3 _midPos;

  /// @brief Field _endPos, offset 0xa4, size 0xc
  __declspec(property(get = __get__endPos, put = __set__endPos))::UnityEngine::Vector3 _endPos;

  /// @brief Field _move1Duration, offset 0xb0, size 0x4
  __declspec(property(get = __get__move1Duration, put = __set__move1Duration)) float_t _move1Duration;

  /// @brief Field _move2Duration, offset 0xb4, size 0x4
  __declspec(property(get = __get__move2Duration, put = __set__move2Duration)) float_t _move2Duration;

  /// @brief Field _startTimeOffset, offset 0xb8, size 0x4
  __declspec(property(get = __get__startTimeOffset, put = __set__startTimeOffset)) float_t _startTimeOffset;

  /// @brief Field _obstacleDuration, offset 0xbc, size 0x4
  __declspec(property(get = __get__obstacleDuration, put = __set__obstacleDuration)) float_t _obstacleDuration;

  /// @brief Field _passedThreeQuartersOfMove2Reported, offset 0xc0, size 0x1
  __declspec(property(get = __get__passedThreeQuartersOfMove2Reported, put = __set__passedThreeQuartersOfMove2Reported)) bool _passedThreeQuartersOfMove2Reported;

  /// @brief Field _passedAvoidedMarkReported, offset 0xc1, size 0x1
  __declspec(property(get = __get__passedAvoidedMarkReported, put = __set__passedAvoidedMarkReported)) bool _passedAvoidedMarkReported;

  /// @brief Field _passedAvoidedMarkTime, offset 0xc4, size 0x4
  __declspec(property(get = __get__passedAvoidedMarkTime, put = __set__passedAvoidedMarkTime)) float_t _passedAvoidedMarkTime;

  /// @brief Field _finishMovementTime, offset 0xc8, size 0x4
  __declspec(property(get = __get__finishMovementTime, put = __set__finishMovementTime)) float_t _finishMovementTime;

  /// @brief Field _bounds, offset 0xcc, size 0x18
  __declspec(property(get = __get__bounds, put = __set__bounds))::UnityEngine::Bounds _bounds;

  /// @brief Field _dissolving, offset 0xe4, size 0x1
  __declspec(property(get = __get__dissolving, put = __set__dissolving)) bool _dissolving;

  /// @brief Field _obstacleData, offset 0xe8, size 0x8
  __declspec(property(get = __get__obstacleData, put = __set__obstacleData))::GlobalNamespace::ObstacleData* _obstacleData;

  /// @brief Field _color, offset 0xf0, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _worldRotation, offset 0x100, size 0x10
  __declspec(property(get = __get__worldRotation, put = __set__worldRotation))::UnityEngine::Quaternion _worldRotation;

  /// @brief Field _inverseWorldRotation, offset 0x110, size 0x10
  __declspec(property(get = __get__inverseWorldRotation, put = __set__inverseWorldRotation))::UnityEngine::Quaternion _inverseWorldRotation;

  __declspec(property(get = get_bounds))::UnityEngine::Bounds bounds;

  __declspec(property(get = get_obstacleData))::GlobalNamespace::ObstacleData* obstacleData;

  __declspec(property(get = get_hasPassedAvoidedMark)) bool hasPassedAvoidedMark;

  __declspec(property(get = get_move1Duration)) float_t move1Duration;

  __declspec(property(get = get_move2Duration)) float_t move2Duration;

  __declspec(property(get = get_width)) float_t width;

  __declspec(property(get = get_height)) float_t height;

  __declspec(property(get = get_length)) float_t length;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectController*() noexcept;

  constexpr ::GlobalNamespace::StretchableObstacle*& __get__stretchableObstacle();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StretchableObstacle*> const& __get__stretchableObstacle() const;

  constexpr void __set__stretchableObstacle(::GlobalNamespace::StretchableObstacle* value);

  constexpr float_t& __get__endDistanceOffset();

  constexpr float_t const& __get__endDistanceOffset() const;

  constexpr void __set__endDistanceOffset(float_t value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__visualWrappers();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__visualWrappers() const;

  constexpr void __set__visualWrappers(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_finishedMovementEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_finishedMovementEvent() const;

  constexpr void __set_finishedMovementEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_passedThreeQuartersOfMove2Event();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_passedThreeQuartersOfMove2Event() const;

  constexpr void __set_passedThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_passedAvoidedMarkEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_passedAvoidedMarkEvent() const;

  constexpr void __set_passedAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_didDissolveEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_didDissolveEvent() const;

  constexpr void __set_didDissolveEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::ObstacleController*, float_t>*& __get_didUpdateProgress();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ObstacleController*, float_t>*> const& __get_didUpdateProgress() const;

  constexpr void __set_didUpdateProgress(::System::Action_2<::GlobalNamespace::ObstacleController*, float_t>* value);

  constexpr float_t& __get__width();

  constexpr float_t const& __get__width() const;

  constexpr void __set__width(float_t value);

  constexpr float_t& __get__height();

  constexpr float_t const& __get__height() const;

  constexpr void __set__height(float_t value);

  constexpr float_t& __get__length();

  constexpr float_t const& __get__length() const;

  constexpr void __set__length(float_t value);

  constexpr ::UnityEngine::Vector3& __get__startPos();

  constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

  constexpr void __set__startPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__midPos();

  constexpr ::UnityEngine::Vector3 const& __get__midPos() const;

  constexpr void __set__midPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__endPos();

  constexpr ::UnityEngine::Vector3 const& __get__endPos() const;

  constexpr void __set__endPos(::UnityEngine::Vector3 value);

  constexpr float_t& __get__move1Duration();

  constexpr float_t const& __get__move1Duration() const;

  constexpr void __set__move1Duration(float_t value);

  constexpr float_t& __get__move2Duration();

  constexpr float_t const& __get__move2Duration() const;

  constexpr void __set__move2Duration(float_t value);

  constexpr float_t& __get__startTimeOffset();

  constexpr float_t const& __get__startTimeOffset() const;

  constexpr void __set__startTimeOffset(float_t value);

  constexpr float_t& __get__obstacleDuration();

  constexpr float_t const& __get__obstacleDuration() const;

  constexpr void __set__obstacleDuration(float_t value);

  constexpr bool& __get__passedThreeQuartersOfMove2Reported();

  constexpr bool const& __get__passedThreeQuartersOfMove2Reported() const;

  constexpr void __set__passedThreeQuartersOfMove2Reported(bool value);

  constexpr bool& __get__passedAvoidedMarkReported();

  constexpr bool const& __get__passedAvoidedMarkReported() const;

  constexpr void __set__passedAvoidedMarkReported(bool value);

  constexpr float_t& __get__passedAvoidedMarkTime();

  constexpr float_t const& __get__passedAvoidedMarkTime() const;

  constexpr void __set__passedAvoidedMarkTime(float_t value);

  constexpr float_t& __get__finishMovementTime();

  constexpr float_t const& __get__finishMovementTime() const;

  constexpr void __set__finishMovementTime(float_t value);

  constexpr ::UnityEngine::Bounds& __get__bounds();

  constexpr ::UnityEngine::Bounds const& __get__bounds() const;

  constexpr void __set__bounds(::UnityEngine::Bounds value);

  constexpr bool& __get__dissolving();

  constexpr bool const& __get__dissolving() const;

  constexpr void __set__dissolving(bool value);

  constexpr ::GlobalNamespace::ObstacleData*& __get__obstacleData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleData*> const& __get__obstacleData() const;

  constexpr void __set__obstacleData(::GlobalNamespace::ObstacleData* value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr ::UnityEngine::Quaternion& __get__worldRotation();

  constexpr ::UnityEngine::Quaternion const& __get__worldRotation() const;

  constexpr void __set__worldRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get__inverseWorldRotation();

  constexpr ::UnityEngine::Quaternion const& __get__inverseWorldRotation() const;

  constexpr void __set__inverseWorldRotation(::UnityEngine::Quaternion value);

  /// @brief Method add_finishedMovementEvent addr 0x2258d24 size 0xb0 virtual false final false
  inline void add_finishedMovementEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_finishedMovementEvent addr 0x2258dd4 size 0xb0 virtual false final false
  inline void remove_finishedMovementEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method add_passedThreeQuartersOfMove2Event addr 0x2258e84 size 0xb0 virtual false final false
  inline void add_passedThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_passedThreeQuartersOfMove2Event addr 0x2258f34 size 0xb0 virtual false final false
  inline void remove_passedThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method add_passedAvoidedMarkEvent addr 0x2258fe4 size 0xb0 virtual false final false
  inline void add_passedAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_passedAvoidedMarkEvent addr 0x2259094 size 0xb0 virtual false final false
  inline void remove_passedAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method add_didDissolveEvent addr 0x2259144 size 0xb0 virtual false final false
  inline void add_didDissolveEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_didDissolveEvent addr 0x22591f4 size 0xb0 virtual false final false
  inline void remove_didDissolveEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method add_didUpdateProgress addr 0x22592a4 size 0xb0 virtual false final false
  inline void add_didUpdateProgress(::System::Action_2<::GlobalNamespace::ObstacleController*, float_t>* value);

  /// @brief Method remove_didUpdateProgress addr 0x2259354 size 0xb0 virtual false final false
  inline void remove_didUpdateProgress(::System::Action_2<::GlobalNamespace::ObstacleController*, float_t>* value);

  /// @brief Method get_bounds addr 0x2259404 size 0x14 virtual false final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_obstacleData addr 0x2259418 size 0x8 virtual false final false
  inline ::GlobalNamespace::ObstacleData* get_obstacleData();

  /// @brief Method get_hasPassedAvoidedMark addr 0x2259420 size 0x8 virtual false final false
  inline bool get_hasPassedAvoidedMark();

  /// @brief Method get_move1Duration addr 0x2259428 size 0x8 virtual false final false
  inline float_t get_move1Duration();

  /// @brief Method get_move2Duration addr 0x2259430 size 0x8 virtual false final false
  inline float_t get_move2Duration();

  /// @brief Method get_width addr 0x2259438 size 0x8 virtual false final false
  inline float_t get_width();

  /// @brief Method get_height addr 0x2259440 size 0x8 virtual false final false
  inline float_t get_height();

  /// @brief Method get_length addr 0x2259448 size 0x8 virtual false final false
  inline float_t get_length();

  /// @brief Method get_color addr 0x2259450 size 0xc virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method Init addr 0x225945c size 0x2d4 virtual true final false
  inline void Init(::GlobalNamespace::ObstacleData* obstacleData, float_t worldRotation, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 midPos, ::UnityEngine::Vector3 endPos,
                   float_t move1Duration, float_t move2Duration, float_t singleLineWidth, float_t height);

  /// @brief Method Update addr 0x2259730 size 0xc virtual false final false
  inline void Update();

  /// @brief Method ManualUpdate addr 0x225973c size 0x1ec virtual true final false
  inline void ManualUpdate();

  /// @brief Method GetPosForTime addr 0x2259928 size 0x124 virtual false final false
  inline ::UnityEngine::Vector3 GetPosForTime(float_t time);

  /// @brief Method DissolveCoroutine addr 0x2259a4c size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t duration);

  /// @brief Method Dissolve addr 0x2259aec size 0x38 virtual true final true
  inline void Dissolve(float_t duration);

  /// @brief Method Hide addr 0x2259b24 size 0x6c virtual true final true
  inline void Hide(bool hide);

  /// @brief Method Pause addr 0x2259b90 size 0x10 virtual true final true
  inline void Pause(bool pause);

  static inline ::GlobalNamespace::ObstacleController* New_ctor();

  /// @brief Method .ctor addr 0x2259ba0 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleController(ObstacleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleController(ObstacleController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleController();

public:
  /// @brief Field _stretchableObstacle, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::StretchableObstacle* ____stretchableObstacle;

  /// @brief Field _endDistanceOffset, offset: 0x30, size: 0x4, def value: None
  float_t ____endDistanceOffset;

  /// @brief Field _visualWrappers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____visualWrappers;

  /// @brief Field _playerTransforms, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _colorManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field finishedMovementEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___finishedMovementEvent;

  /// @brief Field passedThreeQuartersOfMove2Event, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___passedThreeQuartersOfMove2Event;

  /// @brief Field passedAvoidedMarkEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___passedAvoidedMarkEvent;

  /// @brief Field didDissolveEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___didDissolveEvent;

  /// @brief Field didUpdateProgress, offset: 0x78, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::ObstacleController*, float_t>* ___didUpdateProgress;

  /// @brief Field _width, offset: 0x80, size: 0x4, def value: None
  float_t ____width;

  /// @brief Field _height, offset: 0x84, size: 0x4, def value: None
  float_t ____height;

  /// @brief Field _length, offset: 0x88, size: 0x4, def value: None
  float_t ____length;

  /// @brief Field _startPos, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _midPos, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____midPos;

  /// @brief Field _endPos, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPos;

  /// @brief Field _move1Duration, offset: 0xb0, size: 0x4, def value: None
  float_t ____move1Duration;

  /// @brief Field _move2Duration, offset: 0xb4, size: 0x4, def value: None
  float_t ____move2Duration;

  /// @brief Field _startTimeOffset, offset: 0xb8, size: 0x4, def value: None
  float_t ____startTimeOffset;

  /// @brief Field _obstacleDuration, offset: 0xbc, size: 0x4, def value: None
  float_t ____obstacleDuration;

  /// @brief Field _passedThreeQuartersOfMove2Reported, offset: 0xc0, size: 0x1, def value: None
  bool ____passedThreeQuartersOfMove2Reported;

  /// @brief Field _passedAvoidedMarkReported, offset: 0xc1, size: 0x1, def value: None
  bool ____passedAvoidedMarkReported;

  /// @brief Field _passedAvoidedMarkTime, offset: 0xc4, size: 0x4, def value: None
  float_t ____passedAvoidedMarkTime;

  /// @brief Field _finishMovementTime, offset: 0xc8, size: 0x4, def value: None
  float_t ____finishMovementTime;

  /// @brief Field _bounds, offset: 0xcc, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  /// @brief Field _dissolving, offset: 0xe4, size: 0x1, def value: None
  bool ____dissolving;

  /// @brief Field _obstacleData, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::ObstacleData* ____obstacleData;

  /// @brief Field _color, offset: 0xf0, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _worldRotation, offset: 0x100, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  /// @brief Field _inverseWorldRotation, offset: 0x110, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____inverseWorldRotation;

  /// @brief Field kAvoidMarkTimeOffset offset 0xffffffff size 0x4
  static constexpr float_t kAvoidMarkTimeOffset{ 0.15 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleController, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____stretchableObstacle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____endDistanceOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____visualWrappers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____playerTransforms) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____audioTimeSyncController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____colorManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___finishedMovementEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___passedThreeQuartersOfMove2Event) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___passedAvoidedMarkEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___didDissolveEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___didUpdateProgress) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____width) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____height) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____length) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____startPos) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____midPos) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____endPos) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____move1Duration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____move2Duration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____startTimeOffset) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____obstacleDuration) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedThreeQuartersOfMove2Reported) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedAvoidedMarkReported) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedAvoidedMarkTime) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____finishMovementTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____bounds) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____dissolving) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____obstacleData) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____color) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____worldRotation) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____inverseWorldRotation) == 0x110, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10978)), TypeDefinitionIndex(TypeDefinitionIndex(4913)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10978), inst:
// 369 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4911)) CS Name: ::ObstacleController::Pool*
class CORDL_TYPE __ObstacleController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::ObstacleController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__ObstacleController__Pool* New_ctor();

  /// @brief Method .ctor addr 0x2259bb0 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ObstacleController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObstacleController__Pool(__ObstacleController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObstacleController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObstacleController__Pool(__ObstacleController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObstacleController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObstacleController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DissolveCoroutine>d__65
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4912))
// CS Name: ::ObstacleController::<DissolveCoroutine>d__65*
class CORDL_TYPE __ObstacleController___DissolveCoroutine_d__65 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::ObstacleController* __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::ObstacleController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::ObstacleController* value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  static inline ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2259ac4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2259bf8 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2259bfc size 0xe8 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2259ce4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2259cec size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2259d2c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ObstacleController___DissolveCoroutine_d__65", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObstacleController___DissolveCoroutine_d__65(__ObstacleController___DissolveCoroutine_d__65&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObstacleController___DissolveCoroutine_d__65", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObstacleController___DissolveCoroutine_d__65(__ObstacleController___DissolveCoroutine_d__65 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObstacleController___DissolveCoroutine_d__65();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ObstacleController* _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, ___duration) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleController*, "", "ObstacleController");
NEED_NO_BOX(::GlobalNamespace::__ObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObstacleController__Pool*, "", "ObstacleController/Pool");
NEED_NO_BOX(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*, "", "ObstacleController/<DissolveCoroutine>d__65");
