#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIClip)
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct __GUIClip__ParentClipScope;
}
// Forward declare root types
namespace UnityEngine {
class GUIClip;
}
namespace UnityEngine {
struct __GUIClip__ParentClipScope;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIClip);
MARK_VAL_T(::UnityEngine::__GUIClip__ParentClipScope);
// Type: ::ParentClipScope
// SizeInfo { instance_size: 1, native_size: 4, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::GUIClip::ParentClipScope
struct CORDL_TYPE __GUIClip__ParentClipScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3238784, size 0x40, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x3238730, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Matrix4x4 objectTransform, ::UnityEngine::Rect clipRect);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GUIClip__ParentClipScope();

  // Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }]
  constexpr __GUIClip__ParentClipScope(bool m_Disposed) noexcept;

  /// @brief Field m_Disposed, offset: 0x0, size: 0x1, def value: None
  bool m_Disposed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GUIClip__ParentClipScope, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__GUIClip__ParentClipScope, m_Disposed) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::GUIClip
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUIClip*
class CORDL_TYPE GUIClip : public ::System::Object {
public:
  // Declarations
  using ParentClipScope = ::UnityEngine::__GUIClip__ParentClipScope;

  /// @brief Method GetMatrix, addr 0x3236b90, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetMatrix();

  /// @brief Method GetMatrix_Injected, addr 0x32385a0, size 0x3c, virtual false, abstract: false, final false
  static inline void GetMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method Internal_GetCount, addr 0x3238578, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Internal_GetCount();

  /// @brief Method Internal_Pop, addr 0x3238550, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_Pop();

  /// @brief Method Internal_PopParentClip, addr 0x3238708, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_PopParentClip();

  /// @brief Method Internal_PushParentClip, addr 0x3238618, size 0x40, virtual false, abstract: false, final false
  static inline void Internal_PushParentClip(::UnityEngine::Matrix4x4 objectTransform, ::UnityEngine::Rect clipRect);

  /// @brief Method Internal_PushParentClip, addr 0x3238658, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_PushParentClip(::UnityEngine::Matrix4x4 renderTransform, ::UnityEngine::Matrix4x4 inputTransform, ::UnityEngine::Rect clipRect);

  /// @brief Method Internal_PushParentClip_Injected, addr 0x32386b4, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_PushParentClip_Injected(ByRef<::UnityEngine::Matrix4x4> renderTransform, ByRef<::UnityEngine::Matrix4x4> inputTransform, ByRef<::UnityEngine::Rect> clipRect);

  /// @brief Method SetMatrix, addr 0x3236c40, size 0x3c, virtual false, abstract: false, final false
  static inline void SetMatrix(::UnityEngine::Matrix4x4 m);

  /// @brief Method SetMatrix_Injected, addr 0x32385dc, size 0x3c, virtual false, abstract: false, final false
  static inline void SetMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method get_visibleRect, addr 0x3237440, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect get_visibleRect();

  /// @brief Method get_visibleRect_Injected, addr 0x3238514, size 0x3c, virtual false, abstract: false, final false
  static inline void get_visibleRect_Injected(ByRef<::UnityEngine::Rect> ret);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIClip, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIClip*, "UnityEngine", "GUIClip");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GUIClip__ParentClipScope, "UnityEngine", "GUIClip/ParentClipScope");
