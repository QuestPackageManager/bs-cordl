#pragma once
// IWYU pragma private; include "System/Threading/ReaderWriterLockSlim.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriterLockSlim)
namespace System::Threading {
class EventWaitHandle;
}
namespace System::Threading {
struct LockRecursionPolicy;
}
namespace System::Threading {
class ReaderWriterCount;
}
namespace System::Threading {
struct __ReaderWriterLockSlim__TimeoutTracker;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System::Threading {
struct __ReaderWriterLockSlim__TimeoutTracker;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ReaderWriterLockSlim);
MARK_VAL_T(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker);
// Type: ::TimeoutTracker
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// CS Name: ::ReaderWriterLockSlim::TimeoutTracker
struct CORDL_TYPE __ReaderWriterLockSlim__TimeoutTracker {
public:
  // Declarations
  __declspec(property(get = get_IsExpired)) bool IsExpired;

  __declspec(property(get = get_RemainingMilliseconds)) int32_t RemainingMilliseconds;

  /// @brief Method .ctor, addr 0x40a4e14, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t millisecondsTimeout);

  /// @brief Method get_IsExpired, addr 0x40a522c, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsExpired();

  /// @brief Method get_RemainingMilliseconds, addr 0x40a6180, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_RemainingMilliseconds();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReaderWriterLockSlim__TimeoutTracker();

  // Ctor Parameters [CppParam { name: "m_total", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_start", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReaderWriterLockSlim__TimeoutTracker(int32_t m_total, int32_t m_start) noexcept;

  /// @brief Field m_total, offset: 0x0, size: 0x4, def value: None
  int32_t m_total;

  /// @brief Field m_start, offset: 0x4, size: 0x4, def value: None
  int32_t m_start;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14161 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker, m_total) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker, m_start) == 0x4, "Offset mismatch!");

} // namespace System::Threading
// Type: System.Threading::ReaderWriterLockSlim
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::ReaderWriterLockSlim*
class CORDL_TYPE ReaderWriterLockSlim : public ::System::Object {
public:
  // Declarations
  using TimeoutTracker = ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker;

  __declspec(property(get = get_IsReadLockHeld)) bool IsReadLockHeld;

  __declspec(property(get = get_IsUpgradeableReadLockHeld)) bool IsUpgradeableReadLockHeld;

  __declspec(property(get = get_IsWriteLockHeld)) bool IsWriteLockHeld;

  __declspec(property(get = get_RecursiveReadCount)) int32_t RecursiveReadCount;

  __declspec(property(get = get_RecursiveUpgradeCount)) int32_t RecursiveUpgradeCount;

  __declspec(property(get = get_RecursiveWriteCount)) int32_t RecursiveWriteCount;

  __declspec(property(get = get_WaitingReadCount)) int32_t WaitingReadCount;

  __declspec(property(get = get_WaitingUpgradeCount)) int32_t WaitingUpgradeCount;

  __declspec(property(get = get_WaitingWriteCount)) int32_t WaitingWriteCount;

  /// @brief Field fDisposed, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_fDisposed, put = __cordl_internal_set_fDisposed)) bool fDisposed;

  /// @brief Field fIsReentrant, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_fIsReentrant, put = __cordl_internal_set_fIsReentrant)) bool fIsReentrant;

  /// @brief Field fNoWaiters, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_fNoWaiters, put = __cordl_internal_set_fNoWaiters)) bool fNoWaiters;

  /// @brief Field fUpgradeThreadHoldingRead, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_fUpgradeThreadHoldingRead, put = __cordl_internal_set_fUpgradeThreadHoldingRead)) bool fUpgradeThreadHoldingRead;

  /// @brief Field lockID, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_lockID, put = __cordl_internal_set_lockID)) int64_t lockID;

  /// @brief Field myLock, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_myLock, put = __cordl_internal_set_myLock)) int32_t myLock;

  /// @brief Field numReadWaiters, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_numReadWaiters, put = __cordl_internal_set_numReadWaiters)) uint32_t numReadWaiters;

  /// @brief Field numUpgradeWaiters, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_numUpgradeWaiters, put = __cordl_internal_set_numUpgradeWaiters)) uint32_t numUpgradeWaiters;

