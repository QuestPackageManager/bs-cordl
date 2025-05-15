#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevices)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR {
struct ConnectionChangeType;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace UnityEngine::XR {
class InputDevices;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::InputDevices);
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.InputDevices
class CORDL_TYPE InputDevices : public ::System::Object {
public:
  // Declarations
  /// @brief Field deviceConfigChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceConfigChanged, put = setStaticF_deviceConfigChanged)) ::System::Action_1<::UnityEngine::XR::InputDevice>* deviceConfigChanged;

  /// @brief Field deviceConnected, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceConnected, put = setStaticF_deviceConnected)) ::System::Action_1<::UnityEngine::XR::InputDevice>* deviceConnected;

  /// @brief Field deviceDisconnected, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceDisconnected, put = setStaticF_deviceDisconnected)) ::System::Action_1<::UnityEngine::XR::InputDevice>* deviceDisconnected;

  /// @brief Method GetDeviceAtXRNode, addr 0x4aebb44, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::InputDevice GetDeviceAtXRNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetDeviceManufacturer, addr 0x4aeb514, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetDeviceManufacturer(uint64_t deviceId);

  /// @brief Method InvokeConnectionEvent, addr 0x4aebb88, size 0xbc, virtual false, abstract: false, final false
  static inline void InvokeConnectionEvent(uint64_t deviceId, ::UnityEngine::XR::ConnectionChangeType change);

  /// @brief Method IsDeviceValid, addr 0x4aeb47c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsDeviceValid(uint64_t deviceId);

  /// @brief Method SendHapticImpulse, addr 0x4aeb648, size 0x5c, virtual false, abstract: false, final false
  static inline bool SendHapticImpulse(uint64_t deviceId, uint32_t channel, float_t amplitude, float_t duration);

  /// @brief Method StopHaptics, addr 0x4aeb6fc, size 0x3c, virtual false, abstract: false, final false
  static inline void StopHaptics(uint64_t deviceId);

  static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceConfigChanged();

  static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceConnected();

  static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceDisconnected();

  static inline void setStaticF_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>* value);

  static inline void setStaticF_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);

  static inline void setStaticF_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDevices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputDevices(InputDevices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputDevices(InputDevices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18286 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputDevices, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::InputDevices);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
