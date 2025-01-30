#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPackError)
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::AndroidAssetPackError);
// Dependencies
namespace UnityEngine::Android {
// Is value type: true
// CS Name: UnityEngine.Android.AndroidAssetPackError
struct CORDL_TYPE AndroidAssetPackError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidAssetPackError_Unwrapped
  enum struct __AndroidAssetPackError_Unwrapped : int32_t {
    __E_NoError = static_cast<int32_t>(0x0),
    __E_AppUnavailable = static_cast<int32_t>(0xffffffff),
    __E_PackUnavailable = static_cast<int32_t>(0xfffffffe),
    __E_InvalidRequest = static_cast<int32_t>(0xfffffffd),
    __E_DownloadNotFound = static_cast<int32_t>(0xfffffffc),
    __E_ApiNotAvailable = static_cast<int32_t>(0xfffffffb),
    __E_NetworkError = static_cast<int32_t>(0xfffffffa),
    __E_AccessDenied = static_cast<int32_t>(0xfffffff9),
    __E_InsufficientStorage = static_cast<int32_t>(0xfffffff6),
    __E_PlayStoreNotFound = static_cast<int32_t>(0xfffffff5),
    __E_NetworkUnrestricted = static_cast<int32_t>(0xfffffff4),
    __E_AppNotOwned = static_cast<int32_t>(0xfffffff3),
    __E_InternalError = static_cast<int32_t>(0xffffff9c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidAssetPackError_Unwrapped() const noexcept {
    return static_cast<__AndroidAssetPackError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPackError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidAssetPackError(int32_t value__) noexcept;

  /// @brief Field AccessDenied value: I32(-7)
  static ::UnityEngine::Android::AndroidAssetPackError const AccessDenied;

  /// @brief Field ApiNotAvailable value: I32(-5)
  static ::UnityEngine::Android::AndroidAssetPackError const ApiNotAvailable;

  /// @brief Field AppNotOwned value: I32(-13)
  static ::UnityEngine::Android::AndroidAssetPackError const AppNotOwned;

  /// @brief Field AppUnavailable value: I32(-1)
  static ::UnityEngine::Android::AndroidAssetPackError const AppUnavailable;

  /// @brief Field DownloadNotFound value: I32(-4)
  static ::UnityEngine::Android::AndroidAssetPackError const DownloadNotFound;

  /// @brief Field InsufficientStorage value: I32(-10)
  static ::UnityEngine::Android::AndroidAssetPackError const InsufficientStorage;

  /// @brief Field InternalError value: I32(-100)
  static ::UnityEngine::Android::AndroidAssetPackError const InternalError;

  /// @brief Field InvalidRequest value: I32(-3)
  static ::UnityEngine::Android::AndroidAssetPackError const InvalidRequest;

  /// @brief Field NetworkError value: I32(-6)
  static ::UnityEngine::Android::AndroidAssetPackError const NetworkError;

  /// @brief Field NetworkUnrestricted value: I32(-12)
  static ::UnityEngine::Android::AndroidAssetPackError const NetworkUnrestricted;

  /// @brief Field NoError value: I32(0)
  static ::UnityEngine::Android::AndroidAssetPackError const NoError;

  /// @brief Field PackUnavailable value: I32(-2)
  static ::UnityEngine::Android::AndroidAssetPackError const PackUnavailable;

  /// @brief Field PlayStoreNotFound value: I32(-11)
  static ::UnityEngine::Android::AndroidAssetPackError const PlayStoreNotFound;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16769 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackError, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackError, "UnityEngine.Android", "AndroidAssetPackError");
