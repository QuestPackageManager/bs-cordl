#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/SelectManyObservable_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelectManyObservable_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
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
template <typename TSource, typename TResult> class SelectManyObservable_2_Select;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TSource, typename TResult> class SelectManyObservable_2;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TSource, typename TResult> class SelectManyObservable_2_Select;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select);
// Dependencies System.IObserver`1<T>, System.Object
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TSource, typename TResult>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.SelectManyObservable`2/Select<TSource,TResult>
class CORDL_TYPE SelectManyObservable_2_Select : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Observable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Observable, put = __cordl_internal_set_m_Observable)) ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* m_Observable;

  /// @brief Field m_Observer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Observer, put = __cordl_internal_set_m_Observer)) ::System::IObserver_1<TResult>* m_Observer;

  /// @brief Convert operator to "::System::IObserver_1<TSource>"
  constexpr operator ::System::IObserver_1<TSource>*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>*
  New_ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable, ::System::IObserver_1<TResult>* observer);

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnCompleted();

  /// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnError(::System::Exception* error);

  /// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnNext(TSource evt);

  constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* const& __cordl_internal_get_m_Observable() const;

  constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*& __cordl_internal_get_m_Observable();

  constexpr ::System::IObserver_1<TResult>* const& __cordl_internal_get_m_Observer() const;

  constexpr ::System::IObserver_1<TResult>*& __cordl_internal_get_m_Observer();

  constexpr void __cordl_internal_set_m_Observable(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* value);

  constexpr void __cordl_internal_set_m_Observer(::System::IObserver_1<TResult>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable, ::System::IObserver_1<TResult>* observer);

  /// @brief Convert to "::System::IObserver_1<TSource>"
  constexpr ::System::IObserver_1<TSource>* i___System__IObserver_1_TSource_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectManyObservable_2_Select();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectManyObservable_2_Select", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectManyObservable_2_Select(SelectManyObservable_2_Select&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectManyObservable_2_Select", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectManyObservable_2_Select(SelectManyObservable_2_Select const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7098 };

  /// @brief Field m_Observable, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* ___m_Observable;

  /// @brief Field m_Observer, offset: 0x18, size: 0x8, def value: None
  ::System::IObserver_1<TResult>* ___m_Observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.IObservable`1<T>, System.Object
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TSource, typename TResult>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.SelectManyObservable`2<TSource,TResult>
class CORDL_TYPE SelectManyObservable_2 : public ::System::Object {
public:
  // Declarations
  using Select = ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>;

  /// @brief Field m_Filter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Filter, put = __cordl_internal_set_m_Filter)) ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* m_Filter;

  /// @brief Field m_Source, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source)) ::System::IObservable_1<TSource>* m_Source;

  /// @brief Convert operator to "::System::IObservable_1<TResult>"
  constexpr operator ::System::IObservable_1<TResult>*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* New_ctor(::System::IObservable_1<TSource>* source,
                                                                                                          ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<TResult>* observer);

  constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* const& __cordl_internal_get_m_Filter() const;

  constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*& __cordl_internal_get_m_Filter();

  constexpr ::System::IObservable_1<TSource>* const& __cordl_internal_get_m_Source() const;

  constexpr ::System::IObservable_1<TSource>*& __cordl_internal_get_m_Source();

  constexpr void __cordl_internal_set_m_Filter(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value);

  constexpr void __cordl_internal_set_m_Source(::System::IObservable_1<TSource>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter);

  /// @brief Convert to "::System::IObservable_1<TResult>"
  constexpr ::System::IObservable_1<TResult>* i___System__IObservable_1_TResult_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectManyObservable_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectManyObservable_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectManyObservable_2(SelectManyObservable_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectManyObservable_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectManyObservable_2(SelectManyObservable_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7099 };

  /// @brief Field m_Source, offset: 0x10, size: 0x8, def value: None
  ::System::IObservable_1<TSource>* ___m_Source;

  /// @brief Field m_Filter, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* ___m_Filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2, "UnityEngine.InputSystem.Utilities", "SelectManyObservable`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select, "UnityEngine.InputSystem.Utilities", "SelectManyObservable`2/Select");
