#pragma once
// IWYU pragma private; include "GlobalNamespace/MainThreadDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MainThreadDispatcher)
namespace GlobalNamespace {
template <typename A> class MainThreadDispatcher___c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
template <typename A, typename B> class MainThreadDispatcher___c__DisplayClass3_0_2;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C> class MainThreadDispatcher___c__DisplayClass4_0_3;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C, typename D> class MainThreadDispatcher___c__DisplayClass5_0_4;
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
template <typename A> class MainThreadDispatcher___c__DisplayClass2_0_1;
}
namespace GlobalNamespace {
template <typename A, typename B> class MainThreadDispatcher___c__DisplayClass3_0_2;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C> class MainThreadDispatcher___c__DisplayClass4_0_3;
}
namespace GlobalNamespace {
template <typename A, typename B, typename C, typename D> class MainThreadDispatcher___c__DisplayClass5_0_4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainThreadDispatcher);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename A>
// Is value type: false
// CS Name: MainThreadDispatcher/<>c__DisplayClass2_0`1<A>
class CORDL_TYPE MainThreadDispatcher___c__DisplayClass2_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action_1<A>* action;

  /// @brief Field firstParameter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_firstParameter, put = __cordl_internal_set_firstParameter)) A firstParameter;

  static inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>* New_ctor();

  /// @brief Method <DispatchOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _DispatchOnMainThread_b__0();

  constexpr ::System::Action_1<A>* const& __cordl_internal_get_action() const;

  constexpr ::System::Action_1<A>*& __cordl_internal_get_action();

  constexpr A const& __cordl_internal_get_firstParameter() const;

  constexpr A& __cordl_internal_get_firstParameter();

  constexpr void __cordl_internal_set_action(::System::Action_1<A>* value);

  constexpr void __cordl_internal_set_firstParameter(A value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainThreadDispatcher___c__DisplayClass2_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainThreadDispatcher___c__DisplayClass2_0_1(MainThreadDispatcher___c__DisplayClass2_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainThreadDispatcher___c__DisplayClass2_0_1(MainThreadDispatcher___c__DisplayClass2_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22771 };

  /// @brief Field action, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<A>* ___action;

  /// @brief Field firstParameter, offset: 0x18, size: 0x8, def value: None
  A ___firstParameter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename A, typename B>
// Is value type: false
// CS Name: MainThreadDispatcher/<>c__DisplayClass3_0`2<A,B>
class CORDL_TYPE MainThreadDispatcher___c__DisplayClass3_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action_2<A, B>* action;

  /// @brief Field firstParameter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_firstParameter, put = __cordl_internal_set_firstParameter)) A firstParameter;

  /// @brief Field secondParameter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_secondParameter, put = __cordl_internal_set_secondParameter)) B secondParameter;

  static inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>* New_ctor();

  /// @brief Method <DispatchOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _DispatchOnMainThread_b__0();

  constexpr ::System::Action_2<A, B>* const& __cordl_internal_get_action() const;

  constexpr ::System::Action_2<A, B>*& __cordl_internal_get_action();

  constexpr A const& __cordl_internal_get_firstParameter() const;

  constexpr A& __cordl_internal_get_firstParameter();

  constexpr B const& __cordl_internal_get_secondParameter() const;

  constexpr B& __cordl_internal_get_secondParameter();

  constexpr void __cordl_internal_set_action(::System::Action_2<A, B>* value);

  constexpr void __cordl_internal_set_firstParameter(A value);

  constexpr void __cordl_internal_set_secondParameter(B value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainThreadDispatcher___c__DisplayClass3_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass3_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainThreadDispatcher___c__DisplayClass3_0_2(MainThreadDispatcher___c__DisplayClass3_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass3_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainThreadDispatcher___c__DisplayClass3_0_2(MainThreadDispatcher___c__DisplayClass3_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22772 };

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
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename A, typename B, typename C>
// Is value type: false
// CS Name: MainThreadDispatcher/<>c__DisplayClass4_0`3<A,B,C>
class CORDL_TYPE MainThreadDispatcher___c__DisplayClass4_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action_3<A, B, C>* action;

  /// @brief Field firstParameter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_firstParameter, put = __cordl_internal_set_firstParameter)) A firstParameter;

  /// @brief Field secondParameter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_secondParameter, put = __cordl_internal_set_secondParameter)) B secondParameter;

  /// @brief Field thirdParameter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_thirdParameter, put = __cordl_internal_set_thirdParameter)) C thirdParameter;

  static inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>* New_ctor();

  /// @brief Method <DispatchOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _DispatchOnMainThread_b__0();

  constexpr ::System::Action_3<A, B, C>* const& __cordl_internal_get_action() const;

  constexpr ::System::Action_3<A, B, C>*& __cordl_internal_get_action();

  constexpr A const& __cordl_internal_get_firstParameter() const;

  constexpr A& __cordl_internal_get_firstParameter();

  constexpr B const& __cordl_internal_get_secondParameter() const;

  constexpr B& __cordl_internal_get_secondParameter();

  constexpr C const& __cordl_internal_get_thirdParameter() const;

  constexpr C& __cordl_internal_get_thirdParameter();

  constexpr void __cordl_internal_set_action(::System::Action_3<A, B, C>* value);

  constexpr void __cordl_internal_set_firstParameter(A value);

  constexpr void __cordl_internal_set_secondParameter(B value);

  constexpr void __cordl_internal_set_thirdParameter(C value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainThreadDispatcher___c__DisplayClass4_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass4_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainThreadDispatcher___c__DisplayClass4_0_3(MainThreadDispatcher___c__DisplayClass4_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass4_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainThreadDispatcher___c__DisplayClass4_0_3(MainThreadDispatcher___c__DisplayClass4_0_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22773 };

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
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename A, typename B, typename C, typename D>
// Is value type: false
// CS Name: MainThreadDispatcher/<>c__DisplayClass5_0`4<A,B,C,D>
class CORDL_TYPE MainThreadDispatcher___c__DisplayClass5_0_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action_4<A, B, C, D>* action;

  /// @brief Field firstParameter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_firstParameter, put = __cordl_internal_set_firstParameter)) A firstParameter;

  /// @brief Field fourthParameter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_fourthParameter, put = __cordl_internal_set_fourthParameter)) D fourthParameter;

  /// @brief Field secondParameter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_secondParameter, put = __cordl_internal_set_secondParameter)) B secondParameter;

  /// @brief Field thirdParameter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_thirdParameter, put = __cordl_internal_set_thirdParameter)) C thirdParameter;

  static inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>* New_ctor();

  /// @brief Method <DispatchOnMainThread>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _DispatchOnMainThread_b__0();

  constexpr ::System::Action_4<A, B, C, D>* const& __cordl_internal_get_action() const;

  constexpr ::System::Action_4<A, B, C, D>*& __cordl_internal_get_action();

  constexpr A const& __cordl_internal_get_firstParameter() const;

  constexpr A& __cordl_internal_get_firstParameter();

  constexpr D const& __cordl_internal_get_fourthParameter() const;

  constexpr D& __cordl_internal_get_fourthParameter();

  constexpr B const& __cordl_internal_get_secondParameter() const;

  constexpr B& __cordl_internal_get_secondParameter();

  constexpr C const& __cordl_internal_get_thirdParameter() const;

  constexpr C& __cordl_internal_get_thirdParameter();

  constexpr void __cordl_internal_set_action(::System::Action_4<A, B, C, D>* value);

  constexpr void __cordl_internal_set_firstParameter(A value);

  constexpr void __cordl_internal_set_fourthParameter(D value);

  constexpr void __cordl_internal_set_secondParameter(B value);

  constexpr void __cordl_internal_set_thirdParameter(C value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainThreadDispatcher___c__DisplayClass5_0_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass5_0_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainThreadDispatcher___c__DisplayClass5_0_4(MainThreadDispatcher___c__DisplayClass5_0_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher___c__DisplayClass5_0_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainThreadDispatcher___c__DisplayClass5_0_4(MainThreadDispatcher___c__DisplayClass5_0_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22774 };

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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainThreadDispatcher
class CORDL_TYPE MainThreadDispatcher : public ::System::Object {
public:
  // Declarations
  template <typename A> using __c__DisplayClass2_0_1 = ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>;

  template <typename A, typename B> using __c__DisplayClass3_0_2 = ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>;

  template <typename A, typename B, typename C> using __c__DisplayClass4_0_3 = ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>;

  template <typename A, typename B, typename C, typename D> using __c__DisplayClass5_0_4 = ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>;

  /// @brief Field _dispatchQueue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dispatchQueue, put = __cordl_internal_set__dispatchQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* _dispatchQueue;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method DispatchOnMainThread, addr 0x5637c70, size 0x64, virtual false, abstract: false, final false
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

  static inline ::GlobalNamespace::MainThreadDispatcher* New_ctor();

  /// @brief Method Tick, addr 0x5637cd4, size 0x114, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* const& __cordl_internal_get__dispatchQueue() const;

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*& __cordl_internal_get__dispatchQueue();

  constexpr void __cordl_internal_set__dispatchQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* value);

  /// @brief Method .ctor, addr 0x5637de8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainThreadDispatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainThreadDispatcher(MainThreadDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainThreadDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainThreadDispatcher(MainThreadDispatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22775 };

  /// @brief Field _dispatchQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* ____dispatchQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainThreadDispatcher, ____dispatchQueue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainThreadDispatcher, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainThreadDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainThreadDispatcher*, "", "MainThreadDispatcher");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1, "", "MainThreadDispatcher/<>c__DisplayClass2_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2, "", "MainThreadDispatcher/<>c__DisplayClass3_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3, "", "MainThreadDispatcher/<>c__DisplayClass4_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4, "", "MainThreadDispatcher/<>c__DisplayClass5_0`4");
