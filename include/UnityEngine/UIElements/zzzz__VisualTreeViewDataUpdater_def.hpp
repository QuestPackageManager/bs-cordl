#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeViewDataUpdater)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeViewDataUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeViewDataUpdater);
// Type: UnityEngine.UIElements::VisualTreeViewDataUpdater
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(6754))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6903))
// CS Name: ::UnityEngine.UIElements::VisualTreeViewDataUpdater*
class CORDL_TYPE VisualTreeViewDataUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field m_UpdateList, offset 0x20, size 0x8
  __declspec(property(get = __get_m_UpdateList, put = __set_m_UpdateList))::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_UpdateList;

  /// @brief Field m_ParentList, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ParentList, put = __set_m_ParentList))::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_ParentList;

  /// @brief Field m_Version, offset 0x30, size 0x4
  __declspec(property(get = __get_m_Version, put = __set_m_Version)) uint32_t m_Version;

  /// @brief Field m_LastVersion, offset 0x34, size 0x4
  __declspec(property(get = __get_m_LastVersion, put = __set_m_LastVersion)) uint32_t m_LastVersion;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description))::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker))::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  __declspec(property(get = get_profilerMarker))::Unity::Profiling::ProfilerMarker profilerMarker;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __get_m_UpdateList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const& __get_m_UpdateList() const;

  constexpr void __set_m_UpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __get_m_ParentList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const& __get_m_ParentList() const;

  constexpr void __set_m_ParentList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr uint32_t& __get_m_Version();

  constexpr uint32_t const& __get_m_Version() const;

  constexpr void __set_m_Version(uint32_t value);

  constexpr uint32_t& __get_m_LastVersion();

  constexpr uint32_t const& __get_m_LastVersion() const;

  constexpr void __set_m_LastVersion(uint32_t value);

  static inline void setStaticF_s_Description(::StringW value);

  static inline ::StringW getStaticF_s_Description();

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x2dfe9d0, size 0x58, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method OnVersionChanged, addr 0x2dfea28, size 0x90, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x2dfeb60, size 0x144, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method ValidateViewDataOnSubTree, addr 0x2dfeca4, size 0x150, virtual false, abstract: false, final false
  inline void ValidateViewDataOnSubTree(::UnityEngine::UIElements::VisualElement* ve, bool enablePersistence);

  /// @brief Method PropagateToParents, addr 0x2dfeab8, size 0xa8, virtual false, abstract: false, final false
  inline void PropagateToParents(::UnityEngine::UIElements::VisualElement* ve);

  static inline ::UnityEngine::UIElements::VisualTreeViewDataUpdater* New_ctor();

  /// @brief Method .ctor, addr 0x2dfedf4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeViewDataUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeViewDataUpdater(VisualTreeViewDataUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeViewDataUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeViewDataUpdater(VisualTreeViewDataUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeViewDataUpdater();

public:
  /// @brief Field m_UpdateList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_UpdateList;

  /// @brief Field m_ParentList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_ParentList;

  /// @brief Field m_Version, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_Version;

  /// @brief Field m_LastVersion, offset: 0x34, size: 0x4, def value: None
  uint32_t ___m_LastVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeViewDataUpdater, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeViewDataUpdater, ___m_UpdateList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeViewDataUpdater, ___m_ParentList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeViewDataUpdater, ___m_Version) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeViewDataUpdater, ___m_LastVersion) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeViewDataUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeViewDataUpdater*, "UnityEngine.UIElements", "VisualTreeViewDataUpdater");
