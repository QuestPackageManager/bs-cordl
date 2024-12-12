#pragma once
// IWYU pragma private; include "System/Reflection/PInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PInfo)
// Forward declare root types
namespace System::Reflection {
struct PInfo;
}
// Write type traits
MARK_VAL_T(::System::Reflection::PInfo);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.PInfo
struct CORDL_TYPE PInfo {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PInfo_Unwrapped
  enum struct __PInfo_Unwrapped : int32_t {
    __E_Attributes = static_cast<int32_t>(0x1),
    __E_GetMethod = static_cast<int32_t>(0x2),
    __E_SetMethod = static_cast<int32_t>(0x4),
    __E_ReflectedType = static_cast<int32_t>(0x8),
    __E_DeclaringType = static_cast<int32_t>(0x10),
    __E_Name = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PInfo_Unwrapped() const noexcept {
    return static_cast<__PInfo_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PInfo();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PInfo(int32_t value__) noexcept;

  /// @brief Field Attributes value: I32(1)
  static ::System::Reflection::PInfo const Attributes;

  /// @brief Field DeclaringType value: I32(16)
  static ::System::Reflection::PInfo const DeclaringType;

  /// @brief Field GetMethod value: I32(2)
  static ::System::Reflection::PInfo const GetMethod;

  /// @brief Field Name value: I32(32)
  static ::System::Reflection::PInfo const Name;

  /// @brief Field ReflectedType value: I32(8)
  static ::System::Reflection::PInfo const ReflectedType;

  /// @brief Field SetMethod value: I32(4)
  static ::System::Reflection::PInfo const SetMethod;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3531 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::PInfo, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::PInfo, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PInfo, "System.Reflection", "PInfo");
