#pragma once
// IWYU pragma private; include "UnityEngine/SpriteRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpriteRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Mesh_MeshDataArray;
}
namespace UnityEngine {
struct SpriteDrawMode;
}
namespace UnityEngine {
struct SpriteMaskInteraction;
}
namespace UnityEngine {
struct SpriteSortPoint;
}
namespace UnityEngine {
struct SpriteTileMode;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class SpriteRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::SpriteRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeType("Runtime/Graphics/Mesh/SpriteRenderer.h")]
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpriteRenderer
class CORDL_TYPE SpriteRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_adaptiveModeThreshold, put = set_adaptiveModeThreshold)) float_t adaptiveModeThreshold;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_drawMode, put = set_drawMode)) ::UnityEngine::SpriteDrawMode drawMode;

  __declspec(property(get = get_flipX, put = set_flipX)) bool flipX;

  __declspec(property(get = get_flipY, put = set_flipY)) bool flipY;

  __declspec(property(get = get_hasSpriteChangeEvents, put = set_hasSpriteChangeEvents)) bool hasSpriteChangeEvents;

  /// @brief Field m_SpriteChangeEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteChangeEvent,
                      put = __cordl_internal_set_m_SpriteChangeEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>* m_SpriteChangeEvent;

  __declspec(property(get = get_maskInteraction, put = set_maskInteraction)) ::UnityEngine::SpriteMaskInteraction maskInteraction;

  __declspec(property(get = get_shouldSupportTiling)) bool shouldSupportTiling;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector2 size;

  __declspec(property(get = get_sprite, put = set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  __declspec(property(get = get_spriteSortPoint, put = set_spriteSortPoint)) ::UnityEngine::SpriteSortPoint spriteSortPoint;

  __declspec(property(get = get_tileMode, put = set_tileMode)) ::UnityEngine::SpriteTileMode tileMode;

  /// @brief Method GetCurrentMeshData, addr 0x6ef1fe4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh_MeshDataArray GetCurrentMeshData();

  /// @brief Method GetCurrentMeshDataPtr, addr 0x6ef1f28, size 0x80, virtual false, abstract: false, final false
  inline ::System::IntPtr GetCurrentMeshDataPtr();

  /// @brief Method GetCurrentMeshDataPtr_Injected, addr 0x6ef1fa8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCurrentMeshDataPtr_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetSecondaryTextureProperties, addr 0x6ef214c, size 0xd0, virtual false, abstract: false, final false
  inline void GetSecondaryTextureProperties(/* [NotNull] */ ::UnityEngine::MaterialPropertyBlock* mbp);

  /// @brief Method GetSecondaryTextureProperties_Injected, addr 0x6ef221c, size 0x44, virtual false, abstract: false, final false
  static inline void GetSecondaryTextureProperties_Injected(::System::IntPtr _unity_self, ::System::IntPtr mbp);

  /// @brief Method GetSpriteBounds, addr 0x6ef2260, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds GetSpriteBounds();

  /// [NativeMethod(Name = "GetSpriteBounds")]
  /// @brief Method Internal_GetSpriteBounds, addr 0x6ef203c, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds Internal_GetSpriteBounds(::UnityEngine::SpriteDrawMode mode);

  /// @brief Method Internal_GetSpriteBounds_Injected, addr 0x6ef20f8, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_GetSpriteBounds_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteDrawMode mode, ::by_ref<::UnityEngine::Bounds> ret);

  /// [RequiredByNativeCode]
  /// @brief Method InvokeSpriteChanged, addr 0x6ef0a54, size 0xfc, virtual false, abstract: false, final false
  inline void InvokeSpriteChanged();

  static inline ::UnityEngine::SpriteRenderer* New_ctor();

  /// @brief Method RegisterSpriteChangeCallback, addr 0x6ef0874, size 0xb8, virtual false, abstract: false, final false
  inline void RegisterSpriteChangeCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::SpriteRenderer>>* callback);

  /// @brief Method UnregisterSpriteChangeCallback, addr 0x6ef09bc, size 0x98, virtual false, abstract: false, final false
  inline void UnregisterSpriteChangeCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::SpriteRenderer>>* callback);

  constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>* const& __cordl_internal_get_m_SpriteChangeEvent() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*& __cordl_internal_get_m_SpriteChangeEvent();

  constexpr void __cordl_internal_set_m_SpriteChangeEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>* value);

  /// @brief Method .ctor, addr 0x6ef22a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_adaptiveModeThreshold, addr 0x6ef1404, size 0x80, virtual false, abstract: false, final false
  inline float_t get_adaptiveModeThreshold();

  /// @brief Method get_adaptiveModeThreshold_Injected, addr 0x6ef1484, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_adaptiveModeThreshold_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_color, addr 0x6ef172c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_color_Injected, addr 0x6ef17c8, size 0x44, virtual false, abstract: false, final false
  static inline void get_color_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_drawMode, addr 0x6ef10c0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteDrawMode get_drawMode();

  /// @brief Method get_drawMode_Injected, addr 0x6ef1140, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpriteDrawMode get_drawMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_flipX, addr 0x6ef1a78, size 0x80, virtual false, abstract: false, final false
  inline bool get_flipX();

  /// @brief Method get_flipX_Injected, addr 0x6ef1af8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_flipX_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_flipY, addr 0x6ef1c08, size 0x80, virtual false, abstract: false, final false
  inline bool get_flipY();

  /// @brief Method get_flipY_Injected, addr 0x6ef1c88, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_flipY_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hasSpriteChangeEvents, addr 0x6ef0d30, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasSpriteChangeEvents();

  /// @brief Method get_hasSpriteChangeEvents_Injected, addr 0x6ef0db0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasSpriteChangeEvents_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maskInteraction, addr 0x6ef18e8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_maskInteraction_Injected, addr 0x6ef1968, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction_Injected(::System::IntPtr _unity_self);

  /// [NativeMethod("ShouldSupportTiling")]
  /// @brief Method get_shouldSupportTiling, addr 0x6ef0c74, size 0x80, virtual false, abstract: false, final false
  inline bool get_shouldSupportTiling();

  /// @brief Method get_shouldSupportTiling_Injected, addr 0x6ef0cf4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_shouldSupportTiling_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_size, addr 0x6ef1250, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method get_size_Injected, addr 0x6ef12e8, size 0x44, virtual false, abstract: false, final false
  static inline void get_size_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_sprite, addr 0x6ef0e30, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method get_spriteSortPoint, addr 0x6ef1d98, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteSortPoint get_spriteSortPoint();

  /// @brief Method get_spriteSortPoint_Injected, addr 0x6ef1e18, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpriteSortPoint get_spriteSortPoint_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sprite_Injected, addr 0x6ef0f80, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sprite_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_tileMode, addr 0x6ef159c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteTileMode get_tileMode();

  /// @brief Method get_tileMode_Injected, addr 0x6ef161c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpriteTileMode get_tileMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_adaptiveModeThreshold, addr 0x6ef14c0, size 0x90, virtual false, abstract: false, final false
  inline void set_adaptiveModeThreshold(float_t value);

  /// @brief Method set_adaptiveModeThreshold_Injected, addr 0x6ef1550, size 0x4c, virtual false, abstract: false, final false
  static inline void set_adaptiveModeThreshold_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_color, addr 0x6ef180c, size 0x98, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_color_Injected, addr 0x6ef18a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_color_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_drawMode, addr 0x6ef117c, size 0x90, virtual false, abstract: false, final false
  inline void set_drawMode(::UnityEngine::SpriteDrawMode value);

  /// @brief Method set_drawMode_Injected, addr 0x6ef120c, size 0x44, virtual false, abstract: false, final false
  static inline void set_drawMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteDrawMode value);

  /// @brief Method set_flipX, addr 0x6ef1b34, size 0x90, virtual false, abstract: false, final false
  inline void set_flipX(bool value);

  /// @brief Method set_flipX_Injected, addr 0x6ef1bc4, size 0x44, virtual false, abstract: false, final false
  static inline void set_flipX_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_flipY, addr 0x6ef1cc4, size 0x90, virtual false, abstract: false, final false
  inline void set_flipY(bool value);

  /// @brief Method set_flipY_Injected, addr 0x6ef1d54, size 0x44, virtual false, abstract: false, final false
  static inline void set_flipY_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_hasSpriteChangeEvents, addr 0x6ef092c, size 0x90, virtual false, abstract: false, final false
  inline void set_hasSpriteChangeEvents(bool value);

  /// @brief Method set_hasSpriteChangeEvents_Injected, addr 0x6ef0dec, size 0x44, virtual false, abstract: false, final false
  static inline void set_hasSpriteChangeEvents_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_maskInteraction, addr 0x6ef19a4, size 0x90, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maskInteraction_Injected, addr 0x6ef1a34, size 0x44, virtual false, abstract: false, final false
  static inline void set_maskInteraction_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_size, addr 0x6ef132c, size 0x94, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector2 value);

  /// @brief Method set_size_Injected, addr 0x6ef13c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_size_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value);

  /// @brief Method set_sprite, addr 0x6ef0fbc, size 0xc0, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_spriteSortPoint, addr 0x6ef1e54, size 0x90, virtual false, abstract: false, final false
  inline void set_spriteSortPoint(::UnityEngine::SpriteSortPoint value);

  /// @brief Method set_spriteSortPoint_Injected, addr 0x6ef1ee4, size 0x44, virtual false, abstract: false, final false
  static inline void set_spriteSortPoint_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteSortPoint value);

  /// @brief Method set_sprite_Injected, addr 0x6ef107c, size 0x44, virtual false, abstract: false, final false
  static inline void set_sprite_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_tileMode, addr 0x6ef1658, size 0x90, virtual false, abstract: false, final false
  inline void set_tileMode(::UnityEngine::SpriteTileMode value);

  /// @brief Method set_tileMode_Injected, addr 0x6ef16e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_tileMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteTileMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteRenderer(SpriteRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteRenderer(SpriteRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9626 };

  /// @brief Field m_SpriteChangeEvent, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>* ___m_SpriteChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpriteRenderer, ___m_SpriteChangeEvent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SpriteRenderer) == 0x20, "Size mismatch!");

} // namespace UnityEngine
