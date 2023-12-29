#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SpriteRenderer)
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10209))
// CS Name: ::UnityEngine::SpriteRenderer*
class CORDL_TYPE SpriteRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  /// @brief Field m_SpriteChangeEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_m_SpriteChangeEvent, put = __set_m_SpriteChangeEvent))::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>* m_SpriteChangeEvent;

  __declspec(property(put = set_sprite))::UnityEngine::Sprite* sprite;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>*& __get_m_SpriteChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>*> const& __get_m_SpriteChangeEvent() const;

  constexpr void __set_m_SpriteChangeEvent(::UnityEngine::Events::UnityEvent_1<::UnityEngine::SpriteRenderer*>* value);

  /// @brief Method InvokeSpriteChanged addr 0x2b7dff0 size 0xf4 virtual false final false
  inline void InvokeSpriteChanged();

  /// @brief Method set_sprite addr 0x2b7e0e4 size 0x44 virtual false final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method get_color addr 0x2b7e128 size 0x58 virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x2b7e1c4 size 0x54 virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_color_Injected addr 0x2b7e180 size 0x44 virtual false final false
  inline void get_color_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_color_Injected addr 0x2b7e218 size 0x44 virtual false final false
  inline void set_color_Injected(ByRef<::UnityEngine::Color> value);

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

static_assert(offsetof(::UnityEngine::SpriteRenderer, ___m_SpriteChangeEvent) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
