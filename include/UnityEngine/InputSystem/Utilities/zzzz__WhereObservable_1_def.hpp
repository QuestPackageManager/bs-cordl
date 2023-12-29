#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WhereObservable_1)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __WhereObservable_1__Where;
}
namespace System {
template <typename T> class IObserver_1;
}
namespace System {
template <typename T> class IObservable_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class WhereObservable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class __WhereObservable_1__Where;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::WhereObservable_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where);
// Type: ::Where
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6780))
// CS Name: ::WhereObservable`1::Where<TValue>*
class CORDL_TYPE __WhereObservable_1__Where : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Observable, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Observable, put = __set_m_Observable))::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* m_Observable;

  /// @brief Field m_Observer, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Observer, put = __set_m_Observer))::System::IObserver_1<TValue>* m_Observer;

  /// @brief Convert operator to "::System::IObserver_1<TValue>"
  constexpr operator ::System::IObserver_1<TValue>*() noexcept;

  constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*& __get_m_Observable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*> const& __get_m_Observable() const;

  constexpr void __set_m_Observable(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* value);

  constexpr ::System::IObserver_1<TValue>*& __get_m_Observer();

  constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TValue>*> const& __get_m_Observer() const;

  constexpr void __set_m_Observer(::System::IObserver_1<TValue>* value);

  static inline ::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>* New_ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* observable,
                                                                                                    ::System::IObserver_1<TValue>* observer);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* observable, ::System::IObserver_1<TValue>* observer);

  /// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnCompleted();

  /// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnError(::System::Exception* error);

  /// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnNext(TValue evt);

  // Ctor Parameters [CppParam { name: "", ty: "__WhereObservable_1__Where", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WhereObservable_1__Where(__WhereObservable_1__Where&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WhereObservable_1__Where", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WhereObservable_1__Where(__WhereObservable_1__Where const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WhereObservable_1__Where();

public:
  /// @brief Field m_Observable, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* ___m_Observable;

  /// @brief Field m_Observer, offset: 0x18, size: 0x8, def value: None
  ::System::IObserver_1<TValue>* ___m_Observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::WhereObservable`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6781))
// CS Name: ::UnityEngine.InputSystem.Utilities::WhereObservable`1<TValue>*
class CORDL_TYPE WhereObservable_1 : public ::System::Object {
public:
  // Declarations
  using Where = ::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>;

  /// @brief Field m_Source, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Source, put = __set_m_Source))::System::IObservable_1<TValue>* m_Source;

  /// @brief Field m_Predicate, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Predicate, put = __set_m_Predicate))::System::Func_2<TValue, bool>* m_Predicate;

  /// @brief Convert operator to "::System::IObservable_1<TValue>"
  constexpr operator ::System::IObservable_1<TValue>*() noexcept;

  constexpr ::System::IObservable_1<TValue>*& __get_m_Source();

  constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<TValue>*> const& __get_m_Source() const;

  constexpr void __set_m_Source(::System::IObservable_1<TValue>* value);

  constexpr ::System::Func_2<TValue, bool>*& __get_m_Predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TValue, bool>*> const& __get_m_Predicate() const;

  constexpr void __set_m_Predicate(::System::Func_2<TValue, bool>* value);

  static inline ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* New_ctor(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate);

  /// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<TValue>* observer);

  // Ctor Parameters [CppParam { name: "", ty: "WhereObservable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhereObservable_1(WhereObservable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhereObservable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhereObservable_1(WhereObservable_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhereObservable_1();

public:
  /// @brief Field m_Source, offset: 0x10, size: 0x8, def value: None
  ::System::IObservable_1<TValue>* ___m_Source;

  /// @brief Field m_Predicate, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TValue, bool>* ___m_Predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::WhereObservable_1, "UnityEngine.InputSystem.Utilities", "WhereObservable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where, "UnityEngine.InputSystem.Utilities", "WhereObservable`1/Where");
