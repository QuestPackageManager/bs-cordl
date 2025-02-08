#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SyncText)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SyncText);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SyncText
class CORDL_TYPE SyncText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _otherTextComponent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__otherTextComponent, put = __cordl_internal_set__otherTextComponent)) ::UnityW<::TMPro::TMP_Text> _otherTextComponent;

  /// @brief Field _textComponent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__textComponent, put = __cordl_internal_set__textComponent)) ::UnityW<::TMPro::TMP_Text> _textComponent;

  /// @brief Method HandleTextChanged, addr 0x3baf5ac, size 0x88, virtual false, abstract: false, final false
  inline void HandleTextChanged(::UnityEngine::Object* obj);

  static inline ::GlobalNamespace::SyncText* New_ctor();

  /// @brief Method OnDisable, addr 0x3baf4dc, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3baf220, size 0xd8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method UpdateText, addr 0x3baf2f8, size 0x1e4, virtual false, abstract: false, final false
  inline void UpdateText();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__otherTextComponent() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__otherTextComponent();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__textComponent() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__textComponent();

  constexpr void __cordl_internal_set__otherTextComponent(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set__textComponent(::UnityW<::TMPro::TMP_Text> value);

  /// @brief Method .ctor, addr 0x3baf634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyncText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SyncText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyncText(SyncText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyncText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyncText(SyncText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4426 };

  /// @brief Field _otherTextComponent, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ____otherTextComponent;

  /// @brief Field _textComponent, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ____textComponent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SyncText, ____otherTextComponent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncText, ____textComponent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SyncText, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SyncText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncText*, "", "SyncText");
