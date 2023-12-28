#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EmptyPlatformAchievementsHandler)
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyPlatformAchievementsHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EmptyPlatformAchievementsHandler);
// Type: ::EmptyPlatformAchievementsHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4090))
// CS Name: ::EmptyPlatformAchievementsHandler*
class CORDL_TYPE EmptyPlatformAchievementsHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPlatformAchievementsHandler"
  constexpr operator ::GlobalNamespace::IPlatformAchievementsHandler*() noexcept;

  /// @brief Method Initialize addr 0x2233214 size 0x4 virtual true final true
  inline void Initialize();

  /// @brief Method UnlockAchievement addr 0x2233218 size 0x8 virtual true final true
  inline ::GlobalNamespace::HMAsyncRequest* UnlockAchievement(::StringW achievementId, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* completionHandler);

  /// @brief Method GetUnlockedAchievements addr 0x2233220 size 0x8 virtual true final true
  inline ::GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* completionHandler);

  static inline ::GlobalNamespace::EmptyPlatformAchievementsHandler* New_ctor();

  /// @brief Method .ctor addr 0x2233228 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyPlatformAchievementsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyPlatformAchievementsHandler(EmptyPlatformAchievementsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyPlatformAchievementsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyPlatformAchievementsHandler(EmptyPlatformAchievementsHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyPlatformAchievementsHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmptyPlatformAchievementsHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmptyPlatformAchievementsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyPlatformAchievementsHandler*, "", "EmptyPlatformAchievementsHandler");
