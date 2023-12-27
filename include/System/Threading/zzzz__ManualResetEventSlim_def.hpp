#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManualResetEventSlim)
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System::Threading {
class ManualResetEventSlim;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ManualResetEventSlim);
// Type: System.Threading::ManualResetEventSlim
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2678))
// CS Name: ::System.Threading::ManualResetEventSlim*
class CORDL_TYPE ManualResetEventSlim : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_lock, offset 0x10, size 0x8
  __declspec(property(get = __get_m_lock, put = __set_m_lock))::System::Object* m_lock;

  /// @brief Field m_eventObj, offset 0x18, size 0x8
  __declspec(property(get = __get_m_eventObj, put = __set_m_eventObj))::System::Threading::ManualResetEvent* m_eventObj;

  /// @brief Field m_combinedState, offset 0x20, size 0x4
  __declspec(property(get = __get_m_combinedState, put = __set_m_combinedState)) int32_t m_combinedState;

  /// @brief Field s_cancellationTokenCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cancellationTokenCallback, put = setStaticF_s_cancellationTokenCallback))::System::Action_1<::System::Object*>* s_cancellationTokenCallback;

  __declspec(property(get = get_WaitHandle))::System::Threading::WaitHandle* WaitHandle;

  __declspec(property(get = get_IsSet, put = set_IsSet)) bool IsSet;

  __declspec(property(get = get_SpinCount, put = set_SpinCount)) int32_t SpinCount;

  __declspec(property(get = get_Waiters, put = set_Waiters)) int32_t Waiters;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Object*& __get_m_lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_lock() const;

  constexpr void __set_m_lock(::System::Object* value);

  constexpr ::System::Threading::ManualResetEvent*& __get_m_eventObj();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get_m_eventObj() const;

  constexpr void __set_m_eventObj(::System::Threading::ManualResetEvent* value);

  constexpr int32_t& __get_m_combinedState();

  constexpr int32_t const& __get_m_combinedState() const;

  constexpr void __set_m_combinedState(int32_t value);

  static inline void setStaticF_s_cancellationTokenCallback(::System::Action_1<::System::Object*>* value);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_cancellationTokenCallback();

  /// @brief Method get_WaitHandle addr 0x2610d80 size 0x3c virtual false final false
  inline ::System::Threading::WaitHandle* get_WaitHandle();

  /// @brief Method get_IsSet addr 0x2610f88 size 0x5c virtual false final false
  inline bool get_IsSet();

  /// @brief Method set_IsSet addr 0x2610fec size 0x20 virtual false final false
  inline void set_IsSet(bool value);

  /// @brief Method get_SpinCount addr 0x26110b0 size 0x5c virtual false final false
  inline int32_t get_SpinCount();

  /// @brief Method set_SpinCount addr 0x2611118 size 0x34 virtual false final false
  inline void set_SpinCount(int32_t value);

  /// @brief Method get_Waiters addr 0x261114c size 0x5c virtual false final false
  inline int32_t get_Waiters();

  /// @brief Method set_Waiters addr 0x26111a8 size 0x94 virtual false final false
  inline void set_Waiters(int32_t value);

  static inline ::System::Threading::ManualResetEventSlim* New_ctor(bool initialState);

  /// @brief Method .ctor addr 0x261123c size 0x7c virtual false final false
  inline void _ctor(bool initialState);

  static inline ::System::Threading::ManualResetEventSlim* New_ctor(bool initialState, int32_t spinCount);

  /// @brief Method .ctor addr 0x2611368 size 0x120 virtual false final false
  inline void _ctor(bool initialState, int32_t spinCount);

  /// @brief Method Initialize addr 0x26112b8 size 0xb0 virtual false final false
  inline void Initialize(bool initialState, int32_t spinCount);

  /// @brief Method EnsureLockObjectCreated addr 0x2611488 size 0x88 virtual false final false
  inline void EnsureLockObjectCreated();

  /// @brief Method LazyInitializeEvent addr 0x2610e20 size 0x168 virtual false final false
  inline bool LazyInitializeEvent();

  /// @brief Method Set addr 0x2611594 size 0x8 virtual false final false
  inline void Set();

  /// @brief Method Set addr 0x261159c size 0x1ac virtual false final false
  inline void Set(bool duringCancellation);

  /// @brief Method Wait addr 0x26117a0 size 0x450 virtual false final false
  inline bool Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose addr 0x2611ce8 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2611d54 size 0xf4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method ThrowIfDisposed addr 0x2610dbc size 0x64 virtual false final false
  inline void ThrowIfDisposed();

  /// @brief Method CancellationTokenCallback addr 0x2611e48 size 0x120 virtual false final false
  static inline void CancellationTokenCallback(::System::Object* obj);

  /// @brief Method UpdateStateAtomically addr 0x261100c size 0xa4 virtual false final false
  inline void UpdateStateAtomically(int32_t newBits, int32_t updateBitsMask);

  /// @brief Method ExtractStatePortionAndShiftRight addr 0x261110c size 0xc virtual false final false
  static inline int32_t ExtractStatePortionAndShiftRight(int32_t state, int32_t mask, int32_t rightBitShiftCount);

  /// @brief Method ExtractStatePortion addr 0x2610fe4 size 0x8 virtual false final false
  static inline int32_t ExtractStatePortion(int32_t state, int32_t mask);

  // Ctor Parameters [CppParam { name: "", ty: "ManualResetEventSlim", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManualResetEventSlim(ManualResetEventSlim&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManualResetEventSlim", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManualResetEventSlim(ManualResetEventSlim const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManualResetEventSlim();

