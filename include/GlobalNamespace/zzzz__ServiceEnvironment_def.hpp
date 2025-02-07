#pragma once
// IWYU pragma private; include "GlobalNamespace/ServiceEnvironment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServiceEnvironment)
// Forward declare root types
namespace GlobalNamespace {
struct ServiceEnvironment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ServiceEnvironment);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ServiceEnvironment
struct CORDL_TYPE ServiceEnvironment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ServiceEnvironment_Unwrapped
  enum struct __ServiceEnvironment_Unwrapped : int32_t {
    __E_Production = static_cast<int32_t>(0x0),
    __E_ReleaseCandidate = static_cast<int32_t>(0x1),
    __E_InternalPlayTest = static_cast<int32_t>(0x2),
    __E_QATesting = static_cast<int32_t>(0x3),
    __E_Development = static_cast<int32_t>(0x4),
    __E_ProductionA = static_cast<int32_t>(0x5),
    __E_ProductionB = static_cast<int32_t>(0x6),
    __E_DevelopmentA = static_cast<int32_t>(0x7),
    __E_DevelopmentB = static_cast<int32_t>(0x8),
    __E_ProductionC = static_cast<int32_t>(0x9),
    __E_ProductionQuest1 = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ServiceEnvironment_Unwrapped() const noexcept {
    return static_cast<__ServiceEnvironment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceEnvironment();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ServiceEnvironment(int32_t value__) noexcept;

  /// @brief Field Development value: I32(4)
  static ::GlobalNamespace::ServiceEnvironment const Development;

  /// @brief Field DevelopmentA value: I32(7)
  static ::GlobalNamespace::ServiceEnvironment const DevelopmentA;

  /// @brief Field DevelopmentB value: I32(8)
  static ::GlobalNamespace::ServiceEnvironment const DevelopmentB;

  /// @brief Field InternalPlayTest value: I32(2)
  static ::GlobalNamespace::ServiceEnvironment const InternalPlayTest;

  /// @brief Field Production value: I32(0)
  static ::GlobalNamespace::ServiceEnvironment const Production;

  /// @brief Field ProductionA value: I32(5)
  static ::GlobalNamespace::ServiceEnvironment const ProductionA;

  /// @brief Field ProductionB value: I32(6)
  static ::GlobalNamespace::ServiceEnvironment const ProductionB;

  /// @brief Field ProductionC value: I32(9)
  static ::GlobalNamespace::ServiceEnvironment const ProductionC;

  /// @brief Field ProductionQuest1 value: I32(10)
  static ::GlobalNamespace::ServiceEnvironment const ProductionQuest1;

  /// @brief Field QATesting value: I32(3)
  static ::GlobalNamespace::ServiceEnvironment const QATesting;

  /// @brief Field ReleaseCandidate value: I32(1)
  static ::GlobalNamespace::ServiceEnvironment const ReleaseCandidate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServiceEnvironment, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServiceEnvironment, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServiceEnvironment, "", "ServiceEnvironment");
