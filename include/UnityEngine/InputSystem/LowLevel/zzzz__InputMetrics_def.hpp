#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputMetrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputMetrics)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputMetrics);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputMetrics
struct CORDL_TYPE InputMetrics {
public:
  // Declarations
  __declspec(property(get = get_averageEventBytesPerFrame)) float_t averageEventBytesPerFrame;

  __declspec(property(get = get_averageLagTimePerEvent)) double_t averageLagTimePerEvent;

  __declspec(property(get = get_averageProcessingTimePerEvent)) double_t averageProcessingTimePerEvent;

  __declspec(property(get = get_currentControlCount, put = set_currentControlCount)) int32_t currentControlCount;

  __declspec(property(get = get_currentLayoutCount, put = set_currentLayoutCount)) int32_t currentLayoutCount;

  __declspec(property(get = get_currentNumDevices, put = set_currentNumDevices)) int32_t currentNumDevices;

  __declspec(property(get = get_currentStateSizeInBytes, put = set_currentStateSizeInBytes)) int32_t currentStateSizeInBytes;

  __declspec(property(get = get_maxNumDevices, put = set_maxNumDevices)) int32_t maxNumDevices;

  __declspec(property(get = get_maxStateSizeInBytes, put = set_maxStateSizeInBytes)) int32_t maxStateSizeInBytes;

  __declspec(property(get = get_totalEventBytes, put = set_totalEventBytes)) int32_t totalEventBytes;

  __declspec(property(get = get_totalEventCount, put = set_totalEventCount)) int32_t totalEventCount;

  __declspec(property(get = get_totalEventLagTime, put = set_totalEventLagTime)) double_t totalEventLagTime;

  __declspec(property(get = get_totalEventProcessingTime, put = set_totalEventProcessingTime)) double_t totalEventProcessingTime;

  __declspec(property(get = get_totalUpdateCount, put = set_totalUpdateCount)) int32_t totalUpdateCount;

  /// @brief Method get_averageEventBytesPerFrame, addr 0x461e19c, size 0x18, virtual false, abstract: false, final false
  inline float_t get_averageEventBytesPerFrame();

  /// @brief Method get_averageLagTimePerEvent, addr 0x461e1c8, size 0x14, virtual false, abstract: false, final false
  inline double_t get_averageLagTimePerEvent();

  /// @brief Method get_averageProcessingTimePerEvent, addr 0x461e1b4, size 0x14, virtual false, abstract: false, final false
  inline double_t get_averageProcessingTimePerEvent();

  /// @brief Method get_currentControlCount, addr 0x461e12c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentControlCount();

  /// @brief Method get_currentLayoutCount, addr 0x461e13c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentLayoutCount();

  /// @brief Method get_currentNumDevices, addr 0x461e0fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentNumDevices();

  /// @brief Method get_currentStateSizeInBytes, addr 0x461e11c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentStateSizeInBytes();

  /// @brief Method get_maxNumDevices, addr 0x461e0ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxNumDevices();

  /// @brief Method get_maxStateSizeInBytes, addr 0x461e10c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxStateSizeInBytes();

  /// @brief Method get_totalEventBytes, addr 0x461e14c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalEventBytes();

  /// @brief Method get_totalEventCount, addr 0x461e15c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalEventCount();

  /// @brief Method get_totalEventLagTime, addr 0x461e18c, size 0x8, virtual false, abstract: false, final false
  inline double_t get_totalEventLagTime();

  /// @brief Method get_totalEventProcessingTime, addr 0x461e17c, size 0x8, virtual false, abstract: false, final false
  inline double_t get_totalEventProcessingTime();

  /// @brief Method get_totalUpdateCount, addr 0x461e16c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalUpdateCount();

  /// @brief Method set_currentControlCount, addr 0x461e134, size 0x8, virtual false, abstract: false, final false
  inline void set_currentControlCount(int32_t value);

  /// @brief Method set_currentLayoutCount, addr 0x461e144, size 0x8, virtual false, abstract: false, final false
  inline void set_currentLayoutCount(int32_t value);

