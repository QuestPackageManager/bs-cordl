#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TagValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagValueType)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TagValueType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TagValueType);
// Type: UnityEngine.TextCore.Text::TagValueType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::TagValueType
struct CORDL_TYPE TagValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TagValueType_Unwrapped
  enum struct __TagValueType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NumericalValue = static_cast<int32_t>(0x1),
    __E_StringValue = static_cast<int32_t>(0x2),
    __E_ColorValue = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TagValueType_Unwrapped() const noexcept {
    return static_cast<__TagValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TagValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TagValueType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ColorValue value: static_cast<int32_t>(0x4)
  static ::UnityEngine::TextCore::Text::TagValueType const ColorValue;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextCore::Text::TagValueType const None;

  /// @brief Field NumericalValue value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextCore::Text::TagValueType const NumericalValue;

  /// @brief Field StringValue value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextCore::Text::TagValueType const StringValue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TagValueType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TagValueType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TagValueType, "UnityEngine.TextCore.Text", "TagValueType");
