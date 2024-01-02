#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DtdProcessing)
// Forward declare root types
namespace System::Xml {
struct DtdProcessing;
}
// Write type traits
MARK_VAL_T(::System::Xml::DtdProcessing);
// Type: System.Xml::DtdProcessing
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11414))
// CS Name: ::System.Xml::DtdProcessing
struct CORDL_TYPE DtdProcessing {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DtdProcessing_Unwrapped
  enum struct __DtdProcessing_Unwrapped : int32_t {
    __E_Prohibit = static_cast<int32_t>(0x0),
    __E_Ignore = static_cast<int32_t>(0x1),
    __E_Parse = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DtdProcessing_Unwrapped() const noexcept {
    return static_cast<__DtdProcessing_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DtdProcessing(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdProcessing();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Prohibit value: static_cast<int32_t>(0x0)
  static ::System::Xml::DtdProcessing const Prohibit;

  /// @brief Field Ignore value: static_cast<int32_t>(0x1)
  static ::System::Xml::DtdProcessing const Ignore;

  /// @brief Field Parse value: static_cast<int32_t>(0x2)
  static ::System::Xml::DtdProcessing const Parse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::DtdProcessing, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::DtdProcessing, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DtdProcessing, "System.Xml", "DtdProcessing");
