#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifiersModelSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayModifiersModelSO)
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO_GameplayModifierBoolGetter;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO___c;
}
namespace GlobalNamespace {
struct GameplayModifiers_SongSpeed;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO_GameplayModifierBoolGetter;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersModelSO);
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter);
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersModelSO___c);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifiersModelSO/GameplayModifierBoolGetter
class CORDL_TYPE GameplayModifiersModelSO_GameplayModifierBoolGetter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x26b4e04, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x26b4e24, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x26b4df0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x26b4304, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersModelSO_GameplayModifierBoolGetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO_GameplayModifierBoolGetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersModelSO_GameplayModifierBoolGetter(GameplayModifiersModelSO_GameplayModifierBoolGetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO_GameplayModifierBoolGetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersModelSO_GameplayModifierBoolGetter(GameplayModifiersModelSO_GameplayModifierBoolGetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifiersModelSO/<>c
class CORDL_TYPE GameplayModifiersModelSO___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::GameplayModifiersModelSO___c* __9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_0, put = setStaticF___9__21_0)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_0;

  /// @brief Field <>9__21_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_1, put = setStaticF___9__21_1)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_1;

  /// @brief Field <>9__21_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_10, put = setStaticF___9__21_10)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_10;

  /// @brief Field <>9__21_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_11, put = setStaticF___9__21_11)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_11;

  /// @brief Field <>9__21_12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_12, put = setStaticF___9__21_12)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_12;

  /// @brief Field <>9__21_13, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_13, put = setStaticF___9__21_13)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_13;

  /// @brief Field <>9__21_14, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_14, put = setStaticF___9__21_14)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_14;

  /// @brief Field <>9__21_15, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_15, put = setStaticF___9__21_15)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_15;

  /// @brief Field <>9__21_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_2, put = setStaticF___9__21_2)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_2;

  /// @brief Field <>9__21_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_3, put = setStaticF___9__21_3)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_3;

  /// @brief Field <>9__21_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_4, put = setStaticF___9__21_4)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_4;

  /// @brief Field <>9__21_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_5, put = setStaticF___9__21_5)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_5;

  /// @brief Field <>9__21_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_6, put = setStaticF___9__21_6)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_6;

  /// @brief Field <>9__21_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_7, put = setStaticF___9__21_7)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_7;

  /// @brief Field <>9__21_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_8, put = setStaticF___9__21_8)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_8;

  /// @brief Field <>9__21_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_9, put = setStaticF___9__21_9)) ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* __9__21_9;

  static inline ::GlobalNamespace::GameplayModifiersModelSO___c* New_ctor();

  /// @brief Method <OnEnable>b__21_0, addr 0x26b4eb0, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_0(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_1, addr 0x26b4ed0, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_1(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_10, addr 0x26b4fc0, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_10(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_11, addr 0x26b4fe0, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_11(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_12, addr 0x26b4ff8, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_12(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_13, addr 0x26b5010, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_13(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_14, addr 0x26b5028, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_14(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_15, addr 0x26b5040, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_15(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_2, addr 0x26b4ee8, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_2(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_3, addr 0x26b4f00, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_3(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_4, addr 0x26b4f20, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_4(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_5, addr 0x26b4f38, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_5(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_6, addr 0x26b4f50, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_6(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_7, addr 0x26b4f68, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_7(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_8, addr 0x26b4f80, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_8(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__21_9, addr 0x26b4fa0, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__21_9(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method .ctor, addr 0x26b4ea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::GameplayModifiersModelSO___c* getStaticF___9();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_0();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_1();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_10();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_11();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_12();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_13();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_14();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_15();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_2();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_3();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_4();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_5();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_6();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_7();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_8();

  static inline ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* getStaticF___9__21_9();

  static inline void setStaticF___9(::GlobalNamespace::GameplayModifiersModelSO___c* value);

  static inline void setStaticF___9__21_0(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_1(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_10(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_11(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_12(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_13(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_14(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_15(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_2(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_3(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_4(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_5(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_6(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_7(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_8(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

  static inline void setStaticF___9__21_9(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersModelSO___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersModelSO___c(GameplayModifiersModelSO___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersModelSO___c(GameplayModifiersModelSO___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersModelSO___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifiersModelSO
class CORDL_TYPE GameplayModifiersModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using GameplayModifierBoolGetter = ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter;

  using __c = ::GlobalNamespace::GameplayModifiersModelSO___c;

  /// @brief Field _batteryEnergy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__batteryEnergy, put = __cordl_internal_set__batteryEnergy)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _batteryEnergy;

  /// @brief Field _disappearingArrows, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__disappearingArrows, put = __cordl_internal_set__disappearingArrows)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _disappearingArrows;

  /// @brief Field _fastNotes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__fastNotes, put = __cordl_internal_set__fastNotes)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _fastNotes;

  /// @brief Field _fasterSong, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__fasterSong, put = __cordl_internal_set__fasterSong)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _fasterSong;

  /// @brief Field _gameplayModifierGetters, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifierGetters, put = __cordl_internal_set__gameplayModifierGetters)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>* _gameplayModifierGetters;

  /// @brief Field _ghostNotes, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__ghostNotes, put = __cordl_internal_set__ghostNotes)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _ghostNotes;

  /// @brief Field _instaFail, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__instaFail, put = __cordl_internal_set__instaFail)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _instaFail;

  /// @brief Field _noArrows, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__noArrows, put = __cordl_internal_set__noArrows)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _noArrows;

  /// @brief Field _noBombs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__noBombs, put = __cordl_internal_set__noBombs)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _noBombs;

  /// @brief Field _noFailOn0Energy, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__noFailOn0Energy, put = __cordl_internal_set__noFailOn0Energy)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _noFailOn0Energy;

  /// @brief Field _noObstacles, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__noObstacles, put = __cordl_internal_set__noObstacles)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _noObstacles;

  /// @brief Field _proMode, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__proMode, put = __cordl_internal_set__proMode)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _proMode;

  /// @brief Field _slowerSong, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__slowerSong, put = __cordl_internal_set__slowerSong)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _slowerSong;

  /// @brief Field _smallCubes, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__smallCubes, put = __cordl_internal_set__smallCubes)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _smallCubes;

  /// @brief Field _strictAngles, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__strictAngles, put = __cordl_internal_set__strictAngles)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _strictAngles;

  /// @brief Field _superFastSong, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__superFastSong, put = __cordl_internal_set__superFastSong)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _superFastSong;

  /// @brief Field _zenMode, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__zenMode, put = __cordl_internal_set__zenMode)) ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> _zenMode;

  __declspec(property(get =
                          get_gameplayModifierGetters)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>,
                                                                                                     ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>* gameplayModifierGetters;

  /// @brief Method CreateGameplayModifiers, addr 0x26b4404, size 0x270, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* CreateGameplayModifiers(::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>* valueGetter);

  /// @brief Method CreateModifierParamsList, addr 0x26b4794, size 0x290, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* CreateModifierParamsList(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method GetGameplayModifierParams, addr 0x26b4c98, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> GetGameplayModifierParams(::GlobalNamespace::GameplayModifierMask modifier);

  /// @brief Method GetModifiedScoreForGameplayModifiers, addr 0x26b4c08, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetModifiedScoreForGameplayModifiers(int32_t multipliedScore, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams,
                                                      float_t energy);

  /// @brief Method GetModifierBoolValue, addr 0x26b46f8, size 0x9c, virtual false, abstract: false, final false
  inline bool GetModifierBoolValue(::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams);

  /// @brief Method GetSongSpeedFromValueGetter, addr 0x26b4674, size 0x84, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers_SongSpeed GetSongSpeedFromValueGetter(::System::Func_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, bool>* valueGetter);

  /// @brief Method GetTotalMultiplier, addr 0x26b4a24, size 0x1e0, virtual false, abstract: false, final false
  inline float_t GetTotalMultiplier(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams, float_t energy);

  /// @brief Method MaxModifiedScoreForMaxMultipliedScore, addr 0x26b4c04, size 0x4, virtual false, abstract: false, final false
  inline int32_t MaxModifiedScoreForMaxMultipliedScore(int32_t maxMultipliedScore, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams,
                                                       float_t energy);

  /// @brief Method MaxModifiedScoreForMaxMultipliedScore, addr 0x26b4c94, size 0x4, virtual false, abstract: false, final false
  inline int32_t MaxModifiedScoreForMaxMultipliedScore(int32_t maxMultipliedScore, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams,
                                                       ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, float_t energy);

  static inline ::GlobalNamespace::GameplayModifiersModelSO* New_ctor();

  /// @brief Method OnEnable, addr 0x26b3940, size 0x9c4, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__batteryEnergy() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__batteryEnergy();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__disappearingArrows() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__disappearingArrows();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__fastNotes() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__fastNotes();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__fasterSong() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__fasterSong();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>* const&
  __cordl_internal_get__gameplayModifierGetters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>*&
  __cordl_internal_get__gameplayModifierGetters();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__ghostNotes() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__ghostNotes();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__instaFail() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__instaFail();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__noArrows() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__noArrows();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__noBombs() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__noBombs();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__noFailOn0Energy() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__noFailOn0Energy();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__noObstacles() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__noObstacles();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__proMode() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__proMode();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__slowerSong() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__slowerSong();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__smallCubes() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__smallCubes();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__strictAngles() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__strictAngles();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__superFastSong() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__superFastSong();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> const& __cordl_internal_get__zenMode() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierParamsSO>& __cordl_internal_get__zenMode();

  constexpr void __cordl_internal_set__batteryEnergy(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__disappearingArrows(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__fastNotes(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__fasterSong(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__gameplayModifierGetters(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>* value);

  constexpr void __cordl_internal_set__ghostNotes(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__instaFail(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__noArrows(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__noBombs(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__noFailOn0Energy(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__noObstacles(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__proMode(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__slowerSong(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__smallCubes(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__strictAngles(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__superFastSong(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  constexpr void __cordl_internal_set__zenMode(::UnityW<::GlobalNamespace::GameplayModifierParamsSO> value);

  /// @brief Method .ctor, addr 0x26b4de8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameplayModifierGetters, addr 0x26b3938, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>*
  get_gameplayModifierGetters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersModelSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersModelSO(GameplayModifiersModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersModelSO(GameplayModifiersModelSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12863 };

  /// @brief Field kMaxPossibleMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kMaxPossibleMultiplier{ static_cast<float_t>(1.21f) };

  /// @brief Field _batteryEnergy, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____batteryEnergy;

  /// @brief Field _instaFail, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____instaFail;

  /// @brief Field _noObstacles, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____noObstacles;

  /// @brief Field _noBombs, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____noBombs;

  /// @brief Field _fastNotes, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____fastNotes;

  /// @brief Field _strictAngles, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____strictAngles;

  /// @brief Field _disappearingArrows, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____disappearingArrows;

  /// @brief Field _fasterSong, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____fasterSong;

  /// @brief Field _slowerSong, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____slowerSong;

  /// @brief Field _noArrows, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____noArrows;

  /// @brief Field _ghostNotes, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____ghostNotes;

  /// @brief Field _noFailOn0Energy, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____noFailOn0Energy;

  /// @brief Field _superFastSong, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____superFastSong;

  /// @brief Field _proMode, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____proMode;

  /// @brief Field _zenMode, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____zenMode;

  /// @brief Field _smallCubes, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierParamsSO> ____smallCubes;

  /// @brief Field _gameplayModifierGetters, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>, ::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*>*
      ____gameplayModifierGetters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____batteryEnergy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____instaFail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____noObstacles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____noBombs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____fastNotes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____strictAngles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____disappearingArrows) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____fasterSong) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____slowerSong) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____noArrows) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____ghostNotes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____noFailOn0Energy) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____superFastSong) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____proMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____zenMode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____smallCubes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersModelSO, ____gameplayModifierGetters) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersModelSO, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersModelSO*, "", "GameplayModifiersModelSO");
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersModelSO_GameplayModifierBoolGetter*, "", "GameplayModifiersModelSO/GameplayModifierBoolGetter");
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersModelSO___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersModelSO___c*, "", "GameplayModifiersModelSO/<>c");
