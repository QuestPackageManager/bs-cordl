#pragma once
// IWYU pragma private; include "TMPro/TMP_Sprite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_TextElement_Legacy_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Sprite)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace TMPro {
class TMP_Sprite;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Sprite);
// Type: TMPro::TMP_Sprite
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_Sprite*
class CORDL_TYPE TMP_Sprite : public ::TMPro::TMP_TextElement_Legacy {
public:
  // Declarations
  /// @brief Field hashCode, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCode, put = __cordl_internal_set_hashCode)) int32_t hashCode;

  /// @brief Field name, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field pivot, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_pivot, put = __cordl_internal_set_pivot))::UnityEngine::Vector2 pivot;

  /// @brief Field sprite, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sprite, put = __cordl_internal_set_sprite))::UnityW<::UnityEngine::Sprite> sprite;

  /// @brief Field unicode, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_unicode, put = __cordl_internal_set_unicode)) int32_t unicode;

  static inline ::TMPro::TMP_Sprite* New_ctor();

  constexpr int32_t const& __cordl_internal_get_hashCode() const;

  constexpr int32_t& __cordl_internal_get_hashCode();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pivot() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_pivot();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_sprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_sprite();

  constexpr int32_t const& __cordl_internal_get_unicode() const;

  constexpr int32_t& __cordl_internal_get_unicode();

  constexpr void __cordl_internal_set_hashCode(int32_t value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_pivot(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_sprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_unicode(int32_t value);

  /// @brief Method .ctor, addr 0x33a1634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Sprite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Sprite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Sprite(TMP_Sprite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Sprite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Sprite(TMP_Sprite const&) = delete;

  /// @brief Field name, offset: 0x38, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field hashCode, offset: 0x40, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field unicode, offset: 0x44, size: 0x4, def value: None
  int32_t ___unicode;

  /// @brief Field pivot, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___pivot;

  /// @brief Field sprite, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___sprite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Sprite, 0x58>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_Sprite, ___name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Sprite, ___hashCode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Sprite, ___unicode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Sprite, ___pivot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Sprite, ___sprite) == 0x50, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Sprite);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Sprite*, "TMPro", "TMP_Sprite");
