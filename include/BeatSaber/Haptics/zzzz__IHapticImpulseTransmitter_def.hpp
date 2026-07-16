#pragma once
// IWYU pragma private; include "BeatSaber/Haptics/IHapticImpulseTransmitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IHapticImpulseTransmitter)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace BeatSaber::Haptics {
class IHapticImpulseTransmitter;
}
// Write type traits
MARK_REF_T(::BeatSaber::Haptics::IHapticImpulseTransmitter*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::IHapticImpulseTransmitter*, "BeatSaber.Haptics", "IHapticImpulseTransmitter");
// Dependencies
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.IHapticImpulseTransmitter
class CORDL_TYPE IHapticImpulseTransmitter {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method StopHaptics, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StopHaptics();

  /// @brief Method TriggerHapticPulse, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TriggerHapticPulse(float_t strength, float_t duration);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IHapticImpulseTransmitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHapticImpulseTransmitter(IHapticImpulseTransmitter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23120 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Haptics
