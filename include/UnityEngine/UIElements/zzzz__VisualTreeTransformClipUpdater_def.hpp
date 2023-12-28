#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeTransformClipUpdater)
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeTransformClipUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeTransformClipUpdater);
// Type: UnityEngine.UIElements::VisualTreeTransformClipUpdater
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(6754))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6784))
// CS Name: ::UnityEngine.UIElements::VisualTreeTransformClipUpdater*
class CORDL_TYPE VisualTreeTransformClipUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field m_Version, offset 0x20, size 0x4
  __declspec(property(get = __get_m_Version, put = __set_m_Version)) uint32_t m_Version;

  /// @brief Field m_LastVersion, offset 0x24, size 0x4
  __declspec(property(get = __get_m_LastVersion, put = __set_m_LastVersion)) uint32_t m_LastVersion;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description))::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker))::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  __declspec(property(get = get_profilerMarker))::Unity::Profiling::ProfilerMarker profilerMarker;

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

  /// @brief Method get_profilerMarker addr 0x2dba078 size 0x58 virtual true final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method OnVersionChanged addr 0x2dba0d0 size 0xf4 virtual true final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method DirtyHierarchy addr 0x2dba1c4 size 0x154 virtual false final false
  static inline void DirtyHierarchy(::UnityEngine::UIElements::VisualElement* ve, bool mustDirtyWorldTransform, bool mustDirtyWorldClip);

  /// @brief Method DirtyBoundingBoxHierarchy addr 0x2dba318 size 0xa8 virtual false final false
  static inline void DirtyBoundingBoxHierarchy(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Update addr 0x2dba3c0 size 0x64 virtual true final false
  inline void Update();

  static inline ::UnityEngine::UIElements::VisualTreeTransformClipUpdater* New_ctor();

  /// @brief Method .ctor addr 0x2dba624 size 0xc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeTransformClipUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeTransformClipUpdater(VisualTreeTransformClipUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeTransformClipUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeTransformClipUpdater(VisualTreeTransformClipUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeTransformClipUpdater();

public:
  /// @brief Field m_Version, offset: 0x20, size: 0x4, def value: None
  uint32_t ___m_Version;

  /// @brief Field m_LastVersion, offset: 0x24, size: 0x4, def value: None
  uint32_t ___m_LastVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeTransformClipUpdater, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeTransformClipUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeTransformClipUpdater*, "UnityEngine.UIElements", "VisualTreeTransformClipUpdater");
