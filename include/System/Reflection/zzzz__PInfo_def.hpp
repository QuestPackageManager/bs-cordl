#pragma once
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
// Type: System.Reflection::PInfo
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3524))
// CS Name: ::System.Reflection::PInfo
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PInfo(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PInfo();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Attributes value: static_cast<int32_t>(0x1)
  static ::System::Reflection::PInfo const Attributes;

  /// @brief Field GetMethod value: static_cast<int32_t>(0x2)
  static ::System::Reflection::PInfo const GetMethod;

  /// @brief Field SetMethod value: static_cast<int32_t>(0x4)
  static ::System::Reflection::PInfo const SetMethod;

  /// @brief Field ReflectedType value: static_cast<int32_t>(0x8)
  static ::System::Reflection::PInfo const ReflectedType;

  /// @brief Field DeclaringType value: static_cast<int32_t>(0x10)
  static ::System::Reflection::PInfo const DeclaringType;

  /// @brief Field Name value: static_cast<int32_t>(0x20)
  static ::System::Reflection::PInfo const Name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::PInfo, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::PInfo, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PInfo, "System.Reflection", "PInfo");
