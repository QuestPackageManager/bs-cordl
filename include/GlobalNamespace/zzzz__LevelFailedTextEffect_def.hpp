#pragma once
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
// Type: ::LevelFailedTextEffect
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelFailedTextEffect*
class CORDL_TYPE LevelFailedTextEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator))::UnityW<::UnityEngine::Animator> _animator;

  static inline ::GlobalNamespace::LevelFailedTextEffect* New_ctor();

  /// @brief Method ShowEffect, addr 0x26ba090, size 0x3c, virtual false, abstract: false, final false
  inline void ShowEffect();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  /// @brief Method .ctor, addr 0x26ba0cc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedTextEffect, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFailedTextEffect, ____animator) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedTextEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedTextEffect*, "", "LevelFailedTextEffect");
