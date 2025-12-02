#pragma once
// IWYU pragma private; include "System/Threading/ManualResetEventSlim.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManualResetEventSlim)
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class ManualResetEventSlim;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ManualResetEventSlim);
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ManualResetEventSlim
class CORDL_TYPE ManualResetEventSlim : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsSet, put = set_IsSet)) bool IsSet;

  __declspec(property(get = get_SpinCount, put = set_SpinCount)) int32_t SpinCount;

  __declspec(property(get = get_WaitHandle)) ::System::Threading::WaitHandle* WaitHandle;

  __declspec(property(get = get_Waiters, put = set_Waiters)) int32_t Waiters;

  /// @brief Field m_combinedState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_combinedState, put = __cordl_internal_set_m_combinedState)) int32_t m_combinedState;

  /// @brief Field m_eventObj, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_eventObj, put = __cordl_internal_set_m_eventObj)) ::System::Threading::ManualResetEvent* m_eventObj;

  /// @brief Field m_lock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_lock, put = __cordl_internal_set_m_lock)) ::System::Object* m_lock;

  /// @brief Field s_cancellationTokenCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cancellationTokenCallback, put = setStaticF_s_cancellationTokenCallback)) ::System::Action_1<::System::Object*>* s_cancellationTokenCallback;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CancellationTokenCallback, addr 0x5a94830, size 0x128, virtual false, abstract: false, final false
  static inline void CancellationTokenCallback(::System::Object* obj);

  /// @brief Method Dispose, addr 0x5a946cc, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x5a9473c, size 0xf4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnsureLockObjectCreated, addr 0x5a93db8, size 0x70, virtual false, abstract: false, final false
  inline void EnsureLockObjectCreated();

  /// @brief Method ExtractStatePortion, addr 0x5a9393c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ExtractStatePortion(int32_t state, int32_t mask);

  /// @brief Method ExtractStatePortionAndShiftRight, addr 0x5a93a98, size 0xc, virtual false, abstract: false, final false
  static inline int32_t ExtractStatePortionAndShiftRight(int32_t state, int32_t mask, int32_t rightBitShiftCount);

  /// @brief Method Initialize, addr 0x5a93c18, size 0xb0, virtual false, abstract: false, final false
  inline void Initialize(bool initialState, int32_t spinCount);

  /// @brief Method LazyInitializeEvent, addr 0x5a9374c, size 0x190, virtual false, abstract: false, final false
  inline bool LazyInitializeEvent();

  static inline ::System::Threading::ManualResetEventSlim* New_ctor(bool initialState);

  static inline ::System::Threading::ManualResetEventSlim* New_ctor(bool initialState, int32_t spinCount);

  /// @brief Method Set, addr 0x5a93e9c, size 0x8, virtual false, abstract: false, final false
  inline void Set();

  /// @brief Method Set, addr 0x5a93ea4, size 0x1a4, virtual false, abstract: false, final false
  inline void Set(bool duringCancellation);

  /// @brief Method ThrowIfDisposed, addr 0x5a936f0, size 0x5c, virtual false, abstract: false, final false
  inline void ThrowIfDisposed();

  /// @brief Method UpdateStateAtomically, addr 0x5a93964, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateStateAtomically(int32_t newBits, int32_t updateBitsMask);

  /// @brief Method Wait, addr 0x5a9409c, size 0x4f8, virtual false, abstract: false, final false
  inline bool Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);

  constexpr int32_t const& __cordl_internal_get_m_combinedState() const;

  constexpr int32_t& __cordl_internal_get_m_combinedState();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_m_eventObj() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_m_eventObj();

  constexpr ::System::Object* const& __cordl_internal_get_m_lock() const;

  constexpr ::System::Object*& __cordl_internal_get_m_lock();

  constexpr void __cordl_internal_set_m_combinedState(int32_t value);

  constexpr void __cordl_internal_set_m_eventObj(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set_m_lock(::System::Object* value);

  /// @brief Method .ctor, addr 0x5a93ba4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool initialState);

  /// @brief Method .ctor, addr 0x5a93cc8, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(bool initialState, int32_t spinCount);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_cancellationTokenCallback();

  /// @brief Method get_IsSet, addr 0x5a938dc, size 0x60, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method get_SpinCount, addr 0x5a93a38, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_SpinCount();

  /// @brief Method get_WaitHandle, addr 0x5a936c0, size 0x30, virtual false, abstract: false, final false
  inline ::System::Threading::WaitHandle* get_WaitHandle();

  /// @brief Method get_Waiters, addr 0x5a93abc, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_Waiters();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_cancellationTokenCallback(::System::Action_1<::System::Object*>* value);

  /// @brief Method set_IsSet, addr 0x5a93944, size 0x20, virtual false, abstract: false, final false
  inline void set_IsSet(bool value);

  /// @brief Method set_SpinCount, addr 0x5a93aa4, size 0x18, virtual false, abstract: false, final false
  inline void set_SpinCount(int32_t value);

  /// @brief Method set_Waiters, addr 0x5a93b1c, size 0x88, virtual false, abstract: false, final false
  inline void set_Waiters(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManualResetEventSlim();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManualResetEventSlim", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManualResetEventSlim(ManualResetEventSlim&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManualResetEventSlim", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManualResetEventSlim(ManualResetEventSlim const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2690 };

  /// @brief Field m_lock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___m_lock;

  /// @brief Field m_eventObj, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___m_eventObj;

  /// @brief Field m_combinedState, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_combinedState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ManualResetEventSlim, ___m_lock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ManualResetEventSlim, ___m_eventObj) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ManualResetEventSlim, ___m_combinedState) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ManualResetEventSlim, 0x28>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ManualResetEventSlim);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ManualResetEventSlim*, "System.Threading", "ManualResetEventSlim");
