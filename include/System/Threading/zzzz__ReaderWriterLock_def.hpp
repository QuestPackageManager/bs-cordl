#pragma once
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
// Type: System.Threading::ReaderWriterLock
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3354))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2745))
// CS Name: ::System.Threading::ReaderWriterLock*
class CORDL_TYPE ReaderWriterLock : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
  // Declarations
  /// @brief Field seq_num, offset 0x10, size 0x4
  __declspec(property(get = __get_seq_num, put = __set_seq_num)) int32_t seq_num;

  /// @brief Field state, offset 0x14, size 0x4
  __declspec(property(get = __get_state, put = __set_state)) int32_t state;

  /// @brief Field readers, offset 0x18, size 0x4
  __declspec(property(get = __get_readers, put = __set_readers)) int32_t readers;

  /// @brief Field writer_lock_owner, offset 0x1c, size 0x4
  __declspec(property(get = __get_writer_lock_owner, put = __set_writer_lock_owner)) int32_t writer_lock_owner;

  /// @brief Field writer_queue, offset 0x20, size 0x8
  __declspec(property(get = __get_writer_queue, put = __set_writer_queue))::System::Threading::LockQueue* writer_queue;

  /// @brief Field reader_locks, offset 0x28, size 0x8
  __declspec(property(get = __get_reader_locks, put = __set_reader_locks))::System::Collections::Hashtable* reader_locks;

  __declspec(property(get = get_IsWriterLockHeld)) bool IsWriterLockHeld;

  constexpr int32_t& __get_seq_num();

  constexpr int32_t const& __get_seq_num() const;

  constexpr void __set_seq_num(int32_t value);

  constexpr int32_t& __get_state();

  constexpr int32_t const& __get_state() const;

  constexpr void __set_state(int32_t value);

  constexpr int32_t& __get_readers();

  constexpr int32_t const& __get_readers() const;

  constexpr void __set_readers(int32_t value);

  constexpr int32_t& __get_writer_lock_owner();

  constexpr int32_t const& __get_writer_lock_owner() const;

  constexpr void __set_writer_lock_owner(int32_t value);

  constexpr ::System::Threading::LockQueue*& __get_writer_queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::LockQueue*> const& __get_writer_queue() const;

  constexpr void __set_writer_queue(::System::Threading::LockQueue* value);

  constexpr ::System::Collections::Hashtable*& __get_reader_locks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_reader_locks() const;

  constexpr void __set_reader_locks(::System::Collections::Hashtable* value);

  static inline ::System::Threading::ReaderWriterLock* New_ctor();

  /// @brief Method .ctor, addr 0x261e500, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Finalize, addr 0x261e5d4, size 0x8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method get_IsWriterLockHeld, addr 0x261e5dc, size 0xdc, virtual false, abstract: false, final false
  inline bool get_IsWriterLockHeld();

  /// @brief Method AcquireReaderLock, addr 0x261e6b8, size 0x8, virtual false, abstract: false, final false
  inline void AcquireReaderLock(int32_t millisecondsTimeout);

  /// @brief Method AcquireReaderLock, addr 0x261e6c0, size 0x39c, virtual false, abstract: false, final false
  inline void AcquireReaderLock(int32_t millisecondsTimeout, int32_t initialLockCount);

  /// @brief Method AcquireWriterLock, addr 0x261ec38, size 0x8, virtual false, abstract: false, final false
  inline void AcquireWriterLock(int32_t millisecondsTimeout);

  /// @brief Method AcquireWriterLock, addr 0x261ea90, size 0x1a8, virtual false, abstract: false, final false
  inline void AcquireWriterLock(int32_t millisecondsTimeout, int32_t initialLockCount);

  /// @brief Method ReleaseReaderLock, addr 0x261ec40, size 0x1ec, virtual false, abstract: false, final false
  inline void ReleaseReaderLock();

  /// @brief Method ReleaseReaderLock, addr 0x261ef5c, size 0x120, virtual false, abstract: false, final false
  inline void ReleaseReaderLock(int32_t currentCount, int32_t releaseCount);

  /// @brief Method ReleaseWriterLock, addr 0x261ee2c, size 0x130, virtual false, abstract: false, final false
  inline void ReleaseWriterLock();

  /// @brief Method ReleaseWriterLock, addr 0x261f07c, size 0x60, virtual false, abstract: false, final false
  inline void ReleaseWriterLock(int32_t releaseCount);

  /// @brief Method HasWriterLock, addr 0x261ea5c, size 0x34, virtual false, abstract: false, final false
  inline bool HasWriterLock();

  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReaderWriterLock(ReaderWriterLock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterLock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReaderWriterLock(ReaderWriterLock const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReaderWriterLock();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Threading::ReaderWriterLock, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___seq_num) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___state) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___readers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___writer_lock_owner) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___writer_queue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterLock, ___reader_locks) == 0x28, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ReaderWriterLock);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterLock*, "System.Threading", "ReaderWriterLock");
