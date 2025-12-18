#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementAnimationSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementAnimationSystem)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementAnimationSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementAnimationSystem);
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementAnimationSystem
class CORDL_TYPE VisualElementAnimationSystem : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field lastUpdate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lastUpdate, put = __cordl_internal_set_lastUpdate)) int64_t lastUpdate;

  /// @brief Field m_Animations, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Animations,
                      put = __cordl_internal_set_m_Animations)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* m_Animations;

  /// @brief Field m_HasNewAnimations, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasNewAnimations, put = __cordl_internal_set_m_HasNewAnimations)) bool m_HasNewAnimations;

  /// @brief Field m_IterationList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IterationList,
                      put = __cordl_internal_set_m_IterationList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* m_IterationList;

  /// @brief Field m_IterationListDirty, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IterationListDirty, put = __cordl_internal_set_m_IterationListDirty)) bool m_IterationListDirty;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description)) ::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  /// @brief Field s_StylePropertyAnimationDescription, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_StylePropertyAnimationDescription, put = setStaticF_s_StylePropertyAnimationDescription)) ::StringW s_StylePropertyAnimationDescription;

  /// @brief Field s_StylePropertyAnimationProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_StylePropertyAnimationProfilerMarker,
                      put = setStaticF_s_StylePropertyAnimationProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_StylePropertyAnimationProfilerMarker;

  static inline ::UnityEngine::UIElements::VisualElementAnimationSystem* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x6b02314, size 0x4, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method RegisterAnimation, addr 0x6b01d74, size 0x7c, virtual false, abstract: false, final false
  inline void RegisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim);

  /// @brief Method RegisterAnimations, addr 0x6b01df0, size 0x140, virtual false, abstract: false, final false
  inline void RegisterAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* anims);

  /// @brief Method UnregisterAnimation, addr 0x6b01bd0, size 0x70, virtual false, abstract: false, final false
  inline void UnregisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* anim);

  /// @brief Method UnregisterAnimations, addr 0x6b01c40, size 0x134, virtual false, abstract: false, final false
  inline void UnregisterAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* anims);

  /// @brief Method Update, addr 0x6b01f30, size 0x3dc, virtual true, abstract: false, final false
  inline void Update();

  constexpr int64_t const& __cordl_internal_get_lastUpdate() const;

  constexpr int64_t& __cordl_internal_get_lastUpdate();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* const& __cordl_internal_get_m_Animations() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*& __cordl_internal_get_m_Animations();

  constexpr bool const& __cordl_internal_get_m_HasNewAnimations() const;

  constexpr bool& __cordl_internal_get_m_HasNewAnimations();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* const& __cordl_internal_get_m_IterationList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>*& __cordl_internal_get_m_IterationList();

  constexpr bool const& __cordl_internal_get_m_IterationListDirty() const;

  constexpr bool& __cordl_internal_get_m_IterationListDirty();

  constexpr void __cordl_internal_set_lastUpdate(int64_t value);

  constexpr void __cordl_internal_set_m_Animations(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* value);

  constexpr void __cordl_internal_set_m_HasNewAnimations(bool value);

  constexpr void __cordl_internal_set_m_IterationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* value);

  constexpr void __cordl_internal_set_m_IterationListDirty(bool value);

  /// @brief Method .ctor, addr 0x6b02318, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  static inline ::StringW getStaticF_s_StylePropertyAnimationDescription();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_StylePropertyAnimationProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x6b01b18, size 0x5c, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method get_stylePropertyAnimationProfilerMarker, addr 0x6b01b74, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Profiling::ProfilerMarker get_stylePropertyAnimationProfilerMarker();

  static inline void setStaticF_s_Description(::StringW value);

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_StylePropertyAnimationDescription(::StringW value);

  static inline void setStaticF_s_StylePropertyAnimationProfilerMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementAnimationSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementAnimationSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementAnimationSystem(VisualElementAnimationSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementAnimationSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementAnimationSystem(VisualElementAnimationSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5251 };

  /// @brief Field m_Animations, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* ___m_Animations;

  /// @brief Field m_IterationList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*>* ___m_IterationList;

  /// @brief Field m_HasNewAnimations, offset: 0x38, size: 0x1, def value: None
  bool ___m_HasNewAnimations;

  /// @brief Field m_IterationListDirty, offset: 0x39, size: 0x1, def value: None
  bool ___m_IterationListDirty;

  /// @brief Field lastUpdate, offset: 0x40, size: 0x8, def value: None
  int64_t ___lastUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElementAnimationSystem, ___m_Animations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAnimationSystem, ___m_IterationList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAnimationSystem, ___m_HasNewAnimations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAnimationSystem, ___m_IterationListDirty) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAnimationSystem, ___lastUpdate) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementAnimationSystem, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementAnimationSystem*, "UnityEngine.UIElements", "VisualElementAnimationSystem");
