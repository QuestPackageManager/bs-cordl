#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelDataAssetDownloadUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelDataAssetDownloadUpdate)
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate_AssetDownloadingState;
}
// Forward declare root types
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate_AssetDownloadingState;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState);
MARK_VAL_T(::GlobalNamespace::LevelDataAssetDownloadUpdate);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelDataAssetDownloadUpdate/AssetDownloadingState
struct CORDL_TYPE LevelDataAssetDownloadUpdate_AssetDownloadingState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelDataAssetDownloadUpdate_AssetDownloadingState_Unwrapped
  enum struct __LevelDataAssetDownloadUpdate_AssetDownloadingState_Unwrapped : int32_t {
    __E_PreparingToDownload = static_cast<int32_t>(0x0),
    __E_Downloading = static_cast<int32_t>(0x1),
    __E_Completed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelDataAssetDownloadUpdate_AssetDownloadingState_Unwrapped() const noexcept {
    return static_cast<__LevelDataAssetDownloadUpdate_AssetDownloadingState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelDataAssetDownloadUpdate_AssetDownloadingState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LevelDataAssetDownloadUpdate_AssetDownloadingState(int32_t value__) noexcept;

  /// @brief Field Completed value: I32(2)
  static ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState const Completed;

  /// @brief Field Downloading value: I32(1)
  static ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState const Downloading;

  /// @brief Field PreparingToDownload value: I32(0)
  static ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState const PreparingToDownload;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13019 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LevelDataAssetDownloadUpdate::AssetDownloadingState
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelDataAssetDownloadUpdate
struct CORDL_TYPE LevelDataAssetDownloadUpdate {
public:
  // Declarations
  using AssetDownloadingState = ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState;

  /// @brief Method .ctor, addr 0x26d46bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState assetDownloadingState);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelDataAssetDownloadUpdate();

  // Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "assetDownloadingState", ty: "::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState",
  // modifiers: "", def_value: None }]
  constexpr LevelDataAssetDownloadUpdate(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred,
                                         ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState assetDownloadingState) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13020 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field levelID, offset: 0x0, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field bytesTotal, offset: 0x8, size: 0x4, def value: None
  uint32_t bytesTotal;

  /// @brief Field bytesTransferred, offset: 0xc, size: 0x4, def value: None
  uint32_t bytesTransferred;

  /// @brief Field assetDownloadingState, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState assetDownloadingState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate, levelID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate, bytesTotal) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate, bytesTransferred) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelDataAssetDownloadUpdate, assetDownloadingState) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelDataAssetDownloadUpdate, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState, "", "LevelDataAssetDownloadUpdate/AssetDownloadingState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelDataAssetDownloadUpdate, "", "LevelDataAssetDownloadUpdate");
