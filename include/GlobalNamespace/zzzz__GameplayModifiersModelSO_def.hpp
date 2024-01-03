#pragma once
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
class GameplayModifiers;
}
namespace GlobalNamespace {
class __GameplayModifiersModelSO__GameplayModifierBoolGetter;
}
namespace GlobalNamespace {
class __GameplayModifiersModelSO____c;
}
namespace GlobalNamespace {
struct __GameplayModifiers__SongSpeed;
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
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class __GameplayModifiersModelSO__GameplayModifierBoolGetter;
}
namespace GlobalNamespace {
class __GameplayModifiersModelSO____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayModifiersModelSO____c);
// Type: ::GameplayModifierBoolGetter
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4198))
// CS Name: ::GameplayModifiersModelSO::GameplayModifierBoolGetter*
class CORDL_TYPE __GameplayModifiersModelSO__GameplayModifierBoolGetter : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x23264e4, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2327004, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method BeginInvoke, addr 0x2327018, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2327038, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersModelSO__GameplayModifierBoolGetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayModifiersModelSO__GameplayModifierBoolGetter(__GameplayModifiersModelSO__GameplayModifierBoolGetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersModelSO__GameplayModifierBoolGetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayModifiersModelSO__GameplayModifierBoolGetter(__GameplayModifiersModelSO__GameplayModifierBoolGetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayModifiersModelSO__GameplayModifierBoolGetter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4199))
// CS Name: ::GameplayModifiersModelSO::<>c*
class CORDL_TYPE __GameplayModifiersModelSO____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__GameplayModifiersModelSO____c* __9;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_0;

  /// @brief Field <>9__18_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_1, put = setStaticF___9__18_1))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_1;

  /// @brief Field <>9__18_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_2, put = setStaticF___9__18_2))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_2;

  /// @brief Field <>9__18_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_3, put = setStaticF___9__18_3))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_3;

  /// @brief Field <>9__18_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_4, put = setStaticF___9__18_4))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_4;

  /// @brief Field <>9__18_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_5, put = setStaticF___9__18_5))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_5;

  /// @brief Field <>9__18_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_6, put = setStaticF___9__18_6))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_6;

  /// @brief Field <>9__18_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_7, put = setStaticF___9__18_7))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_7;

  /// @brief Field <>9__18_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_8, put = setStaticF___9__18_8))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_8;

  /// @brief Field <>9__18_9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_9, put = setStaticF___9__18_9))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_9;

  /// @brief Field <>9__18_10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_10, put = setStaticF___9__18_10))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_10;

  /// @brief Field <>9__18_11, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_11, put = setStaticF___9__18_11))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_11;

  /// @brief Field <>9__18_12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_12, put = setStaticF___9__18_12))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_12;

  /// @brief Field <>9__18_13, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_13, put = setStaticF___9__18_13))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_13;

  /// @brief Field <>9__18_14, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_14, put = setStaticF___9__18_14))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_14;

  /// @brief Field <>9__18_15, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_15, put = setStaticF___9__18_15))::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* __9__18_15;

  static inline void setStaticF___9(::GlobalNamespace::__GameplayModifiersModelSO____c* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO____c* getStaticF___9();

  static inline void setStaticF___9__18_0(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_0();

  static inline void setStaticF___9__18_1(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_1();

  static inline void setStaticF___9__18_2(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_2();

  static inline void setStaticF___9__18_3(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_3();

  static inline void setStaticF___9__18_4(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_4();

  static inline void setStaticF___9__18_5(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_5();

  static inline void setStaticF___9__18_6(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_6();

  static inline void setStaticF___9__18_7(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_7();

  static inline void setStaticF___9__18_8(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_8();

  static inline void setStaticF___9__18_9(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_9();

  static inline void setStaticF___9__18_10(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_10();

  static inline void setStaticF___9__18_11(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_11();

  static inline void setStaticF___9__18_12(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_12();

  static inline void setStaticF___9__18_13(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_13();

  static inline void setStaticF___9__18_14(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_14();

  static inline void setStaticF___9__18_15(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* value);

  static inline ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter* getStaticF___9__18_15();

  static inline ::GlobalNamespace::__GameplayModifiersModelSO____c* New_ctor();

  /// @brief Method .ctor, addr 0x23270c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <OnEnable>b__18_0, addr 0x23270cc, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_0(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_1, addr 0x23270ec, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_1(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_2, addr 0x2327104, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_2(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_3, addr 0x232711c, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_3(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_4, addr 0x232713c, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_4(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_5, addr 0x2327154, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_5(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_6, addr 0x232716c, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_6(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_7, addr 0x2327184, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_7(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_8, addr 0x232719c, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_8(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_9, addr 0x23271bc, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_9(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_10, addr 0x23271dc, size 0x20, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_10(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_11, addr 0x23271fc, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_11(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_12, addr 0x2327214, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_12(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_13, addr 0x232722c, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_13(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_14, addr 0x2327244, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_14(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method <OnEnable>b__18_15, addr 0x232725c, size 0x18, virtual false, abstract: false, final false
  inline bool _OnEnable_b__18_15(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersModelSO____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayModifiersModelSO____c(__GameplayModifiersModelSO____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersModelSO____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayModifiersModelSO____c(__GameplayModifiersModelSO____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayModifiersModelSO____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersModelSO____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayModifiersModelSO
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4200))
// CS Name: ::GameplayModifiersModelSO*
class CORDL_TYPE GameplayModifiersModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using __c = ::GlobalNamespace::__GameplayModifiersModelSO____c;

  using GameplayModifierBoolGetter = ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter;

  /// @brief Field _batteryEnergy, offset 0x18, size 0x8
  __declspec(property(get = __get__batteryEnergy, put = __set__batteryEnergy))::GlobalNamespace::GameplayModifierParamsSO* _batteryEnergy;

  /// @brief Field _instaFail, offset 0x20, size 0x8
  __declspec(property(get = __get__instaFail, put = __set__instaFail))::GlobalNamespace::GameplayModifierParamsSO* _instaFail;

  /// @brief Field _noObstacles, offset 0x28, size 0x8
  __declspec(property(get = __get__noObstacles, put = __set__noObstacles))::GlobalNamespace::GameplayModifierParamsSO* _noObstacles;

  /// @brief Field _noBombs, offset 0x30, size 0x8
  __declspec(property(get = __get__noBombs, put = __set__noBombs))::GlobalNamespace::GameplayModifierParamsSO* _noBombs;

  /// @brief Field _fastNotes, offset 0x38, size 0x8
  __declspec(property(get = __get__fastNotes, put = __set__fastNotes))::GlobalNamespace::GameplayModifierParamsSO* _fastNotes;

  /// @brief Field _strictAngles, offset 0x40, size 0x8
  __declspec(property(get = __get__strictAngles, put = __set__strictAngles))::GlobalNamespace::GameplayModifierParamsSO* _strictAngles;

  /// @brief Field _disappearingArrows, offset 0x48, size 0x8
  __declspec(property(get = __get__disappearingArrows, put = __set__disappearingArrows))::GlobalNamespace::GameplayModifierParamsSO* _disappearingArrows;

  /// @brief Field _fasterSong, offset 0x50, size 0x8
  __declspec(property(get = __get__fasterSong, put = __set__fasterSong))::GlobalNamespace::GameplayModifierParamsSO* _fasterSong;

  /// @brief Field _slowerSong, offset 0x58, size 0x8
  __declspec(property(get = __get__slowerSong, put = __set__slowerSong))::GlobalNamespace::GameplayModifierParamsSO* _slowerSong;

  /// @brief Field _noArrows, offset 0x60, size 0x8
  __declspec(property(get = __get__noArrows, put = __set__noArrows))::GlobalNamespace::GameplayModifierParamsSO* _noArrows;

  /// @brief Field _ghostNotes, offset 0x68, size 0x8
  __declspec(property(get = __get__ghostNotes, put = __set__ghostNotes))::GlobalNamespace::GameplayModifierParamsSO* _ghostNotes;

  /// @brief Field _noFailOn0Energy, offset 0x70, size 0x8
  __declspec(property(get = __get__noFailOn0Energy, put = __set__noFailOn0Energy))::GlobalNamespace::GameplayModifierParamsSO* _noFailOn0Energy;

  /// @brief Field _superFastSong, offset 0x78, size 0x8
  __declspec(property(get = __get__superFastSong, put = __set__superFastSong))::GlobalNamespace::GameplayModifierParamsSO* _superFastSong;

  /// @brief Field _proMode, offset 0x80, size 0x8
  __declspec(property(get = __get__proMode, put = __set__proMode))::GlobalNamespace::GameplayModifierParamsSO* _proMode;

  /// @brief Field _zenMode, offset 0x88, size 0x8
  __declspec(property(get = __get__zenMode, put = __set__zenMode))::GlobalNamespace::GameplayModifierParamsSO* _zenMode;

  /// @brief Field _smallCubes, offset 0x90, size 0x8
  __declspec(property(get = __get__smallCubes, put = __set__smallCubes))::GlobalNamespace::GameplayModifierParamsSO* _smallCubes;

  /// @brief Field _gameplayModifierGetters, offset 0x98, size 0x8
  __declspec(property(get = __get__gameplayModifierGetters, put = __set__gameplayModifierGetters))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::GameplayModifierParamsSO*, ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter*>* _gameplayModifierGetters;

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__batteryEnergy();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__batteryEnergy() const;

  constexpr void __set__batteryEnergy(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__instaFail();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__instaFail() const;

  constexpr void __set__instaFail(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__noObstacles();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__noObstacles() const;

  constexpr void __set__noObstacles(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__noBombs();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__noBombs() const;

  constexpr void __set__noBombs(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__fastNotes();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__fastNotes() const;

  constexpr void __set__fastNotes(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__strictAngles();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__strictAngles() const;

  constexpr void __set__strictAngles(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__disappearingArrows();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__disappearingArrows() const;

  constexpr void __set__disappearingArrows(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__fasterSong();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__fasterSong() const;

  constexpr void __set__fasterSong(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__slowerSong();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__slowerSong() const;

  constexpr void __set__slowerSong(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__noArrows();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__noArrows() const;

  constexpr void __set__noArrows(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__ghostNotes();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__ghostNotes() const;

  constexpr void __set__ghostNotes(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__noFailOn0Energy();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__noFailOn0Energy() const;

  constexpr void __set__noFailOn0Energy(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__superFastSong();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__superFastSong() const;

  constexpr void __set__superFastSong(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__proMode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__proMode() const;

  constexpr void __set__proMode(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__zenMode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__zenMode() const;

  constexpr void __set__zenMode(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::GlobalNamespace::GameplayModifierParamsSO*& __get__smallCubes();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierParamsSO*> const& __get__smallCubes() const;

  constexpr void __set__smallCubes(::GlobalNamespace::GameplayModifierParamsSO* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter*>*&
  __get__gameplayModifierGetters();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter*>*> const&
  __get__gameplayModifierGetters() const;

  constexpr void __set__gameplayModifierGetters(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter*>* value);

  /// @brief Method OnEnable, addr 0x2325b50, size 0x994, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method CreateGameplayModifiers, addr 0x2326610, size 0x278, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* CreateGameplayModifiers(::System::Func_2<::GlobalNamespace::GameplayModifierParamsSO*, bool>* valueGetter);

  /// @brief Method GetModifierBoolValue, addr 0x232690c, size 0x9c, virtual false, abstract: false, final false
  inline bool GetModifierBoolValue(::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams);

  /// @brief Method CreateModifierParamsList, addr 0x23269a8, size 0x290, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* CreateModifierParamsList(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method GetTotalMultiplier, addr 0x2326c38, size 0x1e0, virtual false, abstract: false, final false
  inline float_t GetTotalMultiplier(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifierParams, float_t energy);

  /// @brief Method MaxModifiedScoreForMaxMultipliedScore, addr 0x2326e18, size 0x4, virtual false, abstract: false, final false
  inline int32_t MaxModifiedScoreForMaxMultipliedScore(int32_t maxMultipliedScore, ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifierParams,
                                                       float_t energy);

  /// @brief Method MaxModifiedScoreForMaxMultipliedScore, addr 0x2326ea8, size 0x4, virtual false, abstract: false, final false
  inline int32_t MaxModifiedScoreForMaxMultipliedScore(int32_t maxMultipliedScore, ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifierParams,
                                                       ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, float_t energy);

  /// @brief Method GetModifiedScoreForGameplayModifiers, addr 0x2326e1c, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetModifiedScoreForGameplayModifiers(int32_t multipliedScore, ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifierParams, float_t energy);

  /// @brief Method GetGameplayModifierParams, addr 0x2326eac, size 0x150, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifierParamsSO* GetGameplayModifierParams(::GlobalNamespace::GameplayModifierMask modifier);

  /// @brief Method GetSongSpeedFromValueGetter, addr 0x2326888, size 0x84, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__GameplayModifiers__SongSpeed GetSongSpeedFromValueGetter(::System::Func_2<::GlobalNamespace::GameplayModifierParamsSO*, bool>* valueGetter);

  static inline ::GlobalNamespace::GameplayModifiersModelSO* New_ctor();

  /// @brief Method .ctor, addr 0x2326ffc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersModelSO(GameplayModifiersModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersModelSO(GameplayModifiersModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersModelSO();

public:
  /// @brief Field _batteryEnergy, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____batteryEnergy;

  /// @brief Field _instaFail, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____instaFail;

  /// @brief Field _noObstacles, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____noObstacles;

  /// @brief Field _noBombs, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____noBombs;

  /// @brief Field _fastNotes, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____fastNotes;

  /// @brief Field _strictAngles, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____strictAngles;

  /// @brief Field _disappearingArrows, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____disappearingArrows;

  /// @brief Field _fasterSong, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____fasterSong;

  /// @brief Field _slowerSong, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____slowerSong;

  /// @brief Field _noArrows, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____noArrows;

  /// @brief Field _ghostNotes, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____ghostNotes;

  /// @brief Field _noFailOn0Energy, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____noFailOn0Energy;

  /// @brief Field _superFastSong, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____superFastSong;

  /// @brief Field _proMode, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____proMode;

  /// @brief Field _zenMode, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____zenMode;

  /// @brief Field _smallCubes, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierParamsSO* ____smallCubes;

  /// @brief Field _gameplayModifierGetters, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter*>* ____gameplayModifierGetters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersModelSO, 0xa0>, "Size mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersModelSO*, "", "GameplayModifiersModelSO");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersModelSO__GameplayModifierBoolGetter*, "", "GameplayModifiersModelSO/GameplayModifierBoolGetter");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersModelSO____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersModelSO____c*, "", "GameplayModifiersModelSO/<>c");
