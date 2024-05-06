#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarPart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPart)
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
// Write type traits
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::AvatarPart);
// Type: BeatSaber.BeatAvatarSDK::AvatarPart
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarPart
struct CORDL_TYPE AvatarPart {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarPart_Unwrapped
  enum struct __AvatarPart_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0x1),
    __E_SkinColor = static_cast<int32_t>(0x2),
    __E_HeadTopModel = static_cast<int32_t>(0x3),
    __E_HeadTopPrimaryColor = static_cast<int32_t>(0x4),
    __E_HeadTopSecondaryColor = static_cast<int32_t>(0x5),
    __E_GlassesColor = static_cast<int32_t>(0x6),
    __E_FacialHairColor = static_cast<int32_t>(0x7),
    __E_HandsModel = static_cast<int32_t>(0x8),
    __E_HandsColor = static_cast<int32_t>(0x9),
    __E_ClothesModel = static_cast<int32_t>(0xa),
    __E_ClothesModelPrimaryColor = static_cast<int32_t>(0xb),
    __E_ClothesModelSecondaryColor = static_cast<int32_t>(0xc),
    __E_ClothesModelDetailColor = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarPart_Unwrapped() const noexcept {
    return static_cast<__AvatarPart_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPart();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarPart(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x1)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const All;

  /// @brief Field ClothesModel value: static_cast<int32_t>(0xa)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const ClothesModel;

  /// @brief Field ClothesModelDetailColor value: static_cast<int32_t>(0xd)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const ClothesModelDetailColor;

  /// @brief Field ClothesModelPrimaryColor value: static_cast<int32_t>(0xb)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const ClothesModelPrimaryColor;

  /// @brief Field ClothesModelSecondaryColor value: static_cast<int32_t>(0xc)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const ClothesModelSecondaryColor;

  /// @brief Field FacialHairColor value: static_cast<int32_t>(0x7)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const FacialHairColor;

  /// @brief Field GlassesColor value: static_cast<int32_t>(0x6)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const GlassesColor;

  /// @brief Field HandsColor value: static_cast<int32_t>(0x9)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const HandsColor;

  /// @brief Field HandsModel value: static_cast<int32_t>(0x8)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const HandsModel;

  /// @brief Field HeadTopModel value: static_cast<int32_t>(0x3)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const HeadTopModel;

  /// @brief Field HeadTopPrimaryColor value: static_cast<int32_t>(0x4)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const HeadTopPrimaryColor;

  /// @brief Field HeadTopSecondaryColor value: static_cast<int32_t>(0x5)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const HeadTopSecondaryColor;

  /// @brief Field SkinColor value: static_cast<int32_t>(0x2)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const SkinColor;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::BeatSaber::BeatAvatarSDK::AvatarPart const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarPart, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarPart, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarPart, "BeatSaber.BeatAvatarSDK", "AvatarPart");
