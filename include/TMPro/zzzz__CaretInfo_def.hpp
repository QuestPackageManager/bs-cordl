#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__CaretPosition_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CaretInfo)
namespace TMPro {
struct CaretPosition;
}
// Forward declare root types
namespace TMPro {
struct CaretInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::CaretInfo);
// Type: TMPro::CaretInfo
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12454))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12455))
// CS Name: ::TMPro::CaretInfo
struct CORDL_TYPE CaretInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2c49080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::TMPro::CaretPosition position);

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::TMPro::CaretPosition", modifiers: "", def_value: None }]
  constexpr CaretInfo(int32_t index, ::TMPro::CaretPosition position) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CaretInfo();

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field position, offset: 0x4, size: 0x4, def value: None
  ::TMPro::CaretPosition position;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::CaretInfo, 0x8>, "Size mismatch!");

static_assert(offsetof(::TMPro::CaretInfo, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::CaretInfo, position) == 0x4, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::CaretInfo, "TMPro", "CaretInfo");