  /// @brief Field numWriteUpgradeWaiters, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_numWriteUpgradeWaiters, put = __cordl_internal_set_numWriteUpgradeWaiters)) uint32_t numWriteUpgradeWaiters;

  /// @brief Field numWriteWaiters, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_numWriteWaiters, put = __cordl_internal_set_numWriteWaiters)) uint32_t numWriteWaiters;

  /// @brief Field owners, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_owners, put = __cordl_internal_set_owners)) uint32_t owners;

  /// @brief Field readEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_readEvent, put = __cordl_internal_set_readEvent)) ::System::Threading::EventWaitHandle* readEvent;

  /// @brief Field s_nextLockID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_nextLockID, put = setStaticF_s_nextLockID)) int64_t s_nextLockID;

  /// @brief Field t_rwc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t_rwc, put = setStaticF_t_rwc)) ::System::Threading::ReaderWriterCount* t_rwc;

  /// @brief Field upgradeEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_upgradeEvent, put = __cordl_internal_set_upgradeEvent)) ::System::Threading::EventWaitHandle* upgradeEvent;

  /// @brief Field upgradeLockOwnerId, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_upgradeLockOwnerId, put = __cordl_internal_set_upgradeLockOwnerId)) int32_t upgradeLockOwnerId;

  /// @brief Field waitUpgradeEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_waitUpgradeEvent, put = __cordl_internal_set_waitUpgradeEvent)) ::System::Threading::EventWaitHandle* waitUpgradeEvent;

  /// @brief Field writeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_writeEvent, put = __cordl_internal_set_writeEvent)) ::System::Threading::EventWaitHandle* writeEvent;

  /// @brief Field writeLockOwnerId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_writeLockOwnerId, put = __cordl_internal_set_writeLockOwnerId)) int32_t writeLockOwnerId;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ClearUpgraderWaiting, addr 0x40a62f0, size 0x10, virtual false, abstract: false, final false
  inline void ClearUpgraderWaiting();

  /// @brief Method ClearWriterAcquired, addr 0x40a5fb8, size 0x10, virtual false, abstract: false, final false
  inline void ClearWriterAcquired();

  /// @brief Method ClearWritersWaiting, addr 0x40a62e0, size 0x10, virtual false, abstract: false, final false
  inline void ClearWritersWaiting();

  /// @brief Method Dispose, addr 0x40a640c, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x40a6414, size 0x140, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnterMyLock, addr 0x40a6300, size 0x34, virtual false, abstract: false, final false
  inline void EnterMyLock();

  /// @brief Method EnterMyLockSpin, addr 0x40a6334, size 0xd8, virtual false, abstract: false, final false
  inline void EnterMyLockSpin();

  /// @brief Method EnterReadLock, addr 0x40a4de0, size 0x8, virtual false, abstract: false, final false
  inline void EnterReadLock();

  /// @brief Method EnterUpgradeableReadLock, addr 0x40a5940, size 0x8, virtual false, abstract: false, final false
  inline void EnterUpgradeableReadLock();

  /// @brief Method EnterWriteLock, addr 0x40a54fc, size 0x8, virtual false, abstract: false, final false
  inline void EnterWriteLock();

  /// @brief Method ExitAndWakeUpAppropriateReadWaiters, addr 0x40a624c, size 0x94, virtual false, abstract: false, final false
  inline void ExitAndWakeUpAppropriateReadWaiters();

  /// @brief Method ExitAndWakeUpAppropriateWaiters, addr 0x40a5e44, size 0x2c, virtual false, abstract: false, final false
  inline void ExitAndWakeUpAppropriateWaiters();

  /// @brief Method ExitAndWakeUpAppropriateWaitersPreferringWriters, addr 0x40a61c8, size 0x84, virtual false, abstract: false, final false
  inline void ExitAndWakeUpAppropriateWaitersPreferringWriters();

  /// @brief Method ExitMyLock, addr 0x40a5214, size 0x18, virtual false, abstract: false, final false
  inline void ExitMyLock();

  /// @brief Method ExitReadLock, addr 0x40a5cd8, size 0x16c, virtual false, abstract: false, final false
  inline void ExitReadLock();

