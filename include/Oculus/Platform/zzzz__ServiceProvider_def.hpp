#pragma once
// IWYU pragma private; include "Oculus/Platform/ServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServiceProvider)
// Forward declare root types
namespace Oculus::Platform {
struct ServiceProvider;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::ServiceProvider);
// Type: Oculus.Platform::ServiceProvider
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::ServiceProvider
struct CORDL_TYPE ServiceProvider {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ServiceProvider_Unwrapped
  enum struct __ServiceProvider_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Dropbox = static_cast<int32_t>(0x1),
    __E_Facebook = static_cast<int32_t>(0x2),
    __E_Google = static_cast<int32_t>(0x3),
    __E_Instagram = static_cast<int32_t>(0x4),
    __E_RemoteMedia = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ServiceProvider_Unwrapped() const noexcept {
    return static_cast<__ServiceProvider_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceProvider();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ServiceProvider(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Dropbox value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::ServiceProvider const Dropbox;

  /// @brief Field Facebook value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::ServiceProvider const Facebook;

  /// @brief Field Google value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::ServiceProvider const Google;

  /// @brief Field Instagram value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::ServiceProvider const Instagram;

  /// @brief Field RemoteMedia value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::ServiceProvider const RemoteMedia;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::ServiceProvider const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15433 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ServiceProvider, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::ServiceProvider, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ServiceProvider, "Oculus.Platform", "ServiceProvider");
