#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadPoolWorkQueueThreadLocals)
namespace System::Threading {
class __ThreadPoolWorkQueue__WorkStealingQueue;
}
namespace System {
class Random;
}
namespace System::Threading {
class ThreadPoolWorkQueue;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2735))
// CS Name: ::System.Threading::ThreadPoolWorkQueueThreadLocals*
class CORDL_TYPE ThreadPoolWorkQueueThreadLocals : public ::System::Object {
public:
  // Declarations
  /// @brief Field workQueue, offset 0x10, size 0x8
  __declspec(property(get = __get_workQueue, put = __set_workQueue))::System::Threading::ThreadPoolWorkQueue* workQueue;

  /// @brief Field workStealingQueue, offset 0x18, size 0x8
  __declspec(property(get = __get_workStealingQueue, put = __set_workStealingQueue))::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue* workStealingQueue;

  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::System::Random* random;

  /// @brief Field threadLocals, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_threadLocals, put = setStaticF_threadLocals))::System::Threading::ThreadPoolWorkQueueThreadLocals* threadLocals;

  constexpr ::System::Threading::ThreadPoolWorkQueue*& __get_workQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ThreadPoolWorkQueue*> const& __get_workQueue() const;

  constexpr void __set_workQueue(::System::Threading::ThreadPoolWorkQueue* value);

  constexpr ::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*& __get_workStealingQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue*> const& __get_workStealingQueue() const;

  constexpr void __set_workStealingQueue(::System::Threading::__ThreadPoolWorkQueue__WorkStealingQueue* value);

  constexpr ::System::Random*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __get_random() const;

  constexpr void __set_random(::System::Random* value);

  static inline void setStaticF_threadLocals(::System::Threading::ThreadPoolWorkQueueThreadLocals* value);

  static inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* getStaticF_threadLocals();

  static inline ::System::Threading::ThreadPoolWorkQueueThreadLocals* New_ctor(::System::Threading::ThreadPoolWorkQueue* tpq);

  /// @brief Method .ctor, addr 0x261bfe8, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ThreadPoolWorkQueue* tpq);

  /// @brief Method CleanUp, addr 0x261c104, size 0xd4, virtual false, abstract: false, final false
  inline void CleanUp();

  /// @brief Method Finalize, addr 0x261c1d8, size 0xcc, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueueThreadLocals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadPoolWorkQueueThreadLocals(ThreadPoolWorkQueueThreadLocals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueueThreadLocals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadPoolWorkQueueThreadLocals(ThreadPoolWorkQueueThreadLocals const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadPoolWorkQueueThreadLocals();

public:
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
