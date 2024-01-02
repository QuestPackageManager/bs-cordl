#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BetaBuildInfoText)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BetaBuildInfoText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BetaBuildInfoText);
// Type: ::BetaBuildInfoText
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5773))
// CS Name: ::BetaBuildInfoText*
class CORDL_TYPE BetaBuildInfoText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  /// @brief Method Start, addr 0x22dfa60, size 0x24, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::BetaBuildInfoText* New_ctor();

  /// @brief Method .ctor, addr 0x22dfa84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BetaBuildInfoText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BetaBuildInfoText(BetaBuildInfoText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BetaBuildInfoText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BetaBuildInfoText(BetaBuildInfoText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BetaBuildInfoText();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BetaBuildInfoText, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BetaBuildInfoText, ____text) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BetaBuildInfoText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetaBuildInfoText*, "", "BetaBuildInfoText");