public:
  /// @brief Field m_lock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___m_lock;

  /// @brief Field m_eventObj, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___m_eventObj;

  /// @brief Field m_combinedState, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_combinedState;

  /// @brief Field DEFAULT_SPIN_SP offset 0xffffffff size 0x4
  static constexpr int32_t DEFAULT_SPIN_SP{ static_cast<int32_t>(0x1) };

  /// @brief Field SignalledState_BitMask offset 0xffffffff size 0x4
  static constexpr int32_t SignalledState_BitMask{ static_cast<int32_t>(0x80000000) };

  /// @brief Field SignalledState_ShiftCount offset 0xffffffff size 0x4
  static constexpr int32_t SignalledState_ShiftCount{ static_cast<int32_t>(0x1f) };

  /// @brief Field Dispose_BitMask offset 0xffffffff size 0x4
  static constexpr int32_t Dispose_BitMask{ static_cast<int32_t>(0x40000000) };

  /// @brief Field SpinCountState_BitMask offset 0xffffffff size 0x4
  static constexpr int32_t SpinCountState_BitMask{ static_cast<int32_t>(0x3ff80000) };

  /// @brief Field SpinCountState_ShiftCount offset 0xffffffff size 0x4
  static constexpr int32_t SpinCountState_ShiftCount{ static_cast<int32_t>(0x13) };

  /// @brief Field SpinCountState_MaxValue offset 0xffffffff size 0x4
  static constexpr int32_t SpinCountState_MaxValue{ static_cast<int32_t>(0x7ff) };

  /// @brief Field NumWaitersState_BitMask offset 0xffffffff size 0x4
  static constexpr int32_t NumWaitersState_BitMask{ static_cast<int32_t>(0x7ffff) };

  /// @brief Field NumWaitersState_ShiftCount offset 0xffffffff size 0x4
  static constexpr int32_t NumWaitersState_ShiftCount{ static_cast<int32_t>(0x0) };

  /// @brief Field NumWaitersState_MaxValue offset 0xffffffff size 0x4
  static constexpr int32_t NumWaitersState_MaxValue{ static_cast<int32_t>(0x7ffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ManualResetEventSlim, 0x28>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ManualResetEventSlim);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ManualResetEventSlim*, "System.Threading", "ManualResetEventSlim");
