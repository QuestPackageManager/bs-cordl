#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserPlatform)
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
struct UserPlatform;
}
// Write type traits
MARK_VAL_T(::BeatSaberAPI::DataTransferObjects::UserPlatform);
// Type: BeatSaberAPI.DataTransferObjects::UserPlatform
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6185))
// CS Name: ::BeatSaberAPI.DataTransferObjects::UserPlatform
struct CORDL_TYPE UserPlatform {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __UserPlatform_Unwrapped
  enum struct __UserPlatform_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_Test = static_cast<uint8_t>(0x1u),
    __E_Steam = static_cast<uint8_t>(0x2u),
    __E_PlayStation = static_cast<uint8_t>(0x3u),
    __E_OculusPC = static_cast<uint8_t>(0x4u),
    __E_OculusQuest = static_cast<uint8_t>(0x5u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UserPlatform_Unwrapped() const noexcept {
    return static_cast<__UserPlatform_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr UserPlatform(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UserPlatform();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field None value: static_cast<uint8_t>(0x0u)
  static ::BeatSaberAPI::DataTransferObjects::UserPlatform const None;

  /// @brief Field Test value: static_cast<uint8_t>(0x1u)
  static ::BeatSaberAPI::DataTransferObjects::UserPlatform const Test;

  /// @brief Field Steam value: static_cast<uint8_t>(0x2u)
  static ::BeatSaberAPI::DataTransferObjects::UserPlatform const Steam;

  /// @brief Field PlayStation value: static_cast<uint8_t>(0x3u)
  static ::BeatSaberAPI::DataTransferObjects::UserPlatform const PlayStation;

  /// @brief Field OculusPC value: static_cast<uint8_t>(0x4u)
  static ::BeatSaberAPI::DataTransferObjects::UserPlatform const OculusPC;

  /// @brief Field OculusQuest value: static_cast<uint8_t>(0x5u)
  static ::BeatSaberAPI::DataTransferObjects::UserPlatform const OculusQuest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::UserPlatform, 0x1>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserPlatform, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::UserPlatform, "BeatSaberAPI.DataTransferObjects", "UserPlatform");
