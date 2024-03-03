#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CultureTypes)
// Forward declare root types
namespace System::Globalization {
struct CultureTypes;
}
// Write type traits
MARK_VAL_T(::System::Globalization::CultureTypes);
// Type: System.Globalization::CultureTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::CultureTypes
struct CORDL_TYPE CultureTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CultureTypes_Unwrapped
  enum struct __CultureTypes_Unwrapped : int32_t {
    __E_NeutralCultures = static_cast<int32_t>(0x1),
    __E_SpecificCultures = static_cast<int32_t>(0x2),
    __E_InstalledWin32Cultures = static_cast<int32_t>(0x4),
    __E_AllCultures = static_cast<int32_t>(0x7),
    __E_UserCustomCulture = static_cast<int32_t>(0x8),
    __E_ReplacementCultures = static_cast<int32_t>(0x10),
    __E_WindowsOnlyCultures = static_cast<int32_t>(0x20),
    __E_FrameworkCultures = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CultureTypes_Unwrapped() const noexcept {
    return static_cast<__CultureTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CultureTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CultureTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllCultures value: static_cast<int32_t>(0x7)
  static ::System::Globalization::CultureTypes const AllCultures;

  /// @brief Field FrameworkCultures value: static_cast<int32_t>(0x40)
  static ::System::Globalization::CultureTypes const FrameworkCultures;

  /// @brief Field InstalledWin32Cultures value: static_cast<int32_t>(0x4)
  static ::System::Globalization::CultureTypes const InstalledWin32Cultures;

  /// @brief Field NeutralCultures value: static_cast<int32_t>(0x1)
  static ::System::Globalization::CultureTypes const NeutralCultures;

  /// @brief Field ReplacementCultures value: static_cast<int32_t>(0x10)
  static ::System::Globalization::CultureTypes const ReplacementCultures;

  /// @brief Field SpecificCultures value: static_cast<int32_t>(0x2)
  static ::System::Globalization::CultureTypes const SpecificCultures;

  /// @brief Field UserCustomCulture value: static_cast<int32_t>(0x8)
  static ::System::Globalization::CultureTypes const UserCustomCulture;

  /// @brief Field WindowsOnlyCultures value: static_cast<int32_t>(0x20)
  static ::System::Globalization::CultureTypes const WindowsOnlyCultures;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CultureTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::CultureTypes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureTypes, "System.Globalization", "CultureTypes");
