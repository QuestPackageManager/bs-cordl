#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::AudioHelpers);
// Type: ::AudioHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AudioHelpers*
class CORDL_TYPE AudioHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method DBToNormalizedVolume, addr 0x1095450, size 0x18, virtual false, abstract: false, final false
  static inline float_t DBToNormalizedVolume(float_t db);

  /// @brief Method NormalizedVolumeToDB, addr 0x10953dc, size 0x74, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioHelpers*, "", "AudioHelpers");
