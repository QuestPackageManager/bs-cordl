#pragma once
// IWYU pragma private; include "BeatGames/Analytics/NavigationEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NavigationEventSender)
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatGames::Analytics {
class NavigationEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::NavigationEventSender);
// Dependencies System.Object
namespace BeatGames::Analytics {
// Is value type: false
// CS Name: BeatGames.Analytics.NavigationEventSender
class CORDL_TYPE NavigationEventSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _analyticsManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsManager, put = __cordl_internal_set__analyticsManager)) ::UnityW<::OSCE::Analytics::AnalyticsManager> _analyticsManager;

  static inline ::BeatGames::Analytics::NavigationEventSender* New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager);

  /// @brief Method SendButtonClick, addr 0x3161480, size 0xf0, virtual false, abstract: false, final false
  inline void SendButtonClick(::StringW buttonID, ::StringW screenID);

  /// @brief Method SendScreenImpression, addr 0x3161320, size 0xec, virtual false, abstract: false, final false
  inline void SendScreenImpression(::StringW screenID);

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get__analyticsManager() const;

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get__analyticsManager();

  constexpr void __cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value);

  /// @brief Method .ctor, addr 0x3161308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationEventSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationEventSender(NavigationEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationEventSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationEventSender(NavigationEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22950 };

  /// @brief Field _analyticsManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> ____analyticsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatGames::Analytics::NavigationEventSender, ____analyticsManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::NavigationEventSender, 0x18>, "Size mismatch!");

} // namespace BeatGames::Analytics
NEED_NO_BOX(::BeatGames::Analytics::NavigationEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::NavigationEventSender*, "BeatGames.Analytics", "NavigationEventSender");
