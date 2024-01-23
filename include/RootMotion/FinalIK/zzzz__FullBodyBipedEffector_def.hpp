#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FullBodyBipedEffector)
// Forward declare root types
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::FullBodyBipedEffector);
// Type: RootMotion.FinalIK::FullBodyBipedEffector
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12571))
// CS Name: ::RootMotion.FinalIK::FullBodyBipedEffector
struct CORDL_TYPE FullBodyBipedEffector {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FullBodyBipedEffector_Unwrapped
  enum struct __FullBodyBipedEffector_Unwrapped : int32_t {
    __E_Body = static_cast<int32_t>(0x0),
    __E_LeftShoulder = static_cast<int32_t>(0x1),
    __E_RightShoulder = static_cast<int32_t>(0x2),
    __E_LeftThigh = static_cast<int32_t>(0x3),
    __E_RightThigh = static_cast<int32_t>(0x4),
    __E_LeftHand = static_cast<int32_t>(0x5),
    __E_RightHand = static_cast<int32_t>(0x6),
    __E_LeftFoot = static_cast<int32_t>(0x7),
    __E_RightFoot = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FullBodyBipedEffector_Unwrapped() const noexcept {
    return static_cast<__FullBodyBipedEffector_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FullBodyBipedEffector(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FullBodyBipedEffector();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Body value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const Body;

  /// @brief Field LeftShoulder value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const LeftShoulder;

  /// @brief Field RightShoulder value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const RightShoulder;

  /// @brief Field LeftThigh value: static_cast<int32_t>(0x3)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const LeftThigh;

  /// @brief Field RightThigh value: static_cast<int32_t>(0x4)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const RightThigh;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x5)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const LeftHand;

  /// @brief Field RightHand value: static_cast<int32_t>(0x6)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const RightHand;

  /// @brief Field LeftFoot value: static_cast<int32_t>(0x7)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const LeftFoot;

  /// @brief Field RightFoot value: static_cast<int32_t>(0x8)
  static ::RootMotion::FinalIK::FullBodyBipedEffector const RightFoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FullBodyBipedEffector, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FullBodyBipedEffector, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FullBodyBipedEffector, "RootMotion.FinalIK", "FullBodyBipedEffector");
