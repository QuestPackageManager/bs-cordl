#pragma once
// IWYU pragma private; include "GlobalNamespace/SetApplicationVersionText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetApplicationVersionText)
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class SetApplicationVersionText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetApplicationVersionText);
// Type: ::SetApplicationVersionText
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetApplicationVersionText*
class CORDL_TYPE SetApplicationVersionText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _versionText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__versionText, put = __cordl_internal_set__versionText))::UnityW<::TMPro::TextMeshPro> _versionText;

  static inline ::GlobalNamespace::SetApplicationVersionText* New_ctor();

  /// @brief Method Start, addr 0x26f9c28, size 0x48, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__versionText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__versionText();

  constexpr void __cordl_internal_set__versionText(::UnityW<::TMPro::TextMeshPro> value);

  /// @brief Method .ctor, addr 0x26f9c70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetApplicationVersionText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetApplicationVersionText(SetApplicationVersionText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetApplicationVersionText(SetApplicationVersionText const&) = delete;

  /// @brief Field _versionText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____versionText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetApplicationVersionText, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____versionText) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetApplicationVersionText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetApplicationVersionText*, "", "SetApplicationVersionText");
