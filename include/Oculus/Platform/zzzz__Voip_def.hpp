#pragma once
// IWYU pragma private; include "Oculus/Platform/Voip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Voip)
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace Oculus::Platform::Models {
class SystemVoipState;
}
namespace Oculus::Platform {
class CAPI_FilterCallback;
}
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
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
// Forward declare root types
namespace Oculus::Platform {
class Voip;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Voip*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Voip*, "Oculus.Platform", "Voip");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Voip
class CORDL_TYPE Voip : public ::System::Object {
public:
  // Declarations
  /// @brief Method Accept, addr 0x5ddf6d0, size 0xe0, virtual false, abstract: false, final false
  static inline void Accept(uint64_t userID);

  /// @brief Method GetIsConnectionUsingDtx, addr 0x5ddfbf4, size 0xe4, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipDtxState GetIsConnectionUsingDtx(uint64_t peerID);

  /// @brief Method GetLocalBitrate, addr 0x5ddfcd8, size 0xe4, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate GetLocalBitrate(uint64_t peerID);

  /// @brief Method GetMicrophoneAvailability, addr 0x5ddff94, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState*>* GetMicrophoneAvailability();

  /// @brief Method GetRemoteBitrate, addr 0x5ddfdbc, size 0xe4, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipBitrate GetRemoteBitrate(uint64_t peerID);

  /// @brief Method GetSystemVoipMicrophoneMuted, addr 0x5ddfa54, size 0xd0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::VoipMuteState GetSystemVoipMicrophoneMuted();

  /// @brief Method GetSystemVoipStatus, addr 0x5ddfb24, size 0xd0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::SystemVoipStatus GetSystemVoipStatus();

  /// @brief Method SetMicrophoneAvailabilityStateUpdateNotificationCallback, addr 0x5de0254, size 0x7c, virtual false, abstract: false, final false
  static inline void SetMicrophoneAvailabilityStateUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

  /// @brief Method SetMicrophoneFilterCallback, addr 0x5ddf890, size 0xe4, virtual false, abstract: false, final false
  static inline void SetMicrophoneFilterCallback(::Oculus::Platform::CAPI_FilterCallback* callback);

  /// @brief Method SetMicrophoneMuted, addr 0x5ddf974, size 0xe0, virtual false, abstract: false, final false
  static inline void SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state);

  /// @brief Method SetNewConnectionOptions, addr 0x5ddfea0, size 0xe8, virtual false, abstract: false, final false
  static inline void SetNewConnectionOptions(::Oculus::Platform::VoipOptions* voipOptions);

  /// @brief Method SetSystemVoipStateNotificationCallback, addr 0x5de02d0, size 0x7c, virtual false, abstract: false, final false
  static inline void SetSystemVoipStateNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::SystemVoipState*>* callback);

  /// @brief Method SetSystemVoipSuppressed, addr 0x5de00ec, size 0x168, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState*>* SetSystemVoipSuppressed(bool suppressed);

  /// @brief Method Start, addr 0x5ddf5f0, size 0xe0, virtual false, abstract: false, final false
  static inline void Start(uint64_t userID);

  /// @brief Method Stop, addr 0x5ddf7b0, size 0xe0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17917 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::Voip) == 0x10, "Size mismatch!");

} // namespace Oculus::Platform
