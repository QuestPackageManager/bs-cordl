#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12449)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12417))
// CS Name: ::TMPro::TMP_Sprite*
class CORDL_TYPE TMP_Sprite : public ::TMPro::TMP_TextElement_Legacy {
public:
  // Declarations
  /// @brief Field name, offset 0x38, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field hashCode, offset 0x40, size 0x4
  __declspec(property(get = __get_hashCode, put = __set_hashCode)) int32_t hashCode;

  /// @brief Field unicode, offset 0x44, size 0x4
  __declspec(property(get = __get_unicode, put = __set_unicode)) int32_t unicode;

  /// @brief Field pivot, offset 0x48, size 0x8
  __declspec(property(get = __get_pivot, put = __set_pivot))::UnityEngine::Vector2 pivot;

  /// @brief Field sprite, offset 0x50, size 0x8
  __declspec(property(get = __get_sprite, put = __set_sprite))::UnityEngine::Sprite* sprite;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr int32_t& __get_hashCode();

  constexpr int32_t const& __get_hashCode() const;

  constexpr void __set_hashCode(int32_t value);

  constexpr int32_t& __get_unicode();

  constexpr int32_t const& __get_unicode() const;

  constexpr void __set_unicode(int32_t value);

  constexpr ::UnityEngine::Vector2& __get_pivot();

  constexpr ::UnityEngine::Vector2 const& __get_pivot() const;

  constexpr void __set_pivot(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Sprite*& __get_sprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get_sprite() const;

  constexpr void __set_sprite(::UnityEngine::Sprite* value);

  static inline ::TMPro::TMP_Sprite* New_ctor();

  /// @brief Method .ctor, addr 0x2c41f34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Sprite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Sprite(TMP_Sprite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Sprite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Sprite(TMP_Sprite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Sprite();

public:
  /// @brief Field name, offset: 0x38, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field hashCode, offset: 0x40, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field unicode, offset: 0x44, size: 0x4, def value: None
  int32_t ___unicode;

  /// @brief Field pivot, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___pivot;

  /// @brief Field sprite, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Sprite* ___sprite;

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
