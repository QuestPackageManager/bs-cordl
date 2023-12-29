#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SpriteCharacter)
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_SpriteGlyph;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteCharacter;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SpriteCharacter);
// Type: TMPro::TMP_SpriteCharacter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12350))
// CS Name: ::TMPro::TMP_SpriteCharacter*
class CORDL_TYPE TMP_SpriteCharacter : public ::TMPro::TMP_TextElement {
public:
  // Declarations
  /// @brief Field m_Name, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Name, put = __set_m_Name))::StringW m_Name;

  /// @brief Field m_HashCode, offset 0x38, size 0x4
  __declspec(property(get = __get_m_HashCode, put = __set_m_HashCode)) int32_t m_HashCode;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_hashCode)) int32_t hashCode;

  constexpr ::StringW& __get_m_Name();

  constexpr ::StringW const& __get_m_Name() const;

  constexpr void __set_m_Name(::StringW value);

  constexpr int32_t& __get_m_HashCode();

  constexpr int32_t const& __get_m_HashCode() const;

  constexpr void __set_m_HashCode(int32_t value);

  /// @brief Method get_name addr 0x2ac0ae4 size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method set_name addr 0x2ac0910 size 0x78 virtual false final false
  inline void set_name(::StringW value);

  /// @brief Method get_hashCode addr 0x2ac0b58 size 0x8 virtual false final false
  inline int32_t get_hashCode();

  static inline ::TMPro::TMP_SpriteCharacter* New_ctor();

  /// @brief Method .ctor addr 0x2ac08f0 size 0x20 virtual false final false
  inline void _ctor();

  static inline ::TMPro::TMP_SpriteCharacter* New_ctor(uint32_t unicode, ::TMPro::TMP_SpriteGlyph* glyph);

  /// @brief Method .ctor addr 0x2ac0b68 size 0x54 virtual false final false
  inline void _ctor(uint32_t unicode, ::TMPro::TMP_SpriteGlyph* glyph);

  static inline ::TMPro::TMP_SpriteCharacter* New_ctor(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, ::TMPro::TMP_SpriteGlyph* glyph);

  /// @brief Method .ctor addr 0x2ac0bbc size 0x60 virtual false final false
  inline void _ctor(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, ::TMPro::TMP_SpriteGlyph* glyph);

  static inline ::TMPro::TMP_SpriteCharacter* New_ctor(uint32_t unicode, uint32_t glyphIndex);

  /// @brief Method .ctor addr 0x2ac0c1c size 0x40 virtual false final false
  inline void _ctor(uint32_t unicode, uint32_t glyphIndex);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteCharacter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SpriteCharacter(TMP_SpriteCharacter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteCharacter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SpriteCharacter(TMP_SpriteCharacter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SpriteCharacter();

public:
  /// @brief Field m_Name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_HashCode, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_HashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteCharacter, 0x40>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteCharacter, ___m_Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteCharacter, ___m_HashCode) == 0x38, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SpriteCharacter);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteCharacter*, "TMPro", "TMP_SpriteCharacter");
