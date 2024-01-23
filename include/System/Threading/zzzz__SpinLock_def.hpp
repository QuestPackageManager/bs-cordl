#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpinLock)
namespace System::Threading {
class __SpinLock__SystemThreading_SpinLockDebugView;
}
// Forward declare root types
namespace System::Threading {
class __SpinLock__SystemThreading_SpinLockDebugView;
}
namespace System::Threading {
struct SpinLock;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView);
MARK_VAL_T(::System::Threading::SpinLock);
// Type: ::SystemThreading_SpinLockDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2700))
// CS Name: ::SpinLock::SystemThreading_SpinLockDebugView*
class CORDL_TYPE __SpinLock__SystemThreading_SpinLockDebugView : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__SpinLock__SystemThreading_SpinLockDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SpinLock__SystemThreading_SpinLockDebugView(__SpinLock__SystemThreading_SpinLockDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SpinLock__SystemThreading_SpinLockDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SpinLock__SystemThreading_SpinLockDebugView(__SpinLock__SystemThreading_SpinLockDebugView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpinLock__SystemThreading_SpinLockDebugView();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView, 0x10>, "Size mismatch!");

} // namespace System::Threading
// Type: System.Threading::SpinLock
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2701))
// CS Name: ::System.Threading::SpinLock
struct CORDL_TYPE SpinLock {
public:
  // Declarations
  using SystemThreading_SpinLockDebugView = ::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView;

  /// @brief Field MAXIMUM_WAITERS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAXIMUM_WAITERS, put = setStaticF_MAXIMUM_WAITERS)) int32_t MAXIMUM_WAITERS;

  __declspec(property(get = get_IsHeldByCurrentThread)) bool IsHeldByCurrentThread;

  __declspec(property(get = get_IsThreadOwnerTrackingEnabled)) bool IsThreadOwnerTrackingEnabled;

  static inline void setStaticF_MAXIMUM_WAITERS(int32_t value);

  static inline int32_t getStaticF_MAXIMUM_WAITERS();

  /// @brief Method .ctor, addr 0x2615e10, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(bool enableThreadOwnerTracking);

  /// @brief Method Enter, addr 0x2615e48, size 0x7c, virtual false, abstract: false, final false
  inline void Enter(ByRef<bool> lockTaken);

  /// @brief Method TryEnter, addr 0x261639c, size 0x98, virtual false, abstract: false, final false
  inline void TryEnter(int32_t millisecondsTimeout, ByRef<bool> lockTaken);

  /// @brief Method ContinueTryEnter, addr 0x2615f14, size 0x488, virtual false, abstract: false, final false
  inline void ContinueTryEnter(int32_t millisecondsTimeout, ByRef<bool> lockTaken);

  /// @brief Method DecrementWaiters, addr 0x26165c8, size 0x60, virtual false, abstract: false, final false
  inline void DecrementWaiters();

  /// @brief Method ContinueTryEnterWithThreadTracking, addr 0x26164a0, size 0x128, virtual false, abstract: false, final false
  inline void ContinueTryEnterWithThreadTracking(int32_t millisecondsTimeout, uint32_t startTime, ByRef<bool> lockTaken);

  /// @brief Method Exit, addr 0x2616758, size 0x50, virtual false, abstract: false, final false
  inline void Exit(bool useMemoryBarrier);

  /// @brief Method ExitSlowPath, addr 0x26167a8, size 0xe0, virtual false, abstract: false, final false
  inline void ExitSlowPath(bool useMemoryBarrier);

  /// @brief Method get_IsHeldByCurrentThread, addr 0x2616888, size 0xa0, virtual false, abstract: false, final false
  inline bool get_IsHeldByCurrentThread();

  /// @brief Method get_IsThreadOwnerTrackingEnabled, addr 0x2616484, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsThreadOwnerTrackingEnabled();

  // Ctor Parameters [CppParam { name: "m_owner", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpinLock(int32_t m_owner) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpinLock();

  /// @brief Field m_owner, offset: 0x0, size: 0x4, def value: None
  int32_t m_owner;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SpinLock, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::SpinLock, m_owner) == 0x0, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView*, "System.Threading", "SpinLock/SystemThreading_SpinLockDebugView");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SpinLock, "System.Threading", "SpinLock");
