#pragma once
// IWYU pragma private; include "GlobalNamespace/CreditsController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreditsController)
namespace GlobalNamespace {
class AudioPlayerBase;
}
namespace GlobalNamespace {
class CreditsController__ScrollCoroutine_d__18;
}
namespace GlobalNamespace {
struct CreditsController__StartAsync_d__15;
}
namespace GlobalNamespace {
class CreditsController___c;
}
namespace GlobalNamespace {
class CreditsScenesTransitionSetupData;
}
namespace GlobalNamespace {
class IXRSystemState;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
struct XRSystemEventType;
}
namespace HMUI {
class ButtonBinder;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsController;
}
namespace GlobalNamespace {
class CreditsController__ScrollCoroutine_d__18;
}
namespace GlobalNamespace {
class CreditsController___c;
}
namespace GlobalNamespace {
struct CreditsController__StartAsync_d__15;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreditsController*);
MARK_REF_T(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18*);
MARK_REF_T(::GlobalNamespace::CreditsController___c*);
MARK_VAL_T(::GlobalNamespace::CreditsController__StartAsync_d__15);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreditsController*, "", "CreditsController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18*, "", "CreditsController/<ScrollCoroutine>d__18");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreditsController___c*, "", "CreditsController/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreditsController__StartAsync_d__15, "", "CreditsController/<StartAsync>d__15");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsController/<>c
class CORDL_TYPE CreditsController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::CreditsController___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* __9__15_1;

  /// @brief Field <>9__15_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_2,
                      put = setStaticF___9__15_2)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::GameObject>>*>* __9__15_2;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0)) ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* __9__16_0;

  static inline ::GlobalNamespace::CreditsController___c* New_ctor();

  /// @brief Method <OnDestroy>b__16_0, addr 0x327ef94, size 0x24, virtual false, abstract: false, final false
  inline bool _OnDestroy_b__16_0(::GlobalNamespace::PackDefinitionSO* p);

  /// @brief Method <StartAsync>b__15_0, addr 0x327eebc, size 0x24, virtual false, abstract: false, final false
  inline bool _StartAsync_b__15_0(::GlobalNamespace::PackDefinitionSO* p);

  /// @brief Method <StartAsync>b__15_1, addr 0x327eee0, size 0x20, virtual false, abstract: false, final false
  inline int32_t _StartAsync_b__15_1(::GlobalNamespace::PackDefinitionSO* p);

  /// @brief Method <StartAsync>b__15_2, addr 0x327ef00, size 0x94, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::GameObject>>* _StartAsync_b__15_2(::GlobalNamespace::PackDefinitionSO* p);

  /// @brief Method .ctor, addr 0x327eeb8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::CreditsController___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* getStaticF___9__15_0();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* getStaticF___9__15_1();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::GameObject>>*>* getStaticF___9__15_2();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* getStaticF___9__16_0();

  static inline void setStaticF___9(::GlobalNamespace::CreditsController___c* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* value);

  static inline void setStaticF___9__15_1(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* value);

  static inline void setStaticF___9__15_2(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::GameObject>>*>* value);

  static inline void setStaticF___9__16_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsController___c(CreditsController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsController___c(CreditsController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23169 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CreditsController___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsController/<ScrollCoroutine>d__18
class CORDL_TYPE CreditsController__ScrollCoroutine_d__18 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CreditsController> __4__this;

  /// @brief Field <contentHeight>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__contentHeight_5__2, put = __cordl_internal_set__contentHeight_5__2)) float_t _contentHeight_5__2;

  /// @brief Field <contentWrapperHeight>5__3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__contentWrapperHeight_5__3, put = __cordl_internal_set__contentWrapperHeight_5__3)) float_t _contentWrapperHeight_5__3;

  /// @brief Field <posY>5__4, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__posY_5__4, put = __cordl_internal_set__posY_5__4)) float_t _posY_5__4;

  /// @brief Field <scrollingSpeed>5__5, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__scrollingSpeed_5__5, put = __cordl_internal_set__scrollingSpeed_5__5)) float_t _scrollingSpeed_5__5;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x327efbc, size 0x240, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::CreditsController__ScrollCoroutine_d__18* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x327f1fc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x327f204, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x327f23c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x327efb8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::CreditsController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::CreditsController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__contentHeight_5__2() const;

  constexpr float_t& __cordl_internal_get__contentHeight_5__2();

  constexpr float_t const& __cordl_internal_get__contentWrapperHeight_5__3() const;

  constexpr float_t& __cordl_internal_get__contentWrapperHeight_5__3();

  constexpr float_t const& __cordl_internal_get__posY_5__4() const;

  constexpr float_t& __cordl_internal_get__posY_5__4();

  constexpr float_t const& __cordl_internal_get__scrollingSpeed_5__5() const;

  constexpr float_t& __cordl_internal_get__scrollingSpeed_5__5();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CreditsController> value);

  constexpr void __cordl_internal_set__contentHeight_5__2(float_t value);

  constexpr void __cordl_internal_set__contentWrapperHeight_5__3(float_t value);

  constexpr void __cordl_internal_set__posY_5__4(float_t value);

  constexpr void __cordl_internal_set__scrollingSpeed_5__5(float_t value);

  /// @brief Method .ctor, addr 0x327e858, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsController__ScrollCoroutine_d__18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsController__ScrollCoroutine_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsController__ScrollCoroutine_d__18(CreditsController__ScrollCoroutine_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsController__ScrollCoroutine_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsController__ScrollCoroutine_d__18(CreditsController__ScrollCoroutine_d__18 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23170 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CreditsController> _____4__this;

  /// @brief Field <contentHeight>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____contentHeight_5__2;

  /// @brief Field <contentWrapperHeight>5__3, offset: 0x2c, size: 0x4, def value: None
  float_t ____contentWrapperHeight_5__3;

  /// @brief Field <posY>5__4, offset: 0x30, size: 0x4, def value: None
  float_t ____posY_5__4;

  /// @brief Field <scrollingSpeed>5__5, offset: 0x34, size: 0x4, def value: None
  float_t ____scrollingSpeed_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18, ____contentHeight_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18, ____contentWrapperHeight_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18, ____posY_5__4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18, ____scrollingSpeed_5__5) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreditsController__ScrollCoroutine_d__18) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: CreditsController/<StartAsync>d__15
