#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5047))
// CS Name: ::SetApplicationVersionText*
class CORDL_TYPE SetApplicationVersionText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _versionText, offset 0x18, size 0x8
  __declspec(property(get = __get__versionText, put = __set__versionText))::TMPro::TextMeshPro* _versionText;

  constexpr ::TMPro::TextMeshPro*& __get__versionText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& __get__versionText() const;

  constexpr void __set__versionText(::TMPro::TextMeshPro* value);

  /// @brief Method Start, addr 0x23c32a8, size 0x48, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::SetApplicationVersionText* New_ctor();

  /// @brief Method .ctor, addr 0x23c32f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetApplicationVersionText(SetApplicationVersionText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetApplicationVersionText(SetApplicationVersionText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetApplicationVersionText();

public:
  /// @brief Field _versionText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshPro* ____versionText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetApplicationVersionText, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetApplicationVersionText, ____versionText) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetApplicationVersionText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetApplicationVersionText*, "", "SetApplicationVersionText");
