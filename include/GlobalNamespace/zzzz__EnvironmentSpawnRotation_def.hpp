#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentSpawnRotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentSpawnRotation)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentSpawnRotation);
// Type: ::EnvironmentSpawnRotation
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentSpawnRotation*
class CORDL_TYPE EnvironmentSpawnRotation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _aheadTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__aheadTime, put = __cordl_internal_set__aheadTime)) float_t _aheadTime;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _currentRotation, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__currentRotation, put = __cordl_internal_set__currentRotation)) float_t _currentRotation;

  /// @brief Field _numberOfActiveEnvironmentSpawnRotationObjects, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__numberOfActiveEnvironmentSpawnRotationObjects,
                             put = setStaticF__numberOfActiveEnvironmentSpawnRotationObjects)) int32_t _numberOfActiveEnvironmentSpawnRotationObjects;

  /// @brief Field _prevRotation, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__prevRotation, put = __cordl_internal_set__prevRotation)) float_t _prevRotation;

  /// @brief Field _smooth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Field _spawnRotationID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__spawnRotationID, put = setStaticF__spawnRotationID)) int32_t _spawnRotationID;

  /// @brief Field _targetRotation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__targetRotation, put = __cordl_internal_set__targetRotation)) float_t _targetRotation;

  __declspec(property(get = get_targetRotation)) float_t targetRotation;

  /// @brief Method FixedUpdate, addr 0x26d4f1c, size 0x90, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method HandleSpawnRotationBeatmapEvent, addr 0x26d4e18, size 0x104, virtual false, abstract: false, final false
  inline void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);

  /// @brief Method LateUpdate, addr 0x26d4fac, size 0x128, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::EnvironmentSpawnRotation* New_ctor();

  /// @brief Method OnDestroy, addr 0x26d4dfc, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x26d4c38, size 0x60, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x26d4bd8, size 0x60, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x26d4c98, size 0x164, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get__aheadTime() const;

  constexpr float_t& __cordl_internal_get__aheadTime();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr float_t const& __cordl_internal_get__currentRotation() const;

  constexpr float_t& __cordl_internal_get__currentRotation();

  constexpr float_t const& __cordl_internal_get__prevRotation() const;

  constexpr float_t& __cordl_internal_get__prevRotation();

  constexpr float_t const& __cordl_internal_get__smooth() const;

  constexpr float_t& __cordl_internal_get__smooth();

  constexpr float_t const& __cordl_internal_get__targetRotation() const;

  constexpr float_t& __cordl_internal_get__targetRotation();

  constexpr void __cordl_internal_set__aheadTime(float_t value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__currentRotation(float_t value);

  constexpr void __cordl_internal_set__prevRotation(float_t value);

  constexpr void __cordl_internal_set__smooth(float_t value);

  constexpr void __cordl_internal_set__targetRotation(float_t value);

  /// @brief Method .ctor, addr 0x26d50d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__numberOfActiveEnvironmentSpawnRotationObjects();

  static inline int32_t getStaticF__spawnRotationID();

  /// @brief Method get_targetRotation, addr 0x26d4bd0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_targetRotation();

  static inline void setStaticF__numberOfActiveEnvironmentSpawnRotationObjects(int32_t value);

  static inline void setStaticF__spawnRotationID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSpawnRotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSpawnRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentSpawnRotation(EnvironmentSpawnRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSpawnRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentSpawnRotation(EnvironmentSpawnRotation const&) = delete;

  /// @brief Field _aheadTime, offset: 0x18, size: 0x4, def value: None
  float_t ____aheadTime;

  /// @brief Field _smooth, offset: 0x1c, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief Field _currentRotation, offset: 0x30, size: 0x4, def value: None
  float_t ____currentRotation;

  /// @brief Field _prevRotation, offset: 0x34, size: 0x4, def value: None
  float_t ____prevRotation;

  /// @brief Field _targetRotation, offset: 0x38, size: 0x4, def value: None
  float_t ____targetRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSpawnRotation, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____aheadTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____smooth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____beatmapDataCallbackWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____currentRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____prevRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSpawnRotation, ____targetRotation) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentSpawnRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSpawnRotation*, "", "EnvironmentSpawnRotation");
