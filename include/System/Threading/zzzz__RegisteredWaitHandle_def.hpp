#pragma once
// IWYU pragma private; include "System/Threading/RegisteredWaitHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegisteredWaitHandle)
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Threading {
class WaitOrTimerCallback;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Threading {
class RegisteredWaitHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::RegisteredWaitHandle);
// Type: System.Threading::RegisteredWaitHandle
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::RegisteredWaitHandle*
class CORDL_TYPE RegisteredWaitHandle : public ::System::MarshalByRefObject {
public:
  // Declarations
  /// @brief Field _callback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__callback, put = __cordl_internal_set__callback))::System::Threading::WaitOrTimerCallback* _callback;

  /// @brief Field _callsInProcess, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__callsInProcess, put = __cordl_internal_set__callsInProcess)) int32_t _callsInProcess;

  /// @brief Field _cancelEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelEvent, put = __cordl_internal_set__cancelEvent))::System::Threading::ManualResetEvent* _cancelEvent;

  /// @brief Field _executeOnlyOnce, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__executeOnlyOnce, put = __cordl_internal_set__executeOnlyOnce)) bool _executeOnlyOnce;

  /// @brief Field _finalEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__finalEvent, put = __cordl_internal_set__finalEvent))::System::Threading::WaitHandle* _finalEvent;

  /// @brief Field _state, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::System::Object* _state;

  /// @brief Field _timeout, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__timeout, put = __cordl_internal_set__timeout))::System::TimeSpan _timeout;

  /// @brief Field _unregistered, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get__unregistered, put = __cordl_internal_set__unregistered)) bool _unregistered;

  /// @brief Field _waitObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__waitObject, put = __cordl_internal_set__waitObject))::System::Threading::WaitHandle* _waitObject;

  /// @brief Method DoCallBack, addr 0x29a7068, size 0x104, virtual false, abstract: false, final false
  inline void DoCallBack(::System::Object* timedOut);

  static inline ::System::Threading::RegisteredWaitHandle* New_ctor(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callback, ::System::Object* state,
                                                                    ::System::TimeSpan timeout, bool executeOnlyOnce);

  /// @brief Method Unregister, addr 0x29a716c, size 0xf4, virtual false, abstract: false, final false
  inline bool Unregister(::System::Threading::WaitHandle* waitObject);

  /// @brief Method Wait, addr 0x29a6b3c, size 0x52c, virtual false, abstract: false, final false
  inline void Wait(::System::Object* state);

  constexpr ::System::Threading::WaitOrTimerCallback*& __cordl_internal_get__callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitOrTimerCallback*> const& __cordl_internal_get__callback() const;

  constexpr int32_t const& __cordl_internal_get__callsInProcess() const;

  constexpr int32_t& __cordl_internal_get__callsInProcess();

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get__cancelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __cordl_internal_get__cancelEvent() const;

  constexpr bool const& __cordl_internal_get__executeOnlyOnce() const;

  constexpr bool& __cordl_internal_get__executeOnlyOnce();

  constexpr ::System::Threading::WaitHandle*& __cordl_internal_get__finalEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& __cordl_internal_get__finalEvent() const;

  constexpr ::System::Object*& __cordl_internal_get__state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__state() const;

  constexpr ::System::TimeSpan const& __cordl_internal_get__timeout() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__timeout();

  constexpr bool const& __cordl_internal_get__unregistered() const;

  constexpr bool& __cordl_internal_get__unregistered();

  constexpr ::System::Threading::WaitHandle*& __cordl_internal_get__waitObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& __cordl_internal_get__waitObject() const;

  constexpr void __cordl_internal_set__callback(::System::Threading::WaitOrTimerCallback* value);

  constexpr void __cordl_internal_set__callsInProcess(int32_t value);

  constexpr void __cordl_internal_set__cancelEvent(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set__executeOnlyOnce(bool value);

  constexpr void __cordl_internal_set__finalEvent(::System::Threading::WaitHandle* value);

  constexpr void __cordl_internal_set__state(::System::Object* value);

  constexpr void __cordl_internal_set__timeout(::System::TimeSpan value);

  constexpr void __cordl_internal_set__unregistered(bool value);

  constexpr void __cordl_internal_set__waitObject(::System::Threading::WaitHandle* value);

  /// @brief Method .ctor, addr 0x29a41e8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callback, ::System::Object* state, ::System::TimeSpan timeout, bool executeOnlyOnce);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegisteredWaitHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegisteredWaitHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegisteredWaitHandle(RegisteredWaitHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegisteredWaitHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegisteredWaitHandle(RegisteredWaitHandle const&) = delete;

  /// @brief Field _waitObject, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::WaitHandle* ____waitObject;

  /// @brief Field _callback, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::WaitOrTimerCallback* ____callback;

  /// @brief Field _state, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____state;

  /// @brief Field _finalEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::WaitHandle* ____finalEvent;

  /// @brief Field _cancelEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ____cancelEvent;

  /// @brief Field _timeout, offset: 0x40, size: 0x8, def value: None
  ::System::TimeSpan ____timeout;

  /// @brief Field _callsInProcess, offset: 0x48, size: 0x4, def value: None
  int32_t ____callsInProcess;

  /// @brief Field _executeOnlyOnce, offset: 0x4c, size: 0x1, def value: None
  bool ____executeOnlyOnce;

  /// @brief Field _unregistered, offset: 0x4d, size: 0x1, def value: None
  bool ____unregistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::RegisteredWaitHandle, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____waitObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____finalEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____cancelEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____timeout) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____callsInProcess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____executeOnlyOnce) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::RegisteredWaitHandle, ____unregistered) == 0x4d, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::RegisteredWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::RegisteredWaitHandle*, "System.Threading", "RegisteredWaitHandle");
