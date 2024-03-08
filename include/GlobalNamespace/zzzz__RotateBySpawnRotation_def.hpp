#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotateBySpawnRotation)
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
class RotateBySpawnRotation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RotateBySpawnRotation);
// Type: ::RotateBySpawnRotation
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RotateBySpawnRotation*
class CORDL_TYPE RotateBySpawnRotation : public ::UnityEngine::MonoBehaviour {
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

  /// @brief Field _prevRotation, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__prevRotation, put = __cordl_internal_set__prevRotation)) float_t _prevRotation;

  /// @brief Field _smooth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Field _targetRotation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__targetRotation, put = __cordl_internal_set__targetRotation)) float_t _targetRotation;

  /// @brief Method FixedUpdate, addr 0x24ab20c, size 0x90, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method HandleSpawnRotationBeatmapEvent, addr 0x24ab170, size 0x9c, virtual false, abstract: false, final false
  inline void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);

  /// @brief Method LateUpdate, addr 0x24ab29c, size 0xc0, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::RotateBySpawnRotation* New_ctor();

  /// @brief Method OnDestroy, addr 0x24ab154, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x24ab01c, size 0x138, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x24ab35c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotateBySpawnRotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotateBySpawnRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotateBySpawnRotation(RotateBySpawnRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotateBySpawnRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotateBySpawnRotation(RotateBySpawnRotation const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RotateBySpawnRotation, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateBySpawnRotation, ____aheadTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateBySpawnRotation, ____smooth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateBySpawnRotation, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateBySpawnRotation, ____beatmapDataCallbackWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateBySpawnRotation, ____currentRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateBySpawnRotation, ____prevRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateBySpawnRotation, ____targetRotation) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RotateBySpawnRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RotateBySpawnRotation*, "", "RotateBySpawnRotation");
