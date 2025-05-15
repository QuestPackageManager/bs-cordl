#pragma once
// IWYU pragma private; include "GlobalNamespace/TextStyleSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TextStyleSO)
namespace GlobalNamespace {
class IReadOnlyTextStyle;
}
namespace GlobalNamespace {
class TextStyle;
}
// Forward declare root types
namespace GlobalNamespace {
class TextStyleSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextStyleSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextStyleSO
class CORDL_TYPE TextStyleSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _textStyle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__textStyle, put = __cordl_internal_set__textStyle)) ::GlobalNamespace::TextStyle* _textStyle;

  __declspec(property(get = get_textStyle)) ::GlobalNamespace::IReadOnlyTextStyle* textStyle;

  static inline ::GlobalNamespace::TextStyleSO* New_ctor();

  constexpr ::GlobalNamespace::TextStyle* const& __cordl_internal_get__textStyle() const;

  constexpr ::GlobalNamespace::TextStyle*& __cordl_internal_get__textStyle();

  constexpr void __cordl_internal_set__textStyle(::GlobalNamespace::TextStyle* value);

  /// @brief Method .ctor, addr 0x2282698, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_textStyle, addr 0x2282690, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadOnlyTextStyle* get_textStyle();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextStyleSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextStyleSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextStyleSO(TextStyleSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextStyleSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextStyleSO(TextStyleSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19145 };

  /// @brief Field _textStyle, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TextStyle* ____textStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextStyleSO, ____textStyle) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextStyleSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextStyleSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextStyleSO*, "", "TextStyleSO");
