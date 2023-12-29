#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalSpriteSwitcher)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Material;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5451))
// CS Name: ::ConditionalSpriteSwitcher*
class CORDL_TYPE ConditionalSpriteSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sprite0, offset 0x18, size 0x8
  __declspec(property(get = __get__sprite0, put = __set__sprite0))::UnityEngine::Sprite* _sprite0;

  /// @brief Field _material0, offset 0x20, size 0x8
  __declspec(property(get = __get__material0, put = __set__material0))::UnityEngine::Material* _material0;

  /// @brief Field _sprite1, offset 0x28, size 0x8
  __declspec(property(get = __get__sprite1, put = __set__sprite1))::UnityEngine::Sprite* _sprite1;

  /// @brief Field _material1, offset 0x30, size 0x8
  __declspec(property(get = __get__material1, put = __set__material1))::UnityEngine::Material* _material1;

  /// @brief Field _value, offset 0x38, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::GlobalNamespace::BoolSO* _value;

  /// @brief Field _spriteRenderer, offset 0x40, size 0x8
  __declspec(property(get = __get__spriteRenderer, put = __set__spriteRenderer))::UnityEngine::SpriteRenderer* _spriteRenderer;

  __declspec(property(get = get_falseSprite, put = set_falseSprite))::UnityEngine::Sprite* falseSprite;

  __declspec(property(get = get_trueSprite, put = set_trueSprite))::UnityEngine::Sprite* trueSprite;

  constexpr ::UnityEngine::Sprite*& __get__sprite0();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__sprite0() const;

  constexpr void __set__sprite0(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Material*& __get__material0();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material0() const;

  constexpr void __set__material0(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Sprite*& __get__sprite1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__sprite1() const;

  constexpr void __set__sprite1(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Material*& __get__material1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material1() const;

  constexpr void __set__material1(::UnityEngine::Material* value);

  constexpr ::GlobalNamespace::BoolSO*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__value() const;

  constexpr void __set__value(::GlobalNamespace::BoolSO* value);

  constexpr ::UnityEngine::SpriteRenderer*& __get__spriteRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& __get__spriteRenderer() const;

  constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer* value);

  /// @brief Method get_falseSprite addr 0x2128044 size 0x8 virtual false final false
  inline ::UnityEngine::Sprite* get_falseSprite();

  /// @brief Method set_falseSprite addr 0x212804c size 0x8 virtual false final false
  inline void set_falseSprite(::UnityEngine::Sprite* value);

  /// @brief Method get_trueSprite addr 0x2128054 size 0x8 virtual false final false
  inline ::UnityEngine::Sprite* get_trueSprite();

  /// @brief Method set_trueSprite addr 0x212805c size 0x8 virtual false final false
  inline void set_trueSprite(::UnityEngine::Sprite* value);

  /// @brief Method Awake addr 0x2128064 size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method Apply addr 0x2128068 size 0xa4 virtual false final false
  inline void Apply();

  static inline ::GlobalNamespace::ConditionalSpriteSwitcher* New_ctor();

  /// @brief Method .ctor addr 0x212810c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalSpriteSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalSpriteSwitcher(ConditionalSpriteSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalSpriteSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalSpriteSwitcher(ConditionalSpriteSwitcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalSpriteSwitcher();

public:
  /// @brief Field _sprite0, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____sprite0;

  /// @brief Field _material0, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* ____material0;

  /// @brief Field _sprite1, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____sprite1;

  /// @brief Field _material1, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Material* ____material1;

  /// @brief Field _value, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____value;

  /// @brief Field _spriteRenderer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::SpriteRenderer* ____spriteRenderer;

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
