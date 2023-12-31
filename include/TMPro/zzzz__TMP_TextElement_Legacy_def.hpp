#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextElement_Legacy)
// Forward declare root types
namespace TMPro {
class TMP_TextElement_Legacy;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_TextElement_Legacy);
// Type: TMPro::TMP_TextElement_Legacy
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12449))
// CS Name: ::TMPro::TMP_TextElement_Legacy*
class CORDL_TYPE TMP_TextElement_Legacy : public ::System::Object {
public:
  // Declarations
  /// @brief Field id, offset 0x10, size 0x4
  __declspec(property(get = __get_id, put = __set_id)) int32_t id;

  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) float_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) float_t y;

  /// @brief Field width, offset 0x1c, size 0x4
  __declspec(property(get = __get_width, put = __set_width)) float_t width;

  /// @brief Field height, offset 0x20, size 0x4
  __declspec(property(get = __get_height, put = __set_height)) float_t height;

  /// @brief Field xOffset, offset 0x24, size 0x4
  __declspec(property(get = __get_xOffset, put = __set_xOffset)) float_t xOffset;

  /// @brief Field yOffset, offset 0x28, size 0x4
  __declspec(property(get = __get_yOffset, put = __set_yOffset)) float_t yOffset;

  /// @brief Field xAdvance, offset 0x2c, size 0x4
  __declspec(property(get = __get_xAdvance, put = __set_xAdvance)) float_t xAdvance;

  /// @brief Field scale, offset 0x30, size 0x4
  __declspec(property(get = __get_scale, put = __set_scale)) float_t scale;

  constexpr int32_t& __get_id();

  constexpr int32_t const& __get_id() const;

  constexpr void __set_id(int32_t value);

  constexpr float_t& __get_x();

  constexpr float_t const& __get_x() const;

  constexpr void __set_x(float_t value);

  constexpr float_t& __get_y();

  constexpr float_t const& __get_y() const;

  constexpr void __set_y(float_t value);

  constexpr float_t& __get_width();

  constexpr float_t const& __get_width() const;

  constexpr void __set_width(float_t value);

  constexpr float_t& __get_height();

  constexpr float_t const& __get_height() const;

  constexpr void __set_height(float_t value);

  constexpr float_t& __get_xOffset();

  constexpr float_t const& __get_xOffset() const;

  constexpr void __set_xOffset(float_t value);

  constexpr float_t& __get_yOffset();

  constexpr float_t const& __get_yOffset() const;

  constexpr void __set_yOffset(float_t value);

  constexpr float_t& __get_xAdvance();

  constexpr float_t const& __get_xAdvance() const;

  constexpr void __set_xAdvance(float_t value);

  constexpr float_t& __get_scale();

  constexpr float_t const& __get_scale() const;

  constexpr void __set_scale(float_t value);

  static inline ::TMPro::TMP_TextElement_Legacy* New_ctor();

  /// @brief Method .ctor, addr 0x2c41f3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextElement_Legacy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_TextElement_Legacy(TMP_TextElement_Legacy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextElement_Legacy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_TextElement_Legacy(TMP_TextElement_Legacy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextElement_Legacy();

public:
  /// @brief Field id, offset: 0x10, size: 0x4, def value: None
  int32_t ___id;

  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  float_t ___y;

  /// @brief Field width, offset: 0x1c, size: 0x4, def value: None
  float_t ___width;

  /// @brief Field height, offset: 0x20, size: 0x4, def value: None
  float_t ___height;

  /// @brief Field xOffset, offset: 0x24, size: 0x4, def value: None
  float_t ___xOffset;

  /// @brief Field yOffset, offset: 0x28, size: 0x4, def value: None
  float_t ___yOffset;

  /// @brief Field xAdvance, offset: 0x2c, size: 0x4, def value: None
  float_t ___xAdvance;

  /// @brief Field scale, offset: 0x30, size: 0x4, def value: None
  float_t ___scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextElement_Legacy, 0x38>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___width) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___xOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___yOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___xAdvance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextElement_Legacy, ___scale) == 0x30, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_TextElement_Legacy);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextElement_Legacy*, "TMPro", "TMP_TextElement_Legacy");
