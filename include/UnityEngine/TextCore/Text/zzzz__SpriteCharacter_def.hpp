#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/SpriteCharacter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteCharacter)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class SpriteCharacter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::SpriteCharacter);
// Type: UnityEngine.TextCore.Text::SpriteCharacter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::SpriteCharacter*
class CORDL_TYPE SpriteCharacter : public ::UnityEngine::TextCore::Text::TextElement {
public:
  // Declarations
  /// @brief Field m_HashCode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HashCode, put = __cordl_internal_set_m_HashCode)) int32_t m_HashCode;

  /// @brief Field m_Name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  __declspec(property(get = get_name))::StringW name;

  static inline ::UnityEngine::TextCore::Text::SpriteCharacter* New_ctor();

  constexpr int32_t const& __cordl_internal_get_m_HashCode() const;

  constexpr int32_t& __cordl_internal_get_m_HashCode();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr void __cordl_internal_set_m_HashCode(int32_t value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  /// @brief Method .ctor, addr 0x34c9258, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_name, addr 0x34c9250, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteCharacter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteCharacter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteCharacter(SpriteCharacter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteCharacter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteCharacter(SpriteCharacter const&) = delete;

  /// @brief Field m_Name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_HashCode, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_HashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::SpriteCharacter, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteCharacter, ___m_Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::SpriteCharacter, ___m_HashCode) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::SpriteCharacter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::SpriteCharacter*, "UnityEngine.TextCore.Text", "SpriteCharacter");
