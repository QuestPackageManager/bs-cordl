#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyContentType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyContentType)
// Forward declare root types
namespace System::Reflection {
struct AssemblyContentType;
}
// Write type traits
MARK_VAL_T(::System::Reflection::AssemblyContentType);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.AssemblyContentType
struct CORDL_TYPE AssemblyContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AssemblyContentType_Unwrapped
  enum struct __AssemblyContentType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_WindowsRuntime = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AssemblyContentType_Unwrapped() const noexcept {
    return static_cast<__AssemblyContentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyContentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AssemblyContentType(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::System::Reflection::AssemblyContentType const Default;

  /// @brief Field WindowsRuntime value: I32(1)
  static ::System::Reflection::AssemblyContentType const WindowsRuntime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3445 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::AssemblyContentType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyContentType, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyContentType, "System.Reflection", "AssemblyContentType");
