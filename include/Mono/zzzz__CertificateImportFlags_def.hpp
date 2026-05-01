#pragma once
// IWYU pragma private; include "Mono/CertificateImportFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateImportFlags)
// Forward declare root types
namespace Mono {
struct CertificateImportFlags;
}
// Write type traits
MARK_VAL_T(::Mono::CertificateImportFlags);
// Dependencies
namespace Mono {
// Is value type: true
// CS Name: Mono.CertificateImportFlags
struct CORDL_TYPE CertificateImportFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CertificateImportFlags_Unwrapped
  enum struct __CertificateImportFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DisableNativeBackend = static_cast<int32_t>(0x1),
    __E_DisableAutomaticFallback = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CertificateImportFlags_Unwrapped() const noexcept {
    return static_cast<__CertificateImportFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateImportFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CertificateImportFlags(int32_t value__) noexcept;

  /// @brief Field DisableAutomaticFallback value: I32(2)
  static ::Mono::CertificateImportFlags const DisableAutomaticFallback;

  /// @brief Field DisableNativeBackend value: I32(1)
  static ::Mono::CertificateImportFlags const DisableNativeBackend;

  /// @brief Field None value: I32(0)
  static ::Mono::CertificateImportFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2223 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::CertificateImportFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::CertificateImportFlags, 0x4>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::CertificateImportFlags, "Mono", "CertificateImportFlags");
