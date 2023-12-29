#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformEnviroment)
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
struct PlatformEnviroment;
}
// Write type traits
MARK_VAL_T(::BeatSaberAPI::DataTransferObjects::PlatformEnviroment);
// Type: BeatSaberAPI.DataTransferObjects::PlatformEnviroment
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6186))
// CS Name: ::BeatSaberAPI.DataTransferObjects::PlatformEnviroment
struct CORDL_TYPE PlatformEnviroment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __PlatformEnviroment_Unwrapped
  enum struct __PlatformEnviroment_Unwrapped : uint8_t {
    __E_Test = static_cast<uint8_t>(0x0u),
    __E_Developer = static_cast<uint8_t>(0x1u),
    __E_Production = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformEnviroment_Unwrapped() const noexcept {
    return static_cast<__PlatformEnviroment_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr PlatformEnviroment(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformEnviroment();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Test value: static_cast<uint8_t>(0x0u)
  static ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment const Test;

  /// @brief Field Developer value: static_cast<uint8_t>(0x1u)
  static ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment const Developer;

  /// @brief Field Production value: static_cast<uint8_t>(0x2u)
  static ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment const Production;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::PlatformEnviroment, 0x1>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::PlatformEnviroment, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::PlatformEnviroment, "BeatSaberAPI.DataTransferObjects", "PlatformEnviroment");