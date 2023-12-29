#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRDevice_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EyeGazeInteraction)
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __EyeGazeInteraction__EyeGazeDevice;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class EyeGazeInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __EyeGazeInteraction__EyeGazeDevice;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::__EyeGazeInteraction__EyeGazeDevice);
// Type: ::EyeGazeDevice
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14429))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14449))
// CS Name: ::EyeGazeInteraction::EyeGazeDevice*
class CORDL_TYPE __EyeGazeInteraction__EyeGazeDevice : public ::UnityEngine::XR::OpenXR::Input::OpenXRDevice {
public:
  // Declarations
  /// @brief Field <pose>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__pose_k__BackingField, put = __set__pose_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _pose_k__BackingField;

  __declspec(property(get = get_pose, put = set_pose))::UnityEngine::XR::OpenXR::Input::PoseControl* pose;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __get__pose_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::PoseControl*> const& __get__pose_k__BackingField() const;

  constexpr void __set__pose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_pose addr 0x2b06e44 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pose();

  /// @brief Method set_pose addr 0x2b06e4c size 0x8 virtual false final false
  inline void set_pose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method FinishSetup addr 0x2b06e54 size 0x78 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::__EyeGazeInteraction__EyeGazeDevice* New_ctor();

  /// @brief Method .ctor addr 0x2b06ecc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__EyeGazeInteraction__EyeGazeDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EyeGazeInteraction__EyeGazeDevice(__EyeGazeInteraction__EyeGazeDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EyeGazeInteraction__EyeGazeDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EyeGazeInteraction__EyeGazeDevice(__EyeGazeInteraction__EyeGazeDevice const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EyeGazeInteraction__EyeGazeDevice();

public:
  /// @brief Field <pose>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pose_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::__EyeGazeInteraction__EyeGazeDevice, 0x160>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__EyeGazeInteraction__EyeGazeDevice, ____pose_k__BackingField) == 0x158, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::EyeGazeInteraction
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14448))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14450))
// CS Name: ::UnityEngine.XR.OpenXR.Features.Interactions::EyeGazeInteraction*
class CORDL_TYPE EyeGazeInteraction : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using EyeGazeDevice = ::UnityEngine::XR::OpenXR::Features::Interactions::__EyeGazeInteraction__EyeGazeDevice;

  /// @brief Method OnInstanceCreate addr 0x2b066e0 size 0x6c virtual true final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterDeviceLayout addr 0x2b0674c size 0x15c virtual true final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout addr 0x2b068a8 size 0x68 virtual true final false
  inline void UnregisterDeviceLayout();

  /// @brief Method RegisterActionMapsWithRuntime addr 0x2b06910 size 0x52c virtual true final false
  inline void RegisterActionMapsWithRuntime();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction* New_ctor();

  /// @brief Method .ctor addr 0x2b06e3c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EyeGazeInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EyeGazeInteraction(EyeGazeInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EyeGazeInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EyeGazeInteraction(EyeGazeInteraction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EyeGazeInteraction();

public:
  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.eyetracking" };

  /// @brief Field userPath offset 0xffffffff size 0x8
  static constexpr ::ConstString userPath{ u"/user/eyes_ext" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/ext/eye_gaze_interaction" };

  /// @brief Field pose offset 0xffffffff size 0x8
  static constexpr ::ConstString pose{ u"/input/gaze_ext/pose" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Eye Tracking OpenXR" };

  /// @brief Field extensionString offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionString{ u"XR_EXT_eye_gaze_interaction" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*, "UnityEngine.XR.OpenXR.Features.Interactions", "EyeGazeInteraction");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::__EyeGazeInteraction__EyeGazeDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::__EyeGazeInteraction__EyeGazeDevice*, "UnityEngine.XR.OpenXR.Features.Interactions", "EyeGazeInteraction/EyeGazeDevice");
