#pragma once
// IWYU pragma private; include "HMUI/CustomFormatRangeValuesSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomFormatRangeValuesSlider)
// Forward declare root types
namespace HMUI {
class CustomFormatRangeValuesSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CustomFormatRangeValuesSlider);
// Dependencies HMUI.RangeValuesTextSlider
namespace HMUI {
// Is value type: false
// CS Name: HMUI.CustomFormatRangeValuesSlider
class CORDL_TYPE CustomFormatRangeValuesSlider : public ::HMUI::RangeValuesTextSlider {
public:
  // Declarations
  /// @brief Field _formatString, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__formatString, put = __cordl_internal_set__formatString)) ::StringW _formatString;

  static inline ::HMUI::CustomFormatRangeValuesSlider* New_ctor();

  /// @brief Method TextForValue, addr 0x39f0e4c, size 0x70, virtual true, abstract: false, final false
  inline ::StringW TextForValue(float_t value);

  constexpr ::StringW const& __cordl_internal_get__formatString() const;

  constexpr ::StringW& __cordl_internal_get__formatString();

  constexpr void __cordl_internal_set__formatString(::StringW value);

  /// @brief Method .ctor, addr 0x39f0ebc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomFormatRangeValuesSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomFormatRangeValuesSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomFormatRangeValuesSlider(CustomFormatRangeValuesSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomFormatRangeValuesSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomFormatRangeValuesSlider(CustomFormatRangeValuesSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16057 };

  /// @brief Field _formatString, offset: 0x170, size: 0x8, def value: None
  ::StringW ____formatString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::CustomFormatRangeValuesSlider, ____formatString) == 0x170, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::CustomFormatRangeValuesSlider, 0x178>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CustomFormatRangeValuesSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CustomFormatRangeValuesSlider*, "HMUI", "CustomFormatRangeValuesSlider");
