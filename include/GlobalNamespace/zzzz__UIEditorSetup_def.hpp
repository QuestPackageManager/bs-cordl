#pragma once
// IWYU pragma private; include "GlobalNamespace/UIEditorSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIEditorSetup)
// Forward declare root types
namespace GlobalNamespace {
class UIEditorSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIEditorSetup);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: UIEditorSetup
class CORDL_TYPE UIEditorSetup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field Bool, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_Bool, put = __cordl_internal_set_Bool)) bool Bool;

  /// @brief Field Float, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Float, put = __cordl_internal_set_Float)) float_t Float;

  /// @brief Field Position, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_Position, put = __cordl_internal_set_Position)) ::UnityEngine::Vector3 Position;

  /// @brief Field TweakableFloat, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_TweakableFloat, put = __cordl_internal_set_TweakableFloat)) float_t TweakableFloat;

  /// @brief Method Method, addr 0x588fee4, size 0x4, virtual false, abstract: false, final false
  inline void Method();

  static inline ::GlobalNamespace::UIEditorSetup* New_ctor();

  constexpr bool const& __cordl_internal_get_Bool() const;

  constexpr bool& __cordl_internal_get_Bool();

  constexpr float_t const& __cordl_internal_get_Float() const;

  constexpr float_t& __cordl_internal_get_Float();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_Position();

  constexpr float_t const& __cordl_internal_get_TweakableFloat() const;

  constexpr float_t& __cordl_internal_get_TweakableFloat();

  constexpr void __cordl_internal_set_Bool(bool value);

  constexpr void __cordl_internal_set_Float(float_t value);

  constexpr void __cordl_internal_set_Position(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_TweakableFloat(float_t value);

  /// @brief Method .ctor, addr 0x588fee8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIEditorSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIEditorSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIEditorSetup(UIEditorSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIEditorSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIEditorSetup(UIEditorSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18288 };

  /// @brief Field Float, offset: 0x20, size: 0x4, def value: None
  float_t ___Float;

  /// @brief Field Bool, offset: 0x24, size: 0x1, def value: None
  bool ___Bool;

  /// @brief Field TweakableFloat, offset: 0x28, size: 0x4, def value: None
  float_t ___TweakableFloat;

  /// @brief Field Position, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIEditorSetup, ___Float) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIEditorSetup, ___Bool) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIEditorSetup, ___TweakableFloat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIEditorSetup, ___Position) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIEditorSetup, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIEditorSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIEditorSetup*, "", "UIEditorSetup");
