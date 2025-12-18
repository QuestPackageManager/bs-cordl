#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSessionAnalyticsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameSessionAnalyticsManager)
namespace GlobalNamespace {
class IAnalyticsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSessionAnalyticsManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameSessionAnalyticsManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSessionAnalyticsManager
class CORDL_TYPE GameSessionAnalyticsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field lastSessionStartTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lastSessionStartTime, put = __cordl_internal_set_lastSessionStartTime)) float_t lastSessionStartTime;

  /// @brief Method LogSessionEventOnFocus, addr 0x5706244, size 0xc, virtual false, abstract: false, final false
  inline void LogSessionEventOnFocus(bool hasFocus);

  /// @brief Method LogSessionFinish, addr 0x5706324, size 0xf8, virtual false, abstract: false, final false
  inline void LogSessionFinish();

  /// @brief Method LogSessionStart, addr 0x5706250, size 0xd4, virtual false, abstract: false, final false
  inline void LogSessionStart();

  static inline ::GlobalNamespace::GameSessionAnalyticsManager* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x5706238, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr float_t const& __cordl_internal_get_lastSessionStartTime() const;

  constexpr float_t& __cordl_internal_get_lastSessionStartTime();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set_lastSessionStartTime(float_t value);

  /// @brief Method .ctor, addr 0x570641c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSessionAnalyticsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameSessionAnalyticsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameSessionAnalyticsManager(GameSessionAnalyticsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameSessionAnalyticsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameSessionAnalyticsManager(GameSessionAnalyticsManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5542 };

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field lastSessionStartTime, offset: 0x28, size: 0x4, def value: None
  float_t ___lastSessionStartTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager, ____analyticsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager, ___lastSessionStartTime) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameSessionAnalyticsManager, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameSessionAnalyticsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameSessionAnalyticsManager*, "", "GameSessionAnalyticsManager");
