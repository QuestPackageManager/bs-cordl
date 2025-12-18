#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/PalmPoseInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PalmPoseInteraction)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class PalmPoseInteraction_PalmPose;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class PalmPoseInteraction___c;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class PalmPoseInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class PalmPoseInteraction_PalmPose;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class PalmPoseInteraction___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c);
// Dependencies UnityEngine.InputSystem.XR.XRController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.PalmPoseInteraction/PalmPose
class CORDL_TYPE PalmPoseInteraction_PalmPose : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <devicePosition>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePosition_k__BackingField,
                      put = __cordl_internal_set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceRotation_k__BackingField,
                      put = __cordl_internal_set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <palmPose>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__palmPose_k__BackingField,
                      put = __cordl_internal_set__palmPose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _palmPose_k__BackingField;

  /// @brief Field <palmPosition>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__palmPosition_k__BackingField,
                      put = __cordl_internal_set__palmPosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _palmPosition_k__BackingField;

  /// @brief Field <palmRotation>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__palmRotation_k__BackingField,
                      put = __cordl_internal_set__palmRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _palmRotation_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  __declspec(property(get = get_devicePosition, put = set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_isTracked, put = set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_palmPose, put = set_palmPose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* palmPose;

  __declspec(property(get = get_palmPosition, put = set_palmPosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* palmPosition;

  __declspec(property(get = get_palmRotation, put = set_palmRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* palmRotation;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  /// @brief Method FinishSetup, addr 0x684aa00, size 0x7c, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__devicePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__devicePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__deviceRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__deviceRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__palmPose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__palmPose_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__palmPosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__palmPosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__palmRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__palmRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__palmPose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__palmPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__palmRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method .ctor, addr 0x684aa7c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_devicePosition, addr 0x684a9c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method get_deviceRotation, addr 0x684a9d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method get_isTracked, addr 0x684a9a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_palmPose, addr 0x684a990, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_palmPose();

  /// @brief Method get_palmPosition, addr 0x684a9e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_palmPosition();

  /// @brief Method get_palmRotation, addr 0x684a9f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_palmRotation();

  /// @brief Method get_trackingState, addr 0x684a9b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_devicePosition, addr 0x684a9c8, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceRotation, addr 0x684a9d8, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_isTracked, addr 0x684a9a8, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_palmPose, addr 0x684a998, size 0x8, virtual false, abstract: false, final false
  inline void set_palmPose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_palmPosition, addr 0x684a9e8, size 0x8, virtual false, abstract: false, final false
  inline void set_palmPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_palmRotation, addr 0x684a9f8, size 0x8, virtual false, abstract: false, final false
  inline void set_palmRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_trackingState, addr 0x684a9b8, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PalmPoseInteraction_PalmPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PalmPoseInteraction_PalmPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PalmPoseInteraction_PalmPose(PalmPoseInteraction_PalmPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PalmPoseInteraction_PalmPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PalmPoseInteraction_PalmPose(PalmPoseInteraction_PalmPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18559 };

  /// @brief Field <palmPose>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____palmPose_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <palmPosition>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____palmPosition_k__BackingField;

  /// @brief Field <palmRotation>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____palmRotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose, ____palmPose_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose, ____isTracked_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose, ____trackingState_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose, ____devicePosition_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose, ____deviceRotation_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose, ____palmPosition_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose, ____palmRotation_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose, 0x1e0>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.PalmPoseInteraction/<>c
class CORDL_TYPE PalmPoseInteraction___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* __9__15_1;

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c* New_ctor();

  /// @brief Method <AddAdditiveActions>b__15_0, addr 0x684aaf4, size 0xb8, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__15_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig* d);

  /// @brief Method <AddAdditiveActions>b__15_1, addr 0x684abac, size 0x14, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__15_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* a);

  /// @brief Method .ctor, addr 0x684aaf0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* getStaticF___9__15_0();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* getStaticF___9__15_1();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* value);

  static inline void setStaticF___9__15_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PalmPoseInteraction___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PalmPoseInteraction___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PalmPoseInteraction___c(PalmPoseInteraction___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PalmPoseInteraction___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PalmPoseInteraction___c(PalmPoseInteraction___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18560 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.PalmPoseInteraction
class CORDL_TYPE PalmPoseInteraction : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using PalmPose = ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose;

  using __c = ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c;

  __declspec(property(get = get_IsAdditive)) bool IsAdditive;

  /// @brief Method AddAdditiveActions, addr 0x684a320, size 0x614, virtual true, abstract: false, final false
  inline void AddAdditiveActions(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps,
                                 ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* additiveMap);

  /// @brief Method AddBindingBasedOnRuntimeAPIVersion, addr 0x684a1a0, size 0x180, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>* AddBindingBasedOnRuntimeAPIVersion();

  /// @brief Method GetDeviceLayoutName, addr 0x6849db0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x6849b8c, size 0x6c, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x6849df4, size 0x3ac, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x6849bf8, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x6849d40, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x684a934, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsAdditive, addr 0x6849b84, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsAdditive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PalmPoseInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PalmPoseInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PalmPoseInteraction(PalmPoseInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PalmPoseInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PalmPoseInteraction(PalmPoseInteraction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18561 };

  /// @brief Field extensionString offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionString{ u"XR_EXT_palm_pose" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.palmpose" };

  /// @brief Field gripSurfacePose offset 0xffffffff size 0x8
  static constexpr ::ConstString gripSurfacePose{ u"/input/grip_surface/pose" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Palm Pose Interaction OpenXR" };

  /// @brief Field palmPose offset 0xffffffff size 0x8
  static constexpr ::ConstString palmPose{ u"/input/palm_ext/pose" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/ext/palmpose" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction*, "UnityEngine.XR.OpenXR.Features.Interactions", "PalmPoseInteraction");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction_PalmPose*, "UnityEngine.XR.OpenXR.Features.Interactions", "PalmPoseInteraction/PalmPose");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::PalmPoseInteraction___c*, "UnityEngine.XR.OpenXR.Features.Interactions", "PalmPoseInteraction/<>c");
