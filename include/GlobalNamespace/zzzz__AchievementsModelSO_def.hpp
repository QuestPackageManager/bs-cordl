#pragma once
// IWYU pragma private; include "GlobalNamespace/AchievementsModelSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AchievementsModelSO)
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class AchievementsModelSO___c__DisplayClass4_0;
}
namespace GlobalNamespace {
struct IPlatformAchievementsHandler_GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
struct IPlatformAchievementsHandler_UnlockAchievementResult;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
class AchievementsModelSO___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AchievementsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::AchievementsModelSO___c__DisplayClass4_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AchievementsModelSO/<>c__DisplayClass4_0
class CORDL_TYPE AchievementsModelSO___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AchievementsModelSO> __4__this;

  /// @brief Field achievementId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_achievementId, put = __cordl_internal_set_achievementId)) ::StringW achievementId;

  static inline ::GlobalNamespace::AchievementsModelSO___c__DisplayClass4_0* New_ctor();

  /// @brief Method <UnlockAchievement>b__0, addr 0x26a1c84, size 0x70, virtual false, abstract: false, final false
  inline void _UnlockAchievement_b__0(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult result);

  constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_achievementId() const;

  constexpr ::StringW& __cordl_internal_get_achievementId();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AchievementsModelSO> value);

  constexpr void __cordl_internal_set_achievementId(::StringW value);

  /// @brief Method .ctor, addr 0x26a1a64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementsModelSO___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AchievementsModelSO___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementsModelSO___c__DisplayClass4_0(AchievementsModelSO___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementsModelSO___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementsModelSO___c__DisplayClass4_0(AchievementsModelSO___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12745 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementsModelSO> _____4__this;

  /// @brief Field achievementId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___achievementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AchievementsModelSO___c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsModelSO___c__DisplayClass4_0, ___achievementId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementsModelSO___c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AchievementsModelSO
class CORDL_TYPE AchievementsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::GlobalNamespace::AchievementsModelSO___c__DisplayClass4_0;

  /// @brief Field _initialized, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _platformAchievementsHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platformAchievementsHandler,
                      put = __cordl_internal_set__platformAchievementsHandler)) ::GlobalNamespace::IPlatformAchievementsHandler* _platformAchievementsHandler;

  /// @brief Field _unlockedAchievementIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__unlockedAchievementIds,
                      put = __cordl_internal_set__unlockedAchievementIds)) ::System::Collections::Generic::HashSet_1<::StringW>* _unlockedAchievementIds;

  /// @brief Method Initialize, addr 0x26a09bc, size 0x170, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method IsAchievementUnlocked, addr 0x26a1af8, size 0x6c, virtual false, abstract: false, final false
  inline bool IsAchievementUnlocked(::GlobalNamespace::AchievementSO* achievement);

  static inline ::GlobalNamespace::AchievementsModelSO* New_ctor();

  /// @brief Method UnlockAchievement, addr 0x26a1850, size 0x180, virtual false, abstract: false, final false
  inline void UnlockAchievement(::GlobalNamespace::AchievementSO* achievement);

  /// @brief Method <Initialize>b__3_0, addr 0x26a1be0, size 0xa4, virtual false, abstract: false, final false
  inline void _Initialize_b__3_0(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult result, ::ArrayW<::StringW, ::Array<::StringW>*> achievementIds);

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::GlobalNamespace::IPlatformAchievementsHandler* const& __cordl_internal_get__platformAchievementsHandler() const;

  constexpr ::GlobalNamespace::IPlatformAchievementsHandler*& __cordl_internal_get__platformAchievementsHandler();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__unlockedAchievementIds() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__unlockedAchievementIds();

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__platformAchievementsHandler(::GlobalNamespace::IPlatformAchievementsHandler* value);

  constexpr void __cordl_internal_set__unlockedAchievementIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x26a1b64, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementsModelSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AchievementsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementsModelSO(AchievementsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementsModelSO(AchievementsModelSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12746 };

  /// @brief Field _platformAchievementsHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformAchievementsHandler* ____platformAchievementsHandler;

  /// @brief Field _unlockedAchievementIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____unlockedAchievementIds;

  /// @brief Field _initialized, offset: 0x28, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AchievementsModelSO, ____platformAchievementsHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsModelSO, ____unlockedAchievementIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsModelSO, ____initialized) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementsModelSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementsModelSO*, "", "AchievementsModelSO");
NEED_NO_BOX(::GlobalNamespace::AchievementsModelSO___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementsModelSO___c__DisplayClass4_0*, "", "AchievementsModelSO/<>c__DisplayClass4_0");
