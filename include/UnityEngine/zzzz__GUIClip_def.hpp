#pragma once
// IWYU pragma private; include "UnityEngine/GUIClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIClip)
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct GUIClip_ParentClipScope;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIClip;
}
namespace UnityEngine {
struct GUIClip_ParentClipScope;
}
// Write type traits
MARK_REF_T(::UnityEngine::GUIClip*);
MARK_VAL_T(::UnityEngine::GUIClip_ParentClipScope);
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIClip*, "UnityEngine", "GUIClip");
DEFINE_IL2CPP_CLASS(::UnityEngine::GUIClip_ParentClipScope, "UnityEngine", "GUIClip/ParentClipScope");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GUIClip/ParentClipScope
struct CORDL_TYPE GUIClip_ParentClipScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6b406a0, size 0x40, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x6b4065c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Matrix4x4 objectTransform, ::UnityEngine::Rect clipRect);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIClip_ParentClipScope();

  // Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }]
  constexpr GUIClip_ParentClipScope(bool m_Disposed) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19839 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field m_Disposed, offset: 0x0, size: 0x1, def value: None
  bool m_Disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUIClip_ParentClipScope, m_Disposed) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::GUIClip_ParentClipScope) == 0x1, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIClip
class CORDL_TYPE GUIClip : public ::System::Object {
public:
  // Declarations
  using ParentClipScope = ::UnityEngine::GUIClip_ParentClipScope;

  /// @brief Method GetMatrix, addr 0x6b3e754, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetMatrix();

  /// @brief Method GetMatrix_Injected, addr 0x6b404d4, size 0x3c, virtual false, abstract: false, final false
  static inline void GetMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Internal_GetCount, addr 0x6b404ac, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Internal_GetCount();

  /// @brief Method Internal_Pop, addr 0x6b3f8e8, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_Pop();

  /// @brief Method Internal_PopParentClip, addr 0x6b40634, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_PopParentClip();

  /// @brief Method Internal_Push, addr 0x6b403ec, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_Push(::UnityEngine::Rect screenRect, ::UnityEngine::Vector2 scrollOffset, ::UnityEngine::Vector2 renderOffset, bool resetOffset);

  /// @brief Method Internal_PushParentClip, addr 0x6b4054c, size 0x38, virtual false, abstract: false, final false
  static inline void Internal_PushParentClip(::UnityEngine::Matrix4x4 objectTransform, ::UnityEngine::Rect clipRect);

  /// @brief Method Internal_PushParentClip, addr 0x6b40584, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_PushParentClip(::UnityEngine::Matrix4x4 renderTransform, ::UnityEngine::Matrix4x4 inputTransform, ::UnityEngine::Rect clipRect);

  /// @brief Method Internal_PushParentClip_Injected, addr 0x6b405e0, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_PushParentClip_Injected(::by_ref<::UnityEngine::Matrix4x4> renderTransform, ::by_ref<::UnityEngine::Matrix4x4> inputTransform, ::by_ref<::UnityEngine::Rect> clipRect);

  /// @brief Method Internal_Push_Injected, addr 0x6b40450, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_Push_Injected(::by_ref<::UnityEngine::Rect> screenRect, ::by_ref<::UnityEngine::Vector2> scrollOffset, ::by_ref<::UnityEngine::Vector2> renderOffset, bool resetOffset);

  /// @brief Method Push, addr 0x6b3f874, size 0x4, virtual false, abstract: false, final false
  static inline void Push(::UnityEngine::Rect screenRect, ::UnityEngine::Vector2 scrollOffset, ::UnityEngine::Vector2 renderOffset, bool resetOffset);

  /// @brief Method SetMatrix, addr 0x6b3e804, size 0x3c, virtual false, abstract: false, final false
  static inline void SetMatrix(::UnityEngine::Matrix4x4 m);

  /// @brief Method SetMatrix_Injected, addr 0x6b40510, size 0x3c, virtual false, abstract: false, final false
  static inline void SetMatrix_Injected(::by_ref<::UnityEngine::Matrix4x4> m);

  /// @brief Method get_visibleRect, addr 0x6b3f0fc, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect get_visibleRect();

  /// @brief Method get_visibleRect_Injected, addr 0x6b403b0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_visibleRect_Injected(::by_ref<::UnityEngine::Rect> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIClip(GUIClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIClip(GUIClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GUIClip) == 0x10, "Size mismatch!");

} // namespace UnityEngine
