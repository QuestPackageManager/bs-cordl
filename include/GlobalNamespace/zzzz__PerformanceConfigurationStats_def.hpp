#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PerformanceConfigurationStats_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__BatteryStatus_def.hpp"
#include "UnityEngine/zzzz__NetworkReachability_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceConfigurationStats)
namespace GlobalNamespace {
struct __PerformanceConfigurationStats__BoolStats;
}
namespace GlobalNamespace {
template <typename T> struct __PerformanceConfigurationStats__EnumStats_1;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationStats__FloatStats;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationStats__IntStats;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceConfigurationStats;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationStats__BoolStats;
}
namespace GlobalNamespace {
template <typename T> struct __PerformanceConfigurationStats__EnumStats_1;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationStats__FloatStats;
}
namespace GlobalNamespace {
struct __PerformanceConfigurationStats__IntStats;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceConfigurationStats);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationStats__BoolStats);
MARK_GEN_VAL_T(::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationStats__FloatStats);
MARK_VAL_T(::GlobalNamespace::__PerformanceConfigurationStats__IntStats);
// Type: ::BoolStats
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationStats::BoolStats
struct CORDL_TYPE __PerformanceConfigurationStats__BoolStats {
public:
  // Declarations
  /// @brief Method CreateLogValue, addr 0x23fdadc, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW CreateLogValue();

  /// @brief Method Update, addr 0x23fda24, size 0x1c, virtual false, abstract: false, final false
  inline void Update(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationStats__BoolStats();

  // Ctor Parameters [CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "on", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationStats__BoolStats(int32_t off, int32_t on) noexcept;

  /// @brief Field off, offset: 0x0, size: 0x4, def value: None
  int32_t off;

  /// @brief Field on, offset: 0x4, size: 0x4, def value: None
  int32_t on;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationStats__BoolStats, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationStats__BoolStats, off) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationStats__BoolStats, on) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IntStats
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationStats::IntStats
struct CORDL_TYPE __PerformanceConfigurationStats__IntStats {
public:
  // Declarations
  /// @brief Field kInitial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kInitial, put = setStaticF_kInitial))::GlobalNamespace::__PerformanceConfigurationStats__IntStats kInitial;

  /// @brief Method CreateLogValue, addr 0x23fdb80, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW CreateLogValue();

  /// @brief Method Update, addr 0x23fd90c, size 0x8c, virtual false, abstract: false, final false
  inline void Update(int32_t value);

  static inline ::GlobalNamespace::__PerformanceConfigurationStats__IntStats getStaticF_kInitial();

  static inline void setStaticF_kInitial(::GlobalNamespace::__PerformanceConfigurationStats__IntStats value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationStats__IntStats();

  // Ctor Parameters [CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationStats__IntStats(int32_t min, int32_t max) noexcept;

  /// @brief Field min, offset: 0x0, size: 0x4, def value: None
  int32_t min;

  /// @brief Field max, offset: 0x4, size: 0x4, def value: None
  int32_t max;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationStats__IntStats, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationStats__IntStats, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationStats__IntStats, max) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FloatStats
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PerformanceConfigurationStats::FloatStats
struct CORDL_TYPE __PerformanceConfigurationStats__FloatStats {
public:
  // Declarations
  /// @brief Field kInitial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kInitial, put = setStaticF_kInitial))::GlobalNamespace::__PerformanceConfigurationStats__FloatStats kInitial;

  /// @brief Method CreateLogValue, addr 0x23fdc90, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW CreateLogValue();

  /// @brief Method Update, addr 0x23fd998, size 0x8c, virtual false, abstract: false, final false
  inline void Update(float_t value);

  static inline ::GlobalNamespace::__PerformanceConfigurationStats__FloatStats getStaticF_kInitial();

  static inline void setStaticF_kInitial(::GlobalNamespace::__PerformanceConfigurationStats__FloatStats value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationStats__FloatStats();

  // Ctor Parameters [CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationStats__FloatStats(float_t min, float_t max) noexcept;

  /// @brief Field min, offset: 0x0, size: 0x4, def value: None
  float_t min;

  /// @brief Field max, offset: 0x4, size: 0x4, def value: None
  float_t max;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceConfigurationStats__FloatStats, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationStats__FloatStats, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PerformanceConfigurationStats__FloatStats, max) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnumStats`1
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::PerformanceConfigurationStats::EnumStats`1<T>
struct CORDL_TYPE __PerformanceConfigurationStats__EnumStats_1 {
public:
  // Declarations
  /// @brief Method CreateLogValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW CreateLogValue();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Update(T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PerformanceConfigurationStats__EnumStats_1();

  // Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PerformanceConfigurationStats__EnumStats_1(int32_t flags) noexcept;

  /// @brief Field flags, offset: 0x0, size: 0x4, def value: None
  int32_t flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::PerformanceConfigurationStats
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceConfigurationStats*
class CORDL_TYPE PerformanceConfigurationStats : public ::System::Object {
public:
  // Declarations
  using BoolStats = ::GlobalNamespace::__PerformanceConfigurationStats__BoolStats;

