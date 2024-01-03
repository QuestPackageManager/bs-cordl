#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ZenjectSafeBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FadeInOnSceneTransitionFinished)
namespace GlobalNamespace {
class __FadeInOnSceneTransitionFinished___FadeCoroutine_d__4;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeInOnSceneTransitionFinished;
}
namespace GlobalNamespace {
class __FadeInOnSceneTransitionFinished___FadeCoroutine_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeInOnSceneTransitionFinished);
MARK_REF_PTR_T(::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4);
// Type: ::<FadeCoroutine>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15282))
// CS Name: ::FadeInOnSceneTransitionFinished::<FadeCoroutine>d__4*
class CORDL_TYPE __FadeInOnSceneTransitionFinished___FadeCoroutine_d__4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::FadeInOnSceneTransitionFinished* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::FadeInOnSceneTransitionFinished*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOnSceneTransitionFinished*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::FadeInOnSceneTransitionFinished* value);

  static inline ::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x28076fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2807734, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2807738, size 0xb8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x28077f0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x28077f8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2807838, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FadeInOnSceneTransitionFinished___FadeCoroutine_d__4(__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FadeInOnSceneTransitionFinished___FadeCoroutine_d__4(__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FadeInOnSceneTransitionFinished___FadeCoroutine_d__4();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOnSceneTransitionFinished* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FadeInOnSceneTransitionFinished
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15283))
// CS Name: ::FadeInOnSceneTransitionFinished*
class CORDL_TYPE FadeInOnSceneTransitionFinished : public ::GlobalNamespace::ZenjectSafeBehaviour {
public:
  // Declarations
  using _FadeCoroutine_d__4 = ::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4;

  /// @brief Field _fadeInOut, offset 0x20, size 0x8
  __declspec(property(get = __get__fadeInOut, put = __set__fadeInOut))::GlobalNamespace::FadeInOutController* _fadeInOut;

  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOut();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOut() const;

  constexpr void __set__fadeInOut(::GlobalNamespace::FadeInOutController* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  /// @brief Method OnEnablePostInjection, addr 0x280766c, size 0x20, virtual true, abstract: false, final false
  inline void OnEnablePostInjection();

  /// @brief Method OnDisable, addr 0x28076f4, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method FadeCoroutine, addr 0x280768c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* FadeCoroutine();

  static inline ::GlobalNamespace::FadeInOnSceneTransitionFinished* New_ctor();

  /// @brief Method .ctor, addr 0x2807724, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FadeInOnSceneTransitionFinished", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeInOnSceneTransitionFinished(FadeInOnSceneTransitionFinished&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeInOnSceneTransitionFinished", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeInOnSceneTransitionFinished(FadeInOnSceneTransitionFinished const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FadeInOnSceneTransitionFinished();

public:
  /// @brief Field _fadeInOut, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOut;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeInOnSceneTransitionFinished, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOnSceneTransitionFinished, ____fadeInOut) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOnSceneTransitionFinished, ____gameScenesManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeInOnSceneTransitionFinished);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeInOnSceneTransitionFinished*, "", "FadeInOnSceneTransitionFinished");
NEED_NO_BOX(::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FadeInOnSceneTransitionFinished___FadeCoroutine_d__4*, "", "FadeInOnSceneTransitionFinished/<FadeCoroutine>d__4");
