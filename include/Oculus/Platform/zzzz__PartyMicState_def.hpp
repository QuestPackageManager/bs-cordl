#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyMicState)
// Forward declare root types
namespace Oculus::Platform {
struct PartyMicState;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::PartyMicState);
// Type: Oculus.Platform::PartyMicState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13344))
// CS Name: ::Oculus.Platform::PartyMicState
struct CORDL_TYPE PartyMicState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PartyMicState_Unwrapped
  enum struct __PartyMicState_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Party = static_cast<int32_t>(0x1),
    __E_App = static_cast<int32_t>(0x2),
    __E_Mute = static_cast<int32_t>(0x3),
    __E_Inactive = static_cast<int32_t>(0x4),
    __E_InputShared = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PartyMicState_Unwrapped() const noexcept {
    return static_cast<__PartyMicState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PartyMicState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyMicState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::PartyMicState const Unknown;

  /// @brief Field Party value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::PartyMicState const Party;

  /// @brief Field App value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::PartyMicState const App;

  /// @brief Field Mute value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::PartyMicState const Mute;

  /// @brief Field Inactive value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::PartyMicState const Inactive;

  /// @brief Field InputShared value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::PartyMicState const InputShared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PartyMicState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::PartyMicState, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PartyMicState, "Oculus.Platform", "PartyMicState");
