#pragma once
// IWYU pragma private; include "GlobalNamespace/ConditionalSpriteSwitcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalSpriteSwitcher)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalSpriteSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalSpriteSwitcher);
// Type: ::ConditionalSpriteSwitcher
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConditionalSpriteSwitcher*
class CORDL_TYPE ConditionalSpriteSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _material0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material0, put = __cordl_internal_set__material0))::UnityW<::UnityEngine::Material> _material0;

  /// @brief Field _material1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__material1, put = __cordl_internal_set__material1))::UnityW<::UnityEngine::Material> _material1;

  /// @brief Field _sprite0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sprite0, put = __cordl_internal_set__sprite0))::UnityW<::UnityEngine::Sprite> _sprite0;

  /// @brief Field _sprite1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sprite1, put = __cordl_internal_set__sprite1))::UnityW<::UnityEngine::Sprite> _sprite1;

  /// @brief Field _spriteRenderer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteRenderer, put = __cordl_internal_set__spriteRenderer))::UnityW<::UnityEngine::SpriteRenderer> _spriteRenderer;

  /// @brief Field _value, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::UnityW<::GlobalNamespace::BoolSO> _value;

  __declspec(property(get = get_falseSprite, put = set_falseSprite))::UnityW<::UnityEngine::Sprite> falseSprite;

  __declspec(property(get = get_trueSprite, put = set_trueSprite))::UnityW<::UnityEngine::Sprite> trueSprite;

  /// @brief Method Apply, addr 0x26c51c0, size 0xa4, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Awake, addr 0x26c51bc, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ConditionalSpriteSwitcher* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material0() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material0();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material1() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material1();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__sprite0() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__sprite0();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__sprite1() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__sprite1();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__spriteRenderer() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__spriteRenderer();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__value() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__material0(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__material1(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__sprite0(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__sprite1(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__value(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x26c5264, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_falseSprite, addr 0x26c519c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_falseSprite();

  /// @brief Method get_trueSprite, addr 0x26c51ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_trueSprite();

  /// @brief Method set_falseSprite, addr 0x26c51a4, size 0x8, virtual false, abstract: false, final false
  inline void set_falseSprite(::UnityEngine::Sprite* value);

  /// @brief Method set_trueSprite, addr 0x26c51b4, size 0x8, virtual false, abstract: false, final false
  inline void set_trueSprite(::UnityEngine::Sprite* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalSpriteSwitcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalSpriteSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalSpriteSwitcher(ConditionalSpriteSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalSpriteSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalSpriteSwitcher(ConditionalSpriteSwitcher const&) = delete;

  /// @brief Field _sprite0, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____sprite0;

  /// @brief Field _material0, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material0;

  /// @brief Field _sprite1, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____sprite1;

  /// @brief Field _material1, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material1;

  /// @brief Field _value, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____value;

  /// @brief Field _spriteRenderer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____spriteRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalSpriteSwitcher, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalSpriteSwitcher, ____sprite0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalSpriteSwitcher, ____material0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalSpriteSwitcher, ____sprite1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalSpriteSwitcher, ____material1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalSpriteSwitcher, ____value) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalSpriteSwitcher, ____spriteRenderer) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalSpriteSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalSpriteSwitcher*, "", "ConditionalSpriteSwitcher");