  /// @brief Method ExitUpgradeableReadLock, addr 0x40a5fc8, size 0x198, virtual false, abstract: false, final false
  inline void ExitUpgradeableReadLock();

  /// @brief Method ExitWriteLock, addr 0x40a5e70, size 0x148, virtual false, abstract: false, final false
  inline void ExitWriteLock();

  /// @brief Method GetNumReaders, addr 0x40a5934, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetNumReaders();

  /// @brief Method GetThreadRWCount, addr 0x40a4cb4, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Threading::ReaderWriterCount* GetThreadRWCount(bool dontAllocate);

  /// @brief Method InitializeThreadCounts, addr 0x40a4bb8, size 0xc, virtual false, abstract: false, final false
  inline void InitializeThreadCounts();

  /// @brief Method IsRWEntryEmpty, addr 0x40a4c50, size 0x40, virtual false, abstract: false, final false
  static inline bool IsRWEntryEmpty(::System::Threading::ReaderWriterCount* rwc);

  /// @brief Method IsRwHashEntryChanged, addr 0x40a4c90, size 0x24, virtual false, abstract: false, final false
  inline bool IsRwHashEntryChanged(::System::Threading::ReaderWriterCount* lrwc);

  /// @brief Method IsWriterAcquired, addr 0x40a5914, size 0x10, virtual false, abstract: false, final false
  inline bool IsWriterAcquired();

  /// @brief Method LazyCreateEvent, addr 0x40a52dc, size 0xfc, virtual false, abstract: false, final false
  inline void LazyCreateEvent(ByRef<::System::Threading::EventWaitHandle*> waitEvent, bool makeAutoResetEvent);

  static inline ::System::Threading::ReaderWriterLockSlim* New_ctor();

  static inline ::System::Threading::ReaderWriterLockSlim* New_ctor(::System::Threading::LockRecursionPolicy recursionPolicy);

  /// @brief Method SetUpgraderWaiting, addr 0x40a6170, size 0x10, virtual false, abstract: false, final false
  inline void SetUpgraderWaiting();

  /// @brief Method SetWriterAcquired, addr 0x40a5924, size 0x10, virtual false, abstract: false, final false
  inline void SetWriterAcquired();

  /// @brief Method SetWritersWaiting, addr 0x40a6160, size 0x10, virtual false, abstract: false, final false
  inline void SetWritersWaiting();

  /// @brief Method SpinWait, addr 0x40a5244, size 0x98, virtual false, abstract: false, final false
  static inline void SpinWait(int32_t SpinCount);

  /// @brief Method TryEnterReadLock, addr 0x40a4de8, size 0x2c, virtual false, abstract: false, final false
  inline bool TryEnterReadLock(int32_t millisecondsTimeout);

  /// @brief Method TryEnterReadLock, addr 0x40a4e98, size 0x4, virtual false, abstract: false, final false
  inline bool TryEnterReadLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method TryEnterReadLockCore, addr 0x40a4e9c, size 0x378, virtual false, abstract: false, final false
  inline bool TryEnterReadLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method TryEnterUpgradeableReadLock, addr 0x40a5948, size 0x2c, virtual false, abstract: false, final false
  inline bool TryEnterUpgradeableReadLock(int32_t millisecondsTimeout);

  /// @brief Method TryEnterUpgradeableReadLock, addr 0x40a5974, size 0x4, virtual false, abstract: false, final false
  inline bool TryEnterUpgradeableReadLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method TryEnterUpgradeableReadLockCore, addr 0x40a5978, size 0x360, virtual false, abstract: false, final false
  inline bool TryEnterUpgradeableReadLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method TryEnterWriteLock, addr 0x40a5504, size 0x2c, virtual false, abstract: false, final false
  inline bool TryEnterWriteLock(int32_t millisecondsTimeout);

