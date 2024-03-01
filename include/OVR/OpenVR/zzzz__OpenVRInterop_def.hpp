#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenVRInterop)
namespace OVR::OpenVR {
struct EVRApplicationType;
}
namespace OVR::OpenVR {
struct EVRInitError;
}
// Forward declare root types
namespace OVR::OpenVR {
class OpenVRInterop;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::OpenVRInterop);
// Type: OVR.OpenVR::OpenVRInterop
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::OVR.OpenVR::OpenVRInterop*
class CORDL_TYPE OpenVRInterop : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetGenericInterface, addr 0x28e7dcc, size 0x9c, virtual false, abstract: false, final false
  static inline void* GetGenericInterface(ByRefConst<::StringW> pchInterfaceVersion, ByRef<::OVR::OpenVR::EVRInitError> peError);

  /// @brief Method GetInitToken, addr 0x28e7f00, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t GetInitToken();

  /// @brief Method GetStringForHmdError, addr 0x28e7d50, size 0x7c, virtual false, abstract: false, final false
  static inline void* GetStringForHmdError(::OVR::OpenVR::EVRInitError error);

  /// @brief Method InitInternal, addr 0x28e7ad8, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t InitInternal(ByRef<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType);

  /// @brief Method InitInternal2, addr 0x28e7b5c, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t InitInternal2(ByRef<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType, ByRefConst<::StringW> pStartupInfo);

  /// @brief Method IsHmdPresent, addr 0x28e7c70, size 0x70, virtual false, abstract: false, final false
  static inline bool IsHmdPresent();

  /// @brief Method IsInterfaceVersionValid, addr 0x28e7e68, size 0x98, virtual false, abstract: false, final false
  static inline bool IsInterfaceVersionValid(ByRefConst<::StringW> pchInterfaceVersion);

  /// @brief Method IsRuntimeInstalled, addr 0x28e7ce0, size 0x70, virtual false, abstract: false, final false
  static inline bool IsRuntimeInstalled();

  static inline ::OVR::OpenVR::OpenVRInterop* New_ctor();

  /// @brief Method ShutdownInternal, addr 0x28e7c0c, size 0x64, virtual false, abstract: false, final false
  static inline void ShutdownInternal();

  /// @brief Method .ctor, addr 0x28e7f68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenVRInterop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenVRInterop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenVRInterop(OpenVRInterop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenVRInterop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenVRInterop(OpenVRInterop const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::OpenVRInterop, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::OpenVRInterop);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::OpenVRInterop*, "OVR.OpenVR", "OpenVRInterop");
