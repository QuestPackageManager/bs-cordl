#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoresScope)
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
struct ScoresScope;
}
// Write type traits
MARK_VAL_T(::BeatSaberAPI::DataTransferObjects::ScoresScope);
// Type: BeatSaberAPI.DataTransferObjects::ScoresScope
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6181))
// CS Name: ::BeatSaberAPI.DataTransferObjects::ScoresScope
struct CORDL_TYPE ScoresScope {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScoresScope_Unwrapped
  enum struct __ScoresScope_Unwrapped : int32_t {
    __E_Global = static_cast<int32_t>(0x0),
    __E_AroundPlayer = static_cast<int32_t>(0x1),
    __E_Friends = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScoresScope_Unwrapped() const noexcept {
    return static_cast<__ScoresScope_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScoresScope(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoresScope();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Global value: static_cast<int32_t>(0x0)
  static ::BeatSaberAPI::DataTransferObjects::ScoresScope const Global;

  /// @brief Field AroundPlayer value: static_cast<int32_t>(0x1)
  static ::BeatSaberAPI::DataTransferObjects::ScoresScope const AroundPlayer;

  /// @brief Field Friends value: static_cast<int32_t>(0x3)
  static ::BeatSaberAPI::DataTransferObjects::ScoresScope const Friends;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::ScoresScope, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::ScoresScope, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::ScoresScope, "BeatSaberAPI.DataTransferObjects", "ScoresScope");
