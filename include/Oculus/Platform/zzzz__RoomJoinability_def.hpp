#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomJoinability)
// Forward declare root types
namespace Oculus::Platform {
struct RoomJoinability;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::RoomJoinability);
// Type: Oculus.Platform::RoomJoinability
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13417))
// CS Name: ::Oculus.Platform::RoomJoinability
struct CORDL_TYPE RoomJoinability {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RoomJoinability_Unwrapped
  enum struct __RoomJoinability_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_AreIn = static_cast<int32_t>(0x1),
    __E_AreKicked = static_cast<int32_t>(0x2),
    __E_CanJoin = static_cast<int32_t>(0x3),
    __E_IsFull = static_cast<int32_t>(0x4),
    __E_NoViewer = static_cast<int32_t>(0x5),
    __E_PolicyPrevents = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RoomJoinability_Unwrapped() const noexcept {
    return static_cast<__RoomJoinability_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RoomJoinability(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomJoinability();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::RoomJoinability const Unknown;

  /// @brief Field AreIn value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::RoomJoinability const AreIn;

  /// @brief Field AreKicked value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::RoomJoinability const AreKicked;

  /// @brief Field CanJoin value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::RoomJoinability const CanJoin;

  /// @brief Field IsFull value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::RoomJoinability const IsFull;

  /// @brief Field NoViewer value: static_cast<int32_t>(0x5)
  static ::Oculus::Platform::RoomJoinability const NoViewer;

  /// @brief Field PolicyPrevents value: static_cast<int32_t>(0x6)
  static ::Oculus::Platform::RoomJoinability const PolicyPrevents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RoomJoinability, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::RoomJoinability, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomJoinability, "Oculus.Platform", "RoomJoinability");
