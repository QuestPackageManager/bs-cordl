#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShowHideAnimationController)
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9;
}
namespace UnityEngine {
class Animator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ShowHideAnimationController;
}
namespace GlobalNamespace {
class __ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShowHideAnimationController);
MARK_REF_PTR_T(::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9);
// Type: ::<DeactivateSelfAfterDelayCoroutine>d__9
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13894))
// CS Name: ::ShowHideAnimationController::<DeactivateSelfAfterDelayCoroutine>d__9*
class CORDL_TYPE __ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::ShowHideAnimationController* __4__this;

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

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::GlobalNamespace::ShowHideAnimationController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ShowHideAnimationController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::ShowHideAnimationController* value);

  static inline ::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1f996d0 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1f99708 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1f9970c size 0xc0 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f997cc size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1f997d4 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f99814 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9(__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9(__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ShowHideAnimationController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ShowHideAnimationController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13895))
// CS Name: ::ShowHideAnimationController*
class CORDL_TYPE ShowHideAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DeactivateSelfAfterDelayCoroutine_d__9 = ::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9;

  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __get__animator, put = __set__animator))::UnityEngine::Animator* _animator;

  /// @brief Field _deactivateSelfAfterDelay, offset 0x20, size 0x1
  __declspec(property(get = __get__deactivateSelfAfterDelay, put = __set__deactivateSelfAfterDelay)) bool _deactivateSelfAfterDelay;

  /// @brief Field _deactivationDelay, offset 0x24, size 0x4
  __declspec(property(get = __get__deactivationDelay, put = __set__deactivationDelay)) float_t _deactivationDelay;

  /// @brief Field _show, offset 0x28, size 0x1
  __declspec(property(get = __get__show, put = __set__show)) bool _show;

  /// @brief Field _showAnimatorParam, offset 0x2c, size 0x4
  __declspec(property(get = __get__showAnimatorParam, put = __set__showAnimatorParam)) int32_t _showAnimatorParam;

  __declspec(property(get = get_Show, put = set_Show)) bool Show;

  constexpr ::UnityEngine::Animator*& __get__animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get__animator() const;

  constexpr void __set__animator(::UnityEngine::Animator* value);

  constexpr bool& __get__deactivateSelfAfterDelay();

  constexpr bool const& __get__deactivateSelfAfterDelay() const;

  constexpr void __set__deactivateSelfAfterDelay(bool value);

  constexpr float_t& __get__deactivationDelay();

  constexpr float_t const& __get__deactivationDelay() const;

  constexpr void __set__deactivationDelay(float_t value);

  constexpr bool& __get__show();

  constexpr bool const& __get__show() const;

  constexpr void __set__show(bool value);

  constexpr int32_t& __get__showAnimatorParam();

  constexpr int32_t const& __get__showAnimatorParam() const;

  constexpr void __set__showAnimatorParam(int32_t value);

  /// @brief Method set_Show addr 0x1f9947c size 0x160 virtual false final false
  inline void set_Show(bool value);

  /// @brief Method get_Show addr 0x1f995dc size 0x8 virtual false final false
  inline bool get_Show();

  /// @brief Method Awake addr 0x1f995e4 size 0x74 virtual false final false
  inline void Awake();

  /// @brief Method DeactivateSelfAfterDelayCoroutine addr 0x1f99658 size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* DeactivateSelfAfterDelayCoroutine(float_t delay);

  static inline ::GlobalNamespace::ShowHideAnimationController* New_ctor();

  /// @brief Method .ctor addr 0x1f996f8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ShowHideAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShowHideAnimationController(ShowHideAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShowHideAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShowHideAnimationController(ShowHideAnimationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShowHideAnimationController();

public:
  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Animator* ____animator;

  /// @brief Field _deactivateSelfAfterDelay, offset: 0x20, size: 0x1, def value: None
  bool ____deactivateSelfAfterDelay;

  /// @brief Field _deactivationDelay, offset: 0x24, size: 0x4, def value: None
  float_t ____deactivationDelay;

  /// @brief Field _show, offset: 0x28, size: 0x1, def value: None
  bool ____show;

  /// @brief Field _showAnimatorParam, offset: 0x2c, size: 0x4, def value: None
  int32_t ____showAnimatorParam;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShowHideAnimationController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowHideAnimationController, ____animator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowHideAnimationController, ____deactivateSelfAfterDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowHideAnimationController, ____deactivationDelay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowHideAnimationController, ____show) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShowHideAnimationController, ____showAnimatorParam) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShowHideAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShowHideAnimationController*, "", "ShowHideAnimationController");
NEED_NO_BOX(::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9*, "", "ShowHideAnimationController/<DeactivateSelfAfterDelayCoroutine>d__9");
