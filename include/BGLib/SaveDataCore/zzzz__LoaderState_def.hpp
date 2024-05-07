#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/LoaderState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoaderState)
// Forward declare root types
namespace BGLib::SaveDataCore {
struct LoaderState;
}
// Write type traits
MARK_VAL_T(::BGLib::SaveDataCore::LoaderState);
// Type: BGLib.SaveDataCore::LoaderState
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: true
// CS Name: ::BGLib.SaveDataCore::LoaderState
struct CORDL_TYPE LoaderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __LoaderState_Unwrapped
  enum struct __LoaderState_Unwrapped : uint8_t {
    __E_Unloaded = static_cast<uint8_t>(0x0u),
    __E_Loading = static_cast<uint8_t>(0x1u),
    __E_FileLoaded = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LoaderState_Unwrapped() const noexcept {
    return static_cast<__LoaderState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoaderState();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr LoaderState(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field FileLoaded value: static_cast<uint8_t>(0x2u)
  static ::BGLib::SaveDataCore::LoaderState const FileLoaded;

  /// @brief Field Loading value: static_cast<uint8_t>(0x1u)
  static ::BGLib::SaveDataCore::LoaderState const Loading;

  /// @brief Field Unloaded value: static_cast<uint8_t>(0x0u)
  static ::BGLib::SaveDataCore::LoaderState const Unloaded;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::SaveDataCore::LoaderState, 0x1>, "Size mismatch!");

static_assert(offsetof(::BGLib::SaveDataCore::LoaderState, value__) == 0x0, "Offset mismatch!");

} // namespace BGLib::SaveDataCore
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::LoaderState, "BGLib.SaveDataCore", "LoaderState");
