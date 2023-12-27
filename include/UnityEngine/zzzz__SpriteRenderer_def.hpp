#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpriteRenderer)
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine {
struct SpriteMaskInteraction;
}
namespace UnityEngine {
struct SpriteSortPoint;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct SpriteDrawMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct SpriteTileMode;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
// Forward declare root types
namespace UnityEngine {
class SpriteRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpriteRenderer);
// Type: UnityEngine::SpriteRenderer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10286))
// CS Name: ::UnityEngine::SpriteRenderer*
class CORDL_TYPE SpriteRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  /// @brief Field m_SpriteChangeEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_m_SpriteChangeEvent, put = __set_m_SpriteChangeEvent))::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>* m_SpriteChangeEvent;

  __declspec(property(get = get_shouldSupportTiling)) bool shouldSupportTiling;

  __declspec(property(get = get_sprite, put = set_sprite))::UnityEngine::Sprite* sprite;

  __declspec(property(get = get_drawMode, put = set_drawMode))::UnityEngine::SpriteDrawMode drawMode;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector2 size;

  __declspec(property(get = get_adaptiveModeThreshold, put = set_adaptiveModeThreshold)) float_t adaptiveModeThreshold;

  __declspec(property(get = get_tileMode, put = set_tileMode))::UnityEngine::SpriteTileMode tileMode;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_maskInteraction, put = set_maskInteraction))::UnityEngine::SpriteMaskInteraction maskInteraction;

  __declspec(property(get = get_flipX, put = set_flipX)) bool flipX;

  __declspec(property(get = get_flipY, put = set_flipY)) bool flipY;

  __declspec(property(get = get_spriteSortPoint, put = set_spriteSortPoint))::UnityEngine::SpriteSortPoint spriteSortPoint;

  constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>*& __get_m_SpriteChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>*> const& __get_m_SpriteChangeEvent() const;

  constexpr void __set_m_SpriteChangeEvent(::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>* value);

  /// @brief Method RegisterSpriteChangeCallback addr 0x2ce3d00 size 0xa0 virtual false final false
  inline void RegisterSpriteChangeCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::SpriteRenderer*>* callback);

  /// @brief Method UnregisterSpriteChangeCallback addr 0x2ce3da0 size 0x60 virtual false final false
  inline void UnregisterSpriteChangeCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::SpriteRenderer*>* callback);

  /// @brief Method InvokeSpriteChanged addr 0x2ce3e00 size 0xf4 virtual false final false
  inline void InvokeSpriteChanged();

  /// @brief Method get_shouldSupportTiling addr 0x2ce3ef4 size 0x3c virtual false final false
  inline bool get_shouldSupportTiling();

  /// @brief Method get_sprite addr 0x2ce3f30 size 0x3c virtual false final false
  inline ::UnityEngine::Sprite* get_sprite();

  /// @brief Method set_sprite addr 0x2ce3f6c size 0x44 virtual false final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method get_drawMode addr 0x2ce3fb0 size 0x3c virtual false final false
  inline ::UnityEngine::SpriteDrawMode get_drawMode();

  /// @brief Method set_drawMode addr 0x2ce3fec size 0x44 virtual false final false
  inline void set_drawMode(::UnityEngine::SpriteDrawMode value);

  /// @brief Method get_size addr 0x2ce4030 size 0x4c virtual false final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method set_size addr 0x2ce40c0 size 0x48 virtual false final false
  inline void set_size(::UnityEngine::Vector2 value);

  /// @brief Method get_adaptiveModeThreshold addr 0x2ce414c size 0x3c virtual false final false
  inline float_t get_adaptiveModeThreshold();

  /// @brief Method set_adaptiveModeThreshold addr 0x2ce4188 size 0x4c virtual false final false
  inline void set_adaptiveModeThreshold(float_t value);

  /// @brief Method get_tileMode addr 0x2ce41d4 size 0x3c virtual false final false
  inline ::UnityEngine::SpriteTileMode get_tileMode();

  /// @brief Method set_tileMode addr 0x2ce4210 size 0x44 virtual false final false
  inline void set_tileMode(::UnityEngine::SpriteTileMode value);

  /// @brief Method get_color addr 0x2ce4254 size 0x58 virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x2ce42f0 size 0x54 virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_maskInteraction addr 0x2ce4388 size 0x3c virtual false final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method set_maskInteraction addr 0x2ce43c4 size 0x44 virtual false final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method get_flipX addr 0x2ce4408 size 0x3c virtual false final false
  inline bool get_flipX();

  /// @brief Method set_flipX addr 0x2ce4444 size 0x44 virtual false final false
  inline void set_flipX(bool value);

  /// @brief Method get_flipY addr 0x2ce4488 size 0x3c virtual false final false
  inline bool get_flipY();

  /// @brief Method set_flipY addr 0x2ce44c4 size 0x44 virtual false final false
  inline void set_flipY(bool value);

  /// @brief Method get_spriteSortPoint addr 0x2ce4508 size 0x3c virtual false final false
  inline ::UnityEngine::SpriteSortPoint get_spriteSortPoint();

  /// @brief Method set_spriteSortPoint addr 0x2ce4544 size 0x44 virtual false final false
  inline void set_spriteSortPoint(::UnityEngine::SpriteSortPoint value);

  /// @brief Method Internal_GetSpriteBounds addr 0x2ce4588 size 0x70 virtual false final false
  inline ::UnityEngine::Bounds Internal_GetSpriteBounds(::UnityEngine::SpriteDrawMode mode);

  /// @brief Method GetSpriteBounds addr 0x2ce464c size 0xac virtual false final false
  inline ::UnityEngine::Bounds GetSpriteBounds();

  static inline ::UnityEngine::SpriteRenderer* New_ctor();

  /// @brief Method .ctor addr 0x2ce46f8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_size_Injected addr 0x2ce407c size 0x44 virtual false final false
  inline void get_size_Injected(ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method set_size_Injected addr 0x2ce4108 size 0x44 virtual false final false
  inline void set_size_Injected(ByRef<::UnityEngine::Vector2> value);

  /// @brief Method get_color_Injected addr 0x2ce42ac size 0x44 virtual false final false
  inline void get_color_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_color_Injected addr 0x2ce4344 size 0x44 virtual false final false
  inline void set_color_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method Internal_GetSpriteBounds_Injected addr 0x2ce45f8 size 0x54 virtual false final false
  inline void Internal_GetSpriteBounds_Injected(::UnityEngine::SpriteDrawMode mode, ByRef<::UnityEngine::Bounds> ret);

  // Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteRenderer(SpriteRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteRenderer(SpriteRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteRenderer();

public:
  /// @brief Field m_SpriteChangeEvent, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>* ___m_SpriteChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpriteRenderer, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
