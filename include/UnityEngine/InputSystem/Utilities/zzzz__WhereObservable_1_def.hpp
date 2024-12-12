#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/WhereObservable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WhereObservable_1)
namespace System {
class Exception;
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
namespace System {
template <typename T> class IObserver_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class WhereObservable_1_Where;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class WhereObservable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class WhereObservable_1_Where;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::WhereObservable_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where);
// Dependencies System.IObserver`1<T>, System.Object
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.WhereObservable`1/Where<TValue>
class CORDL_TYPE WhereObservable_1_Where : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Observable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Observable, put = __cordl_internal_set_m_Observable)) ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* m_Observable;

  /// @brief Field m_Observer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Observer, put = __cordl_internal_set_m_Observer)) ::System::IObserver_1<TValue>* m_Observer;

  /// @brief Convert operator to "::System::IObserver_1<TValue>"
  constexpr operator ::System::IObserver_1<TValue>*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>* New_ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* observable,
                                                                                                 ::System::IObserver_1<TValue>* observer);

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnCompleted();

  /// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnError(::System::Exception* error);

  /// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnNext(TValue evt);

  constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* const& __cordl_internal_get_m_Observable() const;

  constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*& __cordl_internal_get_m_Observable();

  constexpr ::System::IObserver_1<TValue>* const& __cordl_internal_get_m_Observer() const;

  constexpr ::System::IObserver_1<TValue>*& __cordl_internal_get_m_Observer();

  constexpr void __cordl_internal_set_m_Observable(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* value);

  constexpr void __cordl_internal_set_m_Observer(::System::IObserver_1<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* observable, ::System::IObserver_1<TValue>* observer);

  /// @brief Convert to "::System::IObserver_1<TValue>"
  constexpr ::System::IObserver_1<TValue>* i___System__IObserver_1_TValue_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhereObservable_1_Where();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhereObservable_1_Where", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhereObservable_1_Where(WhereObservable_1_Where&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhereObservable_1_Where", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhereObservable_1_Where(WhereObservable_1_Where const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7099 };

  /// @brief Field m_Observable, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* ___m_Observable;

  /// @brief Field m_Observer, offset: 0x18, size: 0x8, def value: None
  ::System::IObserver_1<TValue>* ___m_Observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.IObservable`1<T>, System.Object
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.WhereObservable`1<TValue>
class CORDL_TYPE WhereObservable_1 : public ::System::Object {
public:
  // Declarations
  using Where = ::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>;

  /// @brief Field m_Predicate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Predicate, put = __cordl_internal_set_m_Predicate)) ::System::Func_2<TValue, bool>* m_Predicate;

  /// @brief Field m_Source, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source)) ::System::IObservable_1<TValue>* m_Source;

  /// @brief Convert operator to "::System::IObservable_1<TValue>"
  constexpr operator ::System::IObservable_1<TValue>*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* New_ctor(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<TValue>* observer);

  constexpr ::System::Func_2<TValue, bool>* const& __cordl_internal_get_m_Predicate() const;

  constexpr ::System::Func_2<TValue, bool>*& __cordl_internal_get_m_Predicate();

  constexpr ::System::IObservable_1<TValue>* const& __cordl_internal_get_m_Source() const;

  constexpr ::System::IObservable_1<TValue>*& __cordl_internal_get_m_Source();

  constexpr void __cordl_internal_set_m_Predicate(::System::Func_2<TValue, bool>* value);

  constexpr void __cordl_internal_set_m_Source(::System::IObservable_1<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate);

  /// @brief Convert to "::System::IObservable_1<TValue>"
  constexpr ::System::IObservable_1<TValue>* i___System__IObservable_1_TValue_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhereObservable_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhereObservable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhereObservable_1(WhereObservable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhereObservable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhereObservable_1(WhereObservable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7100 };

  /// @brief Field m_Source, offset: 0x10, size: 0x8, def value: None
  ::System::IObservable_1<TValue>* ___m_Source;

  /// @brief Field m_Predicate, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TValue, bool>* ___m_Predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::WhereObservable_1, "UnityEngine.InputSystem.Utilities", "WhereObservable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where, "UnityEngine.InputSystem.Utilities", "WhereObservable`1/Where");
