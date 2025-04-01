#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__BatteryStatus_def.hpp"
#include "UnityEngine/zzzz__NetworkReachability_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceConfigurationStats)
namespace GlobalNamespace {
struct PerformanceConfigurationStats_BoolStats;
}
namespace GlobalNamespace {
template <typename T> struct PerformanceConfigurationStats_EnumStats_1;
}
namespace GlobalNamespace {
struct PerformanceConfigurationStats_FloatStats;
}
namespace GlobalNamespace {
struct PerformanceConfigurationStats_IntStats;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceConfigurationStats;
}
namespace GlobalNamespace {
struct PerformanceConfigurationStats_BoolStats;
}
namespace GlobalNamespace {
template <typename T> struct PerformanceConfigurationStats_EnumStats_1;
}
namespace GlobalNamespace {
struct PerformanceConfigurationStats_FloatStats;
}
namespace GlobalNamespace {
struct PerformanceConfigurationStats_IntStats;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceConfigurationStats);
MARK_VAL_T(::GlobalNamespace::PerformanceConfigurationStats_BoolStats);
MARK_GEN_VAL_T(::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1);
MARK_VAL_T(::GlobalNamespace::PerformanceConfigurationStats_FloatStats);
MARK_VAL_T(::GlobalNamespace::PerformanceConfigurationStats_IntStats);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceConfigurationStats/BoolStats
struct CORDL_TYPE PerformanceConfigurationStats_BoolStats {
public:
  // Declarations
  /// @brief Method CreateLogValue, addr 0x3b1bd3c, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW CreateLogValue();

  /// @brief Method Update, addr 0x3b1bc78, size 0x1c, virtual false, abstract: false, final false
  inline void Update(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationStats_BoolStats();

  // Ctor Parameters [CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "on", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerformanceConfigurationStats_BoolStats(int32_t off, int32_t on) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5121 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field off, offset: 0x0, size: 0x4, def value: None
  int32_t off;

  /// @brief Field on, offset: 0x4, size: 0x4, def value: None
  int32_t on;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats_BoolStats, off) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats_BoolStats, on) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationStats_BoolStats, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceConfigurationStats/IntStats
struct CORDL_TYPE PerformanceConfigurationStats_IntStats {
public:
  // Declarations
  /// @brief Field kInitial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kInitial, put = setStaticF_kInitial)) ::GlobalNamespace::PerformanceConfigurationStats_IntStats kInitial;

  /// @brief Method CreateLogValue, addr 0x3b1bddc, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW CreateLogValue();

  /// @brief Method Update, addr 0x3b1bb60, size 0x8c, virtual false, abstract: false, final false
  inline void Update(int32_t value);

  static inline ::GlobalNamespace::PerformanceConfigurationStats_IntStats getStaticF_kInitial();

  static inline void setStaticF_kInitial(::GlobalNamespace::PerformanceConfigurationStats_IntStats value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationStats_IntStats();

  // Ctor Parameters [CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerformanceConfigurationStats_IntStats(int32_t min, int32_t max) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5122 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field min, offset: 0x0, size: 0x4, def value: None
  int32_t min;

  /// @brief Field max, offset: 0x4, size: 0x4, def value: None
  int32_t max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats_IntStats, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats_IntStats, max) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationStats_IntStats, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerformanceConfigurationStats/FloatStats
struct CORDL_TYPE PerformanceConfigurationStats_FloatStats {
public:
  // Declarations
  /// @brief Field kInitial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kInitial, put = setStaticF_kInitial)) ::GlobalNamespace::PerformanceConfigurationStats_FloatStats kInitial;

  /// @brief Method CreateLogValue, addr 0x3b1beec, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW CreateLogValue();

  /// @brief Method Update, addr 0x3b1bbec, size 0x8c, virtual false, abstract: false, final false
  inline void Update(float_t value);

  static inline ::GlobalNamespace::PerformanceConfigurationStats_FloatStats getStaticF_kInitial();

  static inline void setStaticF_kInitial(::GlobalNamespace::PerformanceConfigurationStats_FloatStats value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationStats_FloatStats();

  // Ctor Parameters [CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None }]
  constexpr PerformanceConfigurationStats_FloatStats(float_t min, float_t max) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5123 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field min, offset: 0x0, size: 0x4, def value: None
  float_t min;

  /// @brief Field max, offset: 0x4, size: 0x4, def value: None
  float_t max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats_FloatStats, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats_FloatStats, max) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationStats_FloatStats, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: PerformanceConfigurationStats/EnumStats`1<T>
struct CORDL_TYPE PerformanceConfigurationStats_EnumStats_1 {
public:
  // Declarations
  /// @brief Method CreateLogValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW CreateLogValue();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Update(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationStats_EnumStats_1();

  // Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerformanceConfigurationStats_EnumStats_1(int32_t flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5124 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field flags, offset: 0x0, size: 0x4, def value: None
  int32_t flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies PerformanceConfigurationStats::BoolStats, PerformanceConfigurationStats::EnumStats`1<T>, PerformanceConfigurationStats::FloatStats, PerformanceConfigurationStats::IntStats,
// System.Object, UnityEngine.BatteryStatus, UnityEngine.NetworkReachability
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceConfigurationStats
class CORDL_TYPE PerformanceConfigurationStats : public ::System::Object {
public:
  // Declarations
  using BoolStats = ::GlobalNamespace::PerformanceConfigurationStats_BoolStats;

