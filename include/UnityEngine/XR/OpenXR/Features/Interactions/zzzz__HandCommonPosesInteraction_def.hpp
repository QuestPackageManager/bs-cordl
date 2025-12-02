#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/HandCommonPosesInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandCommonPosesInteraction)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandCommonPosesInteraction_HandInteractionPoses;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandCommonPosesInteraction___c;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandCommonPosesInteraction___c__DisplayClass17_0;
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
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRInteractionFeature_InteractionProfileType;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandCommonPosesInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandCommonPosesInteraction_HandInteractionPoses;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandCommonPosesInteraction___c;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandCommonPosesInteraction___c__DisplayClass17_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c__DisplayClass17_0);
// Dependencies UnityEngine.XR.OpenXR.Input.OpenXRDevice
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HandCommonPosesInteraction/HandInteractionPoses
class CORDL_TYPE HandCommonPosesInteraction_HandInteractionPoses : public ::UnityEngine::XR::OpenXR::Input::OpenXRDevice {
public:
  // Declarations
  /// @brief Field <devicePose>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePose_k__BackingField,
                      put = __cordl_internal_set__devicePose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <pinchPose>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__pinchPose_k__BackingField,
                      put = __cordl_internal_set__pinchPose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pinchPose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__pointer_k__BackingField,
                      put = __cordl_internal_set__pointer_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <pokePose>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__pokePose_k__BackingField,
                      put = __cordl_internal_set__pokePose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pokePose_k__BackingField;

