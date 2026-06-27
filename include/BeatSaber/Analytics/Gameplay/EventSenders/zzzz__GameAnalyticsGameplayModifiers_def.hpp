#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/GameAnalyticsGameplayModifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameAnalyticsGameplayModifiers)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class GameAnalyticsGameplayModifiers;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.GameAnalyticsGameplayModifiers
class CORDL_TYPE GameAnalyticsGameplayModifiers : public ::System::Object {
public:
// Declarations
/// @brief Field batteryEnergy, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_batteryEnergy, put=__cordl_internal_set_batteryEnergy)) bool  batteryEnergy;

/// @brief Field disappearingArrows, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_disappearingArrows, put=__cordl_internal_set_disappearingArrows)) bool  disappearingArrows;

/// @brief Field fastNotes, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_fastNotes, put=__cordl_internal_set_fastNotes)) bool  fastNotes;

/// @brief Field fasterSong, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_fasterSong, put=__cordl_internal_set_fasterSong)) bool  fasterSong;

/// @brief Field ghostNotes, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_ghostNotes, put=__cordl_internal_set_ghostNotes)) bool  ghostNotes;

/// @brief Field instaFail, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_instaFail, put=__cordl_internal_set_instaFail)) bool  instaFail;

/// @brief Field noArrows, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_noArrows, put=__cordl_internal_set_noArrows)) bool  noArrows;

/// @brief Field noBombs, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_noBombs, put=__cordl_internal_set_noBombs)) bool  noBombs;

/// @brief Field noFail, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_noFail, put=__cordl_internal_set_noFail)) bool  noFail;

/// @brief Field noObstacles, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_noObstacles, put=__cordl_internal_set_noObstacles)) bool  noObstacles;

/// @brief Field none, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_none, put=__cordl_internal_set_none)) bool  none;

/// @brief Field proMode, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_proMode, put=__cordl_internal_set_proMode)) bool  proMode;

/// @brief Field slowerSong, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_slowerSong, put=__cordl_internal_set_slowerSong)) bool  slowerSong;

/// @brief Field smallCubes, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_smallCubes, put=__cordl_internal_set_smallCubes)) bool  smallCubes;

/// @brief Field strictAngles, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_strictAngles, put=__cordl_internal_set_strictAngles)) bool  strictAngles;

/// @brief Field superFastSong, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_superFastSong, put=__cordl_internal_set_superFastSong)) bool  superFastSong;

/// @brief Field zenMode, offset 0x1f, size 0x1 
 __declspec(property(get=__cordl_internal_get_zenMode, put=__cordl_internal_set_zenMode)) bool  zenMode;

static inline ::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers* New_ctor() ;

constexpr bool const& __cordl_internal_get_batteryEnergy() const;

constexpr bool& __cordl_internal_get_batteryEnergy() ;

constexpr bool const& __cordl_internal_get_disappearingArrows() const;

constexpr bool& __cordl_internal_get_disappearingArrows() ;

constexpr bool const& __cordl_internal_get_fastNotes() const;

constexpr bool& __cordl_internal_get_fastNotes() ;

constexpr bool const& __cordl_internal_get_fasterSong() const;

constexpr bool& __cordl_internal_get_fasterSong() ;

constexpr bool const& __cordl_internal_get_ghostNotes() const;

constexpr bool& __cordl_internal_get_ghostNotes() ;

constexpr bool const& __cordl_internal_get_instaFail() const;

constexpr bool& __cordl_internal_get_instaFail() ;

constexpr bool const& __cordl_internal_get_noArrows() const;

constexpr bool& __cordl_internal_get_noArrows() ;

constexpr bool const& __cordl_internal_get_noBombs() const;

constexpr bool& __cordl_internal_get_noBombs() ;

constexpr bool const& __cordl_internal_get_noFail() const;

constexpr bool& __cordl_internal_get_noFail() ;

constexpr bool const& __cordl_internal_get_noObstacles() const;

constexpr bool& __cordl_internal_get_noObstacles() ;

constexpr bool const& __cordl_internal_get_none() const;

constexpr bool& __cordl_internal_get_none() ;

constexpr bool const& __cordl_internal_get_proMode() const;

constexpr bool& __cordl_internal_get_proMode() ;

constexpr bool const& __cordl_internal_get_slowerSong() const;

constexpr bool& __cordl_internal_get_slowerSong() ;

constexpr bool const& __cordl_internal_get_smallCubes() const;

constexpr bool& __cordl_internal_get_smallCubes() ;

constexpr bool const& __cordl_internal_get_strictAngles() const;

constexpr bool& __cordl_internal_get_strictAngles() ;

constexpr bool const& __cordl_internal_get_superFastSong() const;

constexpr bool& __cordl_internal_get_superFastSong() ;

constexpr bool const& __cordl_internal_get_zenMode() const;

constexpr bool& __cordl_internal_get_zenMode() ;

constexpr void __cordl_internal_set_batteryEnergy(bool  value) ;

constexpr void __cordl_internal_set_disappearingArrows(bool  value) ;

constexpr void __cordl_internal_set_fastNotes(bool  value) ;

constexpr void __cordl_internal_set_fasterSong(bool  value) ;

constexpr void __cordl_internal_set_ghostNotes(bool  value) ;

constexpr void __cordl_internal_set_instaFail(bool  value) ;

constexpr void __cordl_internal_set_noArrows(bool  value) ;

constexpr void __cordl_internal_set_noBombs(bool  value) ;

constexpr void __cordl_internal_set_noFail(bool  value) ;

constexpr void __cordl_internal_set_noObstacles(bool  value) ;

constexpr void __cordl_internal_set_none(bool  value) ;

constexpr void __cordl_internal_set_proMode(bool  value) ;

constexpr void __cordl_internal_set_slowerSong(bool  value) ;

constexpr void __cordl_internal_set_smallCubes(bool  value) ;

constexpr void __cordl_internal_set_strictAngles(bool  value) ;

constexpr void __cordl_internal_set_superFastSong(bool  value) ;

constexpr void __cordl_internal_set_zenMode(bool  value) ;

/// @brief Method .ctor, addr 0x31d0584, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameAnalyticsGameplayModifiers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsGameplayModifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameAnalyticsGameplayModifiers(GameAnalyticsGameplayModifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsGameplayModifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameAnalyticsGameplayModifiers(GameAnalyticsGameplayModifiers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22095};

/// @brief Field none, offset: 0x10, size: 0x1, def value: None
 bool  ___none;

/// @brief Field batteryEnergy, offset: 0x11, size: 0x1, def value: None
 bool  ___batteryEnergy;

/// @brief Field noFail, offset: 0x12, size: 0x1, def value: None
 bool  ___noFail;

/// @brief Field instaFail, offset: 0x13, size: 0x1, def value: None
 bool  ___instaFail;

/// @brief Field noObstacles, offset: 0x14, size: 0x1, def value: None
 bool  ___noObstacles;

/// @brief Field noBombs, offset: 0x15, size: 0x1, def value: None
 bool  ___noBombs;

/// @brief Field fastNotes, offset: 0x16, size: 0x1, def value: None
 bool  ___fastNotes;

/// @brief Field strictAngles, offset: 0x17, size: 0x1, def value: None
 bool  ___strictAngles;

/// @brief Field disappearingArrows, offset: 0x18, size: 0x1, def value: None
 bool  ___disappearingArrows;

/// @brief Field fasterSong, offset: 0x19, size: 0x1, def value: None
 bool  ___fasterSong;

/// @brief Field slowerSong, offset: 0x1a, size: 0x1, def value: None
 bool  ___slowerSong;

/// @brief Field noArrows, offset: 0x1b, size: 0x1, def value: None
 bool  ___noArrows;

/// @brief Field ghostNotes, offset: 0x1c, size: 0x1, def value: None
 bool  ___ghostNotes;

/// @brief Field superFastSong, offset: 0x1d, size: 0x1, def value: None
 bool  ___superFastSong;

/// @brief Field proMode, offset: 0x1e, size: 0x1, def value: None
 bool  ___proMode;

/// @brief Field zenMode, offset: 0x1f, size: 0x1, def value: None
 bool  ___zenMode;

/// @brief Field smallCubes, offset: 0x20, size: 0x1, def value: None
 bool  ___smallCubes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___none) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___batteryEnergy) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___noFail) == 0x12, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___instaFail) == 0x13, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___noObstacles) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___noBombs) == 0x15, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___fastNotes) == 0x16, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___strictAngles) == 0x17, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___disappearingArrows) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___fasterSong) == 0x19, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___slowerSong) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___noArrows) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___ghostNotes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___superFastSong) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___proMode) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___zenMode) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, ___smallCubes) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers, 0x28>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::GameAnalyticsGameplayModifiers*, "BeatSaber.Analytics.Gameplay.EventSenders", "GameAnalyticsGameplayModifiers");
