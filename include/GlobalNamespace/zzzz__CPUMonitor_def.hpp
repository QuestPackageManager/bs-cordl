#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUMonitor)
namespace GlobalNamespace {
class ICPUMonitor;
}
namespace GlobalNamespace {
class IPollable;
}
namespace System::Diagnostics {
class Process;
}
namespace GlobalNamespace {
class RollingAverage;
}
// Forward declare root types
namespace GlobalNamespace {
class CPUMonitor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CPUMonitor);
// Type: ::CPUMonitor
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12637))
// CS Name: ::CPUMonitor*
class CORDL_TYPE CPUMonitor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _utilization, offset 0x10, size 0x8
  __declspec(property(get = __get__utilization, put = __set__utilization))::GlobalNamespace::RollingAverage* _utilization;

  /// @brief Field _currentProcess, offset 0x18, size 0x8
  __declspec(property(get = __get__currentProcess, put = __set__currentProcess))::System::Diagnostics::Process* _currentProcess;

  /// @brief Field _processorCount, offset 0x20, size 0x4
  __declspec(property(get = __get__processorCount, put = __set__processorCount)) int32_t _processorCount;

  /// @brief Field _lastSampleTime, offset 0x28, size 0x8
  __declspec(property(get = __get__lastSampleTime, put = __set__lastSampleTime)) int64_t _lastSampleTime;

  /// @brief Field _lastSampleValue, offset 0x30, size 0x8
  __declspec(property(get = __get__lastSampleValue, put = __set__lastSampleValue)) int64_t _lastSampleValue;

  __declspec(property(get = get_utilization)) float_t utilization;

  /// @brief Convert operator to "::GlobalNamespace::ICPUMonitor"
  constexpr operator ::GlobalNamespace::ICPUMonitor*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  constexpr ::GlobalNamespace::RollingAverage*& __get__utilization();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RollingAverage*> const& __get__utilization() const;

  constexpr void __set__utilization(::GlobalNamespace::RollingAverage* value);

  constexpr ::System::Diagnostics::Process*& __get__currentProcess();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Process*> const& __get__currentProcess() const;

  constexpr void __set__currentProcess(::System::Diagnostics::Process* value);

  constexpr int32_t& __get__processorCount();

  constexpr int32_t const& __get__processorCount() const;

  constexpr void __set__processorCount(int32_t value);

  constexpr int64_t& __get__lastSampleTime();

  constexpr int64_t const& __get__lastSampleTime() const;

  constexpr void __set__lastSampleTime(int64_t value);

  constexpr int64_t& __get__lastSampleValue();

  constexpr int64_t const& __get__lastSampleValue() const;

  constexpr void __set__lastSampleValue(int64_t value);

  /// @brief Method PollUpdate addr 0xdac328 size 0xf8 virtual true final true
  inline void PollUpdate();

  /// @brief Method get_utilization addr 0xdac420 size 0x28 virtual true final true
  inline float_t get_utilization();

  static inline ::GlobalNamespace::CPUMonitor* New_ctor();

  /// @brief Method .ctor addr 0xdac448 size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CPUMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CPUMonitor(CPUMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CPUMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CPUMonitor(CPUMonitor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUMonitor();

public:
  /// @brief Field _utilization, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::RollingAverage* ____utilization;

  /// @brief Field _currentProcess, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::Process* ____currentProcess;

  /// @brief Field _processorCount, offset: 0x20, size: 0x4, def value: None
  int32_t ____processorCount;

  /// @brief Field _lastSampleTime, offset: 0x28, size: 0x8, def value: None
  int64_t ____lastSampleTime;

  /// @brief Field _lastSampleValue, offset: 0x30, size: 0x8, def value: None
  int64_t ____lastSampleValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CPUMonitor, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUMonitor, ____utilization) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUMonitor, ____currentProcess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUMonitor, ____processorCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUMonitor, ____lastSampleTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUMonitor, ____lastSampleValue) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CPUMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CPUMonitor*, "", "CPUMonitor");
