#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVisualTreeUpdater)
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IVisualTreeUpdater);
// Type: UnityEngine.UIElements::IVisualTreeUpdater
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6753))
// CS Name: ::UnityEngine.UIElements::IVisualTreeUpdater*
class CORDL_TYPE IVisualTreeUpdater {
public:
  // Declarations
  __declspec(property(put = set_panel))::UnityEngine::UIElements::BaseVisualElementPanel* panel;

  __declspec(property(get = get_profilerMarker))::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method set_panel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method get_profilerMarker, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update();

  /// @brief Method OnVersionChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  // Ctor Parameters [CppParam { name: "", ty: "IVisualTreeUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVisualTreeUpdater(IVisualTreeUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVisualTreeUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVisualTreeUpdater(IVisualTreeUpdater const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IVisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualTreeUpdater*, "UnityEngine.UIElements", "IVisualTreeUpdater");
