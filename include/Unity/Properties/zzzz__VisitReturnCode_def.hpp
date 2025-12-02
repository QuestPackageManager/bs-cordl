#pragma once
// IWYU pragma private; include "Unity/Properties/VisitReturnCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisitReturnCode)
// Forward declare root types
namespace Unity::Properties {
struct VisitReturnCode;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::VisitReturnCode);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.VisitReturnCode
struct CORDL_TYPE VisitReturnCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisitReturnCode_Unwrapped
  enum struct __VisitReturnCode_Unwrapped : int32_t {
    __E_Ok = static_cast<int32_t>(0x0),
    __E_NullContainer = static_cast<int32_t>(0x1),
    __E_InvalidContainerType = static_cast<int32_t>(0x2),
    __E_MissingPropertyBag = static_cast<int32_t>(0x3),
    __E_InvalidPath = static_cast<int32_t>(0x4),
    __E_InvalidCast = static_cast<int32_t>(0x5),
    __E_AccessViolation = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisitReturnCode_Unwrapped() const noexcept {
    return static_cast<__VisitReturnCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisitReturnCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisitReturnCode(int32_t value__) noexcept;

  /// @brief Field AccessViolation value: I32(6)
  static ::Unity::Properties::VisitReturnCode const AccessViolation;

  /// @brief Field InvalidCast value: I32(5)
  static ::Unity::Properties::VisitReturnCode const InvalidCast;

  /// @brief Field InvalidContainerType value: I32(2)
  static ::Unity::Properties::VisitReturnCode const InvalidContainerType;

  /// @brief Field InvalidPath value: I32(4)
  static ::Unity::Properties::VisitReturnCode const InvalidPath;

  /// @brief Field MissingPropertyBag value: I32(3)
  static ::Unity::Properties::VisitReturnCode const MissingPropertyBag;

  /// @brief Field NullContainer value: I32(1)
  static ::Unity::Properties::VisitReturnCode const NullContainer;

  /// @brief Field Ok value: I32(0)
  static ::Unity::Properties::VisitReturnCode const Ok;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19302 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::VisitReturnCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::VisitReturnCode, 0x4>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::VisitReturnCode, "Unity.Properties", "VisitReturnCode");
