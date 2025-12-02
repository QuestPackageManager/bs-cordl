#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/EyeGazeInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EyeGazeInteraction)
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class EyeGazeInteraction_EyeGazeDevice;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRInteractionFeature_InteractionProfileType;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class EyeGazeInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class EyeGazeInteraction_EyeGazeDevice;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice);
// Dependencies UnityEngine.XR.OpenXR.Input.OpenXRDevice
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction/EyeGazeDevice
class CORDL_TYPE EyeGazeInteraction_EyeGazeDevice : public ::UnityEngine::XR::OpenXR::Input::OpenXRDevice {
public:
  // Declarations
  /// @brief Field <pose>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__pose_k__BackingField, put = __cordl_internal_set__pose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pose_k__BackingField;

  __declspec(property(get = get_pose, put = set_pose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pose;

  /// @brief Method FinishSetup, addr 0x67c6ab0, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice* New_ctor();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pose_k__BackingField();

  constexpr void __cordl_internal_set__pose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method .ctor, addr 0x67c6b28, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pose, addr 0x67c6aa0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pose();

  /// @brief Method set_pose, addr 0x67c6aa8, size 0x8, virtual false, abstract: false, final false
  inline void set_pose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EyeGazeInteraction_EyeGazeDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EyeGazeInteraction_EyeGazeDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EyeGazeInteraction_EyeGazeDevice(EyeGazeInteraction_EyeGazeDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EyeGazeInteraction_EyeGazeDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EyeGazeInteraction_EyeGazeDevice(EyeGazeInteraction_EyeGazeDevice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18519 };

  /// @brief Field <pose>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pose_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice, ____pose_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice, 0x190>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction
class CORDL_TYPE EyeGazeInteraction : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using EyeGazeDevice = ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice;

  /// @brief Method GetDeviceLayoutName, addr 0x67c64b8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  /// @brief Method GetInteractionProfileType, addr 0x67c6404, size 0xb4, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType GetInteractionProfileType();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x67c61c8, size 0x6c, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x67c64fc, size 0x548, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x67c6234, size 0x160, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x67c6394, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x67c6a44, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EyeGazeInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EyeGazeInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EyeGazeInteraction(EyeGazeInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EyeGazeInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EyeGazeInteraction(EyeGazeInteraction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18520 };

  /// @brief Field extensionString offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionString{ u"XR_EXT_eye_gaze_interaction" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.eyetracking" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Eye Tracking OpenXR" };

  /// @brief Field layoutName offset 0xffffffff size 0x8
  static constexpr ::ConstString layoutName{ u"EyeGaze" };

  /// @brief Field pose offset 0xffffffff size 0x8
  static constexpr ::ConstString pose{ u"/input/gaze_ext/pose" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/ext/eye_gaze_interaction" };

  /// @brief Field userPath offset 0xffffffff size 0x8
  static constexpr ::ConstString userPath{ u"/user/eyes_ext" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*, "UnityEngine.XR.OpenXR.Features.Interactions", "EyeGazeInteraction");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*, "UnityEngine.XR.OpenXR.Features.Interactions", "EyeGazeInteraction/EyeGazeDevice");
