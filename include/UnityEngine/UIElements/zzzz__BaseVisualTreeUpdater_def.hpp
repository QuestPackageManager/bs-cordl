#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualTreeUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseVisualTreeUpdater)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVisualTreeUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVisualTreeUpdater);
// Type: UnityEngine.UIElements::BaseVisualTreeUpdater
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BaseVisualTreeUpdater*
class CORDL_TYPE BaseVisualTreeUpdater : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Panel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel))::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel;

  __declspec(property(get = get_panel, put = set_panel))::UnityEngine::UIElements::BaseVisualElementPanel* panel;

  /// @brief Field panelChanged, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panelChanged, put = __cordl_internal_set_panelChanged))::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* panelChanged;

  __declspec(property(get = get_profilerMarker))::Unity::Profiling::ProfilerMarker profilerMarker;

  __declspec(property(get = get_visualTree))::UnityEngine::UIElements::VisualElement* visualTree;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualTreeUpdater"
  constexpr operator ::UnityEngine::UIElements::IVisualTreeUpdater*() noexcept;

  /// @brief Method Dispose, addr 0x3507bec, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3507c58, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::BaseVisualTreeUpdater* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_m_Panel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> const& __cordl_internal_get_m_Panel() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*& __cordl_internal_get_panelChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*> const& __cordl_internal_get_panelChanged() const;

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method .ctor, addr 0x3507c5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_panelChanged, addr 0x3507a40, size 0xb0, virtual false, abstract: false, final false
  inline void add_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method get_panel, addr 0x3507ba0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_panel();

  /// @brief Method get_profilerMarker, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method get_visualTree, addr 0x3507bc8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IVisualTreeUpdater"
  constexpr ::UnityEngine::UIElements::IVisualTreeUpdater* i___UnityEngine__UIElements__IVisualTreeUpdater() noexcept;

  /// @brief Method remove_panelChanged, addr 0x3507af0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method set_panel, addr 0x3507ba8, size 0x20, virtual true, abstract: false, final true
  inline void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseVisualTreeUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseVisualTreeUpdater(BaseVisualTreeUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseVisualTreeUpdater(BaseVisualTreeUpdater const&) = delete;

  /// @brief Field panelChanged, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* ___panelChanged;

  /// @brief Field m_Panel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_Panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualTreeUpdater, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeUpdater, ___panelChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeUpdater, ___m_Panel) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualTreeUpdater*, "UnityEngine.UIElements", "BaseVisualTreeUpdater");
