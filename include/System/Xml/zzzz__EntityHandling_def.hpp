#pragma once
// IWYU pragma private; include "System/Xml/EntityHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntityHandling)
// Forward declare root types
namespace System::Xml {
struct EntityHandling;
}
// Write type traits
MARK_VAL_T(::System::Xml::EntityHandling);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.EntityHandling
struct CORDL_TYPE EntityHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EntityHandling_Unwrapped
  enum struct __EntityHandling_Unwrapped : int32_t {
    __E_ExpandEntities = static_cast<int32_t>(0x1),
    __E_ExpandCharEntities = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EntityHandling_Unwrapped() const noexcept {
    return static_cast<__EntityHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EntityHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EntityHandling(int32_t value__) noexcept;

  /// @brief Field ExpandCharEntities value: I32(2)
  static ::System::Xml::EntityHandling const ExpandCharEntities;

  /// @brief Field ExpandEntities value: I32(1)
  static ::System::Xml::EntityHandling const ExpandEntities;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7178 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::EntityHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::EntityHandling, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::EntityHandling, "System.Xml", "EntityHandling");
