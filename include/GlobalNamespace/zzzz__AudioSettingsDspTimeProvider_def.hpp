#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSettingsDspTimeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioSettingsDspTimeProvider)
namespace GlobalNamespace {
class IDspTimeProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioSettingsDspTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioSettingsDspTimeProvider);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSettingsDspTimeProvider
class CORDL_TYPE AudioSettingsDspTimeProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_dspTime)) double_t dspTime;

  /// @brief Convert operator to "::GlobalNamespace::IDspTimeProvider"
  constexpr operator ::GlobalNamespace::IDspTimeProvider*() noexcept;

  static inline ::GlobalNamespace::AudioSettingsDspTimeProvider* New_ctor();

  /// @brief Method .ctor, addr 0x56abce4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_dspTime, addr 0x56abcbc, size 0x28, virtual true, abstract: false, final true
  inline double_t get_dspTime();

  /// @brief Convert to "::GlobalNamespace::IDspTimeProvider"
  constexpr ::GlobalNamespace::IDspTimeProvider* i___GlobalNamespace__IDspTimeProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSettingsDspTimeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioSettingsDspTimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSettingsDspTimeProvider(AudioSettingsDspTimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSettingsDspTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSettingsDspTimeProvider(AudioSettingsDspTimeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5572 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioSettingsDspTimeProvider, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioSettingsDspTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioSettingsDspTimeProvider*, "", "AudioSettingsDspTimeProvider");
