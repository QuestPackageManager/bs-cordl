#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/AndroidMouseInteractionProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidMouseInteractionProfile)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
struct AndroidMouseInteractionProfile_AndroidMouseInteractionState;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class AndroidMouseInteractionProfile_AndroidMouseInteraction;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRInteractionFeature_InteractionProfileType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class AndroidMouseInteractionProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class AndroidMouseInteractionProfile_AndroidMouseInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
struct AndroidMouseInteractionProfile_AndroidMouseInteractionState;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "AndroidMouseInteractionProfile");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction*, "UnityEngine.XR.OpenXR.Features.Interactions",
                    "AndroidMouseInteractionProfile/AndroidMouseInteraction");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState, "UnityEngine.XR.OpenXR.Features.Interactions",
                    "AndroidMouseInteractionProfile/AndroidMouseInteractionState");
// Dependencies UnityEngine.Vector2
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.AndroidMouseInteractionProfile/AndroidMouseInteractionState
#pragma pack(push, 0)
struct CORDL_TYPE AndroidMouseInteractionProfile_AndroidMouseInteractionState {
public:
  // Declarations
  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method get_format, addr 0x6e4d4c8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidMouseInteractionProfile_AndroidMouseInteractionState();

  // Ctor Parameters [CppParam { name: "click", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "secondaryClick", ty: "bool", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "tertiaryClick", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None,
  // comment: None }]
  constexpr AndroidMouseInteractionProfile_AndroidMouseInteractionState(bool click, bool secondaryClick, bool tertiaryClick, ::UnityEngine::Vector2 scroll) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17622 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field k_SizeInBytes offset 0xffffffff size 0x4
  static constexpr int32_t k_SizeInBytes{ static_cast<int32_t>(0x47) };

  /// [InputControl(layout = "Button", usage = "Click")]
  /// @brief Field click, offset: 0x0, size: 0x1, def value: None
  bool click;

  /// [InputControl(layout = "Button", usage = "SecondaryClick")]
  /// @brief Field secondaryClick, offset: 0x1, size: 0x1, def value: None
  bool secondaryClick;

  /// [InputControl(layout = "Button", usage = "TertiaryClick")]
  /// @brief Field tertiaryClick, offset: 0x2, size: 0x1, def value: None
  bool tertiaryClick;

  /// [InputControl(layout = "Vector2", usage = "Scroll")]
  /// @brief Field scroll, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Vector2 scroll;

  /// @brief Size padding 0x48 - 0xc = 0x3c, packed as 0x3c
  uint8_t _cordl_size_padding[0x3c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState, click) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState, secondaryClick) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState, tertiaryClick) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState, scroll) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState) == 0x48, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// [Preserve]
