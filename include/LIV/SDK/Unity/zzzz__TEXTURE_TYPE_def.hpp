#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TEXTURE_TYPE)
// Forward declare root types
namespace LIV::SDK::Unity {
struct TEXTURE_TYPE;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::TEXTURE_TYPE);
// Type: LIV.SDK.Unity::TEXTURE_TYPE
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15103))
// CS Name: ::LIV.SDK.Unity::TEXTURE_TYPE
struct CORDL_TYPE TEXTURE_TYPE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __TEXTURE_TYPE_Unwrapped
  enum struct __TEXTURE_TYPE_Unwrapped : uint32_t {
    __E_UNDEFINED = static_cast<uint32_t>(0xa000100u),
    __E_COLOR_BUFFER = static_cast<uint32_t>(0xa0001u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TEXTURE_TYPE_Unwrapped() const noexcept {
    return static_cast<__TEXTURE_TYPE_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TEXTURE_TYPE(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TEXTURE_TYPE();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UNDEFINED value: static_cast<uint32_t>(0xa000100u)
  static ::LIV::SDK::Unity::TEXTURE_TYPE const UNDEFINED;

  /// @brief Field COLOR_BUFFER value: static_cast<uint32_t>(0xa0001u)
  static ::LIV::SDK::Unity::TEXTURE_TYPE const COLOR_BUFFER;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::TEXTURE_TYPE, 0x4>, "Size mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::TEXTURE_TYPE, value__) == 0x0, "Offset mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::TEXTURE_TYPE, "LIV.SDK.Unity", "TEXTURE_TYPE");