  template <typename T> using EnumStats_1 = ::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<T>;

  using FloatStats = ::GlobalNamespace::__PerformanceConfigurationStats__FloatStats;

  using IntStats = ::GlobalNamespace::__PerformanceConfigurationStats__IntStats;

  /// @brief Field batteryLevel, offset 0x1c, size 0x8
  __declspec(property(get = __cordl_internal_get_batteryLevel, put = __cordl_internal_set_batteryLevel))::GlobalNamespace::__PerformanceConfigurationStats__FloatStats batteryLevel;

  /// @brief Field batteryStatus, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_batteryStatus,
                      put = __cordl_internal_set_batteryStatus))::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::BatteryStatus> batteryStatus;

  /// @brief Field boundaryVisible, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_boundaryVisible, put = __cordl_internal_set_boundaryVisible))::GlobalNamespace::__PerformanceConfigurationStats__BoolStats boundaryVisible;

  /// @brief Field internetReachability, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_internetReachability,
                      put = __cordl_internal_set_internetReachability))::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::NetworkReachability> internetReachability;

  /// @brief Field powerSaving, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_powerSaving, put = __cordl_internal_set_powerSaving))::GlobalNamespace::__PerformanceConfigurationStats__BoolStats powerSaving;

  /// @brief Field processorFrequency, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_processorFrequency, put = __cordl_internal_set_processorFrequency))::GlobalNamespace::__PerformanceConfigurationStats__IntStats processorFrequency;

  /// @brief Method ConvertEnumToFlag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t ConvertEnumToFlag(T value);

  /// @brief Method ConvertFlagsToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW ConvertFlagsToString(int32_t flags);

  static inline ::GlobalNamespace::PerformanceConfigurationStats* New_ctor();

  /// @brief Method Update, addr 0x23fd7e0, size 0x12c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__FloatStats const& __cordl_internal_get_batteryLevel() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__FloatStats& __cordl_internal_get_batteryLevel();

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::BatteryStatus> const& __cordl_internal_get_batteryStatus() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::BatteryStatus>& __cordl_internal_get_batteryStatus();

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__BoolStats const& __cordl_internal_get_boundaryVisible() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__BoolStats& __cordl_internal_get_boundaryVisible();

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::NetworkReachability> const& __cordl_internal_get_internetReachability() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::NetworkReachability>& __cordl_internal_get_internetReachability();

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__BoolStats const& __cordl_internal_get_powerSaving() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__BoolStats& __cordl_internal_get_powerSaving();

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__IntStats const& __cordl_internal_get_processorFrequency() const;

  constexpr ::GlobalNamespace::__PerformanceConfigurationStats__IntStats& __cordl_internal_get_processorFrequency();

  constexpr void __cordl_internal_set_batteryLevel(::GlobalNamespace::__PerformanceConfigurationStats__FloatStats value);

  constexpr void __cordl_internal_set_batteryStatus(::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::BatteryStatus> value);

  constexpr void __cordl_internal_set_boundaryVisible(::GlobalNamespace::__PerformanceConfigurationStats__BoolStats value);

  constexpr void __cordl_internal_set_internetReachability(::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::NetworkReachability> value);

  constexpr void __cordl_internal_set_powerSaving(::GlobalNamespace::__PerformanceConfigurationStats__BoolStats value);

  constexpr void __cordl_internal_set_processorFrequency(::GlobalNamespace::__PerformanceConfigurationStats__IntStats value);

  /// @brief Method .ctor, addr 0x23fda40, size 0x9c, virtual false, abstract: false, final false
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

  /// @brief Field processorFrequency, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__PerformanceConfigurationStats__IntStats ___processorFrequency;

  /// @brief Field batteryStatus, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::BatteryStatus> ___batteryStatus;

  /// @brief Field batteryLevel, offset: 0x1c, size: 0x8, def value: None
  ::GlobalNamespace::__PerformanceConfigurationStats__FloatStats ___batteryLevel;

  /// @brief Field internetReachability, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1<::UnityEngine::NetworkReachability> ___internetReachability;

  /// @brief Field powerSaving, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PerformanceConfigurationStats__BoolStats ___powerSaving;

  /// @brief Field boundaryVisible, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PerformanceConfigurationStats__BoolStats ___boundaryVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationStats, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___processorFrequency) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___batteryStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___batteryLevel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___internetReachability) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___powerSaving) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceConfigurationStats, ___boundaryVisible) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceConfigurationStats);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationStats*, "", "PerformanceConfigurationStats");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationStats__BoolStats, "", "PerformanceConfigurationStats/BoolStats");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__PerformanceConfigurationStats__EnumStats_1, "", "PerformanceConfigurationStats/EnumStats`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationStats__FloatStats, "", "PerformanceConfigurationStats/FloatStats");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceConfigurationStats__IntStats, "", "PerformanceConfigurationStats/IntStats");
