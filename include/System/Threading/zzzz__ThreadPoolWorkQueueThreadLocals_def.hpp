#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadPoolWorkQueueThreadLocals)
namespace System::Threading {
class ThreadPoolWorkQueue;
}
namespace System::Threading {
class __ThreadPoolWorkQueue__WorkStealingQueue;
}
namespace System {
class Random;
}
// Forward declare root types
namespace System::Threading {
class ThreadPoolWorkQueueThreadLocals;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadPoolWorkQueueThreadLocals);
// Type: System.Threading::ThreadPoolWorkQueueThreadLocals
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::ThreadPoolWorkQueueThreadLocals*
class CORDL_TYPE ThreadPoolWorkQueueThreadLocals : public ::System::Object {
public:
  // Declarations
  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random))::System::Random* random;

  /// @brief Field threadLocals, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_threadLocals, put = setStaticF_threadLocals))::System::Threading::ThreadPoolWorkQueueThreadLocals* threadLocals;

  /// @brief Field workQueue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_workQueue, put = __cordl_internal_set_workQueue))::System::Threading::ThreadPoolWorkQueue* workQueue;

  /// @brief Field workStealingQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_workStealingQueue, put = __cordl_internal_set_workStealingQueue))::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue* workStealingQueue;

  /// @brief Method CleanUp, addr 0x29a3b90, size 0xcc, virtual false, abstract: false, final false
  inline void CleanUp();

  /// @brief Method Finalize, addr 0x29a3c5c, size 0xcc, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* New_ctor(::System::Threading::ThreadPoolWorkQueue* tpq);

  constexpr ::System::Random*& __cordl_internal_get_random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get_random() const;

  constexpr ::System::Threading::ThreadPoolWorkQueue*& __cordl_internal_get_workQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ThreadPoolWorkQueue*> const& __cordl_internal_get_workQueue() const;

  constexpr ::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*& __cordl_internal_get_workStealingQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*> const& __cordl_internal_get_workStealingQueue() const;

  constexpr void __cordl_internal_set_random(::System::Random* value);

  constexpr void __cordl_internal_set_workQueue(::System::Threading::ThreadPoolWorkQueue* value);

  constexpr void __cordl_internal_set_workStealingQueue(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue* value);

  /// @brief Method .ctor, addr 0x29a2248, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ThreadPoolWorkQueue* tpq);

  static inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* getStaticF_threadLocals();

  static inline void setStaticF_threadLocals(::System::Threading::ThreadPoolWorkQueueThreadLocals* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolWorkQueueThreadLocals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueueThreadLocals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolWorkQueueThreadLocals(ThreadPoolWorkQueueThreadLocals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueueThreadLocals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolWorkQueueThreadLocals(ThreadPoolWorkQueueThreadLocals const&) = delete;

  /// @brief Field workQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ThreadPoolWorkQueue* ___workQueue;

  /// @brief Field workStealingQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue* ___workStealingQueue;

  /// @brief Field random, offset: 0x20, size: 0x8, def value: None
  ::System::Random* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadPoolWorkQueueThreadLocals, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueueThreadLocals, ___workQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueueThreadLocals, ___workStealingQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadPoolWorkQueueThreadLocals, ___random) == 0x20, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadPoolWorkQueueThreadLocals);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolWorkQueueThreadLocals*, "System.Threading", "ThreadPoolWorkQueueThreadLocals");
