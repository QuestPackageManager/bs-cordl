#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemEventController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemEventController)
namespace GlobalNamespace {
class ParticleSystemEventController_Pool;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEventController;
}
namespace GlobalNamespace {
class ParticleSystemEventController_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEventController);
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEventController_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemEventController/Pool
class CORDL_TYPE ParticleSystemEventController_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::ParticleSystemEventController_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3b9417c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEventController_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventController_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEventController_Pool(ParticleSystemEventController_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventController_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEventController_Pool(ParticleSystemEventController_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEventController_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemEventController
class CORDL_TYPE ParticleSystemEventController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::ParticleSystemEventController_Pool;

  /// @brief Field _particleSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _particleSystemFullDuration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__particleSystemFullDuration, put = __cordl_internal_set__particleSystemFullDuration)) float_t _particleSystemFullDuration;

  /// @brief Field <startTime>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime_k__BackingField, put = __cordl_internal_set__startTime_k__BackingField)) float_t _startTime_k__BackingField;

  __declspec(property(get = get_endTime)) float_t endTime;

  __declspec(property(get = get_startTime, put = set_startTime)) float_t startTime;

  /// @brief Method Init, addr 0x3b935fc, size 0x30, virtual false, abstract: false, final false
  inline void Init(float_t startTime);

  /// @brief Method InitSpeed, addr 0x3b9406c, size 0x48, virtual false, abstract: false, final false
  inline void InitSpeed(float_t simulationSpeedMultiplier);

  /// @brief Method ManualUpdate, addr 0x3b939a4, size 0x68, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t time, float_t deltaTime);

  static inline ::GlobalNamespace::ParticleSystemEventController* New_ctor();

  /// @brief Method Pause, addr 0x3b93e00, size 0x1c, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Play, addr 0x3b93f94, size 0x1c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Stop, addr 0x3b93310, size 0x1c, virtual false, abstract: false, final false
  inline void Stop();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr float_t const& __cordl_internal_get__particleSystemFullDuration() const;

  constexpr float_t& __cordl_internal_get__particleSystemFullDuration();

  constexpr float_t const& __cordl_internal_get__startTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__startTime_k__BackingField();

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__particleSystemFullDuration(float_t value);

  constexpr void __cordl_internal_set__startTime_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x3b94174, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_endTime, addr 0x3b93998, size 0xc, virtual false, abstract: false, final false
  inline float_t get_endTime();

  /// @brief Method get_startTime, addr 0x3b94164, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startTime();

  /// @brief Method set_startTime, addr 0x3b9416c, size 0x8, virtual false, abstract: false, final false
  inline void set_startTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEventController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEventController(ParticleSystemEventController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEventController(ParticleSystemEventController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4330 };

  /// @brief Field kMaxSimDelta offset 0xffffffff size 0x4
  static constexpr float_t kMaxSimDelta{ static_cast<float_t>(0.0f) };

  /// @brief Field _particleSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _particleSystemFullDuration, offset: 0x28, size: 0x4, def value: None
  float_t ____particleSystemFullDuration;

  /// @brief Field <startTime>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  float_t ____startTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemEventController, ____particleSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventController, ____particleSystemFullDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventController, ____startTime_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEventController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEventController*, "", "ParticleSystemEventController");
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEventController_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEventController_Pool*, "", "ParticleSystemEventController/Pool");
