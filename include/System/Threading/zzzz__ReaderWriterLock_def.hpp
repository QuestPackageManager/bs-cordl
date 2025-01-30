#pragma once
// IWYU pragma private; include "System/Threading/ReaderWriterLock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriterLock)
namespace System::Collections {
class Hashtable;
}
namespace System::Threading {
class LockQueue;
}
// Forward declare root types
namespace System::Threading {
class ReaderWriterLock;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ReaderWriterLock);
// Dependencies System.Runtime.ConstrainedExecution.CriticalFinalizerObject
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ReaderWriterLock
class CORDL_TYPE ReaderWriterLock : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
  // Declarations
  __declspec(property(get = get_IsWriterLockHeld)) bool IsWriterLockHeld;

  /// @brief Field reader_locks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_reader_locks, put = __cordl_internal_set_reader_locks)) ::System::Collections::Hashtable* reader_locks;

  /// @brief Field readers, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_readers, put = __cordl_internal_set_readers)) int32_t readers;

  /// @brief Field seq_num, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_seq_num, put = __cordl_internal_set_seq_num)) int32_t seq_num;

  /// @brief Field state, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) int32_t state;

  /// @brief Field writer_lock_owner, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_writer_lock_owner, put = __cordl_internal_set_writer_lock_owner)) int32_t writer_lock_owner;

  /// @brief Field writer_queue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_writer_queue, put = __cordl_internal_set_writer_queue)) ::System::Threading::LockQueue* writer_queue;

  /// @brief Method AcquireReaderLock, addr 0x3e5e398, size 0x8, virtual false, abstract: false, final false
  inline void AcquireReaderLock(int32_t millisecondsTimeout);

  /// @brief Method AcquireReaderLock, addr 0x3e5e3a0, size 0x394, virtual false, abstract: false, final false
  inline void AcquireReaderLock(int32_t millisecondsTimeout, int32_t initialLockCount);

  /// @brief Method AcquireWriterLock, addr 0x3e5e908, size 0x8, virtual false, abstract: false, final false
  inline void AcquireWriterLock(int32_t millisecondsTimeout);

  /// @brief Method AcquireWriterLock, addr 0x3e5e768, size 0x1a0, virtual false, abstract: false, final false
  inline void AcquireWriterLock(int32_t millisecondsTimeout, int32_t initialLockCount);

  /// @brief Method Finalize, addr 0x3e5e2b4, size 0x8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HasWriterLock, addr 0x3e5e734, size 0x34, virtual false, abstract: false, final false
  inline bool HasWriterLock();

  static inline ::System::Threading::ReaderWriterLock* New_ctor();

  /// @brief Method ReleaseReaderLock, addr 0x3e5e910, size 0x1e4, virtual false, abstract: false, final false
  inline void ReleaseReaderLock();

  /// @brief Method ReleaseReaderLock, addr 0x3e5ec1c, size 0x120, virtual false, abstract: false, final false
  inline void ReleaseReaderLock(int32_t currentCount, int32_t releaseCount);

  /// @brief Method ReleaseWriterLock, addr 0x3e5eaf4, size 0x128, virtual false, abstract: false, final false
  inline void ReleaseWriterLock();

  /// @brief Method ReleaseWriterLock, addr 0x3e5ed3c, size 0x60, virtual false, abstract: false, final false
  inline void ReleaseWriterLock(int32_t releaseCount);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_reader_locks() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_reader_locks();

  constexpr int32_t const& __cordl_internal_get_readers() const;

  constexpr int32_t& __cordl_internal_get_readers();

  constexpr int32_t const& __cordl_internal_get_seq_num() const;

  constexpr int32_t& __cordl_internal_get_seq_num();

  constexpr int32_t const& __cordl_internal_get_state() const;

  constexpr int32_t& __cordl_internal_get_state();

  constexpr int32_t const& __cordl_internal_get_writer_lock_owner() const;

  constexpr int32_t& __cordl_internal_get_writer_lock_owner();

  constexpr ::System::Threading::LockQueue* const& __cordl_internal_get_writer_queue() const;

  constexpr ::System::Threading::LockQueue*& __cordl_internal_get_writer_queue();

  constexpr void __cordl_internal_set_reader_locks(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_readers(int32_t value);

  constexpr void __cordl_internal_set_seq_num(int32_t value);

  constexpr void __cordl_internal_set_state(int32_t value);

  constexpr void __cordl_internal_set_writer_lock_owner(int32_t value);

  constexpr void __cordl_internal_set_writer_queue(::System::Threading::LockQueue* value);

  /// @brief Method .ctor, addr 0x3e5e1e4, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsWriterLockHeld, addr 0x3e5e2bc, size 0xdc, virtual false, abstract: false, final false
  inline bool get_IsWriterLockHeld();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReaderWriterLock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReaderWriterLock(ReaderWriterLock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReaderWriterLock(ReaderWriterLock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2748 };

  /// @brief Field seq_num, offset: 0x10, size: 0x4, def value: None
  int32_t ___seq_num;

  /// @brief Field state, offset: 0x14, size: 0x4, def value: None
  int32_t ___state;

  /// @brief Field readers, offset: 0x18, size: 0x4, def value: None
  int32_t ___readers;

  /// @brief Field writer_lock_owner, offset: 0x1c, size: 0x4, def value: None
  int32_t ___writer_lock_owner;

  /// @brief Field writer_queue, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::LockQueue* ___writer_queue;

  /// @brief Field reader_locks, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___reader_locks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ReaderWriterLock, ___seq_num) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___state) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___readers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___writer_lock_owner) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___writer_queue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___reader_locks) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ReaderWriterLock, 0x30>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ReaderWriterLock);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterLock*, "System.Threading", "ReaderWriterLock");