  /// @brief Method TryEnterWriteLock, addr 0x40a5530, size 0x4, virtual false, abstract: false, final false
  inline bool TryEnterWriteLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method TryEnterWriteLockCore, addr 0x40a5534, size 0x3e0, virtual false, abstract: false, final false
  inline bool TryEnterWriteLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout);

  /// @brief Method WaitOnEvent, addr 0x40a53d8, size 0x124, virtual false, abstract: false, final false
  inline bool WaitOnEvent(::System::Threading::EventWaitHandle* waitEvent, ByRef<uint32_t> numWaiters, ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker timeout, bool isWriteWaiter);

  constexpr bool const& __cordl_internal_get_fDisposed() const;

  constexpr bool& __cordl_internal_get_fDisposed();

  constexpr bool const& __cordl_internal_get_fIsReentrant() const;

  constexpr bool& __cordl_internal_get_fIsReentrant();

  constexpr bool const& __cordl_internal_get_fNoWaiters() const;

  constexpr bool& __cordl_internal_get_fNoWaiters();

  constexpr bool const& __cordl_internal_get_fUpgradeThreadHoldingRead() const;

  constexpr bool& __cordl_internal_get_fUpgradeThreadHoldingRead();

  constexpr int64_t const& __cordl_internal_get_lockID() const;

  constexpr int64_t& __cordl_internal_get_lockID();

  constexpr int32_t const& __cordl_internal_get_myLock() const;

  constexpr int32_t& __cordl_internal_get_myLock();

  constexpr uint32_t const& __cordl_internal_get_numReadWaiters() const;

  constexpr uint32_t& __cordl_internal_get_numReadWaiters();

  constexpr uint32_t const& __cordl_internal_get_numUpgradeWaiters() const;

  constexpr uint32_t& __cordl_internal_get_numUpgradeWaiters();

  constexpr uint32_t const& __cordl_internal_get_numWriteUpgradeWaiters() const;

  constexpr uint32_t& __cordl_internal_get_numWriteUpgradeWaiters();

  constexpr uint32_t const& __cordl_internal_get_numWriteWaiters() const;

  constexpr uint32_t& __cordl_internal_get_numWriteWaiters();

  constexpr uint32_t const& __cordl_internal_get_owners() const;

  constexpr uint32_t& __cordl_internal_get_owners();

  constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_readEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __cordl_internal_get_readEvent() const;

  constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_upgradeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __cordl_internal_get_upgradeEvent() const;

  constexpr int32_t const& __cordl_internal_get_upgradeLockOwnerId() const;

  constexpr int32_t& __cordl_internal_get_upgradeLockOwnerId();

  constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_waitUpgradeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __cordl_internal_get_waitUpgradeEvent() const;

  constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_writeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& __cordl_internal_get_writeEvent() const;

  constexpr int32_t const& __cordl_internal_get_writeLockOwnerId() const;

  constexpr int32_t& __cordl_internal_get_writeLockOwnerId();

  constexpr void __cordl_internal_set_fDisposed(bool value);

  constexpr void __cordl_internal_set_fIsReentrant(bool value);

  constexpr void __cordl_internal_set_fNoWaiters(bool value);

  constexpr void __cordl_internal_set_fUpgradeThreadHoldingRead(bool value);

  constexpr void __cordl_internal_set_lockID(int64_t value);

  constexpr void __cordl_internal_set_myLock(int32_t value);

  constexpr void __cordl_internal_set_numReadWaiters(uint32_t value);

  constexpr void __cordl_internal_set_numUpgradeWaiters(uint32_t value);

  constexpr void __cordl_internal_set_numWriteUpgradeWaiters(uint32_t value);

  constexpr void __cordl_internal_set_numWriteWaiters(uint32_t value);

  constexpr void __cordl_internal_set_owners(uint32_t value);

  constexpr void __cordl_internal_set_readEvent(::System::Threading::EventWaitHandle* value);

  constexpr void __cordl_internal_set_upgradeEvent(::System::Threading::EventWaitHandle* value);

  constexpr void __cordl_internal_set_upgradeLockOwnerId(int32_t value);

  constexpr void __cordl_internal_set_waitUpgradeEvent(::System::Threading::EventWaitHandle* value);

  constexpr void __cordl_internal_set_writeEvent(::System::Threading::EventWaitHandle* value);

  constexpr void __cordl_internal_set_writeLockOwnerId(int32_t value);

  /// @brief Method .ctor, addr 0x40a4bc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x40a4bcc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::LockRecursionPolicy recursionPolicy);

  static inline int64_t getStaticF_s_nextLockID();

  static inline ::System::Threading::ReaderWriterCount* getStaticF_t_rwc();

  /// @brief Method get_IsReadLockHeld, addr 0x40a6554, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsReadLockHeld();

  /// @brief Method get_IsUpgradeableReadLockHeld, addr 0x40a656c, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsUpgradeableReadLockHeld();

  /// @brief Method get_IsWriteLockHeld, addr 0x40a6584, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsWriteLockHeld();

  /// @brief Method get_RecursiveReadCount, addr 0x40a659c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_RecursiveReadCount();

  /// @brief Method get_RecursiveUpgradeCount, addr 0x40a661c, size 0xb0, virtual false, abstract: false, final false
  inline int32_t get_RecursiveUpgradeCount();

  /// @brief Method get_RecursiveWriteCount, addr 0x40a66cc, size 0xb0, virtual false, abstract: false, final false
  inline int32_t get_RecursiveWriteCount();

  /// @brief Method get_WaitingReadCount, addr 0x40a677c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_WaitingReadCount();

  /// @brief Method get_WaitingUpgradeCount, addr 0x40a6784, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_WaitingUpgradeCount();

  /// @brief Method get_WaitingWriteCount, addr 0x40a678c, size 0x134, virtual false, abstract: false, final false
  inline int32_t get_WaitingWriteCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_nextLockID(int64_t value);

  static inline void setStaticF_t_rwc(::System::Threading::ReaderWriterCount* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReaderWriterLockSlim();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLockSlim", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReaderWriterLockSlim(ReaderWriterLockSlim&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLockSlim", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReaderWriterLockSlim(ReaderWriterLockSlim const&) = delete;

  /// @brief Field fIsReentrant, offset: 0x10, size: 0x1, def value: None
  bool ___fIsReentrant;

  /// @brief Field myLock, offset: 0x14, size: 0x4, def value: None
  int32_t ___myLock;

  /// @brief Field numWriteWaiters, offset: 0x18, size: 0x4, def value: None
  uint32_t ___numWriteWaiters;

  /// @brief Field numReadWaiters, offset: 0x1c, size: 0x4, def value: None
  uint32_t ___numReadWaiters;

  /// @brief Field numWriteUpgradeWaiters, offset: 0x20, size: 0x4, def value: None
  uint32_t ___numWriteUpgradeWaiters;

  /// @brief Field numUpgradeWaiters, offset: 0x24, size: 0x4, def value: None
  uint32_t ___numUpgradeWaiters;

  /// @brief Field fNoWaiters, offset: 0x28, size: 0x1, def value: None
  bool ___fNoWaiters;

  /// @brief Field upgradeLockOwnerId, offset: 0x2c, size: 0x4, def value: None
  int32_t ___upgradeLockOwnerId;

  /// @brief Field writeLockOwnerId, offset: 0x30, size: 0x4, def value: None
  int32_t ___writeLockOwnerId;

  /// @brief Field writeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ___writeEvent;

  /// @brief Field readEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ___readEvent;

  /// @brief Field upgradeEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ___upgradeEvent;

  /// @brief Field waitUpgradeEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::EventWaitHandle* ___waitUpgradeEvent;

  /// @brief Field lockID, offset: 0x58, size: 0x8, def value: None
  int64_t ___lockID;

  /// @brief Field fUpgradeThreadHoldingRead, offset: 0x60, size: 0x1, def value: None
  bool ___fUpgradeThreadHoldingRead;

  /// @brief Field owners, offset: 0x64, size: 0x4, def value: None
  uint32_t ___owners;

  /// @brief Field fDisposed, offset: 0x68, size: 0x1, def value: None
  bool ___fDisposed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ReaderWriterLockSlim, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___fIsReentrant) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___myLock) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___numWriteWaiters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___numReadWaiters) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___numWriteUpgradeWaiters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___numUpgradeWaiters) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___fNoWaiters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___upgradeLockOwnerId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___writeLockOwnerId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___writeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___readEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___upgradeEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___waitUpgradeEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___lockID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___fUpgradeThreadHoldingRead) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___owners) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLockSlim, ___fDisposed) == 0x68, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ReaderWriterLockSlim);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterLockSlim*, "System.Threading", "ReaderWriterLockSlim");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker, "System.Threading", "ReaderWriterLockSlim/TimeoutTracker");
