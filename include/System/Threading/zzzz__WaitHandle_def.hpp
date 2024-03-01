#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaitHandle)
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Threading {
class WaitHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::WaitHandle);
// Type: System.Threading::WaitHandle
// SizeInfo { instance_size: 48, native_size: 32, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::WaitHandle*
class CORDL_TYPE WaitHandle : public ::System::MarshalByRefObject {
public:
  // Declarations
  __declspec(property(put = set_Handle)) void* Handle;

  /// @brief Field InvalidHandle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidHandle, put = setStaticF_InvalidHandle)) void* InvalidHandle;

  __declspec(property(get = get_SafeWaitHandle, put = set_SafeWaitHandle))::Microsoft::Win32::SafeHandles::SafeWaitHandle* SafeWaitHandle;

  /// @brief Field hasThreadAffinity, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hasThreadAffinity, put = __cordl_internal_set_hasThreadAffinity)) bool hasThreadAffinity;

  /// @brief Field safeWaitHandle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_safeWaitHandle, put = __cordl_internal_set_safeWaitHandle))::Microsoft::Win32::SafeHandles::SafeWaitHandle* safeWaitHandle;

  /// @brief Field waitHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_waitHandle, put = __cordl_internal_set_waitHandle)) void* waitHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x27125c4, size 0x70, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x271267c, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2712634, size 0x48, virtual true, abstract: false, final false
  inline void Dispose(bool explicitDisposing);

  /// @brief Method Init, addr 0x27115c4, size 0x6c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method InternalWaitOne, addr 0x2711a94, size 0xf4, virtual false, abstract: false, final false
  static inline bool InternalWaitOne(::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext);

  static inline ::System::Threading::WaitHandle* New_ctor();

  /// @brief Method SetHandleInternal, addr 0x271185c, size 0x34, virtual false, abstract: false, final false
  inline void SetHandleInternal(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);

  /// @brief Method ThrowAbandonedMutexException, addr 0x2711d4c, size 0x40, virtual false, abstract: false, final false
  static inline void ThrowAbandonedMutexException();

  /// @brief Method ThrowAbandonedMutexException, addr 0x2712464, size 0x54, virtual false, abstract: false, final false
  static inline void ThrowAbandonedMutexException(int32_t location, ::System::Threading::WaitHandle* handle);

  /// @brief Method WaitAny, addr 0x2711d8c, size 0x308, virtual false, abstract: false, final false
  static inline int32_t WaitAny(::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> waitHandles, int32_t millisecondsTimeout, bool exitContext);

  /// @brief Method WaitAny, addr 0x27124b8, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t WaitAny(::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> waitHandles, ::System::TimeSpan timeout, bool exitContext);

  /// @brief Method WaitMultiple, addr 0x2712094, size 0x3d0, virtual false, abstract: false, final false
  static inline int32_t WaitMultiple(::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> waitHandles, int32_t millisecondsTimeout, bool exitContext, bool WaitAll);

  /// @brief Method WaitOne, addr 0x2711a60, size 0x14, virtual true, abstract: false, final false
  inline bool WaitOne();

  /// @brief Method WaitOne, addr 0x2711a74, size 0x10, virtual true, abstract: false, final false
  inline bool WaitOne(int32_t millisecondsTimeout);

  /// @brief Method WaitOne, addr 0x2711890, size 0x84, virtual true, abstract: false, final false
  inline bool WaitOne(int32_t millisecondsTimeout, bool exitContext);

  /// @brief Method WaitOne, addr 0x2711a84, size 0x10, virtual true, abstract: false, final false
  inline bool WaitOne(::System::TimeSpan timeout);

  /// @brief Method WaitOne, addr 0x2711994, size 0xcc, virtual true, abstract: false, final false
  inline bool WaitOne(::System::TimeSpan timeout, bool exitContext);

  /// @brief Method WaitOne, addr 0x2711914, size 0x80, virtual false, abstract: false, final false
  inline bool WaitOne(int64_t timeout, bool exitContext);

  /// @brief Method WaitOneNative, addr 0x2711b88, size 0x1c4, virtual false, abstract: false, final false
  static inline int32_t WaitOneNative(::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, uint32_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext);