struct CORDL_TYPE CreditsController__StartAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x327f244, size 0x768, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x327f9ac, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsController__StartAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CreditsController>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::UnityEngine::GameObject>>>", modifiers: "", def_value: None }]
  constexpr CreditsController__StartAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::CreditsController> __4__this,
                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::UnityEngine::GameObject>>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23171 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CreditsController> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::UnityEngine::GameObject>>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsController__StartAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__StartAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__StartAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController__StartAsync_d__15, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreditsController__StartAsync_d__15) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsController
class CORDL_TYPE CreditsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _ScrollCoroutine_d__18 = ::GlobalNamespace::CreditsController__ScrollCoroutine_d__18;

  using _StartAsync_d__15 = ::GlobalNamespace::CreditsController__StartAsync_d__15;

  using __c = ::GlobalNamespace::CreditsController___c;

  /// @brief Field _afterMusicPacksCredits, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__afterMusicPacksCredits, put = __cordl_internal_set__afterMusicPacksCredits)) ::ArrayW<::UnityW<::UnityEngine::GameObject>> _afterMusicPacksCredits;

  /// @brief Field _audioPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioPlayer, put = __cordl_internal_set__audioPlayer)) ::UnityW<::GlobalNamespace::AudioPlayerBase> _audioPlayer;

  /// @brief Field _beforeMusicPacksCredits, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beforeMusicPacksCredits, put = __cordl_internal_set__beforeMusicPacksCredits)) ::ArrayW<::UnityW<::UnityEngine::GameObject>> _beforeMusicPacksCredits;

  /// @brief Field _buttonBinder, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _contentRectTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__contentRectTransform, put = __cordl_internal_set__contentRectTransform)) ::UnityW<::UnityEngine::RectTransform> _contentRectTransform;

  /// @brief Field _contentWrapper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__contentWrapper, put = __cordl_internal_set__contentWrapper)) ::UnityW<::UnityEngine::RectTransform> _contentWrapper;

  /// @brief Field _continueButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _creditsSceneSetupData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsSceneSetupData,
                      put = __cordl_internal_set__creditsSceneSetupData)) ::GlobalNamespace::CreditsScenesTransitionSetupData* _creditsSceneSetupData;

  /// @brief Field _didFinish, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__didFinish, put = __cordl_internal_set__didFinish)) bool _didFinish;

  /// @brief Field _isPaused, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__isPaused, put = __cordl_internal_set__isPaused)) bool _isPaused;

  /// @brief Field _overflowHeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__overflowHeight, put = __cordl_internal_set__overflowHeight)) float_t _overflowHeight;

  /// @brief Field _packDefinitions, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__packDefinitions,
                      put = __cordl_internal_set__packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _packDefinitions;

  /// @brief Field _xrSystemState, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__xrSystemState, put = __cordl_internal_set__xrSystemState)) ::GlobalNamespace::IXRSystemState* _xrSystemState;

  /// @brief Field anchor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_anchor, put = setStaticF_anchor)) ::UnityEngine::Vector2 anchor;

  /// @brief Method Finish, addr 0x327e694, size 0x170, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method HandleSystemStateChange, addr 0x327e860, size 0x74, virtual false, abstract: false, final false
  inline void HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType);

  static inline ::GlobalNamespace::CreditsController* New_ctor();

  /// @brief Method OnDestroy, addr 0x327e1b4, size 0x4e0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PauseCredits, addr 0x327e8d4, size 0x30, virtual false, abstract: false, final false
  inline void PauseCredits();

  /// @brief Method ScrollCoroutine, addr 0x327e804, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ScrollCoroutine();

  /// @brief Method SpawnAllCredits, addr 0x327e930, size 0x98, virtual false, abstract: false, final false
  inline void SpawnAllCredits(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* musicPackCredits);

  /// @brief Method SpawnCredits, addr 0x327e9c8, size 0x43c, virtual false, abstract: false, final false
  inline float_t SpawnCredits(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* creditsToSpawn, float_t initialHeight);

  /// @brief Method Start, addr 0x327e084, size 0x80, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartAsync, addr 0x327e104, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* StartAsync();

  /// @brief Method UnpauseCredits, addr 0x327e904, size 0x2c, virtual false, abstract: false, final false
  inline void UnpauseCredits();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__afterMusicPacksCredits() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__afterMusicPacksCredits();

  constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase> const& __cordl_internal_get__audioPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase>& __cordl_internal_get__audioPlayer();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__beforeMusicPacksCredits() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__beforeMusicPacksCredits();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentRectTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentWrapper() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentWrapper();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData* const& __cordl_internal_get__creditsSceneSetupData() const;

  constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData*& __cordl_internal_get__creditsSceneSetupData();

  constexpr bool const& __cordl_internal_get__didFinish() const;

  constexpr bool& __cordl_internal_get__didFinish();

  constexpr bool const& __cordl_internal_get__isPaused() const;

  constexpr bool& __cordl_internal_get__isPaused();

  constexpr float_t const& __cordl_internal_get__overflowHeight() const;

  constexpr float_t& __cordl_internal_get__overflowHeight();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& __cordl_internal_get__packDefinitions() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& __cordl_internal_get__packDefinitions();

  constexpr ::GlobalNamespace::IXRSystemState* const& __cordl_internal_get__xrSystemState() const;

  constexpr ::GlobalNamespace::IXRSystemState*& __cordl_internal_get__xrSystemState();

  constexpr void __cordl_internal_set__afterMusicPacksCredits(::ArrayW<::UnityW<::UnityEngine::GameObject>> value);

  constexpr void __cordl_internal_set__audioPlayer(::UnityW<::GlobalNamespace::AudioPlayerBase> value);

  constexpr void __cordl_internal_set__beforeMusicPacksCredits(::ArrayW<::UnityW<::UnityEngine::GameObject>> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__contentRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__contentWrapper(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__creditsSceneSetupData(::GlobalNamespace::CreditsScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__didFinish(bool value);

  constexpr void __cordl_internal_set__isPaused(bool value);

  constexpr void __cordl_internal_set__overflowHeight(float_t value);

  constexpr void __cordl_internal_set__packDefinitions(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value);

  constexpr void __cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value);

  /// @brief Method .ctor, addr 0x327ee04, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Vector2 getStaticF_anchor();

  static inline void setStaticF_anchor(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsController(CreditsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsController(CreditsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23172 };

  /// @brief Field _audioPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPlayerBase> ____audioPlayer;

  /// @brief Field _continueButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _contentRectTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentRectTransform;

  /// @brief Field _overflowHeight, offset: 0x38, size: 0x4, def value: None
  float_t ____overflowHeight;

  /// @brief Field _contentWrapper, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentWrapper;

  /// @brief Field _beforeMusicPacksCredits, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>> ____beforeMusicPacksCredits;

  /// @brief Field _afterMusicPacksCredits, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>> ____afterMusicPacksCredits;

  /// @brief Field _xrSystemState, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IXRSystemState* ____xrSystemState;

  /// @brief Field _packDefinitions, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* ____packDefinitions;

  /// @brief Field _creditsSceneSetupData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::CreditsScenesTransitionSetupData* ____creditsSceneSetupData;

  /// @brief Field _buttonBinder, offset: 0x70, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  /// @brief Field _didFinish, offset: 0x78, size: 0x1, def value: None
  bool ____didFinish;

  /// @brief Field _isPaused, offset: 0x79, size: 0x1, def value: None
  bool ____isPaused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsController, ____audioPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____continueButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____contentRectTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____overflowHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____contentWrapper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____beforeMusicPacksCredits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____afterMusicPacksCredits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____xrSystemState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____packDefinitions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____creditsSceneSetupData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____buttonBinder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____didFinish) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsController, ____isPaused) == 0x79, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreditsController) == 0x80, "Size mismatch!");

} // namespace GlobalNamespace
