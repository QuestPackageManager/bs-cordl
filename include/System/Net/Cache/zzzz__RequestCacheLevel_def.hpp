#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestCacheLevel)
// Forward declare root types
namespace System::Net::Cache {
struct RequestCacheLevel;
}
// Write type traits
MARK_VAL_T(::System::Net::Cache::RequestCacheLevel);
// Dependencies
namespace System::Net::Cache {
// Is value type: true
// CS Name: System.Net.Cache.RequestCacheLevel
struct CORDL_TYPE RequestCacheLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RequestCacheLevel_Unwrapped
  enum struct __RequestCacheLevel_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_BypassCache = static_cast<int32_t>(0x1),
    __E_CacheOnly = static_cast<int32_t>(0x2),
    __E_CacheIfAvailable = static_cast<int32_t>(0x3),
    __E_Revalidate = static_cast<int32_t>(0x4),
    __E_Reload = static_cast<int32_t>(0x5),
    __E_NoCacheNoStore = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RequestCacheLevel_Unwrapped() const noexcept {
    return static_cast<__RequestCacheLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCacheLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RequestCacheLevel(int32_t value__) noexcept;

  /// @brief Field BypassCache value: I32(1)
  static ::System::Net::Cache::RequestCacheLevel const BypassCache;

  /// @brief Field CacheIfAvailable value: I32(3)
  static ::System::Net::Cache::RequestCacheLevel const CacheIfAvailable;

  /// @brief Field CacheOnly value: I32(2)
  static ::System::Net::Cache::RequestCacheLevel const CacheOnly;

  /// @brief Field Default value: I32(0)
  static ::System::Net::Cache::RequestCacheLevel const Default;

  /// @brief Field NoCacheNoStore value: I32(6)
  static ::System::Net::Cache::RequestCacheLevel const NoCacheNoStore;

  /// @brief Field Reload value: I32(5)
  static ::System::Net::Cache::RequestCacheLevel const Reload;

  /// @brief Field Revalidate value: I32(4)
  static ::System::Net::Cache::RequestCacheLevel const Revalidate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9840 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Cache::RequestCacheLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheLevel, 0x4>, "Size mismatch!");

} // namespace System::Net::Cache
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheLevel, "System.Net.Cache", "RequestCacheLevel");
