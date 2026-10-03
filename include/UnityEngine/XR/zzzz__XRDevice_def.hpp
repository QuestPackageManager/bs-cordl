#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XRDevice)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR {
struct TrackingSpaceType;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRDevice;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::XRDevice*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::XRDevice*, "UnityEngine.XR", "XRDevice");
// [Obsolete("UnityEngine.VRModule is deprecated and will be removed in a future version. Please use the APIs in the UnityEngine.XRModule instead")]
// [NativeConditional("ENABLE_VR")]
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRDevice
class CORDL_TYPE XRDevice : public ::System::Object {
public:
  // Declarations
  /// @brief Field deviceLoaded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_deviceLoaded, put = setStaticF_deviceLoaded)) ::System::Action_1<::StringW>* deviceLoaded;

  /// [RequiredByNativeCode]
  /// @brief Method InvokeDeviceLoaded, addr 0x72d2190, size 0x70, virtual false, abstract: false, final false
  static inline void InvokeDeviceLoaded(::StringW loadedDeviceName);

  /// [Obsolete("This is obsolete, and should no longer be used.  Please use XRInputSubsystem.TrySetTrackingOriginMode.")]
  /// [StaticAccessor("GetIVRDevice()", (UnityEngine.Bindings.StaticAccessorType)3)]
  /// @brief Method SetTrackingSpaceType, addr 0x72d2154, size 0x3c, virtual false, abstract: false, final false
  static inline bool SetTrackingSpaceType(::UnityEngine::XR::TrackingSpaceType trackingSpaceType);

  static inline ::System::Action_1<::StringW>* getStaticF_deviceLoaded();

  static inline void setStaticF_deviceLoaded(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDevice", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDevice(XRDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDevice", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDevice(XRDevice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::XRDevice) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR
