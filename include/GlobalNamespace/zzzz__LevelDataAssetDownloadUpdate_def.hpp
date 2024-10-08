#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelDataAssetDownloadUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelDataAssetDownloadUpdate)
namespace GlobalNamespace {
struct __LevelDataAssetDownloadUpdate__AssetDownloadingState;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LevelDataAssetDownloadUpdate__AssetDownloadingState;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState);
MARK_VAL_T(::GlobalNamespace::LevelDataAssetDownloadUpdate);
// Type: ::AssetDownloadingState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelDataAssetDownloadUpdate::AssetDownloadingState
struct CORDL_TYPE __LevelDataAssetDownloadUpdate__AssetDownloadingState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LevelDataAssetDownloadUpdate__AssetDownloadingState_Unwrapped
  enum struct ____LevelDataAssetDownloadUpdate__AssetDownloadingState_Unwrapped : int32_t {
    __E_PreparingToDownload = static_cast<int32_t>(0x0),
    __E_Downloading = static_cast<int32_t>(0x1),
    __E_Completed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LevelDataAssetDownloadUpdate__AssetDownloadingState_Unwrapped() const noexcept {
    return static_cast<____LevelDataAssetDownloadUpdate__AssetDownloadingState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelDataAssetDownloadUpdate__AssetDownloadingState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LevelDataAssetDownloadUpdate__AssetDownloadingState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Completed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState const Completed;

  /// @brief Field Downloading value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState const Downloading;

  /// @brief Field PreparingToDownload value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState const PreparingToDownload;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12970 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelDataAssetDownloadUpdate
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelDataAssetDownloadUpdate
struct CORDL_TYPE LevelDataAssetDownloadUpdate {
public:
  // Declarations
  using AssetDownloadingState = ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState;

  /// @brief Method .ctor, addr 0x26917bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState assetDownloadingState);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelDataAssetDownloadUpdate();

  // Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "assetDownloadingState", ty: "::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState",
  // modifiers: "", def_value: None }]
  constexpr LevelDataAssetDownloadUpdate(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred,
                                         ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState assetDownloadingState) noexcept;

  /// @brief Field levelID, offset: 0x0, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field bytesTotal, offset: 0x8, size: 0x4, def value: None
  uint32_t bytesTotal;

  /// @brief Field bytesTransferred, offset: 0xc, size: 0x4, def value: None
  uint32_t bytesTransferred;

  /// @brief Field assetDownloadingState, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState assetDownloadingState;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12971 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelDataAssetDownloadUpdate, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate, levelID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate, bytesTotal) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate, bytesTransferred) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate, assetDownloadingState) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelDataAssetDownloadUpdate__AssetDownloadingState, "", "LevelDataAssetDownloadUpdate/AssetDownloadingState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelDataAssetDownloadUpdate, "", "LevelDataAssetDownloadUpdate");
