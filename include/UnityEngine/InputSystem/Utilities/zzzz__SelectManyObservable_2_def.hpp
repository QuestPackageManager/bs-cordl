#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelectManyObservable_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IObserver_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IObservable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TSource, typename TResult> class __SelectManyObservable_2__Select;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TSource, typename TResult> class SelectManyObservable_2;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TSource, typename TResult> class __SelectManyObservable_2__Select;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select);
// Type: ::Select
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TSource, typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6776))
// CS Name: ::SelectManyObservable`2::Select<TSource,TResult>*
class CORDL_TYPE __SelectManyObservable_2__Select : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Observable, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Observable, put = __set_m_Observable))::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* m_Observable;

  /// @brief Field m_Observer, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Observer, put = __set_m_Observer))::System::IObserver_1<TResult>* m_Observer;

  /// @brief Convert operator to "::System::IObserver_1<TSource>"
  constexpr operator ::System::IObserver_1<TSource>*() noexcept;

  constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*& __get_m_Observable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*> const& __get_m_Observable() const;

  constexpr void __set_m_Observable(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* value);

  constexpr ::System::IObserver_1<TResult>*& __get_m_Observer();

  constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TResult>*> const& __get_m_Observer() const;

  constexpr void __set_m_Observer(::System::IObserver_1<TResult>* value);

  static inline ::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>*
  New_ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable, ::System::IObserver_1<TResult>* observer);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable, ::System::IObserver_1<TResult>* observer);

  /// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnCompleted();

  /// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnError(::System::Exception* error);

  /// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnNext(TSource evt);

  // Ctor Parameters [CppParam { name: "", ty: "__SelectManyObservable_2__Select", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SelectManyObservable_2__Select(__SelectManyObservable_2__Select&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SelectManyObservable_2__Select", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SelectManyObservable_2__Select(__SelectManyObservable_2__Select const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectManyObservable_2__Select();

public:
  /// @brief Field m_Observable, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* ___m_Observable;

  /// @brief Field m_Observer, offset: 0x18, size: 0x8, def value: None
  ::System::IObserver_1<TResult>* ___m_Observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SelectManyObservable`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TSource, typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6777))
// CS Name: ::UnityEngine.InputSystem.Utilities::SelectManyObservable`2<TSource,TResult>*
class CORDL_TYPE SelectManyObservable_2 : public ::System::Object {
public:
  // Declarations
  using Select = ::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>;

  /// @brief Field m_Source, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Source, put = __set_m_Source))::System::IObservable_1<TSource>* m_Source;

  /// @brief Field m_Filter, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Filter, put = __set_m_Filter))::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* m_Filter;

  /// @brief Convert operator to "::System::IObservable_1<TResult>"
  constexpr operator ::System::IObservable_1<TResult>*() noexcept;

  constexpr ::System::IObservable_1<TSource>*& __get_m_Source();

  constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<TSource>*> const& __get_m_Source() const;

  constexpr void __set_m_Source(::System::IObservable_1<TSource>* value);

  constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*& __get_m_Filter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*> const& __get_m_Filter() const;

  constexpr void __set_m_Filter(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value);

  static inline ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* New_ctor(::System::IObservable_1<TSource>* source,
                                                                                                          ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter);

  /// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<TResult>* observer);

  // Ctor Parameters [CppParam { name: "", ty: "SelectManyObservable_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectManyObservable_2(SelectManyObservable_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectManyObservable_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectManyObservable_2(SelectManyObservable_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectManyObservable_2();

public:
  /// @brief Field m_Source, offset: 0x10, size: 0x8, def value: None
  ::System::IObservable_1<TSource>* ___m_Source;

  /// @brief Field m_Filter, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* ___m_Filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2, "UnityEngine.InputSystem.Utilities", "SelectManyObservable`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select, "UnityEngine.InputSystem.Utilities", "SelectManyObservable`2/Select");
