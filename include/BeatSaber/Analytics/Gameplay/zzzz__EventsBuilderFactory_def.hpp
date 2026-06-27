#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventsBuilderFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventsBuilderFactory)
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilderSharedCache;
}
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilder;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay {
class EventsBuilderFactory;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventsBuilderFactory
class CORDL_TYPE EventsBuilderFactory : public ::System::Object {
public:
// Declarations
/// @brief Field _eventsBuilderSharedCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventsBuilderSharedCache, put=__cordl_internal_set__eventsBuilderSharedCache)) ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*  _eventsBuilderSharedCache;

/// @brief Method Create, addr 0x31ceb10, size 0x60, virtual false, abstract: false, final false
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* Create() ;

static inline ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* New_ctor() ;

constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* const& __cordl_internal_get__eventsBuilderSharedCache() const;

constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*& __cordl_internal_get__eventsBuilderSharedCache() ;

constexpr void __cordl_internal_set__eventsBuilderSharedCache(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*  value) ;

/// @brief Method .ctor, addr 0x31ceb70, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventsBuilderFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventsBuilderFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventsBuilderFactory(EventsBuilderFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventsBuilderFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventsBuilderFactory(EventsBuilderFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22083};

/// @brief Field _eventsBuilderSharedCache, offset: 0x10, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*  ____eventsBuilderSharedCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory, ____eventsBuilderSharedCache) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory, 0x18>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*, "BeatSaber.Analytics.Gameplay", "EventsBuilderFactory");
