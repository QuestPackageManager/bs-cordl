#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XRDevice)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::XR {
struct TrackingSpaceType;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRDevice;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRDevice);
// Type: UnityEngine.XR::XRDevice
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15978))
// CS Name: ::UnityEngine.XR::XRDevice*
class CORDL_TYPE XRDevice : public ::System::Object {
public:
  // Declarations
  /// @brief Field deviceLoaded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_deviceLoaded, put = setStaticF_deviceLoaded))::System::Action_1<::StringW>* deviceLoaded;

  static inline void setStaticF_deviceLoaded(::System::Action_1<::StringW>* value);

  static inline ::System::Action_1<::StringW>* getStaticF_deviceLoaded();

  /// @brief Method SetTrackingSpaceType addr 0x2d49148 size 0x3c virtual false final false
  static inline bool SetTrackingSpaceType(::UnityEngine::XR::TrackingSpaceType trackingSpaceType);

  /// @brief Method DisableAutoXRCameraTracking addr 0x2d49184 size 0x44 virtual false final false
  static inline void DisableAutoXRCameraTracking(::UnityEngine::Camera* camera, bool disabled);

  /// @brief Method InvokeDeviceLoaded addr 0x2d491c8 size 0x6c virtual false final false
  static inline void InvokeDeviceLoaded(::StringW loadedDeviceName);

  // Ctor Parameters [CppParam { name: "", ty: "XRDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDevice(XRDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDevice(XRDevice const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDevice();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDevice, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDevice*, "UnityEngine.XR", "XRDevice");
