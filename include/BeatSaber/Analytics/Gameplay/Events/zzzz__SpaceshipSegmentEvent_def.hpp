#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipSegmentEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceshipSegmentEvent)
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentEventSettingsField;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentEvent;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent);
// Dependencies BeatSaber.Analytics.Gameplay.Events.SpaceshipUserEventBase
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipSegmentEvent
class CORDL_TYPE SpaceshipSegmentEvent : public ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase {
public:
// Declarations
/// @brief Field build_version, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_build_version, put=__cordl_internal_set_build_version)) ::StringW  build_version;

/// @brief Field duration_s, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration_s, put=__cordl_internal_set_duration_s)) uint32_t  duration_s;

/// @brief Field event_type, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_event_type, put=__cordl_internal_set_event_type)) ::StringW  event_type;

/// @brief Field seg_name, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_seg_name, put=__cordl_internal_set_seg_name)) ::StringW  seg_name;

/// @brief Field seg_type, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_seg_type, put=__cordl_internal_set_seg_type)) ::StringW  seg_type;

/// @brief Field settings, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  settings;

/// @brief Method ApplyBasicFields, addr 0x31d1588, size 0x1c, virtual true, abstract: false, final false
inline void ApplyBasicFields(::OSCE::Analytics::AnalyticsManager*  manager) ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_build_version() const;

constexpr ::StringW& __cordl_internal_get_build_version() ;

constexpr uint32_t const& __cordl_internal_get_duration_s() const;

constexpr uint32_t& __cordl_internal_get_duration_s() ;

constexpr ::StringW const& __cordl_internal_get_event_type() const;

constexpr ::StringW& __cordl_internal_get_event_type() ;

constexpr ::StringW const& __cordl_internal_get_seg_name() const;

constexpr ::StringW& __cordl_internal_get_seg_name() ;

constexpr ::StringW const& __cordl_internal_get_seg_type() const;

constexpr ::StringW& __cordl_internal_get_seg_type() ;

constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* const& __cordl_internal_get_settings() const;

constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_build_version(::StringW  value) ;

constexpr void __cordl_internal_set_duration_s(uint32_t  value) ;

constexpr void __cordl_internal_set_event_type(::StringW  value) ;

constexpr void __cordl_internal_set_seg_name(::StringW  value) ;

constexpr void __cordl_internal_set_seg_type(::StringW  value) ;

constexpr void __cordl_internal_set_settings(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  value) ;

/// @brief Method .ctor, addr 0x31cde18, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceshipSegmentEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipSegmentEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceshipSegmentEvent(SpaceshipSegmentEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipSegmentEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceshipSegmentEvent(SpaceshipSegmentEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22112};

/// @brief Field build_version, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___build_version;

/// @brief Field seg_name, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___seg_name;

/// @brief Field seg_type, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___seg_type;

/// @brief Field duration_s, offset: 0x80, size: 0x4, def value: None
 uint32_t  ___duration_s;

/// @brief Field event_type, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___event_type;

/// @brief Field settings, offset: 0x90, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent, ___build_version) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent, ___seg_name) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent, ___seg_type) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent, ___duration_s) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent, ___event_type) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent, ___settings) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent, 0x98>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEvent*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipSegmentEvent");
