#pragma once
// IWYU pragma private; include "OVR/OpenVR/OpenVRInterop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenVRInterop)
namespace OVR::OpenVR {
struct EVRApplicationType;
}
namespace OVR::OpenVR {
struct EVRInitError;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class OpenVRInterop;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::OpenVRInterop*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::OpenVRInterop*, "OVR.OpenVR", "OpenVRInterop");
// Dependencies System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.OpenVRInterop
class CORDL_TYPE OpenVRInterop : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetGenericInterface, addr 0x6261c74, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetGenericInterface(::StringW pchInterfaceVersion, ::by_ref<::OVR::OpenVR::EVRInitError> peError);

  /// @brief Method GetInitToken, addr 0x6261db0, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t GetInitToken();

  /// @brief Method GetStringForHmdError, addr 0x6261bf8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStringForHmdError(::OVR::OpenVR::EVRInitError error);

  /// @brief Method InitInternal, addr 0x6261984, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t InitInternal(::by_ref<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType);

  /// @brief Method InitInternal2, addr 0x6261a08, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t InitInternal2(::by_ref<::OVR::OpenVR::EVRInitError> peError, ::OVR::OpenVR::EVRApplicationType eApplicationType, ::StringW pStartupInfo);

  /// @brief Method IsHmdPresent, addr 0x6261b20, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsHmdPresent();

  /// @brief Method IsInterfaceVersionValid, addr 0x6261d14, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsInterfaceVersionValid(::StringW pchInterfaceVersion);

  /// @brief Method IsRuntimeInstalled, addr 0x6261b8c, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsRuntimeInstalled();

  static inline ::OVR::OpenVR::OpenVRInterop* New_ctor();

  /// @brief Method ShutdownInternal, addr 0x6261abc, size 0x64, virtual false, abstract: false, final false
  static inline void ShutdownInternal();

  /// @brief Method .ctor, addr 0x6261e14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenVRInterop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenVRInterop", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenVRInterop(OpenVRInterop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenVRInterop", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenVRInterop(OpenVRInterop const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8516 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::OpenVRInterop) == 0x10, "Size mismatch!");

} // namespace OVR::OpenVR
