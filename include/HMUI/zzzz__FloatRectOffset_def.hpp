#pragma once
// IWYU pragma private; include "HMUI/FloatRectOffset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatRectOffset)
// Forward declare root types
namespace HMUI {
class FloatRectOffset;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::FloatRectOffset);
// Type: HMUI::FloatRectOffset
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::FloatRectOffset*
class CORDL_TYPE FloatRectOffset : public ::System::Object {
public:
  // Declarations
  /// @brief Field bottom, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_bottom, put = __cordl_internal_set_bottom)) float_t bottom;

  /// @brief Field left, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_left, put = __cordl_internal_set_left)) float_t left;

  /// @brief Field right, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_right, put = __cordl_internal_set_right)) float_t right;

  /// @brief Field top, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_top, put = __cordl_internal_set_top)) float_t top;

  static inline ::HMUI::FloatRectOffset* New_ctor();

  constexpr float_t const& __cordl_internal_get_bottom() const;

  constexpr float_t& __cordl_internal_get_bottom();

  constexpr float_t const& __cordl_internal_get_left() const;

  constexpr float_t& __cordl_internal_get_left();

  constexpr float_t const& __cordl_internal_get_right() const;

  constexpr float_t& __cordl_internal_get_right();

  constexpr float_t const& __cordl_internal_get_top() const;

  constexpr float_t& __cordl_internal_get_top();

  constexpr void __cordl_internal_set_bottom(float_t value);

  constexpr void __cordl_internal_set_left(float_t value);

  constexpr void __cordl_internal_set_right(float_t value);

  constexpr void __cordl_internal_set_top(float_t value);

  /// @brief Method .ctor, addr 0x39851a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatRectOffset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatRectOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatRectOffset(FloatRectOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatRectOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatRectOffset(FloatRectOffset const&) = delete;

  /// @brief Field left, offset: 0x10, size: 0x4, def value: None
  float_t ___left;

  /// @brief Field right, offset: 0x14, size: 0x4, def value: None
  float_t ___right;

  /// @brief Field top, offset: 0x18, size: 0x4, def value: None
  float_t ___top;

  /// @brief Field bottom, offset: 0x1c, size: 0x4, def value: None
  float_t ___bottom;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15997 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::FloatRectOffset, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::FloatRectOffset, ___left) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FloatRectOffset, ___right) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HMUI::FloatRectOffset, ___top) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FloatRectOffset, ___bottom) == 0x1c, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::FloatRectOffset);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FloatRectOffset*, "HMUI", "FloatRectOffset");
