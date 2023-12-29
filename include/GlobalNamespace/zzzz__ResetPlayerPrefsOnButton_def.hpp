#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ResetPlayerPrefsOnButton)
// Forward declare root types
namespace GlobalNamespace {
class ResetPlayerPrefsOnButton;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResetPlayerPrefsOnButton);
// Type: ::ResetPlayerPrefsOnButton
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9986)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13887))
// CS Name: ::ResetPlayerPrefsOnButton*
class CORDL_TYPE ResetPlayerPrefsOnButton : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _keyCode, offset 0x18, size 0x4
  __declspec(property(get = __get__keyCode, put = __set__keyCode))::UnityEngine::KeyCode _keyCode;

  constexpr ::UnityEngine::KeyCode& __get__keyCode();

  constexpr ::UnityEngine::KeyCode const& __get__keyCode() const;

  constexpr void __set__keyCode(::UnityEngine::KeyCode value);

  /// @brief Method Update addr 0x1f9873c size 0x28 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::ResetPlayerPrefsOnButton* New_ctor();

  /// @brief Method .ctor addr 0x1f98764 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResetPlayerPrefsOnButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResetPlayerPrefsOnButton(ResetPlayerPrefsOnButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResetPlayerPrefsOnButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResetPlayerPrefsOnButton(ResetPlayerPrefsOnButton const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResetPlayerPrefsOnButton();

public:
  /// @brief Field _keyCode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ____keyCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResetPlayerPrefsOnButton, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResetPlayerPrefsOnButton, ____keyCode) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResetPlayerPrefsOnButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResetPlayerPrefsOnButton*, "", "ResetPlayerPrefsOnButton");
