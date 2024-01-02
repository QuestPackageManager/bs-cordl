#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AchievementsModelSO)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
class __AchievementsModelSO____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__UnlockAchievementResult;
}
// Forward declare root types
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
class __AchievementsModelSO____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AchievementsModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4087))
// CS Name: ::AchievementsModelSO::<>c__DisplayClass4_0*
class CORDL_TYPE __AchievementsModelSO____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::AchievementsModelSO* __4__this;

  /// @brief Field achievementId, offset 0x18, size 0x8
  __declspec(property(get = __get_achievementId, put = __set_achievementId))::StringW achievementId;

  constexpr ::GlobalNamespace::AchievementsModelSO*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::AchievementsModelSO* value);

  constexpr ::StringW& __get_achievementId();

  constexpr ::StringW const& __get_achievementId() const;

  constexpr void __set_achievementId(::StringW value);

  static inline ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0* New_ctor();

  /// @brief Method .ctor, addr 0x2232fa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <UnlockAchievement>b__0, addr 0x2233194, size 0x70, virtual false, abstract: false, final false
  inline void _UnlockAchievement_b__0(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult result);

  // Ctor Parameters [CppParam { name: "", ty: "__AchievementsModelSO____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AchievementsModelSO____c__DisplayClass4_0(__AchievementsModelSO____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AchievementsModelSO____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AchievementsModelSO____c__DisplayClass4_0(__AchievementsModelSO____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AchievementsModelSO____c__DisplayClass4_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AchievementsModelSO* _____4__this;

  /// @brief Field achievementId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___achievementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0, ___achievementId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AchievementsModelSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4088))
// CS Name: ::AchievementsModelSO*
class CORDL_TYPE AchievementsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0;

  /// @brief Field _platformAchievementsHandler, offset 0x18, size 0x8
  __declspec(property(get = __get__platformAchievementsHandler, put = __set__platformAchievementsHandler))::GlobalNamespace::IPlatformAchievementsHandler* _platformAchievementsHandler;

  /// @brief Field _unlockedAchievementIds, offset 0x20, size 0x8
  __declspec(property(get = __get__unlockedAchievementIds, put = __set__unlockedAchievementIds))::System::Collections::Generic::HashSet_1<::StringW>* _unlockedAchievementIds;

  /// @brief Field _initialized, offset 0x28, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  constexpr ::GlobalNamespace::IPlatformAchievementsHandler*& __get__platformAchievementsHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformAchievementsHandler*> const& __get__platformAchievementsHandler() const;

  constexpr void __set__platformAchievementsHandler(::GlobalNamespace::IPlatformAchievementsHandler* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__unlockedAchievementIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__unlockedAchievementIds() const;

  constexpr void __set__unlockedAchievementIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  /// @brief Method Initialize, addr 0x2231cc4, size 0x174, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method UnlockAchievement, addr 0x2232d58, size 0x184, virtual false, abstract: false, final false
  inline void UnlockAchievement(::GlobalNamespace::AchievementSO* achievement);

  static inline ::GlobalNamespace::AchievementsModelSO* New_ctor();

  /// @brief Method .ctor, addr 0x2233074, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Initialize>b__3_0, addr 0x22330f0, size 0xa4, virtual false, abstract: false, final false
  inline void _Initialize_b__3_0(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result, ::ArrayW<::StringW, ::Array<::StringW>*> achievementIds);

  // Ctor Parameters [CppParam { name: "", ty: "AchievementsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementsModelSO(AchievementsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementsModelSO(AchievementsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementsModelSO();

public:
  /// @brief Field _platformAchievementsHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformAchievementsHandler* ____platformAchievementsHandler;

  /// @brief Field _unlockedAchievementIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____unlockedAchievementIds;

  /// @brief Field _initialized, offset: 0x28, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementsModelSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsModelSO, ____platformAchievementsHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsModelSO, ____unlockedAchievementIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementsModelSO, ____initialized) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementsModelSO*, "", "AchievementsModelSO");
NEED_NO_BOX(::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*, "", "AchievementsModelSO/<>c__DisplayClass4_0");