  /// @brief Method Wait_internal, addr 0x27126ec, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Wait_internal(::cordl_internals::Ptr<void*> handles, int32_t numHandles, bool waitAll, int32_t ms);

  constexpr bool const& __cordl_internal_get_hasThreadAffinity() const;

  constexpr bool& __cordl_internal_get_hasThreadAffinity();

  constexpr ::Microsoft::Win32::SafeHandles::SafeWaitHandle*& __cordl_internal_get_safeWaitHandle();

  constexpr ::cordl_internals::to_const_pointer<::Microsoft::Win32::SafeHandles::SafeWaitHandle*> const& __cordl_internal_get_safeWaitHandle() const;

  constexpr void* const& __cordl_internal_get_waitHandle() const;

  constexpr void*& __cordl_internal_get_waitHandle();

  constexpr void __cordl_internal_set_hasThreadAffinity(bool value);

  constexpr void __cordl_internal_set_safeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle* value);

  constexpr void __cordl_internal_set_waitHandle(void* value);

  /// @brief Method .ctor, addr 0x27115a8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline void* getStaticF_InvalidHandle();

  /// @brief Method get_SafeWaitHandle, addr 0x271171c, size 0xb8, virtual false, abstract: false, final false
  inline ::Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_InvalidHandle(void* value);

  /// @brief Method set_Handle, addr 0x2711630, size 0xec, virtual true, abstract: false, final false
  inline void set_Handle(void* value);

  /// @brief Method set_SafeWaitHandle, addr 0x27117d4, size 0x88, virtual false, abstract: false, final false
  inline void set_SafeWaitHandle(::Microsoft::Win32::SafeHandles::SafeWaitHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WaitHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitHandle(WaitHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitHandle(WaitHandle const&) = delete;

  /// @brief Field waitHandle, offset: 0x18, size: 0x8, def value: None
  void* ___waitHandle;

  /// @brief Field safeWaitHandle, offset: 0x20, size: 0x8, def value: None
  ::Microsoft::Win32::SafeHandles::SafeWaitHandle* ___safeWaitHandle;

  /// @brief Field hasThreadAffinity, offset: 0x28, size: 0x1, def value: None
  bool ___hasThreadAffinity;

  /// @brief Field ERROR_NOT_OWNED_BY_CALLER offset 0xffffffff size 0x4
  static constexpr int32_t ERROR_NOT_OWNED_BY_CALLER{ static_cast<int32_t>(0x12b) };

  /// @brief Field ERROR_TOO_MANY_POSTS offset 0xffffffff size 0x4
  static constexpr int32_t ERROR_TOO_MANY_POSTS{ static_cast<int32_t>(0x12a) };

  /// @brief Field MAX_WAITHANDLES offset 0xffffffff size 0x4
  static constexpr int32_t MAX_WAITHANDLES{ static_cast<int32_t>(0x40) };

  /// @brief Field MaxWaitHandles offset 0xffffffff size 0x4
  static constexpr int32_t MaxWaitHandles{ static_cast<int32_t>(0x40) };

  /// @brief Field WAIT_ABANDONED offset 0xffffffff size 0x4
  static constexpr int32_t WAIT_ABANDONED{ static_cast<int32_t>(0x80) };

  /// @brief Field WAIT_FAILED offset 0xffffffff size 0x4
  static constexpr int32_t WAIT_FAILED{ static_cast<int32_t>(0x7fffffff) };

  /// @brief Field WAIT_OBJECT_0 offset 0xffffffff size 0x4
  static constexpr int32_t WAIT_OBJECT_0{ static_cast<int32_t>(0x0) };

  /// @brief Field WaitTimeout offset 0xffffffff size 0x4
  static constexpr int32_t WaitTimeout{ static_cast<int32_t>(0x102) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::WaitHandle, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Threading::WaitHandle, ___waitHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::WaitHandle, ___safeWaitHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::WaitHandle, ___hasThreadAffinity) == 0x28, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::WaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::WaitHandle*, "System.Threading", "WaitHandle");
