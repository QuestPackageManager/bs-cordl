#pragma once
// IWYU pragma private; include "System/Threading/StackCrawlMark.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StackCrawlMark)
// Forward declare root types
namespace System::Threading {
struct StackCrawlMark;
}
// Write type traits
MARK_VAL_T(::System::Threading::StackCrawlMark);
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.StackCrawlMark
struct CORDL_TYPE StackCrawlMark {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StackCrawlMark_Unwrapped
  enum struct __StackCrawlMark_Unwrapped : int32_t {
    __E_LookForMe = static_cast<int32_t>(0x0),
    __E_LookForMyCaller = static_cast<int32_t>(0x1),
    __E_LookForMyCallersCaller = static_cast<int32_t>(0x2),
    __E_LookForThread = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StackCrawlMark_Unwrapped() const noexcept {
    return static_cast<__StackCrawlMark_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StackCrawlMark();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StackCrawlMark(int32_t value__) noexcept;

  /// @brief Field LookForMe value: I32(0)
  static ::System::Threading::StackCrawlMark const LookForMe;

  /// @brief Field LookForMyCaller value: I32(1)
  static ::System::Threading::StackCrawlMark const LookForMyCaller;

  /// @brief Field LookForMyCallersCaller value: I32(2)
  static ::System::Threading::StackCrawlMark const LookForMyCallersCaller;

  /// @brief Field LookForThread value: I32(3)
  static ::System::Threading::StackCrawlMark const LookForThread;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::StackCrawlMark, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::StackCrawlMark, 0x4>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::StackCrawlMark, "System.Threading", "StackCrawlMark");
