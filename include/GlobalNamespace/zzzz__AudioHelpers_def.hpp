#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioHelpers)
// Forward declare root types
namespace GlobalNamespace {
class AudioHelpers;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioHelpers*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioHelpers*, "", "AudioHelpers");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioHelpers
class CORDL_TYPE AudioHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method DBToNormalizedVolume, addr 0x331f898, size 0x18, virtual false, abstract: false, final false
  static inline float_t DBToNormalizedVolume(float_t db);

  /// @brief Method NormalizedVolumeToDB, addr 0x331f814, size 0x84, virtual false, abstract: false, final false
  static inline float_t NormalizedVolumeToDB(float_t normalizedVolume);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioHelpers(AudioHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioHelpers(AudioHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20504 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioHelpers) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
