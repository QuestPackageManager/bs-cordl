#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelFailedTextEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LevelFailedTextEffect)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFailedTextEffect);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelFailedTextEffect
class CORDL_TYPE LevelFailedTextEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  static inline ::GlobalNamespace::LevelFailedTextEffect* New_ctor();

  /// @brief Method ShowEffect, addr 0x3b9158c, size 0x3c, virtual false, abstract: false, final false
  inline void ShowEffect();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  /// @brief Method .ctor, addr 0x3b915c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFailedTextEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFailedTextEffect(LevelFailedTextEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFailedTextEffect(LevelFailedTextEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4227 };

  /// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelFailedTextEffect, ____animator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedTextEffect, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedTextEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedTextEffect*, "", "LevelFailedTextEffect");
