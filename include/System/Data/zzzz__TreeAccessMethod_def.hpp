#pragma once
// IWYU pragma private; include "System/Data/TreeAccessMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeAccessMethod)
// Forward declare root types
namespace System::Data {
struct TreeAccessMethod;
}
// Write type traits
MARK_VAL_T(::System::Data::TreeAccessMethod);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.TreeAccessMethod
struct CORDL_TYPE TreeAccessMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TreeAccessMethod_Unwrapped
  enum struct __TreeAccessMethod_Unwrapped : int32_t {
    __E_KEY_SEARCH_AND_INDEX = static_cast<int32_t>(0x1),
    __E_INDEX_ONLY = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TreeAccessMethod_Unwrapped() const noexcept {
    return static_cast<__TreeAccessMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeAccessMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TreeAccessMethod(int32_t value__) noexcept;

  /// @brief Field INDEX_ONLY value: I32(2)
  static ::System::Data::TreeAccessMethod const INDEX_ONLY;

  /// @brief Field KEY_SEARCH_AND_INDEX value: I32(1)
  static ::System::Data::TreeAccessMethod const KEY_SEARCH_AND_INDEX;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11452 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::TreeAccessMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::TreeAccessMethod, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::TreeAccessMethod, "System.Data", "TreeAccessMethod");
