#pragma once
// IWYU pragma private; include "System/Threading/LockQueue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LockQueue)
namespace System::Threading {
class ReaderWriterLock;
}
// Forward declare root types
namespace System::Threading {
class LockQueue;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::LockQueue);
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.LockQueue
class CORDL_TYPE LockQueue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Field lockCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lockCount, put = __cordl_internal_set_lockCount)) int32_t lockCount;

  /// @brief Field rwlock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rwlock, put = __cordl_internal_set_rwlock)) ::System::Threading::ReaderWriterLock* rwlock;

  static inline ::System::Threading::LockQueue* New_ctor(::System::Threading::ReaderWriterLock* rwlock);

  /// @brief Method Pulse, addr 0x3e5c0cc, size 0xb8, virtual false, abstract: false, final false
  inline void Pulse();

  /// @brief Method Wait, addr 0x3e5be68, size 0x1a4, virtual false, abstract: false, final false
  inline bool Wait(int32_t timeout);

  constexpr int32_t const& __cordl_internal_get_lockCount() const;

  constexpr int32_t& __cordl_internal_get_lockCount();

  constexpr ::System::Threading::ReaderWriterLock* const& __cordl_internal_get_rwlock() const;

  constexpr ::System::Threading::ReaderWriterLock*& __cordl_internal_get_rwlock();

  constexpr void __cordl_internal_set_lockCount(int32_t value);

  constexpr void __cordl_internal_set_rwlock(::System::Threading::ReaderWriterLock* value);

  /// @brief Method .ctor, addr 0x3e5be40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ReaderWriterLock* rwlock);

  /// @brief Method get_IsEmpty, addr 0x3e5c00c, size 0xc0, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LockQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LockQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LockQueue(LockQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LockQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LockQueue(LockQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2745 };

  /// @brief Field rwlock, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLock* ___rwlock;

  /// @brief Field lockCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___lockCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::LockQueue, ___rwlock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::LockQueue, ___lockCount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::LockQueue, 0x20>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::LockQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockQueue*, "System.Threading", "LockQueue");
