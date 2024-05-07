#pragma once
// IWYU pragma private; include "Oculus/Platform/Voip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Voip)
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace Oculus::Platform::Models {
class SystemVoipState;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
class VoipOptions;
}
namespace Oculus::Platform {
class __CAPI__FilterCallback;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Voip;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Voip);
// Type: Oculus.Platform::Voip
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::Voip*
class CORDL_TYPE Voip : public ::System::Object {
public:
  // Declarations
  /// @brief Method Accept, addr 0x2ace32c, size 0xc4, virtual false, abstract: false, final false
  static inline void Accept(uint64_t userID);

  /// @brief Method GetIsConnectionUsingDtx, addr 0x2ace7f8, size 0xc8, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipDtxState GetIsConnectionUsingDtx(uint64_t peerID);

  /// @brief Method GetLocalBitrate, addr 0x2ace8c0, size 0xc8, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate GetLocalBitrate(uint64_t peerID);

  /// @brief Method GetMicrophoneAvailability, addr 0x2acebac, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*>* GetMicrophoneAvailability();

  /// @brief Method GetRemoteBitrate, addr 0x2ace988, size 0xc8, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate GetRemoteBitrate(uint64_t peerID);

  /// @brief Method GetSystemVoipMicrophoneMuted, addr 0x2ace678, size 0xc0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState GetSystemVoipMicrophoneMuted();

  /// @brief Method GetSystemVoipStatus, addr 0x2ace738, size 0xc0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus GetSystemVoipStatus();

  /// @brief Method SetMicrophoneAvailabilityStateUpdateNotificationCallback, addr 0x2acee64, size 0x74, virtual false, abstract: false, final false
  static inline void SetMicrophoneAvailabilityStateUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  /// @brief Method SetMicrophoneFilterCallback, addr 0x2ace4b4, size 0x100, virtual false, abstract: false, final false
  static inline void SetMicrophoneFilterCallback(::Oculus::Platform::__CAPI__FilterCallback* callback);

  /// @brief Method SetMicrophoneMuted, addr 0x2ace5b4, size 0xc4, virtual false, abstract: false, final false
  static inline void SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state);

  /// @brief Method SetNewConnectionOptions, addr 0x2acea50, size 0x104, virtual false, abstract: false, final false
  static inline void SetNewConnectionOptions(::Oculus::Platform::VoipOptions* voipOptions);

  /// @brief Method SetSystemVoipStateNotificationCallback, addr 0x2aceed8, size 0x74, virtual false, abstract: false, final false
  static inline void SetSystemVoipStateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::SystemVoipState*>* callback);

  /// @brief Method SetSystemVoipSuppressed, addr 0x2aced04, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState*>* SetSystemVoipSuppressed(bool suppressed);

  /// @brief Method Start, addr 0x2ace268, size 0xc4, virtual false, abstract: false, final false
  static inline void Start(uint64_t userID);

  /// @brief Method Stop, addr 0x2ace3f0, size 0xc4, virtual false, abstract: false, final false
  static inline void Stop(uint64_t userID);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Voip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Voip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Voip(Voip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Voip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Voip(Voip const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Voip, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Voip);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Voip*, "Oculus.Platform", "Voip");