  __declspec(property(get = get_devicePose, put = set_devicePose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_pinchPose, put = set_pinchPose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pinchPose;

  __declspec(property(get = get_pointer, put = set_pointer)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_pokePose, put = set_pokePose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pokePose;

  /// @brief Method FinishSetup, addr 0x67c8330, size 0xfc, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses* New_ctor();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__devicePose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__devicePose_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pinchPose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pinchPose_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pointer_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pointer_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pokePose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pokePose_k__BackingField();

  constexpr void __cordl_internal_set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__pinchPose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__pokePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method .ctor, addr 0x67c842c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_devicePose, addr 0x67c82f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method get_pinchPose, addr 0x67c8320, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pinchPose();

  /// @brief Method get_pointer, addr 0x67c8300, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method get_pokePose, addr 0x67c8310, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pokePose();

  /// @brief Method set_devicePose, addr 0x67c82f8, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pinchPose, addr 0x67c8328, size 0x8, virtual false, abstract: false, final false
  inline void set_pinchPose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pointer, addr 0x67c8308, size 0x8, virtual false, abstract: false, final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pokePose, addr 0x67c8318, size 0x8, virtual false, abstract: false, final false
  inline void set_pokePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandCommonPosesInteraction_HandInteractionPoses();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandCommonPosesInteraction_HandInteractionPoses", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandCommonPosesInteraction_HandInteractionPoses(HandCommonPosesInteraction_HandInteractionPoses&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandCommonPosesInteraction_HandInteractionPoses", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandCommonPosesInteraction_HandInteractionPoses(HandCommonPosesInteraction_HandInteractionPoses const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18522 };

  /// @brief Field <devicePose>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <pokePose>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pokePose_k__BackingField;

  /// @brief Field <pinchPose>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pinchPose_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses, ____devicePose_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses, ____pointer_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses, ____pokePose_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses, ____pinchPose_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses, 0x1a8>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HandCommonPosesInteraction/<>c
class CORDL_TYPE HandCommonPosesInteraction___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_1, put = setStaticF___9__17_1)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* __9__17_1;

  /// @brief Field <>9__17_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_2, put = setStaticF___9__17_2)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* __9__17_2;

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c* New_ctor();

  /// @brief Method <AddAdditiveActions>b__17_0, addr 0x67c84a4, size 0xb8, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__17_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig* d);

  /// @brief Method <AddAdditiveActions>b__17_1, addr 0x67c855c, size 0x14, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__17_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* a);

  /// @brief Method <AddAdditiveActions>b__17_2, addr 0x67c8570, size 0x1c, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__17_2(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* m);

  /// @brief Method .ctor, addr 0x67c84a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* getStaticF___9__17_0();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* getStaticF___9__17_1();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* getStaticF___9__17_2();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* value);

  static inline void setStaticF___9__17_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* value);

  static inline void setStaticF___9__17_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandCommonPosesInteraction___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandCommonPosesInteraction___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandCommonPosesInteraction___c(HandCommonPosesInteraction___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandCommonPosesInteraction___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandCommonPosesInteraction___c(HandCommonPosesInteraction___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18523 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HandCommonPosesInteraction/<>c__DisplayClass17_0
class CORDL_TYPE HandCommonPosesInteraction___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__3, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__3,
                      put = __cordl_internal_set___9__3)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* __9__3;

  /// @brief Field additiveAction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_additiveAction, put = __cordl_internal_set_additiveAction)) ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* additiveAction;

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c__DisplayClass17_0* New_ctor();

  /// @brief Method <AddAdditiveActions>b__3, addr 0x67c858c, size 0xc8, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__3(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* b);

  constexpr ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* const& __cordl_internal_get___9__3() const;

  constexpr ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>*& __cordl_internal_get___9__3();

  constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* const& __cordl_internal_get_additiveAction() const;

  constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*& __cordl_internal_get_additiveAction();

  constexpr void __cordl_internal_set___9__3(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* value);

  constexpr void __cordl_internal_set_additiveAction(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* value);

  /// @brief Method .ctor, addr 0x67c8290, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandCommonPosesInteraction___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandCommonPosesInteraction___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandCommonPosesInteraction___c__DisplayClass17_0(HandCommonPosesInteraction___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandCommonPosesInteraction___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandCommonPosesInteraction___c__DisplayClass17_0(HandCommonPosesInteraction___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18524 };

  /// @brief Field additiveAction, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* ___additiveAction;

  /// @brief Field <>9__3, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* _____9__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c__DisplayClass17_0, ___additiveAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c__DisplayClass17_0, _____9__3) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c__DisplayClass17_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HandCommonPosesInteraction
class CORDL_TYPE HandCommonPosesInteraction : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using HandInteractionPoses = ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses;

  using __c = ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c;

  using __c__DisplayClass17_0 = ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c__DisplayClass17_0;

  __declspec(property(get = get_IsAdditive)) bool IsAdditive;

  /// @brief Method AddAdditiveActions, addr 0x67c797c, size 0x914, virtual true, abstract: false, final false
  inline void AddAdditiveActions(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps,
                                 ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* additiveMap);

  /// @brief Method GetDeviceLayoutName, addr 0x67c6f18, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  /// @brief Method GetInteractionProfileType, addr 0x67c6e64, size 0xb4, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType GetInteractionProfileType();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x67c6c40, size 0x6c, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x67c6f5c, size 0xa20, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x67c6cac, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x67c6df4, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x67c8294, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsAdditive, addr 0x67c6c38, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsAdditive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandCommonPosesInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandCommonPosesInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandCommonPosesInteraction(HandCommonPosesInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandCommonPosesInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandCommonPosesInteraction(HandCommonPosesInteraction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18525 };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field extensionString offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionString{ u"XR_EXT_hand_interaction" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.handinteractionposes" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Hand Interaction Poses OpenXR" };

  /// @brief Field pinch offset 0xffffffff size 0x8
  static constexpr ::ConstString pinch{ u"/input/pinch_ext/pose" };

  /// @brief Field poke offset 0xffffffff size 0x8
  static constexpr ::ConstString poke{ u"/input/poke_ext/pose" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/unity/hand_interaction_poses" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction*, "UnityEngine.XR.OpenXR.Features.Interactions", "HandCommonPosesInteraction");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction_HandInteractionPoses*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "HandCommonPosesInteraction/HandInteractionPoses");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c*, "UnityEngine.XR.OpenXR.Features.Interactions", "HandCommonPosesInteraction/<>c");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HandCommonPosesInteraction___c__DisplayClass17_0*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "HandCommonPosesInteraction/<>c__DisplayClass17_0");
