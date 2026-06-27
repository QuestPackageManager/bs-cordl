#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/IHMDSessionEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHMDSessionEventSender)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IHMDSessionEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender);
// Dependencies 
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.IHMDSessionEventSender
class CORDL_TYPE IHMDSessionEventSender {
public:
// Declarations
/// @brief Method SendHMDSessionEnd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendHMDSessionEnd() ;

/// @brief Method SendHMDSessionStart, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendHMDSessionStart() ;

// Ctor Parameters [CppParam { name: "", ty: "IHMDSessionEventSender", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHMDSessionEventSender(IHMDSessionEventSender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "IHMDSessionEventSender");
