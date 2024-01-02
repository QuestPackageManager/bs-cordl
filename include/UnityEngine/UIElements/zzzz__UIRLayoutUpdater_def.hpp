#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRLayoutUpdater)
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRLayoutUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRLayoutUpdater);
// Type: UnityEngine.UIElements::UIRLayoutUpdater
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6754)), TypeDefinitionIndex(TypeDefinitionIndex(9966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7329))
// CS Name: ::UnityEngine.UIElements::UIRLayoutUpdater*
class CORDL_TYPE UIRLayoutUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description))::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker))::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  __declspec(property(get = get_profilerMarker))::Unity::Profiling::ProfilerMarker profilerMarker;

  static inline void setStaticF_s_Description(::StringW value);

  static inline ::StringW getStaticF_s_Description();

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x2e78a90, size 0x58, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  /// @brief Method OnVersionChanged, addr 0x2e78ae8, size 0x48, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x2e78b30, size 0x2ec, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateSubTree, addr 0x2e78e1c, size 0x810, virtual false, abstract: false, final false
  /// @param isDisplayed: bool (default: true)
  inline void UpdateSubTree(::UnityEngine::UIElements::VisualElement* ve, int32_t currentLayoutPass, bool isDisplayed = true);

  static inline ::UnityEngine::UIElements::UIRLayoutUpdater* New_ctor();

  /// @brief Method .ctor, addr 0x2e7962c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UIRLayoutUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRLayoutUpdater(UIRLayoutUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRLayoutUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRLayoutUpdater(UIRLayoutUpdater const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRLayoutUpdater();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRLayoutUpdater, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRLayoutUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRLayoutUpdater*, "UnityEngine.UIElements", "UIRLayoutUpdater");
