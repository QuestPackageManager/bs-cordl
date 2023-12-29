#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentSingleton_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMMainThreadDispatcher)
namespace GlobalNamespace {
class __HMMainThreadDispatcher___ActionCoroutine_d__4;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __HMMainThreadDispatcher____c__DisplayClass2_0;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class HMMainThreadDispatcher;
}
namespace GlobalNamespace {
class __HMMainThreadDispatcher___ActionCoroutine_d__4;
}
namespace GlobalNamespace {
class __HMMainThreadDispatcher____c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HMMainThreadDispatcher);
MARK_REF_PTR_T(::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4);
MARK_REF_PTR_T(::GlobalNamespace::__HMMainThreadDispatcher____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13955))
// CS Name: ::HMMainThreadDispatcher::<>c__DisplayClass2_0*
class CORDL_TYPE __HMMainThreadDispatcher____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::HMMainThreadDispatcher* __4__this;

  /// @brief Field action, offset 0x18, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Collections::IEnumerator* action;

  constexpr ::GlobalNamespace::HMMainThreadDispatcher*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMMainThreadDispatcher*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::HMMainThreadDispatcher* value);

  constexpr ::System::Collections::IEnumerator*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get_action() const;

  constexpr void __set_action(::System::Collections::IEnumerator* value);

  static inline ::GlobalNamespace::__HMMainThreadDispatcher____c__DisplayClass2_0* New_ctor();

  /// @brief Method .ctor addr 0x1fa2438 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Enqueue>b__0 addr 0x1fa25e4 size 0x24 virtual false final false
  inline void _Enqueue_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__HMMainThreadDispatcher____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HMMainThreadDispatcher____c__DisplayClass2_0(__HMMainThreadDispatcher____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HMMainThreadDispatcher____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HMMainThreadDispatcher____c__DisplayClass2_0(__HMMainThreadDispatcher____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HMMainThreadDispatcher____c__DisplayClass2_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::HMMainThreadDispatcher* _____4__this;

  /// @brief Field action, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HMMainThreadDispatcher____c__DisplayClass2_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HMMainThreadDispatcher____c__DisplayClass2_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HMMainThreadDispatcher____c__DisplayClass2_0, ___action) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ActionCoroutine>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13956))
// CS Name: ::HMMainThreadDispatcher::<ActionCoroutine>d__4*
class CORDL_TYPE __HMMainThreadDispatcher___ActionCoroutine_d__4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field action, offset 0x20, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action* action;

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

  constexpr ::System::Action*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_action() const;

  constexpr void __set_action(::System::Action* value);

  static inline ::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1fa24c4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1fa2608 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1fa260c size 0x60 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fa266c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1fa2674 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fa26b4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__HMMainThreadDispatcher___ActionCoroutine_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HMMainThreadDispatcher___ActionCoroutine_d__4(__HMMainThreadDispatcher___ActionCoroutine_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HMMainThreadDispatcher___ActionCoroutine_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HMMainThreadDispatcher___ActionCoroutine_d__4(__HMMainThreadDispatcher___ActionCoroutine_d__4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HMMainThreadDispatcher___ActionCoroutine_d__4();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field action, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4, ___action) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HMMainThreadDispatcher
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13880), inst: 4721 }), TypeDefinitionIndex(TypeDefinitionIndex(13880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13957))
// CS Name: ::HMMainThreadDispatcher*
class CORDL_TYPE HMMainThreadDispatcher : public ::GlobalNamespace::PersistentSingleton_1<::GlobalNamespace::HMMainThreadDispatcher*> {
public:
  // Declarations
  using _ActionCoroutine_d__4 = ::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4;

  using __c__DisplayClass2_0 = ::GlobalNamespace::__HMMainThreadDispatcher____c__DisplayClass2_0;

  /// @brief Field _mainThreadExecutionQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__mainThreadExecutionQueue,
                             put = setStaticF__mainThreadExecutionQueue))::System::Collections::Generic::Queue_1<::System::Action*>* _mainThreadExecutionQueue;

  static inline void setStaticF__mainThreadExecutionQueue(::System::Collections::Generic::Queue_1<::System::Action*>* value);

  static inline ::System::Collections::Generic::Queue_1<::System::Action*>* getStaticF__mainThreadExecutionQueue();

  /// @brief Method Update addr 0x1fa20c8 size 0x1a4 virtual false final false
  inline void Update();

  /// @brief Method Enqueue addr 0x1fa226c size 0x1cc virtual false final false
  inline void Enqueue(::System::Collections::IEnumerator* action);

  /// @brief Method Enqueue addr 0x1fa2440 size 0x1c virtual false final false
  inline void Enqueue(::System::Action* action);

  /// @brief Method ActionCoroutine addr 0x1fa245c size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* ActionCoroutine(::System::Action* action);

  static inline ::GlobalNamespace::HMMainThreadDispatcher* New_ctor();

  /// @brief Method .ctor addr 0x1fa24ec size 0x6c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HMMainThreadDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMMainThreadDispatcher(HMMainThreadDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMMainThreadDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMMainThreadDispatcher(HMMainThreadDispatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMMainThreadDispatcher();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMMainThreadDispatcher, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HMMainThreadDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMMainThreadDispatcher*, "", "HMMainThreadDispatcher");
NEED_NO_BOX(::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HMMainThreadDispatcher___ActionCoroutine_d__4*, "", "HMMainThreadDispatcher/<ActionCoroutine>d__4");
NEED_NO_BOX(::GlobalNamespace::__HMMainThreadDispatcher____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HMMainThreadDispatcher____c__DisplayClass2_0*, "", "HMMainThreadDispatcher/<>c__DisplayClass2_0");
