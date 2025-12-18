#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationMode)
// Forward declare root types
namespace System::Runtime::Serialization {
struct SerializationMode;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::SerializationMode);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.SerializationMode
struct CORDL_TYPE SerializationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SerializationMode_Unwrapped
  enum struct __SerializationMode_Unwrapped : int32_t {
    __E_SharedContract = static_cast<int32_t>(0x0),
    __E_SharedType = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SerializationMode_Unwrapped() const noexcept {
    return static_cast<__SerializationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SerializationMode(int32_t value__) noexcept;

  /// @brief Field SharedContract value: I32(0)
  static ::System::Runtime::Serialization::SerializationMode const SharedContract;

  /// @brief Field SharedType value: I32(1)
  static ::System::Runtime::Serialization::SerializationMode const SharedType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17080 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SerializationMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationMode, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationMode, "System.Runtime.Serialization", "SerializationMode");
