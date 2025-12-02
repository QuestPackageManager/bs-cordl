#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/MetaQuestFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MetaQuestFeature)
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
struct MetaQuestFeature_TargetDevice;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
class MetaQuestFeature;
}
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
struct MetaQuestFeature_TargetDevice;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice);
// Dependencies
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct CORDL_TYPE MetaQuestFeature_TargetDevice {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaQuestFeature_TargetDevice();

  // Ctor Parameters [CppParam { name: "visibleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "manifestName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }]
  constexpr MetaQuestFeature_TargetDevice(::StringW visibleName, ::StringW manifestName, bool enabled, bool active) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23330 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field visibleName, offset: 0x0, size: 0x8, def value: None
  ::StringW visibleName;

  /// @brief Field manifestName, offset: 0x8, size: 0x8, def value: None
  ::StringW manifestName;

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool enabled;

  /// @brief Field active, offset: 0x11, size: 0x1, def value: None
  bool active;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice, visibleName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice, manifestName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice, enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice, active) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
class CORDL_TYPE MetaQuestFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  using TargetDevice = ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice;

  static inline ::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature* New_ctor();

  /// @brief Method .ctor, addr 0x67d47a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaQuestFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaQuestFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaQuestFeature(MetaQuestFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaQuestFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaQuestFeature(MetaQuestFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23331 };

  /// @brief Field ambientOcclusionScriptName offset 0xffffffff size 0x8
  static constexpr ::ConstString ambientOcclusionScriptName{ u"ScreenSpaceAmbientOcclusion" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.metaquest" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature*, "UnityEngine.XR.OpenXR.Features.MetaQuestSupport", "MetaQuestFeature");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature_TargetDevice, "UnityEngine.XR.OpenXR.Features.MetaQuestSupport", "MetaQuestFeature/TargetDevice");
