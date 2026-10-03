#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAuthoringUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
CORDL_MODULE_EXPORT(VisualTreeAuthoringUpdater)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class AuthoringChanges;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class IVisualElementChangeProcessor;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeAuthoringUpdater;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::VisualTreeAuthoringUpdater*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeAuthoringUpdater*, "UnityEngine.UIElements", "VisualTreeAuthoringUpdater");
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAuthoringUpdater
class CORDL_TYPE VisualTreeAuthoringUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field m_AccumulatingChanges, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AccumulatingChanges, put = __cordl_internal_set_m_AccumulatingChanges)) bool m_AccumulatingChanges;

  /// @brief Field m_Accumulator, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Accumulator, put = __cordl_internal_set_m_Accumulator)) ::UnityEngine::UIElements::AuthoringChanges* m_Accumulator;

  /// @brief Field m_AttachedPanel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachedPanel, put = __cordl_internal_set_m_AttachedPanel)) ::UnityEngine::UIElements::BaseVisualElementPanel* m_AttachedPanel;

  /// @brief Field m_Changes1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Changes1, put = __cordl_internal_set_m_Changes1)) ::UnityEngine::UIElements::AuthoringChanges* m_Changes1;

  /// @brief Field m_Changes2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Changes2, put = __cordl_internal_set_m_Changes2)) ::UnityEngine::UIElements::AuthoringChanges* m_Changes2;

  /// @brief Field m_Notifier, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Notifier, put = __cordl_internal_set_m_Notifier)) ::UnityEngine::UIElements::AuthoringChanges* m_Notifier;

  /// @brief Field m_ProcessorRegistrationList, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ProcessorRegistrationList,
      put = __cordl_internal_set_m_ProcessorRegistrationList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* m_ProcessorRegistrationList;

  /// @brief Field m_ProcessorUnregistrationList, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ProcessorUnregistrationList,
      put = __cordl_internal_set_m_ProcessorUnregistrationList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* m_ProcessorUnregistrationList;

  /// @brief Field m_RegisteredProcessors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredProcessors,
                      put = __cordl_internal_set_m_RegisteredProcessors)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* m_RegisteredProcessors;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_UpdateChangeProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UpdateChangeProfilerMarker, put = setStaticF_s_UpdateChangeProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_UpdateChangeProfilerMarker;

  /// @brief Field s_UpdateProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UpdateProfilerMarker, put = setStaticF_s_UpdateProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_UpdateProfilerMarker;

  __declspec(property(get = get_shouldUpdate)) bool shouldUpdate;

  /// @brief Method Dispose, addr 0x70841e8, size 0x300, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::VisualTreeAuthoringUpdater* New_ctor();

  /// @brief Method OnHierarchyChange, addr 0x70844e8, size 0x4fc, virtual false, abstract: false, final false
  inline void OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type,
                                ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext);

  /// @brief Method OnPanelChanged, addr 0x70840f8, size 0xf0, virtual false, abstract: false, final false
  inline void OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* p);

  /// @brief Method OnVersionChanged, addr 0x7083a84, size 0x224, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method SwapBuffers, addr 0x70840dc, size 0x1c, virtual false, abstract: false, final false
  inline void SwapBuffers();

  /// @brief Method Update, addr 0x7083ca8, size 0x434, virtual true, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_m_AccumulatingChanges() const;

  constexpr bool& __cordl_internal_get_m_AccumulatingChanges();

  constexpr ::UnityEngine::UIElements::AuthoringChanges* const& __cordl_internal_get_m_Accumulator() const;

  constexpr ::UnityEngine::UIElements::AuthoringChanges*& __cordl_internal_get_m_Accumulator();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get_m_AttachedPanel() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get_m_AttachedPanel();

  constexpr ::UnityEngine::UIElements::AuthoringChanges* const& __cordl_internal_get_m_Changes1() const;

  constexpr ::UnityEngine::UIElements::AuthoringChanges*& __cordl_internal_get_m_Changes1();

  constexpr ::UnityEngine::UIElements::AuthoringChanges* const& __cordl_internal_get_m_Changes2() const;

  constexpr ::UnityEngine::UIElements::AuthoringChanges*& __cordl_internal_get_m_Changes2();

  constexpr ::UnityEngine::UIElements::AuthoringChanges* const& __cordl_internal_get_m_Notifier() const;

  constexpr ::UnityEngine::UIElements::AuthoringChanges*& __cordl_internal_get_m_Notifier();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* const& __cordl_internal_get_m_ProcessorRegistrationList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>*& __cordl_internal_get_m_ProcessorRegistrationList();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* const& __cordl_internal_get_m_ProcessorUnregistrationList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>*& __cordl_internal_get_m_ProcessorUnregistrationList();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* const& __cordl_internal_get_m_RegisteredProcessors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>*& __cordl_internal_get_m_RegisteredProcessors();

  constexpr void __cordl_internal_set_m_AccumulatingChanges(bool value);

  constexpr void __cordl_internal_set_m_Accumulator(::UnityEngine::UIElements::AuthoringChanges* value);

  constexpr void __cordl_internal_set_m_AttachedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set_m_Changes1(::UnityEngine::UIElements::AuthoringChanges* value);

  constexpr void __cordl_internal_set_m_Changes2(::UnityEngine::UIElements::AuthoringChanges* value);

  constexpr void __cordl_internal_set_m_Notifier(::UnityEngine::UIElements::AuthoringChanges* value);

  constexpr void __cordl_internal_set_m_ProcessorRegistrationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* value);

  constexpr void __cordl_internal_set_m_ProcessorUnregistrationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* value);

  constexpr void __cordl_internal_set_m_RegisteredProcessors(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* value);

  /// @brief Method .ctor, addr 0x7083934, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_UpdateChangeProfilerMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_UpdateProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x7083870, size 0x5c, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method get_shouldUpdate, addr 0x70838cc, size 0x68, virtual false, abstract: false, final false
  inline bool get_shouldUpdate();

  static inline void setStaticF_s_UpdateChangeProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_UpdateProfilerMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAuthoringUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAuthoringUpdater", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAuthoringUpdater(VisualTreeAuthoringUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAuthoringUpdater", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAuthoringUpdater(VisualTreeAuthoringUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4004 };

  /// @brief Field m_RegisteredProcessors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* ___m_RegisteredProcessors;

  /// @brief Field m_ProcessorRegistrationList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* ___m_ProcessorRegistrationList;

  /// @brief Field m_ProcessorUnregistrationList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* ___m_ProcessorUnregistrationList;

  /// @brief Field m_AttachedPanel, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ___m_AttachedPanel;

  /// @brief Field m_Changes1, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::AuthoringChanges* ___m_Changes1;

  /// @brief Field m_Changes2, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::AuthoringChanges* ___m_Changes2;

  /// @brief Field m_Accumulator, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::AuthoringChanges* ___m_Accumulator;

  /// @brief Field m_Notifier, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::AuthoringChanges* ___m_Notifier;

  /// @brief Field m_AccumulatingChanges, offset: 0x68, size: 0x1, def value: None
  bool ___m_AccumulatingChanges;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_RegisteredProcessors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_ProcessorRegistrationList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_ProcessorUnregistrationList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_AttachedPanel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_Changes1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_Changes2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_Accumulator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_Notifier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater, ___m_AccumulatingChanges) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAuthoringUpdater) == 0x70, "Size mismatch!");

} // namespace UnityEngine::UIElements
