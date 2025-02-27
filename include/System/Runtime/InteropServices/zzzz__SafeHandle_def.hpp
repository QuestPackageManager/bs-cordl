#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/SafeHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeHandle)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::SafeHandle);
// Dependencies System.IDisposable, System.IntPtr, System.Runtime.ConstrainedExecution.CriticalFinalizerObject
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.SafeHandle
class CORDL_TYPE SafeHandle : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
  // Declarations
  __declspec(property(get = get_IsClosed)) bool IsClosed;

  __declspec(property(get = get_IsInvalid)) bool IsInvalid;

  /// @brief Field _fullyInitialized, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get__fullyInitialized, put = __cordl_internal_set__fullyInitialized)) bool _fullyInitialized;

  /// @brief Field _ownsHandle, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__ownsHandle, put = __cordl_internal_set__ownsHandle)) bool _ownsHandle;

  /// @brief Field _state, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) int32_t _state;

  /// @brief Field handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) ::System::IntPtr handle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x3d22754, size 0x10, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method DangerousAddRef, addr 0x3d21df0, size 0xc4, virtual false, abstract: false, final false
  inline void DangerousAddRef(::ByRef<bool> success);

  /// @brief Method DangerousGetHandle, addr 0x3d22740, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr DangerousGetHandle();

  /// @brief Method DangerousRelease, addr 0x3d21f5c, size 0x8, virtual false, abstract: false, final false
  inline void DangerousRelease();

  /// @brief Method DangerousReleaseInternal, addr 0x3d228c8, size 0x160, virtual false, abstract: false, final false
  inline void DangerousReleaseInternal(bool dispose);

  /// @brief Method Dispose, addr 0x3d22764, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3d22774, size 0x1c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x3d22698, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InternalDispose, addr 0x3d22790, size 0xa0, virtual false, abstract: false, final false
  inline void InternalDispose();

  /// @brief Method InternalFinalize, addr 0x3d22830, size 0x14, virtual false, abstract: false, final false
  inline void InternalFinalize();

  static inline ::System::Runtime::InteropServices::SafeHandle* New_ctor(::System::IntPtr invalidHandleValue, bool ownsHandle);

  /// @brief Method ReleaseHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method SetHandle, addr 0x3d22738, size 0x8, virtual false, abstract: false, final false
  inline void SetHandle(::System::IntPtr handle);

  /// @brief Method SetHandleAsInvalid, addr 0x3d22844, size 0x84, virtual false, abstract: false, final false
  inline void SetHandleAsInvalid();

  constexpr bool const& __cordl_internal_get__fullyInitialized() const;

  constexpr bool& __cordl_internal_get__fullyInitialized();

  constexpr bool const& __cordl_internal_get__ownsHandle() const;

  constexpr bool& __cordl_internal_get__ownsHandle();

  constexpr int32_t const& __cordl_internal_get__state() const;

  constexpr int32_t& __cordl_internal_get__state();

  constexpr ::System::IntPtr const& __cordl_internal_get_handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_handle();

  constexpr void __cordl_internal_set__fullyInitialized(bool value);

  constexpr void __cordl_internal_set__ownsHandle(bool value);

  constexpr void __cordl_internal_set__state(int32_t value);

  constexpr void __cordl_internal_set_handle(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3d22600, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr invalidHandleValue, bool ownsHandle);

  /// @brief Method get_IsClosed, addr 0x3d22748, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsClosed();

  /// @brief Method get_IsInvalid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsInvalid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeHandle(SafeHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeHandle(SafeHandle const&) = delete;

  /// @brief Field RefCount_Mask offset 0xffffffff size 0x4
  static constexpr int32_t RefCount_Mask{ static_cast<int32_t>(0x7ffffffc) };

  /// @brief Field RefCount_One offset 0xffffffff size 0x4
  static constexpr int32_t RefCount_One{ static_cast<int32_t>(0x4) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3334 };

  /// @brief Field handle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___handle;

  /// @brief Field _state, offset: 0x18, size: 0x4, def value: None
  int32_t ____state;

  /// @brief Field _ownsHandle, offset: 0x1c, size: 0x1, def value: None
  bool ____ownsHandle;

  /// @brief Field _fullyInitialized, offset: 0x1d, size: 0x1, def value: None
  bool ____fullyInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::SafeHandle, ___handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::SafeHandle, ____state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::SafeHandle, ____ownsHandle) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::SafeHandle, ____fullyInitialized) == 0x1d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::SafeHandle, 0x20>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::SafeHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::SafeHandle*, "System.Runtime.InteropServices", "SafeHandle");
