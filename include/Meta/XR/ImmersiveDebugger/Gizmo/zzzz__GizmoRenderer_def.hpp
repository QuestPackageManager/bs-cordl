#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/GizmoRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GizmoRenderer)
namespace Meta::XR::ImmersiveDebugger {
struct DebugGizmoType;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class GizmoRenderer;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer);
// Dependencies Meta.XR.ImmersiveDebugger.DebugGizmoType, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer
class CORDL_TYPE GizmoRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _dataSource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource)) ::System::Object* _dataSource;

  /// @brief Field _gizmoColor, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get__gizmoColor, put = __cordl_internal_set__gizmoColor)) ::UnityEngine::Color _gizmoColor;

  /// @brief Field _gizmoType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__gizmoType, put = __cordl_internal_set__gizmoType)) ::Meta::XR::ImmersiveDebugger::DebugGizmoType _gizmoType;

  static inline ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer* New_ctor();

  /// @brief Method SetUpGizmo, addr 0x58594b0, size 0x10, virtual false, abstract: false, final false
  inline void SetUpGizmo(::Meta::XR::ImmersiveDebugger::DebugGizmoType gizmoType, ::UnityEngine::Color gizmoColor);

  /// @brief Method Start, addr 0x58594c8, size 0x64, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x585952c, size 0xe0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateDataSource, addr 0x58594c0, size 0x8, virtual false, abstract: false, final false
  inline void UpdateDataSource(::System::Object* dataSource);

  constexpr ::System::Object* const& __cordl_internal_get__dataSource() const;

  constexpr ::System::Object*& __cordl_internal_get__dataSource();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__gizmoColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__gizmoColor();

  constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType const& __cordl_internal_get__gizmoType() const;

  constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType& __cordl_internal_get__gizmoType();

  constexpr void __cordl_internal_set__dataSource(::System::Object* value);

  constexpr void __cordl_internal_set__gizmoColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__gizmoType(::Meta::XR::ImmersiveDebugger::DebugGizmoType value);

  /// @brief Method .ctor, addr 0x5859704, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoRenderer(GizmoRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoRenderer(GizmoRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18428 };

  /// @brief Field _gizmoType, offset: 0x20, size: 0x4, def value: None
  ::Meta::XR::ImmersiveDebugger::DebugGizmoType ____gizmoType;

  /// @brief Field _gizmoColor, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color ____gizmoColor;

  /// @brief Field _dataSource, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____dataSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer, ____gizmoType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer, ____gizmoColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer, ____dataSource) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer, 0x40>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Gizmo
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer*, "Meta.XR.ImmersiveDebugger.Gizmo", "GizmoRenderer");