  /// @brief Method set_currentNumDevices, addr 0x461e104, size 0x8, virtual false, abstract: false, final false
  inline void set_currentNumDevices(int32_t value);

  /// @brief Method set_currentStateSizeInBytes, addr 0x461e124, size 0x8, virtual false, abstract: false, final false
  inline void set_currentStateSizeInBytes(int32_t value);

  /// @brief Method set_maxNumDevices, addr 0x461e0f4, size 0x8, virtual false, abstract: false, final false
  inline void set_maxNumDevices(int32_t value);

  /// @brief Method set_maxStateSizeInBytes, addr 0x461e114, size 0x8, virtual false, abstract: false, final false
  inline void set_maxStateSizeInBytes(int32_t value);

  /// @brief Method set_totalEventBytes, addr 0x461e154, size 0x8, virtual false, abstract: false, final false
  inline void set_totalEventBytes(int32_t value);

  /// @brief Method set_totalEventCount, addr 0x461e164, size 0x8, virtual false, abstract: false, final false
  inline void set_totalEventCount(int32_t value);

  /// @brief Method set_totalEventLagTime, addr 0x461e194, size 0x8, virtual false, abstract: false, final false
  inline void set_totalEventLagTime(double_t value);

  /// @brief Method set_totalEventProcessingTime, addr 0x461e184, size 0x8, virtual false, abstract: false, final false
  inline void set_totalEventProcessingTime(double_t value);

  /// @brief Method set_totalUpdateCount, addr 0x461e174, size 0x8, virtual false, abstract: false, final false
  inline void set_totalUpdateCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputMetrics();

  // Ctor Parameters [CppParam { name: "_maxNumDevices_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentNumDevices_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_maxStateSizeInBytes_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_currentStateSizeInBytes_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentControlCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "_currentLayoutCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventBytes_k__BackingField", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_totalEventCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalUpdateCount_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_totalEventProcessingTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "_totalEventLagTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }]
  constexpr InputMetrics(int32_t _maxNumDevices_k__BackingField, int32_t _currentNumDevices_k__BackingField, int32_t _maxStateSizeInBytes_k__BackingField,
                         int32_t _currentStateSizeInBytes_k__BackingField, int32_t _currentControlCount_k__BackingField, int32_t _currentLayoutCount_k__BackingField,
                         int32_t _totalEventBytes_k__BackingField, int32_t _totalEventCount_k__BackingField, int32_t _totalUpdateCount_k__BackingField,
                         double_t _totalEventProcessingTime_k__BackingField, double_t _totalEventLagTime_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6962 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <maxNumDevices>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _maxNumDevices_k__BackingField;

  /// @brief Field <currentNumDevices>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _currentNumDevices_k__BackingField;

  /// @brief Field <maxStateSizeInBytes>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _maxStateSizeInBytes_k__BackingField;

  /// @brief Field <currentStateSizeInBytes>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _currentStateSizeInBytes_k__BackingField;

  /// @brief Field <currentControlCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _currentControlCount_k__BackingField;

  /// @brief Field <currentLayoutCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t _currentLayoutCount_k__BackingField;

  /// @brief Field <totalEventBytes>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t _totalEventBytes_k__BackingField;

  /// @brief Field <totalEventCount>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t _totalEventCount_k__BackingField;

  /// @brief Field <totalUpdateCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t _totalUpdateCount_k__BackingField;

  /// @brief Field <totalEventProcessingTime>k__BackingField, offset: 0x28, size: 0x8, def value: None
  double_t _totalEventProcessingTime_k__BackingField;

  /// @brief Field <totalEventLagTime>k__BackingField, offset: 0x30, size: 0x8, def value: None
  double_t _totalEventLagTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _maxNumDevices_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _currentNumDevices_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _maxStateSizeInBytes_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _currentStateSizeInBytes_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _currentControlCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _currentLayoutCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _totalEventBytes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _totalEventCount_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _totalUpdateCount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _totalEventProcessingTime_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputMetrics, _totalEventLagTime_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputMetrics, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputMetrics, "UnityEngine.InputSystem.LowLevel", "InputMetrics");
