#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipMetricEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpaceshipMetricEvent)
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipMetricEvent;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent);
// Dependencies BeatSaber.Analytics.Gameplay.Events.SpaceshipUserEventBase
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipMetricEvent
class CORDL_TYPE SpaceshipMetricEvent : public ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase {
public:
// Declarations
/// @brief Field build_version, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_build_version, put=__cordl_internal_set_build_version)) ::StringW  build_version;

/// @brief Field metric_name, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_metric_name, put=__cordl_internal_set_metric_name)) ::StringW  metric_name;

/// @brief Field metric_type, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_metric_type, put=__cordl_internal_set_metric_type)) ::StringW  metric_type;

/// @brief Field value, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) float_t  value;

/// @brief Method ApplyBasicFields, addr 0x31d1074, size 0x1c, virtual true, abstract: false, final false
inline void ApplyBasicFields(::OSCE::Analytics::AnalyticsManager*  manager) ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_build_version() const;

constexpr ::StringW& __cordl_internal_get_build_version() ;

constexpr ::StringW const& __cordl_internal_get_metric_name() const;

constexpr ::StringW& __cordl_internal_get_metric_name() ;

constexpr ::StringW const& __cordl_internal_get_metric_type() const;

constexpr ::StringW& __cordl_internal_get_metric_type() ;

constexpr float_t const& __cordl_internal_get_value() const;

constexpr float_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_build_version(::StringW  value) ;

constexpr void __cordl_internal_set_metric_name(::StringW  value) ;

constexpr void __cordl_internal_set_metric_type(::StringW  value) ;

constexpr void __cordl_internal_set_value(float_t  value) ;

/// @brief Method .ctor, addr 0x31ce5d0, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceshipMetricEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipMetricEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceshipMetricEvent(SpaceshipMetricEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipMetricEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceshipMetricEvent(SpaceshipMetricEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22110};

/// @brief Field build_version, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___build_version;

/// @brief Field metric_name, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___metric_name;

/// @brief Field metric_type, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___metric_type;

/// @brief Field value, offset: 0x80, size: 0x4, def value: None
 float_t  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent, ___build_version) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent, ___metric_name) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent, ___metric_type) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent, ___value) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent, 0x88>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricEvent*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipMetricEvent");
