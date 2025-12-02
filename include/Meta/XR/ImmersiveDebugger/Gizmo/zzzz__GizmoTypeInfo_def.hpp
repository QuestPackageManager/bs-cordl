#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/GizmoTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GizmoTypeInfo)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Gizmo {
struct GizmoTypeInfo;
}
// Write type traits
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo);
// Dependencies
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypeInfo
struct CORDL_TYPE GizmoTypeInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x5859bbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::System::Object*>* renderDelegate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoTypeInfo();

  // Ctor Parameters [CppParam { name: "RenderDelegate", ty: "::System::Action_1<::System::Object*>*", modifiers: "", def_value: None }]
  constexpr GizmoTypeInfo(::System::Action_1<::System::Object*>* RenderDelegate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18430 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field RenderDelegate, offset: 0x0, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* RenderDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo, RenderDelegate) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo, 0x8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Gizmo
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoTypeInfo, "Meta.XR.ImmersiveDebugger.Gizmo", "GizmoTypeInfo");
