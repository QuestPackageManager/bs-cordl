#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMTask)
namespace System::Threading {
class Thread;
}
namespace GlobalNamespace {
class __HMTask___RunCoroutine_d__8;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class HMTask;
}
namespace GlobalNamespace {
class __HMTask___RunCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HMTask);
MARK_REF_PTR_T(::GlobalNamespace::__HMTask___RunCoroutine_d__8);
// Type: ::<RunCoroutine>d__8
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13958))
// CS Name: ::HMTask::<RunCoroutine>d__8*
class CORDL_TYPE __HMTask___RunCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::HMTask* __4__this;

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

  constexpr ::GlobalNamespace::HMTask*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMTask*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::HMTask* value);

  static inline ::GlobalNamespace::__HMTask___RunCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1fa2920 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1fa2a88 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1fa2a8c size 0xf4 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fa2b80 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1fa2b88 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fa2bc8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__HMTask___RunCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HMTask___RunCoroutine_d__8(__HMTask___RunCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HMTask___RunCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HMTask___RunCoroutine_d__8(__HMTask___RunCoroutine_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HMTask___RunCoroutine_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::HMTask* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HMTask___RunCoroutine_d__8, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HMTask___RunCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HMTask___RunCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HMTask___RunCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HMTask
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 43, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13959))
// CS Name: ::HMTask*
class CORDL_TYPE HMTask : public ::System::Object {
public:
  // Declarations
  using _RunCoroutine_d__8 = ::GlobalNamespace::__HMTask___RunCoroutine_d__8;

  /// @brief Field _thread, offset 0x10, size 0x8
  __declspec(property(get = __get__thread, put = __set__thread))::System::Threading::Thread* _thread;

  /// @brief Field _job, offset 0x18, size 0x8
  __declspec(property(get = __get__job, put = __set__job))::System::Action* _job;

  /// @brief Field _finishCallback, offset 0x20, size 0x8
  __declspec(property(get = __get__finishCallback, put = __set__finishCallback))::System::Action* _finishCallback;

  /// @brief Field _canceled, offset 0x28, size 0x1
  __declspec(property(get = __get__canceled, put = __set__canceled)) bool _canceled;

  /// @brief Field _started, offset 0x29, size 0x1
  __declspec(property(get = __get__started, put = __set__started)) bool _started;

  /// @brief Field _finished, offset 0x2a, size 0x1
  __declspec(property(get = __get__finished, put = __set__finished)) bool _finished;

  constexpr ::System::Threading::Thread*& __get__thread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __get__thread() const;

  constexpr void __set__thread(::System::Threading::Thread* value);

  constexpr ::System::Action*& __get__job();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__job() const;

  constexpr void __set__job(::System::Action* value);

  constexpr ::System::Action*& __get__finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__finishCallback() const;

  constexpr void __set__finishCallback(::System::Action* value);

  constexpr bool& __get__canceled();

  constexpr bool const& __get__canceled() const;

  constexpr void __set__canceled(bool value);

  constexpr bool& __get__started();

  constexpr bool const& __get__started() const;

  constexpr void __set__started(bool value);

  constexpr bool& __get__finished();

  constexpr bool const& __get__finished() const;

  constexpr void __set__finished(bool value);

  static inline ::GlobalNamespace::HMTask* New_ctor(::System::Action* job, ::System::Action* finishCallback);

  /// @brief Method .ctor addr 0x1fa26bc size 0x12c virtual false final false
  inline void _ctor(::System::Action* job, ::System::Action* finishCallback);

  /// @brief Method Run addr 0x1fa27e8 size 0xd0 virtual false final false
  inline void Run();

  /// @brief Method RunCoroutine addr 0x1fa28b8 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* RunCoroutine();

  /// @brief Method RunJob addr 0x1fa2948 size 0xf4 virtual false final false
  inline void RunJob();

  /// @brief Method Cancel addr 0x1fa2a3c size 0xc virtual false final false
  inline void Cancel();

  /// @brief Method <RunCoroutine>b__8_0 addr 0x1fa2a48 size 0x8 virtual false final false
  inline bool _RunCoroutine_b__8_0();

  /// @brief Method <RunJob>b__9_0 addr 0x1fa2a50 size 0x38 virtual false final false
  inline void _RunJob_b__9_0();

  // Ctor Parameters [CppParam { name: "", ty: "HMTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMTask(HMTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMTask(HMTask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMTask();

public:
  /// @brief Field _thread, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Thread* ____thread;

  /// @brief Field _job, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ____job;

  /// @brief Field _finishCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ____finishCallback;

  /// @brief Field _canceled, offset: 0x28, size: 0x1, def value: None
  bool ____canceled;

  /// @brief Field _started, offset: 0x29, size: 0x1, def value: None
  bool ____started;

  /// @brief Field _finished, offset: 0x2a, size: 0x1, def value: None
  bool ____finished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMTask, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HMTask, ____thread) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMTask, ____job) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMTask, ____finishCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMTask, ____canceled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMTask, ____started) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMTask, ____finished) == 0x2a, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HMTask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMTask*, "", "HMTask");
NEED_NO_BOX(::GlobalNamespace::__HMTask___RunCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HMTask___RunCoroutine_d__8*, "", "HMTask/<RunCoroutine>d__8");
