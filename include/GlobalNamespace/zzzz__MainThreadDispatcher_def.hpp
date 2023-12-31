#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MainThreadDispatcher)
namespace GlobalNamespace {
template <typename A> class __MainThreadDispatcher____c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
template <typename A, typename B> class __MainThreadDispatcher____c__DisplayClass3_0_2;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C> class __MainThreadDispatcher____c__DisplayClass4_0_3;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C, typename D> class __MainThreadDispatcher____c__DisplayClass5_0_4;
}
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentQueue_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
class Action;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class MainThreadDispatcher;
}
namespace GlobalNamespace {
template <typename A> class __MainThreadDispatcher____c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
template <typename A, typename B> class __MainThreadDispatcher____c__DisplayClass3_0_2;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C> class __MainThreadDispatcher____c__DisplayClass4_0_3;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C, typename D> class __MainThreadDispatcher____c__DisplayClass5_0_4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainThreadDispatcher);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4);
// Type: ::<>c__DisplayClass2_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename A>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5370))
// CS Name: ::MainThreadDispatcher::<>c__DisplayClass2_0`1<A>*
class CORDL_TYPE __MainThreadDispatcher____c__DisplayClass2_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action_1<A>* action;

  /// @brief Field firstParameter, offset 0x18, size 0x8
  __declspec(property(get = __get_firstParameter, put = __set_firstParameter)) A firstParameter;

  constexpr ::System::Action_1<A>*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<A>*> const& __get_action() const;

  constexpr void __set_action(::System::Action_1<A>* value);

  constexpr A& __get_firstParameter();

  constexpr A const& __get_firstParameter() const;

  constexpr void __set_firstParameter(A value);

  static inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DispatchOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _DispatchOnMainThread_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainThreadDispatcher____c__DisplayClass2_0_1(__MainThreadDispatcher____c__DisplayClass2_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainThreadDispatcher____c__DisplayClass2_0_1(__MainThreadDispatcher____c__DisplayClass2_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainThreadDispatcher____c__DisplayClass2_0_1();

public:
  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<A>* ___action;

  /// @brief Field firstParameter, offset: 0x18, size: 0x8, def value: None
  A ___firstParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass3_0`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename A, typename B>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5371))
// CS Name: ::MainThreadDispatcher::<>c__DisplayClass3_0`2<A,B>*
class CORDL_TYPE __MainThreadDispatcher____c__DisplayClass3_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action_2<A, B>* action;

  /// @brief Field firstParameter, offset 0x18, size 0x8
  __declspec(property(get = __get_firstParameter, put = __set_firstParameter)) A firstParameter;

  /// @brief Field secondParameter, offset 0x20, size 0x8
  __declspec(property(get = __get_secondParameter, put = __set_secondParameter)) B secondParameter;

  constexpr ::System::Action_2<A, B>*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<A, B>*> const& __get_action() const;

  constexpr void __set_action(::System::Action_2<A, B>* value);

  constexpr A& __get_firstParameter();

  constexpr A const& __get_firstParameter() const;

  constexpr void __set_firstParameter(A value);

  constexpr B& __get_secondParameter();

  constexpr B const& __get_secondParameter() const;

  constexpr void __set_secondParameter(B value);

  static inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DispatchOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _DispatchOnMainThread_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass3_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainThreadDispatcher____c__DisplayClass3_0_2(__MainThreadDispatcher____c__DisplayClass3_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass3_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainThreadDispatcher____c__DisplayClass3_0_2(__MainThreadDispatcher____c__DisplayClass3_0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainThreadDispatcher____c__DisplayClass3_0_2();

public:
  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<A, B>* ___action;

  /// @brief Field firstParameter, offset: 0x18, size: 0x8, def value: None
  A ___firstParameter;

  /// @brief Field secondParameter, offset: 0x20, size: 0x8, def value: None
  B ___secondParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0`3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename A, typename B, typename C>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5372))
// CS Name: ::MainThreadDispatcher::<>c__DisplayClass4_0`3<A,B,C>*
class CORDL_TYPE __MainThreadDispatcher____c__DisplayClass4_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action_3<A, B, C>* action;

  /// @brief Field firstParameter, offset 0x18, size 0x8
  __declspec(property(get = __get_firstParameter, put = __set_firstParameter)) A firstParameter;

  /// @brief Field secondParameter, offset 0x20, size 0x8
  __declspec(property(get = __get_secondParameter, put = __set_secondParameter)) B secondParameter;

  /// @brief Field thirdParameter, offset 0x28, size 0x8
  __declspec(property(get = __get_thirdParameter, put = __set_thirdParameter)) C thirdParameter;

  constexpr ::System::Action_3<A, B, C>*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<A, B, C>*> const& __get_action() const;

  constexpr void __set_action(::System::Action_3<A, B, C>* value);

  constexpr A& __get_firstParameter();

  constexpr A const& __get_firstParameter() const;

  constexpr void __set_firstParameter(A value);

  constexpr B& __get_secondParameter();

  constexpr B const& __get_secondParameter() const;

  constexpr void __set_secondParameter(B value);

  constexpr C& __get_thirdParameter();

  constexpr C const& __get_thirdParameter() const;

  constexpr void __set_thirdParameter(C value);

  static inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DispatchOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _DispatchOnMainThread_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass4_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainThreadDispatcher____c__DisplayClass4_0_3(__MainThreadDispatcher____c__DisplayClass4_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass4_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainThreadDispatcher____c__DisplayClass4_0_3(__MainThreadDispatcher____c__DisplayClass4_0_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainThreadDispatcher____c__DisplayClass4_0_3();

public:
  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::System::Action_3<A, B, C>* ___action;

  /// @brief Field firstParameter, offset: 0x18, size: 0x8, def value: None
  A ___firstParameter;

  /// @brief Field secondParameter, offset: 0x20, size: 0x8, def value: None
  B ___secondParameter;

  /// @brief Field thirdParameter, offset: 0x28, size: 0x8, def value: None
  C ___thirdParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0`4
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename A, typename B, typename C, typename D>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5373))
// CS Name: ::MainThreadDispatcher::<>c__DisplayClass5_0`4<A,B,C,D>*
class CORDL_TYPE __MainThreadDispatcher____c__DisplayClass5_0_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action_4<A, B, C, D>* action;

  /// @brief Field firstParameter, offset 0x18, size 0x8
  __declspec(property(get = __get_firstParameter, put = __set_firstParameter)) A firstParameter;

  /// @brief Field secondParameter, offset 0x20, size 0x8
  __declspec(property(get = __get_secondParameter, put = __set_secondParameter)) B secondParameter;

  /// @brief Field thirdParameter, offset 0x28, size 0x8
  __declspec(property(get = __get_thirdParameter, put = __set_thirdParameter)) C thirdParameter;

  /// @brief Field fourthParameter, offset 0x30, size 0x8
  __declspec(property(get = __get_fourthParameter, put = __set_fourthParameter)) D fourthParameter;

  constexpr ::System::Action_4<A, B, C, D>*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<A, B, C, D>*> const& __get_action() const;

  constexpr void __set_action(::System::Action_4<A, B, C, D>* value);

  constexpr A& __get_firstParameter();

  constexpr A const& __get_firstParameter() const;

  constexpr void __set_firstParameter(A value);

  constexpr B& __get_secondParameter();

  constexpr B const& __get_secondParameter() const;

  constexpr void __set_secondParameter(B value);

  constexpr C& __get_thirdParameter();

  constexpr C const& __get_thirdParameter() const;

  constexpr void __set_thirdParameter(C value);

  constexpr D& __get_fourthParameter();

  constexpr D const& __get_fourthParameter() const;

  constexpr void __set_fourthParameter(D value);

  static inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DispatchOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _DispatchOnMainThread_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass5_0_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainThreadDispatcher____c__DisplayClass5_0_4(__MainThreadDispatcher____c__DisplayClass5_0_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainThreadDispatcher____c__DisplayClass5_0_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainThreadDispatcher____c__DisplayClass5_0_4(__MainThreadDispatcher____c__DisplayClass5_0_4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainThreadDispatcher____c__DisplayClass5_0_4();

public:
  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::System::Action_4<A, B, C, D>* ___action;

  /// @brief Field firstParameter, offset: 0x18, size: 0x8, def value: None
  A ___firstParameter;

  /// @brief Field secondParameter, offset: 0x20, size: 0x8, def value: None
  B ___secondParameter;

  /// @brief Field thirdParameter, offset: 0x28, size: 0x8, def value: None
  C ___thirdParameter;

  /// @brief Field fourthParameter, offset: 0x30, size: 0x8, def value: None
  D ___fourthParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::MainThreadDispatcher
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5374))
// CS Name: ::MainThreadDispatcher*
class CORDL_TYPE MainThreadDispatcher : public ::System::Object {
public:
  // Declarations
  template <typename A, typename B, typename C, typename D> using __c__DisplayClass5_0_4 = ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>;

  template <typename A, typename B, typename C> using __c__DisplayClass4_0_3 = ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>;

  template <typename A, typename B> using __c__DisplayClass3_0_2 = ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>;

  template <typename A> using __c__DisplayClass2_0_1 = ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>;

  /// @brief Field _dispatchQueue, offset 0x10, size 0x8
  __declspec(property(get = __get__dispatchQueue, put = __set__dispatchQueue))::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* _dispatchQueue;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*& __get__dispatchQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*> const& __get__dispatchQueue() const;

  constexpr void __set__dispatchQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* value);

  /// @brief Method DispatchOnMainThread, addr 0x226ca44, size 0x58, virtual false, abstract: false, final false
  inline void DispatchOnMainThread(::System::Action* action);

  /// @brief Method DispatchOnMainThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename A> inline void DispatchOnMainThread(::System::Action_1<A>* action, A firstParameter);

  /// @brief Method DispatchOnMainThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename A, typename B> inline void DispatchOnMainThread(::System::Action_2<A, B>* action, A firstParameter, B secondParameter);

  /// @brief Method DispatchOnMainThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename A, typename B, typename C> inline void DispatchOnMainThread(::System::Action_3<A, B, C>* action, A firstParameter, B secondParameter, C thirdParameter);

  /// @brief Method DispatchOnMainThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename A, typename B, typename C, typename D>
  inline void DispatchOnMainThread(::System::Action_4<A, B, C, D>* action, A firstParameter, B secondParameter, C thirdParameter, D fourthParameter);

  /// @brief Method Tick, addr 0x226ca9c, size 0x104, virtual true, abstract: false, final true
  inline void Tick();

  static inline ::GlobalNamespace::MainThreadDispatcher* New_ctor();

  /// @brief Method .ctor, addr 0x226cba0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainThreadDispatcher(MainThreadDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainThreadDispatcher(MainThreadDispatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainThreadDispatcher();

public:
  /// @brief Field _dispatchQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* ____dispatchQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainThreadDispatcher, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainThreadDispatcher, ____dispatchQueue) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainThreadDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainThreadDispatcher*, "", "MainThreadDispatcher");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1, "", "MainThreadDispatcher/<>c__DisplayClass2_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2, "", "MainThreadDispatcher/<>c__DisplayClass3_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3, "", "MainThreadDispatcher/<>c__DisplayClass4_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4, "", "MainThreadDispatcher/<>c__DisplayClass5_0`4");
