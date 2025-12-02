#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/DebugGizmos.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugGizmos)
namespace Meta::XR::ImmersiveDebugger::Gizmo {
struct DebugGizmos_ColorScope;
}
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class PolylineRenderer;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class DebugGizmos;
}
namespace Meta::XR::ImmersiveDebugger::Gizmo {
struct DebugGizmos_ColorScope;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos);
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope);
// Dependencies UnityEngine.Color
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos/ColorScope
struct CORDL_TYPE DebugGizmos_ColorScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x5858c80, size 0x74, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x58565f4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugGizmos_ColorScope();

  // Ctor Parameters [CppParam { name: "_savedColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr DebugGizmos_ColorScope(::UnityEngine::Color _savedColor) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18425 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _savedColor, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color _savedColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope, _savedColor) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Gizmo
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos
class CORDL_TYPE DebugGizmos : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ColorScope = ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope;

  /// @brief Field CUBE_POINTS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CUBE_POINTS, put = setStaticF_CUBE_POINTS)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* CUBE_POINTS;

  /// @brief Field CUBE_SEGMENTS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CUBE_SEGMENTS, put = setStaticF_CUBE_SEGMENTS)) ::System::Collections::Generic::IReadOnlyList_1<int32_t>* CUBE_SEGMENTS;

  /// @brief Field Color, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Color, put = setStaticF_Color)) ::UnityEngine::Color Color;

  /// @brief Field LineWidth, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_LineWidth, put = setStaticF_LineWidth)) float_t LineWidth;

  /// @brief Field PLANE_POINTS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PLANE_POINTS, put = setStaticF_PLANE_POINTS)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* PLANE_POINTS;

  /// @brief Field PLANE_SEGMENTS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PLANE_SEGMENTS, put = setStaticF_PLANE_SEGMENTS)) ::System::Collections::Generic::IReadOnlyList_1<int32_t>* PLANE_SEGMENTS;

  __declspec(property(get = get_Renderer)) ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* Renderer;

  /// @brief Field _addedSegmentSinceLastUpdate, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__addedSegmentSinceLastUpdate, put = __cordl_internal_set__addedSegmentSinceLastUpdate)) bool _addedSegmentSinceLastUpdate;

  /// @brief Field _colors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>* _colors;

  /// @brief Field _index, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _points, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__points, put = __cordl_internal_set__points)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _points;

  /// @brief Field _polylineRenderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__polylineRenderer, put = __cordl_internal_set__polylineRenderer)) ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* _polylineRenderer;

  /// @brief Field _renderSinglePass, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__renderSinglePass, put = setStaticF__renderSinglePass)) bool _renderSinglePass;

  /// @brief Field _root, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__root, put = setStaticF__root)) ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> _root;

  /// @brief Method AddSegment, addr 0x585593c, size 0x278, virtual false, abstract: false, final false
  inline void AddSegment(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, float_t width, ::UnityEngine::Color color0, ::UnityEngine::Color color1);

  /// @brief Method ClearSegments, addr 0x5855610, size 0x8, virtual false, abstract: false, final false
  inline void ClearSegments();

  /// @brief Method DrawAxis, addr 0x5856684, size 0xa8, virtual false, abstract: false, final false
  static inline void DrawAxis(::UnityEngine::Pose pose, float_t size);

  /// @brief Method DrawAxis, addr 0x5856310, size 0x2e4, virtual false, abstract: false, final false
  static inline void DrawAxis(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t size);

  /// @brief Method DrawAxis, addr 0x585672c, size 0xd8, virtual false, abstract: false, final false
  static inline void DrawAxis(::UnityEngine::Transform* t, float_t size);

  /// @brief Method DrawBox, addr 0x58577ac, size 0xf0, virtual false, abstract: false, final false
  static inline void DrawBox(::UnityEngine::Pose pose, float_t width, float_t height, float_t depth, bool isPivotTopSurface);

  /// @brief Method DrawBox, addr 0x5856f34, size 0x878, virtual false, abstract: false, final false
  static inline void DrawBox(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t width, float_t height, float_t depth, bool isPivotTopSurface);

  /// @brief Method DrawLine, addr 0x5855e44, size 0x160, virtual false, abstract: false, final false
  static inline void DrawLine(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Transform* t);

  /// @brief Method DrawPlane, addr 0x5856e60, size 0xd4, virtual false, abstract: false, final false
  static inline void DrawPlane(::UnityEngine::Pose pose, float_t width, float_t height);

  /// @brief Method DrawPlane, addr 0x5856804, size 0x65c, virtual false, abstract: false, final false
  static inline void DrawPlane(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t width, float_t height);

  /// @brief Method DrawPoint, addr 0x5855d1c, size 0x128, virtual false, abstract: false, final false
  static inline void DrawPoint(::UnityEngine::Vector3 p0, ::UnityEngine::Transform* t);

  /// @brief Method DrawWireCube, addr 0x5855fa4, size 0x36c, virtual false, abstract: false, final false
  static inline void DrawWireCube(::UnityEngine::Vector3 center, float_t size, ::UnityEngine::Transform* t);

  /// @brief Method Init, addr 0x5854b50, size 0x88, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method LateUpdate, addr 0x58558b8, size 0x84, virtual true, abstract: false, final false
  inline void LateUpdate();

  static inline ::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos* New_ctor();

  /// @brief Method OnDisable, addr 0x585549c, size 0x80, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5854e88, size 0x114, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RenderSegments, addr 0x5855618, size 0x34, virtual false, abstract: false, final false
  inline void RenderSegments();

  constexpr bool const& __cordl_internal_get__addedSegmentSinceLastUpdate() const;

  constexpr bool& __cordl_internal_get__addedSegmentSinceLastUpdate();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get__colors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get__colors();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get__points() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get__points();

  constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* const& __cordl_internal_get__polylineRenderer() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*& __cordl_internal_get__polylineRenderer();

  constexpr void __cordl_internal_set__addedSegmentSinceLastUpdate(bool value);

  constexpr void __cordl_internal_set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  constexpr void __cordl_internal_set__polylineRenderer(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* value);

  /// @brief Method .ctor, addr 0x585789c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* getStaticF_CUBE_POINTS();

  static inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* getStaticF_CUBE_SEGMENTS();

  static inline ::UnityEngine::Color getStaticF_Color();

  static inline float_t getStaticF_LineWidth();

  static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* getStaticF_PLANE_POINTS();

  static inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* getStaticF_PLANE_SEGMENTS();

  static inline bool getStaticF__renderSinglePass();

  static inline ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> getStaticF__root();

  /// @brief Method get_RenderSinglePass, addr 0x5855bb4, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_RenderSinglePass();

  /// @brief Method get_Renderer, addr 0x5854f9c, size 0xa0, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* get_Renderer();

  /// @brief Method get_Root, addr 0x5854bd8, size 0x2b0, virtual false, abstract: false, final false
  static inline ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> get_Root();

  static inline void setStaticF_CUBE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* value);

  static inline void setStaticF_CUBE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>* value);

  static inline void setStaticF_Color(::UnityEngine::Color value);

  static inline void setStaticF_LineWidth(float_t value);

  static inline void setStaticF_PLANE_POINTS(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* value);

  static inline void setStaticF_PLANE_SEGMENTS(::System::Collections::Generic::IReadOnlyList_1<int32_t>* value);

  static inline void setStaticF__renderSinglePass(bool value);

  static inline void setStaticF__root(::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos> value);

  /// @brief Method set_RenderSinglePass, addr 0x5855c10, size 0x10c, virtual false, abstract: false, final false
  static inline void set_RenderSinglePass(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugGizmos();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugGizmos", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugGizmos(DebugGizmos&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugGizmos", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugGizmos(DebugGizmos const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18426 };

  /// @brief Field _points, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* ____points;

  /// @brief Field _colors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Color>* ____colors;

  /// @brief Field _index, offset: 0x30, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _addedSegmentSinceLastUpdate, offset: 0x34, size: 0x1, def value: None
  bool ____addedSegmentSinceLastUpdate;

  /// @brief Field _polylineRenderer, offset: 0x38, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* ____polylineRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____points) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____index) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____addedSegmentSinceLastUpdate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, ____polylineRenderer) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos, 0x40>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Gizmo
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos*, "Meta.XR.ImmersiveDebugger.Gizmo", "DebugGizmos");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Gizmo::DebugGizmos_ColorScope, "Meta.XR.ImmersiveDebugger.Gizmo", "DebugGizmos/ColorScope");
