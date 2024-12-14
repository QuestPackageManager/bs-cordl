#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnScreenControl)
namespace UnityEngine::InputSystem::OnScreen {
struct OnScreenControl_OnScreenDeviceInfo;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenControl;
}
namespace UnityEngine::InputSystem::OnScreen {
struct OnScreenControl_OnScreenDeviceInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::OnScreen::OnScreenControl);
MARK_VAL_T(::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: true
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo
struct CORDL_TYPE OnScreenControl_OnScreenDeviceInfo {
public:
  // Declarations
  /// @brief Method AddControl, addr 0x45f6764, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control);

  /// @brief Method Destroy, addr 0x45f66c0, size 0xa4, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method RemoveControl, addr 0x45f6ac4, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OnScreenControl_OnScreenDeviceInfo();

  // Ctor Parameters [CppParam { name: "eventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None },
  // CppParam { name: "firstControl", ty: "::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>", modifiers: "", def_value: None }]
  constexpr OnScreenControl_OnScreenDeviceInfo(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::Unity::Collections::NativeArray_1<uint8_t> buffer,
                                               ::UnityEngine::InputSystem::InputDevice* device, ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> firstControl) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6791 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field eventPtr, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr;

  /// @brief Field buffer, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> buffer;

  /// @brief Field device, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* device;

  /// @brief Field firstControl, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> firstControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo, eventPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo, buffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo, device) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo, firstControl) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
// Dependencies UnityEngine.InputSystem.LowLevel.InputEventPtr, UnityEngine.InputSystem.OnScreen.OnScreenControl::OnScreenDeviceInfo, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>,
// UnityEngine.MonoBehaviour
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// CS Name: UnityEngine.InputSystem.OnScreen.OnScreenControl
class CORDL_TYPE OnScreenControl : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnScreenDeviceInfo = ::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo;

  __declspec(property(get = get_control)) ::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_controlPath, put = set_controlPath)) ::StringW controlPath;

  __declspec(property(get = get_controlPathInternal, put = set_controlPathInternal)) ::StringW controlPathInternal;

  /// @brief Field m_Control, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Control, put = __cordl_internal_set_m_Control)) ::UnityEngine::InputSystem::InputControl* m_Control;

  /// @brief Field m_InputEventPtr, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputEventPtr, put = __cordl_internal_set_m_InputEventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr m_InputEventPtr;

  /// @brief Field m_NextControlOnDevice, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NextControlOnDevice, put = __cordl_internal_set_m_NextControlOnDevice)) ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>
      m_NextControlOnDevice;

  /// @brief Field s_OnScreenDevices, offset 0xffffffff, size 0x38
  __declspec(property(get = getStaticF_s_OnScreenDevices,
                      put = setStaticF_s_OnScreenDevices)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo>
      s_OnScreenDevices;

  static inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl* New_ctor();

  /// @brief Method OnDisable, addr 0x45f68c8, size 0x1fc, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x45f68c4, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SendValueToControl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline void SendValueToControl(TValue value);

  /// @brief Method SentDefaultValueToControl, addr 0x45f6790, size 0x134, virtual false, abstract: false, final false
  inline void SentDefaultValueToControl();

  /// @brief Method SetupInputControl, addr 0x45f5fa0, size 0x718, virtual false, abstract: false, final false
  inline void SetupInputControl();

  constexpr ::UnityEngine::InputSystem::InputControl* const& __cordl_internal_get_m_Control() const;

  constexpr ::UnityEngine::InputSystem::InputControl*& __cordl_internal_get_m_Control();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get_m_InputEventPtr() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get_m_InputEventPtr();

  constexpr ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> const& __cordl_internal_get_m_NextControlOnDevice() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>& __cordl_internal_get_m_NextControlOnDevice();

  constexpr void __cordl_internal_set_m_Control(::UnityEngine::InputSystem::InputControl* value);

  constexpr void __cordl_internal_set_m_InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr value);

  constexpr void __cordl_internal_set_m_NextControlOnDevice(::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> value);

  /// @brief Method .ctor, addr 0x45f5f54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo> getStaticF_s_OnScreenDevices();

  /// @brief Method get_control, addr 0x45f66b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_controlPath, addr 0x45f5f5c, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_controlPath();

  /// @brief Method get_controlPathInternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_controlPathInternal();

  static inline void setStaticF_s_OnScreenDevices(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo> value);

  /// @brief Method set_controlPath, addr 0x45f5f68, size 0x38, virtual false, abstract: false, final false
  inline void set_controlPath(::StringW value);

  /// @brief Method set_controlPathInternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_controlPathInternal(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnScreenControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnScreenControl(OnScreenControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnScreenControl(OnScreenControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6792 };

  /// @brief Field m_Control, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* ___m_Control;

  /// @brief Field m_NextControlOnDevice, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl> ___m_NextControlOnDevice;

  /// @brief Field m_InputEventPtr, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventPtr ___m_InputEventPtr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_Control) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_NextControlOnDevice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_InputEventPtr) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::OnScreenControl, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenControl*, "UnityEngine.InputSystem.OnScreen", "OnScreenControl");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenControl_OnScreenDeviceInfo, "UnityEngine.InputSystem.OnScreen", "OnScreenControl/OnScreenDeviceInfo");
