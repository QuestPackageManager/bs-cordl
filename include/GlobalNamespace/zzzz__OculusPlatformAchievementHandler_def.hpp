#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusPlatformAchievementHandler)
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
class __OculusPlatformAchievementHandler____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
namespace GlobalNamespace {
class __OculusPlatformAchievementHandler____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class __OculusPlatformAchievementHandler____c__DisplayClass3_1;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace GlobalNamespace {
class AchievementSO;
}
namespace Oculus::Platform::Models {
class AchievementProgress;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformAchievementHandler;
}
namespace GlobalNamespace {
class __OculusPlatformAchievementHandler____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class __OculusPlatformAchievementHandler____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class __OculusPlatformAchievementHandler____c__DisplayClass3_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAchievementHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4630))
// CS Name: ::OculusPlatformAchievementHandler::<>c__DisplayClass2_0*
class CORDL_TYPE __OculusPlatformAchievementHandler____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field completionHandler, offset 0x10, size 0x8
  __declspec(property(get = __get_completionHandler, put = __set_completionHandler))::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* completionHandler;

  constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*& __get_completionHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*> const& __get_completionHandler() const;

  constexpr void __set_completionHandler(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* value);

  static inline ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0* New_ctor();

  /// @brief Method .ctor addr 0x222d294 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <UnlockAchievement>b__0 addr 0x222d39c size 0x40 virtual false final false
  inline void _UnlockAchievement_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*>* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAchievementHandler____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformAchievementHandler____c__DisplayClass2_0(__OculusPlatformAchievementHandler____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAchievementHandler____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformAchievementHandler____c__DisplayClass2_0(__OculusPlatformAchievementHandler____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAchievementHandler____c__DisplayClass2_0();

public:
  /// @brief Field completionHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* ___completionHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0, ___completionHandler) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4631))
// CS Name: ::OculusPlatformAchievementHandler::<>c__DisplayClass3_0*
class CORDL_TYPE __OculusPlatformAchievementHandler____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field completionHandler, offset 0x10, size 0x8
  __declspec(property(get = __get_completionHandler, put = __set_completionHandler))::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* completionHandler;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusPlatformAchievementHandler* __4__this;

  constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*& __get_completionHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*> const& __get_completionHandler() const;

  constexpr void __set_completionHandler(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* value);

  constexpr ::GlobalNamespace::OculusPlatformAchievementHandler*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAchievementHandler*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAchievementHandler* value);

  static inline ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor addr 0x222d38c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUnlockedAchievements>b__0 addr 0x222d3dc size 0x528 virtual false final false
  inline void _GetUnlockedAchievements_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>* message);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAchievementHandler____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformAchievementHandler____c__DisplayClass3_0(__OculusPlatformAchievementHandler____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAchievementHandler____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformAchievementHandler____c__DisplayClass3_0(__OculusPlatformAchievementHandler____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAchievementHandler____c__DisplayClass3_0();

public:
  /// @brief Field completionHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* ___completionHandler;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAchievementHandler* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0, ___completionHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass3_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4632))
// CS Name: ::OculusPlatformAchievementHandler::<>c__DisplayClass3_1*
class CORDL_TYPE __OculusPlatformAchievementHandler____c__DisplayClass3_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field achievement, offset 0x10, size 0x8
  __declspec(property(get = __get_achievement, put = __set_achievement))::Oculus::Platform::Models::AchievementProgress* achievement;

  constexpr ::Oculus::Platform::Models::AchievementProgress*& __get_achievement();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AchievementProgress*> const& __get_achievement() const;

  constexpr void __set_achievement(::Oculus::Platform::Models::AchievementProgress* value);

  static inline ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1* New_ctor();

  /// @brief Method .ctor addr 0x222d904 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUnlockedAchievements>b__1 addr 0x222d90c size 0x28 virtual false final false
  inline bool _GetUnlockedAchievements_b__1(::GlobalNamespace::AchievementSO* x);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAchievementHandler____c__DisplayClass3_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusPlatformAchievementHandler____c__DisplayClass3_1(__OculusPlatformAchievementHandler____c__DisplayClass3_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAchievementHandler____c__DisplayClass3_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusPlatformAchievementHandler____c__DisplayClass3_1(__OculusPlatformAchievementHandler____c__DisplayClass3_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusPlatformAchievementHandler____c__DisplayClass3_1();

public:
  /// @brief Field achievement, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::AchievementProgress* ___achievement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1, ___achievement) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusPlatformAchievementHandler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4633))
// CS Name: ::OculusPlatformAchievementHandler*
class CORDL_TYPE OculusPlatformAchievementHandler : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass3_1 = ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1;

  using __c__DisplayClass3_0 = ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0;

  using __c__DisplayClass2_0 = ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0;

  /// @brief Field _achievementIdsModel, offset 0x10, size 0x8
  __declspec(property(get = __get__achievementIdsModel, put = __set__achievementIdsModel))::GlobalNamespace::AchievementIdsModelSO* _achievementIdsModel;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformAchievementsHandler"
  constexpr operator ::GlobalNamespace::IPlatformAchievementsHandler*() noexcept;

  constexpr ::GlobalNamespace::AchievementIdsModelSO*& __get__achievementIdsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementIdsModelSO*> const& __get__achievementIdsModel() const;

  constexpr void __set__achievementIdsModel(::GlobalNamespace::AchievementIdsModelSO* value);

  /// @brief Method Initialize addr 0x222d19c size 0x4 virtual true final true
  inline void Initialize();

  /// @brief Method UnlockAchievement addr 0x222d1a0 size 0xf4 virtual true final true
  inline ::GlobalNamespace::HMAsyncRequest* UnlockAchievement(::StringW achievementId, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* completionHandler);

  /// @brief Method GetUnlockedAchievements addr 0x222d29c size 0xf0 virtual true final true
  inline ::GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* completionHandler);

  static inline ::GlobalNamespace::OculusPlatformAchievementHandler* New_ctor();

  /// @brief Method .ctor addr 0x222d394 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformAchievementHandler(OculusPlatformAchievementHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformAchievementHandler(OculusPlatformAchievementHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformAchievementHandler();

public:
  /// @brief Field _achievementIdsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AchievementIdsModelSO* ____achievementIdsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAchievementHandler, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusPlatformAchievementHandler, ____achievementIdsModel) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAchievementHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAchievementHandler*, "", "OculusPlatformAchievementHandler");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_1");
