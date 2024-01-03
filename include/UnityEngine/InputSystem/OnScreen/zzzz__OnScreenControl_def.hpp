#pragma once
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
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::OnScreen {
struct __OnScreenControl__OnScreenDeviceInfo;
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
struct __OnScreenControl__OnScreenDeviceInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::OnScreen::OnScreenControl);
MARK_VAL_T(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo);
// Type: ::OnScreenDeviceInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6536)), TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6387)) CS Name: ::OnScreenControl::OnScreenDeviceInfo
struct CORDL_TYPE __OnScreenControl__OnScreenDeviceInfo {
public:
  // Declarations
  /// @brief Method AddControl, addr 0x2ad9570, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control);

  /// @brief Method RemoveControl, addr 0x2ad98e8, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control);

  /// @brief Method Destroy, addr 0x2ad94bc, size 0xb4, virtual false, abstract: false, final false
  inline void Destroy();

  // Ctor Parameters [CppParam { name: "eventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None },
  // CppParam { name: "firstControl", ty: "::UnityEngine::InputSystem::OnScreen::OnScreenControl*", modifiers: "", def_value: None }]
  constexpr __OnScreenControl__OnScreenDeviceInfo(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::Unity::Collections::NativeArray_1<uint8_t> buffer,
                                                  ::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::OnScreen::OnScreenControl* firstControl) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OnScreenControl__OnScreenDeviceInfo();

  /// @brief Field eventPtr, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr;

  /// @brief Field buffer, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> buffer;

  /// @brief Field device, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* device;

  /// @brief Field firstControl, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::OnScreen::OnScreenControl* firstControl;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, eventPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, buffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, device) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, firstControl) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
// Type: UnityEngine.InputSystem.OnScreen::OnScreenControl
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6536)), TypeDefinitionIndex(TypeDefinitionIndex(6387)), TypeDefinitionIndex(TypeDefinitionIndex(10225)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3872 }), TypeDefinitionIndex(TypeDefinitionIndex(6669))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6388)) CS
// Name: ::UnityEngine.InputSystem.OnScreen::OnScreenControl*
class CORDL_TYPE OnScreenControl : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnScreenDeviceInfo = ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo;

  /// @brief Field m_Control, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Control, put = __set_m_Control))::UnityEngine::InputSystem::InputControl* m_Control;

  /// @brief Field m_NextControlOnDevice, offset 0x20, size 0x8
  __declspec(property(get = __get_m_NextControlOnDevice, put = __set_m_NextControlOnDevice))::UnityEngine::InputSystem::OnScreen::OnScreenControl* m_NextControlOnDevice;

  /// @brief Field m_InputEventPtr, offset 0x28, size 0x8
  __declspec(property(get = __get_m_InputEventPtr, put = __set_m_InputEventPtr))::UnityEngine::InputSystem::LowLevel::InputEventPtr m_InputEventPtr;

  /// @brief Field s_OnScreenDevices, offset 0xffffffff, size 0x38
  static __declspec(
      property(get = getStaticF_s_OnScreenDevices,
               put = setStaticF_s_OnScreenDevices))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> s_OnScreenDevices;

  __declspec(property(get = get_controlPath, put = set_controlPath))::StringW controlPath;

  __declspec(property(get = get_control))::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_controlPathInternal, put = set_controlPathInternal))::StringW controlPathInternal;

  constexpr ::UnityEngine::InputSystem::InputControl*& __get_m_Control();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const& __get_m_Control() const;

  constexpr void __set_m_Control(::UnityEngine::InputSystem::InputControl* value);

  constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenControl*& __get_m_NextControlOnDevice();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::OnScreen::OnScreenControl*> const& __get_m_NextControlOnDevice() const;

  constexpr void __set_m_NextControlOnDevice(::UnityEngine::InputSystem::OnScreen::OnScreenControl* value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __get_m_InputEventPtr();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __get_m_InputEventPtr() const;

  constexpr void __set_m_InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr value);

  static inline void setStaticF_s_OnScreenDevices(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> value);

  static inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> getStaticF_s_OnScreenDevices();

  /// @brief Method get_controlPath, addr 0x2ad8b80, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_controlPath();

  /// @brief Method set_controlPath, addr 0x2ad8b8c, size 0x38, virtual false, abstract: false, final false
  inline void set_controlPath(::StringW value);

  /// @brief Method get_control, addr 0x2ad94b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_controlPathInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_controlPathInternal();

  /// @brief Method set_controlPathInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_controlPathInternal(::StringW value);

  /// @brief Method SetupInputControl, addr 0x2ad8bc4, size 0x8f0, virtual false, abstract: false, final false
  inline void SetupInputControl();

  /// @brief Method SendValueToControl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline void SendValueToControl(TValue value);

  /// @brief Method SentDefaultValueToControl, addr 0x2ad959c, size 0x134, virtual false, abstract: false, final false
  inline void SentDefaultValueToControl();

  /// @brief Method OnEnable, addr 0x2ad96d0, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2ad96d4, size 0x214, virtual true, abstract: false, final false
  inline void OnDisable();

  static inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl* New_ctor();

  /// @brief Method .ctor, addr 0x2ad8b78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnScreenControl(OnScreenControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnScreenControl(OnScreenControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnScreenControl();

public:
  /// @brief Field m_Control, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* ___m_Control;

  /// @brief Field m_NextControlOnDevice, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::OnScreen::OnScreenControl* ___m_NextControlOnDevice;

  /// @brief Field m_InputEventPtr, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventPtr ___m_InputEventPtr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::OnScreenControl, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_Control) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_NextControlOnDevice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::OnScreen::OnScreenControl, ___m_InputEventPtr) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenControl*, "UnityEngine.InputSystem.OnScreen", "OnScreenControl");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, "UnityEngine.InputSystem.OnScreen", "OnScreenControl/OnScreenDeviceInfo");
