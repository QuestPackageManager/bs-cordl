#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualTreeUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualTreeUpdater_def.hpp"
CORDL_MODULE_EXPORT(BaseVisualTreeUpdater)
namespace System {
template <typename T> class Action_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
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
// Dependencies System.IDisposable, System.Object, UnityEngine.UIElements.IVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVisualTreeUpdater
class CORDL_TYPE BaseVisualTreeUpdater : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Panel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel)) ::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel;

  __declspec(property(get = get_panel, put = set_panel)) ::UnityEngine::UIElements::BaseVisualElementPanel* panel;

  /// @brief Field panelChanged, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panelChanged, put = __cordl_internal_set_panelChanged)) ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* panelChanged;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  __declspec(property(get = get_visualTree)) ::UnityEngine::UIElements::VisualElement* visualTree;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IVisualTreeUpdater"
  constexpr operator ::UnityEngine::UIElements::IVisualTreeUpdater*() noexcept;

  /// @brief Method Dispose, addr 0x49a582c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x49a5898, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::BaseVisualTreeUpdater* New_ctor();

  /// @brief Method OnVersionChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_m_Panel();

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* const& __cordl_internal_get_panelChanged() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*& __cordl_internal_get_panelChanged();

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method .ctor, addr 0x49a1f58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_panelChanged, addr 0x49a56ac, size 0xb0, virtual false, abstract: false, final false
  inline void add_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method get_panel, addr 0x49a1e84, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_panel();

  /// @brief Method get_profilerMarker, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method get_visualTree, addr 0x49a3490, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IVisualTreeUpdater"
  constexpr ::UnityEngine::UIElements::IVisualTreeUpdater* i___UnityEngine__UIElements__IVisualTreeUpdater() noexcept;

  /// @brief Method remove_panelChanged, addr 0x49a575c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value);

  /// @brief Method set_panel, addr 0x49a580c, size 0x20, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6349 };

  /// @brief Field panelChanged, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* ___panelChanged;

  /// @brief Field m_Panel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_Panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeUpdater, ___panelChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVisualTreeUpdater, ___m_Panel) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualTreeUpdater, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualTreeUpdater*, "UnityEngine.UIElements", "BaseVisualTreeUpdater");
