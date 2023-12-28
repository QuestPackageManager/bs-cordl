#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemEventController)
namespace GlobalNamespace {
class __ParticleSystemEventController__Pool;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEventController;
}
namespace GlobalNamespace {
class __ParticleSystemEventController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEventController);
MARK_REF_PTR_T(::GlobalNamespace::__ParticleSystemEventController__Pool);
// Type: ::ParticleSystemEventController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4966))
// CS Name: ::ParticleSystemEventController*
class CORDL_TYPE ParticleSystemEventController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__ParticleSystemEventController__Pool;

  /// @brief Field _particleSystem, offset 0x18, size 0x8
  __declspec(property(get = __get__particleSystem, put = __set__particleSystem))::UnityEngine::ParticleSystem* _particleSystem;

  /// @brief Field _particleSystemFullDuration, offset 0x20, size 0x4
  __declspec(property(get = __get__particleSystemFullDuration, put = __set__particleSystemFullDuration)) float_t _particleSystemFullDuration;

  /// @brief Field <startTime>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__startTime_k__BackingField, put = __set__startTime_k__BackingField)) float_t _startTime_k__BackingField;

  __declspec(property(get = get_startTime, put = set_startTime)) float_t startTime;

  __declspec(property(get = get_endTime)) float_t endTime;

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem() const;

  constexpr void __set__particleSystem(::UnityEngine::ParticleSystem* value);

  constexpr float_t& __get__particleSystemFullDuration();

  constexpr float_t const& __get__particleSystemFullDuration() const;

  constexpr void __set__particleSystemFullDuration(float_t value);

  constexpr float_t& __get__startTime_k__BackingField();

  constexpr float_t const& __get__startTime_k__BackingField() const;

  constexpr void __set__startTime_k__BackingField(float_t value);

  /// @brief Method get_startTime addr 0x23b02c4 size 0x8 virtual false final false
  inline float_t get_startTime();

  /// @brief Method set_startTime addr 0x23b02cc size 0x8 virtual false final false
  inline void set_startTime(float_t value);

  /// @brief Method get_endTime addr 0x23afae4 size 0xc virtual false final false
  inline float_t get_endTime();

  /// @brief Method Init addr 0x23af748 size 0x30 virtual false final false
  inline void Init(float_t startTime);

  /// @brief Method InitSpeed addr 0x23b01c8 size 0x4c virtual false final false
  inline void InitSpeed(float_t simulationSpeedMultiplier);

  /// @brief Method Play addr 0x23b00f0 size 0x1c virtual false final false
  inline void Play();

  /// @brief Method Pause addr 0x23aff5c size 0x1c virtual false final false
  inline void Pause();

  /// @brief Method Stop addr 0x23af45c size 0x1c virtual false final false
  inline void Stop();

  /// @brief Method ManualUpdate addr 0x23afaf0 size 0x68 virtual false final false
  inline void ManualUpdate(float_t time, float_t deltaTime);

  static inline ::GlobalNamespace::ParticleSystemEventController* New_ctor();

  /// @brief Method .ctor addr 0x23b02d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEventController(ParticleSystemEventController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEventController(ParticleSystemEventController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEventController();

public:
  /// @brief Field _particleSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem;

  /// @brief Field _particleSystemFullDuration, offset: 0x20, size: 0x4, def value: None
  float_t ____particleSystemFullDuration;

  /// @brief Field <startTime>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____startTime_k__BackingField;

  /// @brief Field kMaxSimDelta offset 0xffffffff size 0x4
  static constexpr float_t kMaxSimDelta{ 0.033333335 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEventController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4966)), TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst:
// 2825 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4965)) CS Name: ::ParticleSystemEventController::Pool*
class CORDL_TYPE __ParticleSystemEventController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::ParticleSystemEventController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__ParticleSystemEventController__Pool* New_ctor();

  /// @brief Method .ctor addr 0x23b02dc size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ParticleSystemEventController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ParticleSystemEventController__Pool(__ParticleSystemEventController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ParticleSystemEventController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ParticleSystemEventController__Pool(__ParticleSystemEventController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystemEventController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystemEventController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEventController*, "", "ParticleSystemEventController");
NEED_NO_BOX(::GlobalNamespace::__ParticleSystemEventController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystemEventController__Pool*, "", "ParticleSystemEventController/Pool");
