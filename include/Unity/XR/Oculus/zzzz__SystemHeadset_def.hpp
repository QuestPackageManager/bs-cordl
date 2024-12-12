#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/SystemHeadset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemHeadset)
// Forward declare root types
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::SystemHeadset);
// Dependencies
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.SystemHeadset
struct CORDL_TYPE SystemHeadset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SystemHeadset_Unwrapped
  enum struct __SystemHeadset_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Oculus_Quest = static_cast<int32_t>(0x8),
    __E_Oculus_Quest_2 = static_cast<int32_t>(0x9),
    __E_Meta_Quest_Pro = static_cast<int32_t>(0xa),
    __E_Placeholder_10 = static_cast<int32_t>(0xa),
    __E_Placeholder_11 = static_cast<int32_t>(0xb),
    __E_Placeholder_12 = static_cast<int32_t>(0xc),
    __E_Placeholder_13 = static_cast<int32_t>(0xd),
    __E_Placeholder_14 = static_cast<int32_t>(0xe),
    __E_Rift_DK1 = static_cast<int32_t>(0x1000),
    __E_Rift_DK2 = static_cast<int32_t>(0x1001),
    __E_Rift_CV1 = static_cast<int32_t>(0x1002),
    __E_Rift_CB = static_cast<int32_t>(0x1003),
    __E_Rift_S = static_cast<int32_t>(0x1004),
    __E_Oculus_Link_Quest = static_cast<int32_t>(0x1005),
    __E_Oculus_Link_Quest_2 = static_cast<int32_t>(0x1006),
    __E_Meta_Link_Quest_Pro = static_cast<int32_t>(0x1007),
    __E_PC_Placeholder_4103 = static_cast<int32_t>(0x1007),
    __E_PC_Placeholder_4104 = static_cast<int32_t>(0x1008),
    __E_PC_Placeholder_4105 = static_cast<int32_t>(0x1009),
    __E_PC_Placeholder_4106 = static_cast<int32_t>(0x100a),
    __E_PC_Placeholder_4107 = static_cast<int32_t>(0x100b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SystemHeadset_Unwrapped() const noexcept {
    return static_cast<__SystemHeadset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemHeadset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SystemHeadset(int32_t value__) noexcept;

  /// @brief Field Meta_Link_Quest_Pro value: I32(4103)
  static ::Unity::XR::Oculus::SystemHeadset const Meta_Link_Quest_Pro;

  /// @brief Field Meta_Quest_Pro value: I32(10)
  static ::Unity::XR::Oculus::SystemHeadset const Meta_Quest_Pro;

  /// @brief Field None value: I32(0)
  static ::Unity::XR::Oculus::SystemHeadset const None;

  /// @brief Field Oculus_Link_Quest value: I32(4101)
  static ::Unity::XR::Oculus::SystemHeadset const Oculus_Link_Quest;

  /// @brief Field Oculus_Link_Quest_2 value: I32(4102)
  static ::Unity::XR::Oculus::SystemHeadset const Oculus_Link_Quest_2;

  /// @brief Field Oculus_Quest value: I32(8)
  static ::Unity::XR::Oculus::SystemHeadset const Oculus_Quest;

  /// @brief Field Oculus_Quest_2 value: I32(9)
  static ::Unity::XR::Oculus::SystemHeadset const Oculus_Quest_2;

  /// @brief Field PC_Placeholder_4103 value: I32(4103)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4103;

  /// @brief Field PC_Placeholder_4104 value: I32(4104)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4104;

  /// @brief Field PC_Placeholder_4105 value: I32(4105)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4105;

  /// @brief Field PC_Placeholder_4106 value: I32(4106)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4106;

  /// @brief Field PC_Placeholder_4107 value: I32(4107)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4107;

  /// @brief Field Placeholder_10 value: I32(10)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_10;

  /// @brief Field Placeholder_11 value: I32(11)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_11;

  /// @brief Field Placeholder_12 value: I32(12)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_12;

  /// @brief Field Placeholder_13 value: I32(13)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_13;

  /// @brief Field Placeholder_14 value: I32(14)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_14;

  /// @brief Field Rift_CB value: I32(4099)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_CB;

  /// @brief Field Rift_CV1 value: I32(4098)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_CV1;

  /// @brief Field Rift_DK1 value: I32(4096)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_DK1;

  /// @brief Field Rift_DK2 value: I32(4097)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_DK2;

  /// @brief Field Rift_S value: I32(4100)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_S;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17399 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::SystemHeadset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::SystemHeadset, 0x4>, "Size mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::SystemHeadset, "Unity.XR.Oculus", "SystemHeadset");