// [InputControlLayout(displayName = "Android Mouse Interaction (OpenXR)", stateType = typeof(UnityEngine.XR.OpenXR.Features.Interactions.AndroidMouseInteractionProfile::AndroidMouseInteractionState),
// isGenericTypeOfDevice = true)] Dependencies UnityEngine.InputSystem.InputDevice
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.AndroidMouseInteractionProfile/AndroidMouseInteraction
class CORDL_TYPE AndroidMouseInteractionProfile_AndroidMouseInteraction : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Field <click>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__click_k__BackingField,
                      put = __cordl_internal_set__click_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _click_k__BackingField;

  /// @brief Field <scroll>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__scroll_k__BackingField,
                      put = __cordl_internal_set__scroll_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _scroll_k__BackingField;

  /// @brief Field <secondaryClick>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__secondaryClick_k__BackingField,
                      put = __cordl_internal_set__secondaryClick_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryClick_k__BackingField;

  /// @brief Field <tertiaryClick>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__tertiaryClick_k__BackingField,
                      put = __cordl_internal_set__tertiaryClick_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _tertiaryClick_k__BackingField;

  /// @brief [InputControl(layout = "Button", usage = "Click")]
  __declspec(property(get = get_click, put = set_click)) ::UnityEngine::InputSystem::Controls::ButtonControl* click;

  __declspec(property(get = get_scroll, put = set_scroll)) ::UnityEngine::InputSystem::Controls::Vector2Control* scroll;

  __declspec(property(get = get_secondaryClick, put = set_secondaryClick)) ::UnityEngine::InputSystem::Controls::ButtonControl* secondaryClick;

  __declspec(property(get = get_tertiaryClick, put = set_tertiaryClick)) ::UnityEngine::InputSystem::Controls::ButtonControl* tertiaryClick;

  /// @brief Method FinishSetup, addr 0x6e4d514, size 0x10c, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__click_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__click_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__scroll_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__scroll_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondaryClick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryClick_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__tertiaryClick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__tertiaryClick_k__BackingField();

  constexpr void __cordl_internal_set__click_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__scroll_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__secondaryClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__tertiaryClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x6e4d620, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_click, addr 0x6e4d4d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_click();

  /// [CompilerGenerated]
  /// @brief Method get_scroll, addr 0x6e4d504, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_scroll();

  /// [CompilerGenerated]
  /// @brief Method get_secondaryClick, addr 0x6e4d4e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryClick();

  /// [CompilerGenerated]
  /// @brief Method get_tertiaryClick, addr 0x6e4d4f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_tertiaryClick();

  /// [CompilerGenerated]
  /// @brief Method set_click, addr 0x6e4d4dc, size 0x8, virtual false, abstract: false, final false
  inline void set_click(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// [CompilerGenerated]
  /// @brief Method set_scroll, addr 0x6e4d50c, size 0x8, virtual false, abstract: false, final false
  inline void set_scroll(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// [CompilerGenerated]
  /// @brief Method set_secondaryClick, addr 0x6e4d4ec, size 0x8, virtual false, abstract: false, final false
  inline void set_secondaryClick(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// [CompilerGenerated]
  /// @brief Method set_tertiaryClick, addr 0x6e4d4fc, size 0x8, virtual false, abstract: false, final false
  inline void set_tertiaryClick(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidMouseInteractionProfile_AndroidMouseInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidMouseInteractionProfile_AndroidMouseInteraction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidMouseInteractionProfile_AndroidMouseInteraction(AndroidMouseInteractionProfile_AndroidMouseInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidMouseInteractionProfile_AndroidMouseInteraction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidMouseInteractionProfile_AndroidMouseInteraction(AndroidMouseInteractionProfile_AndroidMouseInteraction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17623 };

  /// [CompilerGenerated]
  /// @brief Field <click>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____click_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <secondaryClick>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryClick_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <tertiaryClick>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____tertiaryClick_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <scroll>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____scroll_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction, ____click_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction, ____secondaryClick_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction, ____tertiaryClick_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction, ____scroll_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction) == 0x1a8, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.AndroidMouseInteractionProfile
class CORDL_TYPE AndroidMouseInteractionProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using AndroidMouseInteraction = ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteraction;

  using AndroidMouseInteractionState = ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile_AndroidMouseInteractionState;

  /// @brief Method GetDeviceLayoutName, addr 0x6e4cae0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  /// @brief Method GetInteractionProfileType, addr 0x6e4cb24, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType GetInteractionProfileType();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x6e4c8bc, size 0x6c, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x6e4cb2c, size 0x940, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x6e4c928, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x6e4ca70, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x6e4d46c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidMouseInteractionProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidMouseInteractionProfile", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidMouseInteractionProfile(AndroidMouseInteractionProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidMouseInteractionProfile", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidMouseInteractionProfile(AndroidMouseInteractionProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17624 };

  /// @brief Field aimPath offset 0xffffffff size 0x8
  static constexpr ::ConstString aimPath{ u"/input/aim/pose" };

  /// @brief Field clickPath offset 0xffffffff size 0x8
  static constexpr ::ConstString clickPath{ u"/input/select/click" };

  /// @brief Field extensionString offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionString{ u"XR_ANDROID_mouse_interaction" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.androidmouse" };

  /// @brief Field k_DeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DeviceLocalizedName{ u"Android Mouse Interaction" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/android/mouse_interaction_android" };

  /// @brief Field scrollPath offset 0xffffffff size 0x8
  static constexpr ::ConstString scrollPath{ u"/input/scroll_android/value" };

  /// @brief Field secondaryClickPath offset 0xffffffff size 0x8
  static constexpr ::ConstString secondaryClickPath{ u"/input/secondary_android/click" };

  /// @brief Field tertiaryClickPath offset 0xffffffff size 0x8
  static constexpr ::ConstString tertiaryClickPath{ u"/input/tertiary_android/click" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Interactions::AndroidMouseInteractionProfile) == 0x70, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
