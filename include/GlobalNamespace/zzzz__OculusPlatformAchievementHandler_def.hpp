#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusPlatformAchievementHandler)
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler_UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
class OculusPlatformAchievementHandler___c__DisplayClass2_0;
}
namespace GlobalNamespace {
class OculusPlatformAchievementHandler___c__DisplayClass3_0;
}
namespace GlobalNamespace {
class OculusPlatformAchievementHandler___c__DisplayClass3_1;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class AchievementProgress;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformAchievementHandler;
}
namespace GlobalNamespace {
class OculusPlatformAchievementHandler___c__DisplayClass2_0;
}
namespace GlobalNamespace {
class OculusPlatformAchievementHandler___c__DisplayClass3_0;
}
namespace GlobalNamespace {
class OculusPlatformAchievementHandler___c__DisplayClass3_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAchievementHandler);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass2_0);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_0);
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_1);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformAchievementHandler/<>c__DisplayClass2_0
class CORDL_TYPE OculusPlatformAchievementHandler___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field completionHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_completionHandler,
                      put = __cordl_internal_set_completionHandler)) ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* completionHandler;

  static inline ::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass2_0* New_ctor();

  /// @brief Method <UnlockAchievement>b__0, addr 0x26e8238, size 0x40, virtual false, abstract: false, final false
  inline void _UnlockAchievement_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*>* message);

  constexpr ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* const& __cordl_internal_get_completionHandler() const;

  constexpr ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*& __cordl_internal_get_completionHandler();

  constexpr void __cordl_internal_set_completionHandler(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* value);

  /// @brief Method .ctor, addr 0x26e8134, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAchievementHandler___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAchievementHandler___c__DisplayClass2_0(OculusPlatformAchievementHandler___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAchievementHandler___c__DisplayClass2_0(OculusPlatformAchievementHandler___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13146 };

  /// @brief Field completionHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* ___completionHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass2_0, ___completionHandler) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformAchievementHandler/<>c__DisplayClass3_0
class CORDL_TYPE OculusPlatformAchievementHandler___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusPlatformAchievementHandler* __4__this;

  /// @brief Field completionHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_completionHandler,
                      put = __cordl_internal_set_completionHandler)) ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* completionHandler;

  static inline ::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_0* New_ctor();

  /// @brief Method <GetUnlockedAchievements>b__0, addr 0x26e8278, size 0x518, virtual false, abstract: false, final false
  inline void _GetUnlockedAchievements_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>* message);

  constexpr ::GlobalNamespace::OculusPlatformAchievementHandler* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OculusPlatformAchievementHandler*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* const& __cordl_internal_get_completionHandler() const;

  constexpr ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*& __cordl_internal_get_completionHandler();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformAchievementHandler* value);

  constexpr void __cordl_internal_set_completionHandler(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* value);

  /// @brief Method .ctor, addr 0x26e8228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAchievementHandler___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAchievementHandler___c__DisplayClass3_0(OculusPlatformAchievementHandler___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAchievementHandler___c__DisplayClass3_0(OculusPlatformAchievementHandler___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13147 };

  /// @brief Field completionHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* ___completionHandler;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAchievementHandler* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_0, ___completionHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformAchievementHandler/<>c__DisplayClass3_1
class CORDL_TYPE OculusPlatformAchievementHandler___c__DisplayClass3_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field achievement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_achievement, put = __cordl_internal_set_achievement)) ::Oculus::Platform::Models::AchievementProgress* achievement;

  static inline ::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_1* New_ctor();

  /// @brief Method <GetUnlockedAchievements>b__1, addr 0x26e8798, size 0x28, virtual false, abstract: false, final false
  inline bool _GetUnlockedAchievements_b__1(::GlobalNamespace::AchievementSO* x);

  constexpr ::Oculus::Platform::Models::AchievementProgress* const& __cordl_internal_get_achievement() const;

  constexpr ::Oculus::Platform::Models::AchievementProgress*& __cordl_internal_get_achievement();

  constexpr void __cordl_internal_set_achievement(::Oculus::Platform::Models::AchievementProgress* value);

  /// @brief Method .ctor, addr 0x26e8790, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAchievementHandler___c__DisplayClass3_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler___c__DisplayClass3_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAchievementHandler___c__DisplayClass3_1(OculusPlatformAchievementHandler___c__DisplayClass3_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler___c__DisplayClass3_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAchievementHandler___c__DisplayClass3_1(OculusPlatformAchievementHandler___c__DisplayClass3_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13148 };

  /// @brief Field achievement, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::AchievementProgress* ___achievement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_1, ___achievement) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_1, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IPlatformAchievementsHandler, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusPlatformAchievementHandler
class CORDL_TYPE OculusPlatformAchievementHandler : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_0;

  using __c__DisplayClass3_1 = ::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_1;

  /// @brief Field _achievementIdsModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementIdsModel, put = __cordl_internal_set__achievementIdsModel)) ::UnityW<::GlobalNamespace::AchievementIdsModelSO> _achievementIdsModel;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformAchievementsHandler"
  constexpr operator ::GlobalNamespace::IPlatformAchievementsHandler*() noexcept;

  /// @brief Method GetUnlockedAchievements, addr 0x26e813c, size 0xec, virtual true, abstract: false, final true
  inline ::GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* completionHandler);

  /// @brief Method Initialize, addr 0x26e8040, size 0x4, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::OculusPlatformAchievementHandler* New_ctor();

  /// @brief Method UnlockAchievement, addr 0x26e8044, size 0xf0, virtual true, abstract: false, final true
  inline ::GlobalNamespace::HMAsyncRequest* UnlockAchievement(::StringW achievementId, ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* completionHandler);

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& __cordl_internal_get__achievementIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& __cordl_internal_get__achievementIdsModel();

  constexpr void __cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value);

  /// @brief Method .ctor, addr 0x26e8230, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IPlatformAchievementsHandler"
  constexpr ::GlobalNamespace::IPlatformAchievementsHandler* i___GlobalNamespace__IPlatformAchievementsHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAchievementHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAchievementHandler(OculusPlatformAchievementHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAchievementHandler(OculusPlatformAchievementHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13149 };

  /// @brief Field _achievementIdsModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementIdsModelSO> ____achievementIdsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusPlatformAchievementHandler, ____achievementIdsModel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAchievementHandler, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAchievementHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAchievementHandler*, "", "OculusPlatformAchievementHandler");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass2_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_0");
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAchievementHandler___c__DisplayClass3_1*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_1");
