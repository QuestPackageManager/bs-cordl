#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformInitializeResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInitializeResult)
// Forward declare root types
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::PlatformInitializeResult);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.PlatformInitializeResult
struct CORDL_TYPE PlatformInitializeResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlatformInitializeResult_Unwrapped
  enum struct __PlatformInitializeResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Uninitialized = static_cast<int32_t>(0xffffffff),
    __E_PreLoaded = static_cast<int32_t>(0xfffffffe),
    __E_FileInvalid = static_cast<int32_t>(0xfffffffd),
    __E_SignatureInvalid = static_cast<int32_t>(0xfffffffc),
    __E_UnableToVerify = static_cast<int32_t>(0xfffffffb),
    __E_VersionMismatch = static_cast<int32_t>(0xfffffffa),
    __E_Unknown = static_cast<int32_t>(0xfffffff9),
    __E_InvalidCredentials = static_cast<int32_t>(0xfffffff8),
    __E_NotEntitled = static_cast<int32_t>(0xfffffff7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformInitializeResult_Unwrapped() const noexcept {
    return static_cast<__PlatformInitializeResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInitializeResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlatformInitializeResult(int32_t value__) noexcept;

  /// @brief Field FileInvalid value: I32(-3)
  static ::Oculus::Platform::PlatformInitializeResult const FileInvalid;

  /// @brief Field InvalidCredentials value: I32(-8)
  static ::Oculus::Platform::PlatformInitializeResult const InvalidCredentials;

  /// @brief Field NotEntitled value: I32(-9)
  static ::Oculus::Platform::PlatformInitializeResult const NotEntitled;

  /// @brief Field PreLoaded value: I32(-2)
  static ::Oculus::Platform::PlatformInitializeResult const PreLoaded;

  /// @brief Field SignatureInvalid value: I32(-4)
  static ::Oculus::Platform::PlatformInitializeResult const SignatureInvalid;

  /// @brief Field Success value: I32(0)
  static ::Oculus::Platform::PlatformInitializeResult const Success;

  /// @brief Field UnableToVerify value: I32(-5)
  static ::Oculus::Platform::PlatformInitializeResult const UnableToVerify;

  /// @brief Field Uninitialized value: I32(-1)
  static ::Oculus::Platform::PlatformInitializeResult const Uninitialized;

  /// @brief Field Unknown value: I32(-7)
  static ::Oculus::Platform::PlatformInitializeResult const Unknown;

  /// @brief Field VersionMismatch value: I32(-6)
  static ::Oculus::Platform::PlatformInitializeResult const VersionMismatch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15458 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::PlatformInitializeResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformInitializeResult, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInitializeResult, "Oculus.Platform", "PlatformInitializeResult");
