#pragma once
// IWYU pragma private; include "System/Xml/Linq/SaveOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveOptions)
// Forward declare root types
namespace System::Xml::Linq {
struct SaveOptions;
}
// Write type traits
MARK_VAL_T(::System::Xml::Linq::SaveOptions);
// Dependencies
namespace System::Xml::Linq {
// Is value type: true
// CS Name: System.Xml.Linq.SaveOptions
struct CORDL_TYPE SaveOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SaveOptions_Unwrapped
  enum struct __SaveOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DisableFormatting = static_cast<int32_t>(0x1),
    __E_OmitDuplicateNamespaces = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SaveOptions_Unwrapped() const noexcept {
    return static_cast<__SaveOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SaveOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SaveOptions(int32_t value__) noexcept;

  /// @brief Field DisableFormatting value: I32(1)
  static ::System::Xml::Linq::SaveOptions const DisableFormatting;

  /// @brief Field None value: I32(0)
  static ::System::Xml::Linq::SaveOptions const None;

  /// @brief Field OmitDuplicateNamespaces value: I32(2)
  static ::System::Xml::Linq::SaveOptions const OmitDuplicateNamespaces;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17972 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::SaveOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::SaveOptions, 0x4>, "Size mismatch!");

} // namespace System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::SaveOptions, "System.Xml.Linq", "SaveOptions");
