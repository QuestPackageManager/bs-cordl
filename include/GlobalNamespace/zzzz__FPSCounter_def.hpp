#pragma once
// IWYU pragma private; include "GlobalNamespace/FPSCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FPSCounter)
// Forward declare root types
namespace GlobalNamespace {
class FPSCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FPSCounter);
// Type: ::FPSCounter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FPSCounter*
class CORDL_TYPE FPSCounter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <currentFPS>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__currentFPS_k__BackingField, put = __cordl_internal_set__currentFPS_k__BackingField)) int32_t _currentFPS_k__BackingField;

  /// @brief Field <droppedFrames>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__droppedFrames_k__BackingField, put = __cordl_internal_set__droppedFrames_k__BackingField)) int32_t _droppedFrames_k__BackingField;

  /// @brief Field _frameCounter, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__frameCounter, put = __cordl_internal_set__frameCounter)) int32_t _frameCounter;

  /// @brief Field <highestFPS>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__highestFPS_k__BackingField, put = __cordl_internal_set__highestFPS_k__BackingField)) int32_t _highestFPS_k__BackingField;

  /// @brief Field <lowestFPS>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__lowestFPS_k__BackingField, put = __cordl_internal_set__lowestFPS_k__BackingField)) int32_t _lowestFPS_k__BackingField;

  /// @brief Field _minDeltaTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__minDeltaTime, put = __cordl_internal_set__minDeltaTime)) float_t _minDeltaTime;

  /// @brief Field _timeBuffer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__timeBuffer, put = __cordl_internal_set__timeBuffer)) float_t _timeBuffer;

  __declspec(property(get = get_currentFPS, put = set_currentFPS)) int32_t currentFPS;

  __declspec(property(get = get_droppedFrames, put = set_droppedFrames)) int32_t droppedFrames;

  __declspec(property(get = get_highestFPS, put = set_highestFPS)) int32_t highestFPS;

  __declspec(property(get = get_lowestFPS, put = set_lowestFPS)) int32_t lowestFPS;

  /// @brief Method Awake, addr 0x24fe134, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::FPSCounter* New_ctor();

  /// @brief Method Update, addr 0x24fe144, size 0xac, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get__currentFPS_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__currentFPS_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__droppedFrames_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__droppedFrames_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__frameCounter() const;

  constexpr int32_t& __cordl_internal_get__frameCounter();

  constexpr int32_t const& __cordl_internal_get__highestFPS_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__highestFPS_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__lowestFPS_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__lowestFPS_k__BackingField();

  constexpr float_t const& __cordl_internal_get__minDeltaTime() const;

  constexpr float_t& __cordl_internal_get__minDeltaTime();

  constexpr float_t const& __cordl_internal_get__timeBuffer() const;

  constexpr float_t& __cordl_internal_get__timeBuffer();

  constexpr void __cordl_internal_set__currentFPS_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__droppedFrames_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__frameCounter(int32_t value);

  constexpr void __cordl_internal_set__highestFPS_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__lowestFPS_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__minDeltaTime(float_t value);

  constexpr void __cordl_internal_set__timeBuffer(float_t value);

  /// @brief Method .ctor, addr 0x24fe1f0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentFPS, addr 0x24fe0f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentFPS();

  /// @brief Method get_droppedFrames, addr 0x24fe124, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_droppedFrames();

  /// @brief Method get_highestFPS, addr 0x24fe114, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_highestFPS();

  /// @brief Method get_lowestFPS, addr 0x24fe104, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lowestFPS();

  /// @brief Method set_currentFPS, addr 0x24fe0fc, size 0x8, virtual false, abstract: false, final false
  inline void set_currentFPS(int32_t value);

  /// @brief Method set_droppedFrames, addr 0x24fe12c, size 0x8, virtual false, abstract: false, final false
  inline void set_droppedFrames(int32_t value);

  /// @brief Method set_highestFPS, addr 0x24fe11c, size 0x8, virtual false, abstract: false, final false
  inline void set_highestFPS(int32_t value);

  /// @brief Method set_lowestFPS, addr 0x24fe10c, size 0x8, virtual false, abstract: false, final false
  inline void set_lowestFPS(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FPSCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FPSCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FPSCounter(FPSCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FPSCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FPSCounter(FPSCounter const&) = delete;

  /// @brief Field <currentFPS>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____currentFPS_k__BackingField;

  /// @brief Field <lowestFPS>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____lowestFPS_k__BackingField;

  /// @brief Field <highestFPS>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____highestFPS_k__BackingField;

  /// @brief Field <droppedFrames>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____droppedFrames_k__BackingField;

  /// @brief Field _timeBuffer, offset: 0x28, size: 0x4, def value: None
  float_t ____timeBuffer;

  /// @brief Field _frameCounter, offset: 0x2c, size: 0x4, def value: None
  int32_t ____frameCounter;

  /// @brief Field _minDeltaTime, offset: 0x30, size: 0x4, def value: None
  float_t ____minDeltaTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FPSCounter, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounter, ____currentFPS_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounter, ____lowestFPS_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounter, ____highestFPS_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounter, ____droppedFrames_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounter, ____timeBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounter, ____frameCounter) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounter, ____minDeltaTime) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FPSCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FPSCounter*, "", "FPSCounter");
