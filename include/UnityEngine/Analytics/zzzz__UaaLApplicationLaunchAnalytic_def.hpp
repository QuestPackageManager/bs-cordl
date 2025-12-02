#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/UaaLApplicationLaunchAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UaaLApplicationLaunchAnalytic)
// Forward declare root types
namespace UnityEngine::Analytics {
class UaaLApplicationLaunchAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.UaaLApplicationLaunchAnalytic
class CORDL_TYPE UaaLApplicationLaunchAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field launch_process_type, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_launch_process_type, put = __cordl_internal_set_launch_process_type)) int32_t launch_process_type;

  /// @brief Field launch_type, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_launch_type, put = __cordl_internal_set_launch_type)) int32_t launch_type;

  /// @brief Method CreateUaaLApplicationLaunchAnalytic, addr 0x68d3a90, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic* CreateUaaLApplicationLaunchAnalytic();

  static inline ::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_launch_process_type() const;

  constexpr int32_t& __cordl_internal_get_launch_process_type();

  constexpr int32_t const& __cordl_internal_get_launch_type() const;

  constexpr int32_t& __cordl_internal_get_launch_type();

  constexpr void __cordl_internal_set_launch_process_type(int32_t value);

  constexpr void __cordl_internal_set_launch_type(int32_t value);

  /// @brief Method .ctor, addr 0x68d3a18, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UaaLApplicationLaunchAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UaaLApplicationLaunchAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UaaLApplicationLaunchAnalytic(UaaLApplicationLaunchAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UaaLApplicationLaunchAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UaaLApplicationLaunchAnalytic(UaaLApplicationLaunchAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10669 };

  /// @brief Field launch_type, offset: 0x2c, size: 0x4, def value: None
  int32_t ___launch_type;

  /// @brief Field launch_process_type, offset: 0x30, size: 0x4, def value: None
  int32_t ___launch_process_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic, ___launch_type) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic, ___launch_process_type) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::UaaLApplicationLaunchAnalytic*, "UnityEngine.Analytics", "UaaLApplicationLaunchAnalytic");