  template <typename T> using EnumStats_1 = ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<T>;

  using FloatStats = ::GlobalNamespace::PerformanceConfigurationStats_FloatStats;

  using IntStats = ::GlobalNamespace::PerformanceConfigurationStats_IntStats;

  /// @brief Field batteryLevel, offset 0x1c, size 0x8
  __declspec(property(get = __cordl_internal_get_batteryLevel, put = __cordl_internal_set_batteryLevel)) ::GlobalNamespace::PerformanceConfigurationStats_FloatStats batteryLevel;

  /// @brief Field batteryStatus, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_batteryStatus, put = __cordl_internal_set_batteryStatus)) ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::BatteryStatus>
      batteryStatus;

  /// @brief Field boundaryVisible, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_boundaryVisible, put = __cordl_internal_set_boundaryVisible)) ::GlobalNamespace::PerformanceConfigurationStats_BoolStats boundaryVisible;

  /// @brief Field gpuUtilLevel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gpuUtilLevel, put = __cordl_internal_set_gpuUtilLevel)) ::GlobalNamespace::PerformanceConfigurationStats_FloatStats gpuUtilLevel;

  /// @brief Field internetReachability, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_internetReachability,
                      put = __cordl_internal_set_internetReachability)) ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::NetworkReachability>
      internetReachability;

  /// @brief Field powerSaving, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_powerSaving, put = __cordl_internal_set_powerSaving)) ::GlobalNamespace::PerformanceConfigurationStats_BoolStats powerSaving;

  /// @brief Field processorFrequency, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_processorFrequency, put = __cordl_internal_set_processorFrequency)) ::GlobalNamespace::PerformanceConfigurationStats_IntStats processorFrequency;

  /// @brief Method ConvertEnumToFlag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t ConvertEnumToFlag(T value);

  /// @brief Method ConvertFlagsToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW ConvertFlagsToString(int32_t flags);

  static inline ::GlobalNamespace::PerformanceConfigurationStats* New_ctor();

  /// @brief Method Update, addr 0x3b1b994, size 0x1cc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats const& __cordl_internal_get_batteryLevel() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats& __cordl_internal_get_batteryLevel();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::BatteryStatus> const& __cordl_internal_get_batteryStatus() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::BatteryStatus>& __cordl_internal_get_batteryStatus();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats const& __cordl_internal_get_boundaryVisible() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats& __cordl_internal_get_boundaryVisible();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats const& __cordl_internal_get_gpuUtilLevel() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_FloatStats& __cordl_internal_get_gpuUtilLevel();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::NetworkReachability> const& __cordl_internal_get_internetReachability() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::NetworkReachability>& __cordl_internal_get_internetReachability();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats const& __cordl_internal_get_powerSaving() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_BoolStats& __cordl_internal_get_powerSaving();

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_IntStats const& __cordl_internal_get_processorFrequency() const;

  constexpr ::GlobalNamespace::PerformanceConfigurationStats_IntStats& __cordl_internal_get_processorFrequency();

  constexpr void __cordl_internal_set_batteryLevel(::GlobalNamespace::PerformanceConfigurationStats_FloatStats value);

  constexpr void __cordl_internal_set_batteryStatus(::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::BatteryStatus> value);

  constexpr void __cordl_internal_set_boundaryVisible(::GlobalNamespace::PerformanceConfigurationStats_BoolStats value);

  constexpr void __cordl_internal_set_gpuUtilLevel(::GlobalNamespace::PerformanceConfigurationStats_FloatStats value);

  constexpr void __cordl_internal_set_internetReachability(::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::NetworkReachability> value);

  constexpr void __cordl_internal_set_powerSaving(::GlobalNamespace::PerformanceConfigurationStats_BoolStats value);

  constexpr void __cordl_internal_set_processorFrequency(::GlobalNamespace::PerformanceConfigurationStats_IntStats value);

  /// @brief Method .ctor, addr 0x3b1bc94, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationStats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceConfigurationStats(PerformanceConfigurationStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceConfigurationStats(PerformanceConfigurationStats const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5125 };

  /// @brief Field processorFrequency, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats_IntStats ___processorFrequency;

  /// @brief Field batteryStatus, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::BatteryStatus> ___batteryStatus;

  /// @brief Field batteryLevel, offset: 0x1c, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats_FloatStats ___batteryLevel;

  /// @brief Field internetReachability, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1<::UnityEngine::NetworkReachability> ___internetReachability;

  /// @brief Field gpuUtilLevel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats_FloatStats ___gpuUtilLevel;

  /// @brief Field powerSaving, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats_BoolStats ___powerSaving;

  /// @brief Field boundaryVisible, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PerformanceConfigurationStats_BoolStats ___boundaryVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___processorFrequency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___batteryStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___batteryLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___internetReachability) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___gpuUtilLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___powerSaving) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___boundaryVisible) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationStats, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceConfigurationStats);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationStats*, "", "PerformanceConfigurationStats");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationStats_BoolStats, "", "PerformanceConfigurationStats/BoolStats");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::PerformanceConfigurationStats_EnumStats_1, "", "PerformanceConfigurationStats/EnumStats`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationStats_FloatStats, "", "PerformanceConfigurationStats/FloatStats");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationStats_IntStats, "", "PerformanceConfigurationStats/IntStats");
