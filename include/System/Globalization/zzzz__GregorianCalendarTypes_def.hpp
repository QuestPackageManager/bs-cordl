#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GregorianCalendarTypes)
// Forward declare root types
namespace System::Globalization {
struct GregorianCalendarTypes;
}
// Write type traits
MARK_VAL_T(::System::Globalization::GregorianCalendarTypes);
// Type: System.Globalization::GregorianCalendarTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::GregorianCalendarTypes
struct CORDL_TYPE GregorianCalendarTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GregorianCalendarTypes_Unwrapped
  enum struct __GregorianCalendarTypes_Unwrapped : int32_t {
    __E_Localized = static_cast<int32_t>(0x1),
    __E_USEnglish = static_cast<int32_t>(0x2),
    __E_MiddleEastFrench = static_cast<int32_t>(0x9),
    __E_Arabic = static_cast<int32_t>(0xa),
    __E_TransliteratedEnglish = static_cast<int32_t>(0xb),
    __E_TransliteratedFrench = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GregorianCalendarTypes_Unwrapped() const noexcept {
    return static_cast<__GregorianCalendarTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__GregorianCalendarTypes_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GregorianCalendarTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GregorianCalendarTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Arabic value: static_cast<int32_t>(0xa)
  static ::System::Globalization::GregorianCalendarTypes const Arabic;

  /// @brief Field Localized value: static_cast<int32_t>(0x1)
  static ::System::Globalization::GregorianCalendarTypes const Localized;

  /// @brief Field MiddleEastFrench value: static_cast<int32_t>(0x9)
  static ::System::Globalization::GregorianCalendarTypes const MiddleEastFrench;

  /// @brief Field TransliteratedEnglish value: static_cast<int32_t>(0xb)
  static ::System::Globalization::GregorianCalendarTypes const TransliteratedEnglish;

  /// @brief Field TransliteratedFrench value: static_cast<int32_t>(0xc)
  static ::System::Globalization::GregorianCalendarTypes const TransliteratedFrench;

  /// @brief Field USEnglish value: static_cast<int32_t>(0x2)
  static ::System::Globalization::GregorianCalendarTypes const USEnglish;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::GregorianCalendarTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::GregorianCalendarTypes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::GregorianCalendarTypes, "System.Globalization", "GregorianCalendarTypes");
