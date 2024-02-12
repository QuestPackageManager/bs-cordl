#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomType)
// Forward declare root types
namespace Oculus::Platform {
struct RoomType;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::RoomType);
// Type: Oculus.Platform::RoomType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13314))
// CS Name: ::Oculus.Platform::RoomType
struct CORDL_TYPE RoomType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RoomType_Unwrapped
  enum struct __RoomType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Matchmaking = static_cast<int32_t>(0x1),
    __E_Moderated = static_cast<int32_t>(0x2),
    __E_Private = static_cast<int32_t>(0x3),
    __E_Solo = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RoomType_Unwrapped() const noexcept {
    return static_cast<__RoomType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RoomType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::RoomType const Unknown;

  /// @brief Field Matchmaking value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::RoomType const Matchmaking;

  /// @brief Field Moderated value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::RoomType const Moderated;

  /// @brief Field Private value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::RoomType const Private;

  /// @brief Field Solo value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::RoomType const Solo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RoomType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::RoomType, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomType, "Oculus.Platform", "RoomType");
