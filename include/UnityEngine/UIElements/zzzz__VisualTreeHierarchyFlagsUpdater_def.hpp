#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeHierarchyFlagsUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeHierarchyFlagsUpdater)
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
struct VisualElementFlags;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeHierarchyFlagsUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater);
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeHierarchyFlagsUpdater
class CORDL_TYPE VisualTreeHierarchyFlagsUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field m_LastVersion, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastVersion, put = __cordl_internal_set_m_LastVersion)) uint32_t m_LastVersion;

  /// @brief Field m_Version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) uint32_t m_Version;

  __declspec(property(get = get_profilerMarker)) ::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description)) ::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker)) ::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  /// @brief Method DirtyBoundingBoxHierarchy, addr 0x499f7a0, size 0xa4, virtual false, abstract: false, final false
  static inline void DirtyBoundingBoxHierarchy(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method DirtyHierarchy, addr 0x499f6b8, size 0xe8, virtual false, abstract: false, final false
  static inline void DirtyHierarchy(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElementFlags mustDirtyFlags);

  static inline ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x499f5d4, size 0xe4, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x499f844, size 0x5c, virtual true, abstract: false, final false
  inline void Update();

  constexpr uint32_t const& __cordl_internal_get_m_LastVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_LastVersion();

  constexpr uint32_t const& __cordl_internal_get_m_Version() const;

  constexpr uint32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_LastVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_Version(uint32_t value);

  /// @brief Method .ctor, addr 0x499f8a0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x499f57c, size 0x58, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  static inline void setStaticF_s_Description(::StringW value);

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeHierarchyFlagsUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeHierarchyFlagsUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeHierarchyFlagsUpdater(VisualTreeHierarchyFlagsUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeHierarchyFlagsUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeHierarchyFlagsUpdater(VisualTreeHierarchyFlagsUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6331 };

  /// @brief Field m_Version, offset: 0x20, size: 0x4, def value: None
  uint32_t ___m_Version;

  /// @brief Field m_LastVersion, offset: 0x24, size: 0x4, def value: None
  uint32_t ___m_LastVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater, ___m_Version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater, ___m_LastVersion) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*, "UnityEngine.UIElements", "VisualTreeHierarchyFlagsUpdater");
