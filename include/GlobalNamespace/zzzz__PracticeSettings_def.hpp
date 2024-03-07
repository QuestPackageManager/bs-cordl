#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PracticeSettings)
// Forward declare root types
namespace GlobalNamespace {
class PracticeSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PracticeSettings);
// Type: ::PracticeSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PracticeSettings*
class CORDL_TYPE PracticeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _songSpeedMul, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__songSpeedMul, put = __cordl_internal_set__songSpeedMul)) float_t _songSpeedMul;

  /// @brief Field _startInAdvanceAndClearNotes, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__startInAdvanceAndClearNotes, put = __cordl_internal_set__startInAdvanceAndClearNotes)) bool _startInAdvanceAndClearNotes;

  /// @brief Field _startSongTime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__startSongTime, put = __cordl_internal_set__startSongTime)) float_t _startSongTime;

  __declspec(property(get = get_songSpeedMul, put = set_songSpeedMul)) float_t songSpeedMul;

  __declspec(property(get = get_startInAdvanceAndClearNotes, put = set_startInAdvanceAndClearNotes)) bool startInAdvanceAndClearNotes;

  __declspec(property(get = get_startSongTime, put = set_startSongTime)) float_t startSongTime;

  static inline ::GlobalNamespace::PracticeSettings* New_ctor();

  static inline ::GlobalNamespace::PracticeSettings* New_ctor(::GlobalNamespace::PracticeSettings* practiceSettings);

  static inline ::GlobalNamespace::PracticeSettings* New_ctor(float_t startSongTime, float_t songSpeedMul);

  /// @brief Method ResetToDefault, addr 0x131efcc, size 0x18, virtual false, abstract: false, final false
  inline void ResetToDefault();

  constexpr float_t const& __cordl_internal_get__songSpeedMul() const;

  constexpr float_t& __cordl_internal_get__songSpeedMul();

  constexpr bool const& __cordl_internal_get__startInAdvanceAndClearNotes() const;

  constexpr bool& __cordl_internal_get__startInAdvanceAndClearNotes();

  constexpr float_t const& __cordl_internal_get__startSongTime() const;

  constexpr float_t& __cordl_internal_get__startSongTime();

  constexpr void __cordl_internal_set__songSpeedMul(float_t value);

  constexpr void __cordl_internal_set__startInAdvanceAndClearNotes(bool value);

  constexpr void __cordl_internal_set__startSongTime(float_t value);

  /// @brief Method .ctor, addr 0x1318f90, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x131efe4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PracticeSettings* practiceSettings);

  /// @brief Method .ctor, addr 0x131d698, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t startSongTime, float_t songSpeedMul);

  /// @brief Method get_defaultPracticeSettings, addr 0x131ef58, size 0x74, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PracticeSettings* get_defaultPracticeSettings();

  /// @brief Method get_songSpeedMul, addr 0x131ef34, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songSpeedMul();

  /// @brief Method get_startInAdvanceAndClearNotes, addr 0x131ef44, size 0x8, virtual false, abstract: false, final false
  inline bool get_startInAdvanceAndClearNotes();

  /// @brief Method get_startSongTime, addr 0x131ef24, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startSongTime();

  /// @brief Method set_songSpeedMul, addr 0x131ef3c, size 0x8, virtual false, abstract: false, final false
  inline void set_songSpeedMul(float_t value);

  /// @brief Method set_startInAdvanceAndClearNotes, addr 0x131ef4c, size 0xc, virtual false, abstract: false, final false
  inline void set_startInAdvanceAndClearNotes(bool value);

  /// @brief Method set_startSongTime, addr 0x131ef2c, size 0x8, virtual false, abstract: false, final false
  inline void set_startSongTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PracticeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PracticeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PracticeSettings(PracticeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PracticeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PracticeSettings(PracticeSettings const&) = delete;

  /// @brief Field _startSongTime, offset: 0x10, size: 0x4, def value: None
  float_t ____startSongTime;

  /// @brief Field _songSpeedMul, offset: 0x14, size: 0x4, def value: None
  float_t ____songSpeedMul;

  /// @brief Field _startInAdvanceAndClearNotes, offset: 0x18, size: 0x1, def value: None
  bool ____startInAdvanceAndClearNotes;

  /// @brief Field kDelayBeforeStart offset 0xffffffff size 0x4
  static constexpr float_t kDelayBeforeStart{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PracticeSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeSettings, ____startSongTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeSettings, ____songSpeedMul) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PracticeSettings, ____startInAdvanceAndClearNotes) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PracticeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PracticeSettings*, "", "PracticeSettings");
