#pragma once
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
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Oculus::Haptics {
class Haptics;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Haptics::Haptics);
// Type: Oculus.Haptics::Haptics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: false
// CS Name: ::Oculus.Haptics::Haptics*
class CORDL_TYPE Haptics : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::Oculus::Haptics::Haptics* instance;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateHapticPlayer, addr 0x281b9e0, size 0x20, virtual false, abstract: false, final false
  inline int32_t CreateHapticPlayer();

  /// @brief Method Dispose, addr 0x281d850, size 0xc4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EnsureInitialized, addr 0x281c8a8, size 0xec, virtual false, abstract: false, final false
  static inline bool EnsureInitialized();

  /// @brief Method GetAmplitudeHapticPlayer, addr 0x281c06c, size 0xb0, virtual false, abstract: false, final false
  inline float_t GetAmplitudeHapticPlayer(int32_t playerId);

  /// @brief Method GetClipDuration, addr 0x281bfa4, size 0xac, virtual false, abstract: false, final false
  inline float_t GetClipDuration(int32_t clipId);

  /// @brief Method GetFrequencyShiftHapticPlayer, addr 0x281c2b4, size 0xac, virtual false, abstract: false, final false
  inline float_t GetFrequencyShiftHapticPlayer(int32_t playerId);

  /// @brief Method GetPriorityHapticPlayer, addr 0x281c4f8, size 0xc4, virtual false, abstract: false, final false
  inline uint32_t GetPriorityHapticPlayer(int32_t playerId);

  /// @brief Method IsHapticPlayerLooping, addr 0x281be14, size 0xac, virtual false, abstract: false, final false
  inline bool IsHapticPlayerLooping(int32_t playerId);

  /// @brief Method IsInitialized, addr 0x281c994, size 0x90, virtual false, abstract: false, final false
  static inline bool IsInitialized();

  /// @brief Method IsSupportedPlatform, addr 0x281c898, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSupportedPlatform();

  /// @brief Method LoadClip, addr 0x281b920, size 0xc0, virtual false, abstract: false, final false
  inline int32_t LoadClip(::StringW clipJson);

  /// @brief Method LoopHapticPlayer, addr 0x281bee4, size 0xa4, virtual false, abstract: false, final false
  inline void LoopHapticPlayer(int32_t playerId, bool enabled);

  /// @brief Method MapPriority, addr 0x281d444, size 0x260, virtual false, abstract: false, final false
  static inline uint32_t MapPriority(uint32_t input, int32_t inMin, int32_t inMax, int32_t outMin, int32_t outMax);

  static inline ::Oculus::Haptics::Haptics* New_ctor();

  /// @brief Method PlayHapticPlayer, addr 0x281bbb8, size 0x118, virtual false, abstract: false, final false
  inline void PlayHapticPlayer(int32_t playerId, ::Oculus::Haptics::Controller controller);

  /// @brief Method ReleaseClip, addr 0x281c7b4, size 0x1c, virtual false, abstract: false, final false
  inline bool ReleaseClip(int32_t clipId);

  /// @brief Method ReleaseHapticPlayer, addr 0x281c878, size 0x1c, virtual false, abstract: false, final false
  inline bool ReleaseHapticPlayer(int32_t playerId);

  /// @brief Method SetAmplitudeHapticPlayer, addr 0x281c138, size 0x160, virtual false, abstract: false, final false
  inline void SetAmplitudeHapticPlayer(int32_t playerId, float_t amplitude);

  /// @brief Method SetFrequencyShiftHapticPlayer, addr 0x281c37c, size 0x160, virtual false, abstract: false, final false
  inline void SetFrequencyShiftHapticPlayer(int32_t playerId, float_t amount);

  /// @brief Method SetHapticPlayerClip, addr 0x281ba00, size 0xd8, virtual false, abstract: false, final false
  inline void SetHapticPlayerClip(int32_t playerId, int32_t clipId);

  /// @brief Method SetPriorityHapticPlayer, addr 0x281c5dc, size 0x174, virtual false, abstract: false, final false
  inline void SetPriorityHapticPlayer(int32_t playerId, uint32_t value);

  /// @brief Method StopHapticPlayer, addr 0x281bcec, size 0x10c, virtual false, abstract: false, final false
  inline void StopHapticPlayer(int32_t playerId);

  /// @brief Method .ctor, addr 0x281c8a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Oculus::Haptics::Haptics* getStaticF_instance();

  /// @brief Method get_Instance, addr 0x281baf0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Haptics* get_Instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_instance(::Oculus::Haptics::Haptics* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::Haptics, 0x10>, "Size mismatch!");

} // namespace Oculus::Haptics
NEED_NO_BOX(::Oculus::Haptics::Haptics);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::Haptics*, "Oculus.Haptics", "Haptics");
