#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/DPadInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DPadInteraction)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class DPadInteraction_DPad;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class DPadInteraction___c;
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
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class DPadInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class DPadInteraction_DPad;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class DPadInteraction___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c);
// Dependencies UnityEngine.InputSystem.XR.XRController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.DPadInteraction/DPad
class CORDL_TYPE DPadInteraction_DPad : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <thumbstickDpadDown>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickDpadDown_k__BackingField,
                      put = __cordl_internal_set__thumbstickDpadDown_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickDpadDown_k__BackingField;

  /// @brief Field <thumbstickDpadLeft>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickDpadLeft_k__BackingField,
                      put = __cordl_internal_set__thumbstickDpadLeft_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickDpadLeft_k__BackingField;

  /// @brief Field <thumbstickDpadRight>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickDpadRight_k__BackingField,
                      put = __cordl_internal_set__thumbstickDpadRight_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickDpadRight_k__BackingField;

  /// @brief Field <thumbstickDpadUp>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickDpadUp_k__BackingField,
                      put = __cordl_internal_set__thumbstickDpadUp_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickDpadUp_k__BackingField;

  /// @brief Field <trackpadDpadCenter>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadDpadCenter_k__BackingField,
                      put = __cordl_internal_set__trackpadDpadCenter_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadDpadCenter_k__BackingField;

  /// @brief Field <trackpadDpadDown>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadDpadDown_k__BackingField,
                      put = __cordl_internal_set__trackpadDpadDown_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadDpadDown_k__BackingField;

  /// @brief Field <trackpadDpadLeft>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadDpadLeft_k__BackingField,
                      put = __cordl_internal_set__trackpadDpadLeft_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadDpadLeft_k__BackingField;

  /// @brief Field <trackpadDpadRight>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadDpadRight_k__BackingField,
                      put = __cordl_internal_set__trackpadDpadRight_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadDpadRight_k__BackingField;

  /// @brief Field <trackpadDpadUp>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadDpadUp_k__BackingField,
                      put = __cordl_internal_set__trackpadDpadUp_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadDpadUp_k__BackingField;

  __declspec(property(get = get_thumbstickDpadDown, put = set_thumbstickDpadDown)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickDpadDown;

  __declspec(property(get = get_thumbstickDpadLeft, put = set_thumbstickDpadLeft)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickDpadLeft;

  __declspec(property(get = get_thumbstickDpadRight, put = set_thumbstickDpadRight)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickDpadRight;

  __declspec(property(get = get_thumbstickDpadUp, put = set_thumbstickDpadUp)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickDpadUp;

  __declspec(property(get = get_trackpadDpadCenter, put = set_trackpadDpadCenter)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadDpadCenter;

  __declspec(property(get = get_trackpadDpadDown, put = set_trackpadDpadDown)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadDpadDown;

  __declspec(property(get = get_trackpadDpadLeft, put = set_trackpadDpadLeft)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadDpadLeft;

  __declspec(property(get = get_trackpadDpadRight, put = set_trackpadDpadRight)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadDpadRight;

  __declspec(property(get = get_trackpadDpadUp, put = set_trackpadDpadUp)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadDpadUp;

  /// @brief Method FinishSetup, addr 0x67c5dc8, size 0x1dc, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickDpadDown_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickDpadDown_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickDpadLeft_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickDpadLeft_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickDpadRight_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickDpadRight_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickDpadUp_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickDpadUp_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadDpadCenter_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadDpadCenter_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadDpadDown_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadDpadDown_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadDpadLeft_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadDpadLeft_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadDpadRight_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadDpadRight_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadDpadUp_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadDpadUp_k__BackingField();

  constexpr void __cordl_internal_set__thumbstickDpadDown_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbstickDpadLeft_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbstickDpadRight_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbstickDpadUp_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadDpadCenter_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadDpadDown_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadDpadLeft_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadDpadRight_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadDpadUp_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x67c5fa4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_thumbstickDpadDown, addr 0x67c5d48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickDpadDown();

  /// @brief Method get_thumbstickDpadLeft, addr 0x67c5d58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickDpadLeft();

  /// @brief Method get_thumbstickDpadRight, addr 0x67c5d68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickDpadRight();

  /// @brief Method get_thumbstickDpadUp, addr 0x67c5d38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickDpadUp();

  /// @brief Method get_trackpadDpadCenter, addr 0x67c5db8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadDpadCenter();

  /// @brief Method get_trackpadDpadDown, addr 0x67c5d88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadDpadDown();

  /// @brief Method get_trackpadDpadLeft, addr 0x67c5d98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadDpadLeft();

  /// @brief Method get_trackpadDpadRight, addr 0x67c5da8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadDpadRight();

  /// @brief Method get_trackpadDpadUp, addr 0x67c5d78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadDpadUp();

  /// @brief Method set_thumbstickDpadDown, addr 0x67c5d50, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickDpadDown(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thumbstickDpadLeft, addr 0x67c5d60, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickDpadLeft(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thumbstickDpadRight, addr 0x67c5d70, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickDpadRight(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thumbstickDpadUp, addr 0x67c5d40, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickDpadUp(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackpadDpadCenter, addr 0x67c5dc0, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadDpadCenter(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackpadDpadDown, addr 0x67c5d90, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadDpadDown(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackpadDpadLeft, addr 0x67c5da0, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadDpadLeft(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackpadDpadRight, addr 0x67c5db0, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadDpadRight(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackpadDpadUp, addr 0x67c5d80, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadDpadUp(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DPadInteraction_DPad();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DPadInteraction_DPad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DPadInteraction_DPad(DPadInteraction_DPad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DPadInteraction_DPad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DPadInteraction_DPad(DPadInteraction_DPad const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18516 };

  /// @brief Field <thumbstickDpadUp>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickDpadUp_k__BackingField;

  /// @brief Field <thumbstickDpadDown>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickDpadDown_k__BackingField;

  /// @brief Field <thumbstickDpadLeft>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickDpadLeft_k__BackingField;

  /// @brief Field <thumbstickDpadRight>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickDpadRight_k__BackingField;

  /// @brief Field <trackpadDpadUp>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadDpadUp_k__BackingField;

  /// @brief Field <trackpadDpadDown>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadDpadDown_k__BackingField;

  /// @brief Field <trackpadDpadLeft>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadDpadLeft_k__BackingField;

  /// @brief Field <trackpadDpadRight>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadDpadRight_k__BackingField;

  /// @brief Field <trackpadDpadCenter>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadDpadCenter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____thumbstickDpadUp_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____thumbstickDpadDown_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____thumbstickDpadLeft_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____thumbstickDpadRight_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____trackpadDpadUp_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____trackpadDpadDown_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____trackpadDpadLeft_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____trackpadDpadRight_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, ____trackpadDpadCenter_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad, 0x1f0>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.DPadInteraction/<>c
class CORDL_TYPE DPadInteraction___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c* __9;

  /// @brief Field <>9__31_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_0, put = setStaticF___9__31_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* __9__31_0;

  /// @brief Field <>9__31_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_1, put = setStaticF___9__31_1)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* __9__31_1;

  /// @brief Field <>9__31_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_2, put = setStaticF___9__31_2)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* __9__31_2;

  /// @brief Field <>9__31_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_3, put = setStaticF___9__31_3)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* __9__31_3;

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c* New_ctor();

  /// @brief Method <AddAdditiveActions>b__31_0, addr 0x67c601c, size 0xb8, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__31_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig* d);

  /// @brief Method <AddAdditiveActions>b__31_1, addr 0x67c60d4, size 0x70, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__31_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* b);

  /// @brief Method <AddAdditiveActions>b__31_2, addr 0x67c6144, size 0x70, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__31_2(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* b);

  /// @brief Method <AddAdditiveActions>b__31_3, addr 0x67c61b4, size 0x14, virtual false, abstract: false, final false
  inline bool _AddAdditiveActions_b__31_3(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* a);

  /// @brief Method .ctor, addr 0x67c6018, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* getStaticF___9__31_0();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* getStaticF___9__31_1();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* getStaticF___9__31_2();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* getStaticF___9__31_3();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c* value);

  static inline void setStaticF___9__31_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, bool>* value);

  static inline void setStaticF___9__31_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* value);

  static inline void setStaticF___9__31_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* value);

  static inline void setStaticF___9__31_3(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DPadInteraction___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DPadInteraction___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DPadInteraction___c(DPadInteraction___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DPadInteraction___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DPadInteraction___c(DPadInteraction___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.DPadInteraction
class CORDL_TYPE DPadInteraction : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using DPad = ::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad;

  using __c = ::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c;

  __declspec(property(get = get_IsAdditive)) bool IsAdditive;

  /// @brief Field centerRegionLeft, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_centerRegionLeft, put = __cordl_internal_set_centerRegionLeft)) float_t centerRegionLeft;

  /// @brief Field centerRegionRight, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_centerRegionRight, put = __cordl_internal_set_centerRegionRight)) float_t centerRegionRight;

  /// @brief Field extensionStrings, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_extensionStrings, put = __cordl_internal_set_extensionStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> extensionStrings;

  /// @brief Field forceThresholdLeft, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_forceThresholdLeft, put = __cordl_internal_set_forceThresholdLeft)) float_t forceThresholdLeft;

  /// @brief Field forceThresholdReleaseLeft, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_forceThresholdReleaseLeft, put = __cordl_internal_set_forceThresholdReleaseLeft)) float_t forceThresholdReleaseLeft;

  /// @brief Field forceThresholdReleaseRight, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_forceThresholdReleaseRight, put = __cordl_internal_set_forceThresholdReleaseRight)) float_t forceThresholdReleaseRight;

  /// @brief Field forceThresholdRight, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_forceThresholdRight, put = __cordl_internal_set_forceThresholdRight)) float_t forceThresholdRight;

  /// @brief Field isStickyLeft, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isStickyLeft, put = __cordl_internal_set_isStickyLeft)) bool isStickyLeft;

  /// @brief Field isStickyRight, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_isStickyRight, put = __cordl_internal_set_isStickyRight)) bool isStickyRight;

  /// @brief Field wedgeAngleLeft, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_wedgeAngleLeft, put = __cordl_internal_set_wedgeAngleLeft)) float_t wedgeAngleLeft;

  /// @brief Field wedgeAngleRight, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_wedgeAngleRight, put = __cordl_internal_set_wedgeAngleRight)) float_t wedgeAngleRight;

  /// @brief Method AddAdditiveActions, addr 0x67c52a4, size 0x9a0, virtual true, abstract: false, final false
  inline void AddAdditiveActions(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps,
                                 ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* additiveMap);

  /// @brief Method GetDeviceLayoutName, addr 0x67c4334, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x67c40f0, size 0x8c, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x67c4378, size 0xf2c, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x67c417c, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x67c42c4, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  constexpr float_t const& __cordl_internal_get_centerRegionLeft() const;

  constexpr float_t& __cordl_internal_get_centerRegionLeft();

  constexpr float_t const& __cordl_internal_get_centerRegionRight() const;

  constexpr float_t& __cordl_internal_get_centerRegionRight();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_extensionStrings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_extensionStrings();

  constexpr float_t const& __cordl_internal_get_forceThresholdLeft() const;

  constexpr float_t& __cordl_internal_get_forceThresholdLeft();

  constexpr float_t const& __cordl_internal_get_forceThresholdReleaseLeft() const;

  constexpr float_t& __cordl_internal_get_forceThresholdReleaseLeft();

  constexpr float_t const& __cordl_internal_get_forceThresholdReleaseRight() const;

  constexpr float_t& __cordl_internal_get_forceThresholdReleaseRight();

  constexpr float_t const& __cordl_internal_get_forceThresholdRight() const;

  constexpr float_t& __cordl_internal_get_forceThresholdRight();

  constexpr bool const& __cordl_internal_get_isStickyLeft() const;

  constexpr bool& __cordl_internal_get_isStickyLeft();

  constexpr bool const& __cordl_internal_get_isStickyRight() const;

  constexpr bool& __cordl_internal_get_isStickyRight();

  constexpr float_t const& __cordl_internal_get_wedgeAngleLeft() const;

  constexpr float_t& __cordl_internal_get_wedgeAngleLeft();

  constexpr float_t const& __cordl_internal_get_wedgeAngleRight() const;

  constexpr float_t& __cordl_internal_get_wedgeAngleRight();

  constexpr void __cordl_internal_set_centerRegionLeft(float_t value);

  constexpr void __cordl_internal_set_centerRegionRight(float_t value);

  constexpr void __cordl_internal_set_extensionStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_forceThresholdLeft(float_t value);

  constexpr void __cordl_internal_set_forceThresholdReleaseLeft(float_t value);

  constexpr void __cordl_internal_set_forceThresholdReleaseRight(float_t value);

  constexpr void __cordl_internal_set_forceThresholdRight(float_t value);

  constexpr void __cordl_internal_set_isStickyLeft(bool value);

  constexpr void __cordl_internal_set_isStickyRight(bool value);

  constexpr void __cordl_internal_set_wedgeAngleLeft(float_t value);

  constexpr void __cordl_internal_set_wedgeAngleRight(float_t value);

  /// @brief Method .ctor, addr 0x67c5c44, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsAdditive, addr 0x67c40e8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsAdditive();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DPadInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DPadInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DPadInteraction(DPadInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DPadInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DPadInteraction(DPadInteraction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18518 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.dpadinteraction" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"DPad Interaction OpenXR" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/unity/dpad" };

  /// @brief Field thumbstickDpadDown offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickDpadDown{ u"/input/thumbstick/dpad_down" };

  /// @brief Field thumbstickDpadLeft offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickDpadLeft{ u"/input/thumbstick/dpad_left" };

  /// @brief Field thumbstickDpadRight offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickDpadRight{ u"/input/thumbstick/dpad_right" };

  /// @brief Field thumbstickDpadUp offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickDpadUp{ u"/input/thumbstick/dpad_up" };

  /// @brief Field trackpadDpadCenter offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadDpadCenter{ u"/input/trackpad/dpad_center" };

  /// @brief Field trackpadDpadDown offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadDpadDown{ u"/input/trackpad/dpad_down" };

  /// @brief Field trackpadDpadLeft offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadDpadLeft{ u"/input/trackpad/dpad_left" };

  /// @brief Field trackpadDpadRight offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadDpadRight{ u"/input/trackpad/dpad_right" };

  /// @brief Field trackpadDpadUp offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadDpadUp{ u"/input/trackpad/dpad_up" };

  /// @brief Field forceThresholdLeft, offset: 0x50, size: 0x4, def value: None
  float_t ___forceThresholdLeft;

  /// @brief Field forceThresholdReleaseLeft, offset: 0x54, size: 0x4, def value: None
  float_t ___forceThresholdReleaseLeft;

  /// @brief Field centerRegionLeft, offset: 0x58, size: 0x4, def value: None
  float_t ___centerRegionLeft;

  /// @brief Field wedgeAngleLeft, offset: 0x5c, size: 0x4, def value: None
  float_t ___wedgeAngleLeft;

  /// @brief Field isStickyLeft, offset: 0x60, size: 0x1, def value: None
  bool ___isStickyLeft;

  /// @brief Field forceThresholdRight, offset: 0x64, size: 0x4, def value: None
  float_t ___forceThresholdRight;

  /// @brief Field forceThresholdReleaseRight, offset: 0x68, size: 0x4, def value: None
  float_t ___forceThresholdReleaseRight;

  /// @brief Field centerRegionRight, offset: 0x6c, size: 0x4, def value: None
  float_t ___centerRegionRight;

  /// @brief Field wedgeAngleRight, offset: 0x70, size: 0x4, def value: None
  float_t ___wedgeAngleRight;

  /// @brief Field isStickyRight, offset: 0x74, size: 0x1, def value: None
  bool ___isStickyRight;

  /// @brief Field extensionStrings, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___extensionStrings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___forceThresholdLeft) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___forceThresholdReleaseLeft) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___centerRegionLeft) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___wedgeAngleLeft) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___isStickyLeft) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___forceThresholdRight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___forceThresholdReleaseRight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___centerRegionRight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___wedgeAngleRight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___isStickyRight) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, ___extensionStrings) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction*, "UnityEngine.XR.OpenXR.Features.Interactions", "DPadInteraction");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction_DPad*, "UnityEngine.XR.OpenXR.Features.Interactions", "DPadInteraction/DPad");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::DPadInteraction___c*, "UnityEngine.XR.OpenXR.Features.Interactions", "DPadInteraction/<>c");
