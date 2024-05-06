#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/SaveDataResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveDataResult)
// Forward declare root types
namespace BGLib::SaveDataCore {
struct SaveDataResult;
}
// Write type traits
MARK_VAL_T(::BGLib::SaveDataCore::SaveDataResult);
// Type: BGLib.SaveDataCore::SaveDataResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: true
// CS Name: ::BGLib.SaveDataCore::SaveDataResult
struct CORDL_TYPE SaveDataResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SaveDataResult_Unwrapped
  enum struct __SaveDataResult_Unwrapped : int32_t {
    __E_OK_NoFileLoaded = static_cast<int32_t>(0xfffffffe),
    __E_OK_NotDirty = static_cast<int32_t>(0xffffffff),
    __E_OK = static_cast<int32_t>(0x0),
    __E_GenericError = static_cast<int32_t>(0x64),
    __E_UnknownLoaderState = static_cast<int32_t>(0x65),
    __E_FailedToLoadOrDeserialize = static_cast<int32_t>(0xc8),
    __E_SynchronousLoadAlreadyInLoadingState = static_cast<int32_t>(0xc9),
    __E_AsyncLoadStateButNoTask = static_cast<int32_t>(0xca),
    __E_UpdateMethodDoesNotExist = static_cast<int32_t>(0xcb),
    __E_UpdateMethodFailed = static_cast<int32_t>(0xcc),
    __E_CriticalPostLoadStepFailed = static_cast<int32_t>(0xcd),
    __E_LoadingNotCompleted = static_cast<int32_t>(0x12c),
    __E_NoInstanceToSave = static_cast<int32_t>(0x12d),
    __E_AttemptedAccessWhileUnloaded = static_cast<int32_t>(0x190),
    __E_AttemptedReloadWhileLoading = static_cast<int32_t>(0x191),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SaveDataResult_Unwrapped() const noexcept {
    return static_cast<__SaveDataResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SaveDataResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SaveDataResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AsyncLoadStateButNoTask value: static_cast<int32_t>(0xca)
  static ::BGLib::SaveDataCore::SaveDataResult const AsyncLoadStateButNoTask;

  /// @brief Field AttemptedAccessWhileUnloaded value: static_cast<int32_t>(0x190)
  static ::BGLib::SaveDataCore::SaveDataResult const AttemptedAccessWhileUnloaded;

  /// @brief Field AttemptedReloadWhileLoading value: static_cast<int32_t>(0x191)
  static ::BGLib::SaveDataCore::SaveDataResult const AttemptedReloadWhileLoading;

  /// @brief Field CriticalPostLoadStepFailed value: static_cast<int32_t>(0xcd)
  static ::BGLib::SaveDataCore::SaveDataResult const CriticalPostLoadStepFailed;

  /// @brief Field FailedToLoadOrDeserialize value: static_cast<int32_t>(0xc8)
  static ::BGLib::SaveDataCore::SaveDataResult const FailedToLoadOrDeserialize;

  /// @brief Field GenericError value: static_cast<int32_t>(0x64)
  static ::BGLib::SaveDataCore::SaveDataResult const GenericError;

  /// @brief Field LoadingNotCompleted value: static_cast<int32_t>(0x12c)
  static ::BGLib::SaveDataCore::SaveDataResult const LoadingNotCompleted;

  /// @brief Field NoInstanceToSave value: static_cast<int32_t>(0x12d)
  static ::BGLib::SaveDataCore::SaveDataResult const NoInstanceToSave;

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::BGLib::SaveDataCore::SaveDataResult const OK;

  /// @brief Field OK_NoFileLoaded value: static_cast<int32_t>(0xfffffffe)
  static ::BGLib::SaveDataCore::SaveDataResult const OK_NoFileLoaded;

  /// @brief Field OK_NotDirty value: static_cast<int32_t>(0xffffffff)
  static ::BGLib::SaveDataCore::SaveDataResult const OK_NotDirty;

  /// @brief Field SynchronousLoadAlreadyInLoadingState value: static_cast<int32_t>(0xc9)
  static ::BGLib::SaveDataCore::SaveDataResult const SynchronousLoadAlreadyInLoadingState;

  /// @brief Field UnknownLoaderState value: static_cast<int32_t>(0x65)
  static ::BGLib::SaveDataCore::SaveDataResult const UnknownLoaderState;

  /// @brief Field UpdateMethodDoesNotExist value: static_cast<int32_t>(0xcb)
  static ::BGLib::SaveDataCore::SaveDataResult const UpdateMethodDoesNotExist;

  /// @brief Field UpdateMethodFailed value: static_cast<int32_t>(0xcc)
  static ::BGLib::SaveDataCore::SaveDataResult const UpdateMethodFailed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::SaveDataCore::SaveDataResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::SaveDataResult, value__) == 0x0, "Offset mismatch!");

} // namespace BGLib::SaveDataCore
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::SaveDataResult, "BGLib.SaveDataCore", "SaveDataResult");
