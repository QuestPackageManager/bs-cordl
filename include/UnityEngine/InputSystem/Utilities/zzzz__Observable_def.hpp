#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Observable)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IObservable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __Observable____c__DisplayClass6_0_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class Observable;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __Observable____c__DisplayClass6_0_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::Observable);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1);
// Type: ::<>c__DisplayClass6_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::Observable::<>c__DisplayClass6_0`1<TValue>*
class CORDL_TYPE __Observable____c__DisplayClass6_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subscription, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subscription, put = __cordl_internal_set_subscription))::System::IDisposable* subscription;

  static inline ::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>* New_ctor();

  /// @brief Method <CallOnce>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _CallOnce_b__0();

  constexpr ::System::IDisposable*& __cordl_internal_get_subscription();

  constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> const& __cordl_internal_get_subscription() const;

  constexpr void __cordl_internal_set_subscription(::System::IDisposable* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Observable____c__DisplayClass6_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Observable____c__DisplayClass6_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Observable____c__DisplayClass6_0_1(__Observable____c__DisplayClass6_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Observable____c__DisplayClass6_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Observable____c__DisplayClass6_0_1(__Observable____c__DisplayClass6_0_1 const&) = delete;

  /// @brief Field subscription, offset: 0x10, size: 0x8, def value: None
  ::System::IDisposable* ___subscription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::Observable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::Observable*
class CORDL_TYPE Observable : public ::System::Object {
public:
  // Declarations
  template <typename TValue> using __c__DisplayClass6_0_1 = ::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1<TValue>;

  /// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::System::IDisposable* Call(::System::IObservable_1<TValue>* source, ::System::Action_1<TValue>* action);

  /// @brief Method CallOnce, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::System::IDisposable* CallOnce(::System::IObservable_1<TValue>* source, ::System::Action_1<TValue>* action);

  /// @brief Method ForDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice>
  static inline ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source);

  /// @brief Method ForDevice, addr 0x30488e4, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source,
                                                                                                        ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TResult> static inline ::System::IObservable_1<TResult>* Select(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, TResult>* filter);

  /// @brief Method SelectMany, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TResult>
  static inline ::System::IObservable_1<TResult>* SelectMany(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter);

  /// @brief Method Take, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::System::IObservable_1<TValue>* Take(::System::IObservable_1<TValue>* source, int32_t count);

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::System::IObservable_1<TValue>* Where(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Observable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Observable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Observable(Observable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Observable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Observable(Observable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::Observable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::Observable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::Observable*, "UnityEngine.InputSystem.Utilities", "Observable");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__Observable____c__DisplayClass6_0_1, "UnityEngine.InputSystem.Utilities", "Observable/<>c__DisplayClass6_0`1");
