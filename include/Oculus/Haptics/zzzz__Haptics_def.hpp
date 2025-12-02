#pragma once
// IWYU pragma private; include "Oculus/Haptics/Haptics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Haptics)
namespace Oculus::Haptics {
struct Controller;
}
namespace Oculus::Haptics {
struct Ffi_Controller;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Haptics {
class Haptics;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Haptics::Haptics);
// Dependencies System.Object
namespace Oculus::Haptics {
// Is value type: false
// CS Name: Oculus.Haptics.Haptics
class CORDL_TYPE Haptics : public ::System::Object {
public:
  // Declarations
  /// @brief Field <IsPCMHaptics>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsPCMHaptics_k__BackingField, put = setStaticF__IsPCMHaptics_k__BackingField)) bool _IsPCMHaptics_k__BackingField;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::Oculus::Haptics::Haptics* instance;

  /// @brief Field syncContext, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_syncContext, put = setStaticF_syncContext)) ::System::Threading::SynchronizationContext* syncContext;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateHapticPlayer, addr 0x5b9b294, size 0x20, virtual false, abstract: false, final false
  inline int32_t CreateHapticPlayer();

  /// @brief Method Dispose, addr 0x5b9da54, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x5b9dac4, size 0xd8, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnsureInitialized, addr 0x5b9c6bc, size 0x258, virtual false, abstract: false, final false
  static inline bool EnsureInitialized();

  /// @brief Method Finalize, addr 0x5b9dc00, size 0x50, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetAmplitudeHapticPlayer, addr 0x5b9bc80, size 0xa4, virtual false, abstract: false, final false
  inline float_t GetAmplitudeHapticPlayer(int32_t playerId);

  /// @brief Method GetClipDuration, addr 0x5b9bbc8, size 0xa0, virtual false, abstract: false, final false
  inline float_t GetClipDuration(int32_t clipId);

  /// @brief Method GetFrequencyShiftHapticPlayer, addr 0x5b9be98, size 0xa0, virtual false, abstract: false, final false
  inline float_t GetFrequencyShiftHapticPlayer(int32_t playerId);

  /// @brief Method GetPriorityHapticPlayer, addr 0x5b9c0ac, size 0xb8, virtual false, abstract: false, final false
  inline uint32_t GetPriorityHapticPlayer(int32_t playerId);

  /// @brief Method IsHapticPlayerLooping, addr 0x5b9ba58, size 0xa0, virtual false, abstract: false, final false
  inline bool IsHapticPlayerLooping(int32_t playerId);

  /// @brief Method IsInitialized, addr 0x5b9c91c, size 0x98, virtual false, abstract: false, final false
  static inline bool IsInitialized();

  /// @brief Method IsPcmHapticsExtensionEnabled, addr 0x5b9c914, size 0x8, virtual false, abstract: false, final false
  static inline bool IsPcmHapticsExtensionEnabled();

  /// @brief Method IsSupportedPlatform, addr 0x5b9c6b0, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSupportedPlatform();

  /// @brief Method LoadClip, addr 0x5b9c2d8, size 0xb8, virtual false, abstract: false, final false
  inline int32_t LoadClip(::StringW clipJson);

  /// @brief Method LoopHapticPlayer, addr 0x5b9bb18, size 0x98, virtual false, abstract: false, final false
  inline void LoopHapticPlayer(int32_t playerId, bool enabled);

  /// @brief Method MapPriority, addr 0x5b9d604, size 0x2a4, virtual false, abstract: false, final false
  static inline uint32_t MapPriority(uint32_t input, int32_t inMin, int32_t inMax, int32_t outMin, int32_t outMax);

  static inline ::Oculus::Haptics::Haptics* New_ctor();

  /// @brief Method PauseHapticPlayer, addr 0x5b9b580, size 0xf4, virtual false, abstract: false, final false
  inline void PauseHapticPlayer(int32_t playerId);

  /// @brief Method PlayCallback, addr 0x5b9c60c, size 0x4, virtual false, abstract: false, final false
  static inline void PlayCallback(::System::IntPtr context, ::Oculus::Haptics::Ffi_Controller controller, float_t duration, float_t amplitude);

  /// @brief Method PlayHapticPlayer, addr 0x5b9b464, size 0x104, virtual false, abstract: false, final false
  inline void PlayHapticPlayer(int32_t playerId, ::Oculus::Haptics::Controller controller);

  /// @brief Method ReleaseClip, addr 0x5b9c458, size 0x1c, virtual false, abstract: false, final false
  inline bool ReleaseClip(int32_t clipId);

  /// @brief Method ReleaseHapticPlayer, addr 0x5b9c5a0, size 0x1c, virtual false, abstract: false, final false
  inline bool ReleaseHapticPlayer(int32_t playerId);

  /// @brief Method ResumeHapticPlayer, addr 0x5b9b68c, size 0xf4, virtual false, abstract: false, final false
  inline void ResumeHapticPlayer(int32_t playerId);

  /// @brief Method SeekPlaybackPositionHapticPlayer, addr 0x5b9b8a4, size 0x19c, virtual false, abstract: false, final false
  inline void SeekPlaybackPositionHapticPlayer(int32_t playerId, float_t time);

  /// @brief Method SetAmplitudeHapticPlayer, addr 0x5b9bd3c, size 0x144, virtual false, abstract: false, final false
  inline void SetAmplitudeHapticPlayer(int32_t playerId, float_t amplitude);

  /// @brief Method SetFrequencyShiftHapticPlayer, addr 0x5b9bf50, size 0x144, virtual false, abstract: false, final false
  inline void SetFrequencyShiftHapticPlayer(int32_t playerId, float_t amount);

  /// @brief Method SetHapticPlayerClip, addr 0x5b9c390, size 0xc8, virtual false, abstract: false, final false
  inline void SetHapticPlayerClip(int32_t playerId, int32_t clipId);

  /// @brief Method SetPriorityHapticPlayer, addr 0x5b9c180, size 0x158, virtual false, abstract: false, final false
  inline void SetPriorityHapticPlayer(int32_t playerId, uint32_t value);

  /// @brief Method StopHapticPlayer, addr 0x5b9b798, size 0xf4, virtual false, abstract: false, final false
  inline void StopHapticPlayer(int32_t playerId);

  /// @brief Method .ctor, addr 0x5b9c6b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__IsPCMHaptics_k__BackingField();

  static inline ::Oculus::Haptics::Haptics* getStaticF_instance();

  static inline ::System::Threading::SynchronizationContext* getStaticF_syncContext();

  /// @brief Method get_Instance, addr 0x5b9b3a0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Haptics* get_Instance();

  /// @brief Method get_IsPCMHaptics, addr 0x5b9c610, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_IsPCMHaptics();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__IsPCMHaptics_k__BackingField(bool value);

  static inline void setStaticF_instance(::Oculus::Haptics::Haptics* value);

  static inline void setStaticF_syncContext(::System::Threading::SynchronizationContext* value);

  /// @brief Method set_IsPCMHaptics, addr 0x5b9c65c, size 0x54, virtual false, abstract: false, final false
  static inline void set_IsPCMHaptics(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Haptics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Haptics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Haptics(Haptics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Haptics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Haptics(Haptics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22413 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::Haptics, 0x10>, "Size mismatch!");

} // namespace Oculus::Haptics
NEED_NO_BOX(::Oculus::Haptics::Haptics);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::Haptics*, "Oculus.Haptics", "Haptics");
