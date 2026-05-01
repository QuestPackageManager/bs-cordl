#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/EventSenders/NoopHMDSessionEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoopHMDSessionEventSender)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IHMDSessionEventSender;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class NoopHMDSessionEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::EventSenders {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.EventSenders.NoopHMDSessionEventSender
class CORDL_TYPE NoopHMDSessionEventSender : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
  constexpr operator ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*() noexcept;

  static inline ::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender* New_ctor();

  /// @brief Method SendHMDSessionEnd, addr 0x31d001c, size 0x4, virtual true, abstract: false, final true
  inline void SendHMDSessionEnd();

  /// @brief Method SendHMDSessionStart, addr 0x31d0018, size 0x4, virtual true, abstract: false, final true
  inline void SendHMDSessionStart();

  /// @brief Method .ctor, addr 0x31ce1d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender"
  constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* i___BeatSaber__Analytics__Gameplay__EventSenders__IHMDSessionEventSender() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoopHMDSessionEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoopHMDSessionEventSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoopHMDSessionEventSender(NoopHMDSessionEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoopHMDSessionEventSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoopHMDSessionEventSender(NoopHMDSessionEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22101 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::EventSenders
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::EventSenders::NoopHMDSessionEventSender*, "BeatSaber.Analytics.Gameplay.EventSenders", "NoopHMDSessionEventSender");
