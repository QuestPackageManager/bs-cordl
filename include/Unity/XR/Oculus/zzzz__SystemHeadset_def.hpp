#pragma once
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
// Type: Unity.XR.Oculus::SystemHeadset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15139))
// CS Name: ::Unity.XR.Oculus::SystemHeadset
struct CORDL_TYPE SystemHeadset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SystemHeadset_Unwrapped
  enum struct __SystemHeadset_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Oculus_Quest = static_cast<int32_t>(0x8),
    __E_Oculus_Quest_2 = static_cast<int32_t>(0x9),
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SystemHeadset(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemHeadset();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Unity::XR::Oculus::SystemHeadset const None;

  /// @brief Field Oculus_Quest value: static_cast<int32_t>(0x8)
  static ::Unity::XR::Oculus::SystemHeadset const Oculus_Quest;

  /// @brief Field Oculus_Quest_2 value: static_cast<int32_t>(0x9)
  static ::Unity::XR::Oculus::SystemHeadset const Oculus_Quest_2;

  /// @brief Field Placeholder_10 value: static_cast<int32_t>(0xa)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_10;

  /// @brief Field Placeholder_11 value: static_cast<int32_t>(0xb)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_11;

  /// @brief Field Placeholder_12 value: static_cast<int32_t>(0xc)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_12;

  /// @brief Field Placeholder_13 value: static_cast<int32_t>(0xd)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_13;

  /// @brief Field Placeholder_14 value: static_cast<int32_t>(0xe)
  static ::Unity::XR::Oculus::SystemHeadset const Placeholder_14;

  /// @brief Field Rift_DK1 value: static_cast<int32_t>(0x1000)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_DK1;

  /// @brief Field Rift_DK2 value: static_cast<int32_t>(0x1001)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_DK2;

  /// @brief Field Rift_CV1 value: static_cast<int32_t>(0x1002)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_CV1;

  /// @brief Field Rift_CB value: static_cast<int32_t>(0x1003)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_CB;

  /// @brief Field Rift_S value: static_cast<int32_t>(0x1004)
  static ::Unity::XR::Oculus::SystemHeadset const Rift_S;

  /// @brief Field Oculus_Link_Quest value: static_cast<int32_t>(0x1005)
  static ::Unity::XR::Oculus::SystemHeadset const Oculus_Link_Quest;

  /// @brief Field Oculus_Link_Quest_2 value: static_cast<int32_t>(0x1006)
  static ::Unity::XR::Oculus::SystemHeadset const Oculus_Link_Quest_2;

  /// @brief Field PC_Placeholder_4103 value: static_cast<int32_t>(0x1007)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4103;

  /// @brief Field PC_Placeholder_4104 value: static_cast<int32_t>(0x1008)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4104;

  /// @brief Field PC_Placeholder_4105 value: static_cast<int32_t>(0x1009)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4105;

  /// @brief Field PC_Placeholder_4106 value: static_cast<int32_t>(0x100a)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4106;

  /// @brief Field PC_Placeholder_4107 value: static_cast<int32_t>(0x100b)
  static ::Unity::XR::Oculus::SystemHeadset const PC_Placeholder_4107;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::SystemHeadset, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::SystemHeadset, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::SystemHeadset, "Unity.XR.Oculus", "SystemHeadset");
