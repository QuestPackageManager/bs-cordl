#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeHandle)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::SafeHandle);
// Type: System.Runtime.InteropServices::SafeHandle
// SizeInfo { instance_size: 32, native_size: 8, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3354)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3334))
// CS Name: ::System.Runtime.InteropServices::SafeHandle*
class CORDL_TYPE SafeHandle : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
  // Declarations
  /// @brief Field handle, offset 0x10, size 0x8
  __declspec(property(get = __get_handle, put = __set_handle)) void* handle;

  /// @brief Field _state, offset 0x18, size 0x4
  __declspec(property(get = __get__state, put = __set__state)) int32_t _state;

  /// @brief Field _ownsHandle, offset 0x1c, size 0x1
  __declspec(property(get = __get__ownsHandle, put = __set__ownsHandle)) bool _ownsHandle;

  /// @brief Field _fullyInitialized, offset 0x1d, size 0x1
  __declspec(property(get = __get__fullyInitialized, put = __set__fullyInitialized)) bool _fullyInitialized;

  __declspec(property(get = get_IsClosed)) bool IsClosed;

  __declspec(property(get = get_IsInvalid)) bool IsInvalid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr void*& __get_handle();

  constexpr void* const& __get_handle() const;

  constexpr void __set_handle(void* value);

  constexpr int32_t& __get__state();

  constexpr int32_t const& __get__state() const;

  constexpr void __set__state(int32_t value);

  constexpr bool& __get__ownsHandle();

  constexpr bool const& __get__ownsHandle() const;

  constexpr void __set__ownsHandle(bool value);

  constexpr bool& __get__fullyInitialized();

  constexpr bool const& __get__fullyInitialized() const;

  constexpr void __set__fullyInitialized(bool value);

  static inline ::System::Runtime::InteropServices::SafeHandle* New_ctor(void* invalidHandleValue, bool ownsHandle);

  /// @brief Method .ctor, addr 0x24d7614, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(void* invalidHandleValue, bool ownsHandle);

  /// @brief Method Finalize, addr 0x24d76b4, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method SetHandle, addr 0x24d7754, size 0x8, virtual false, abstract: false, final false
  inline void SetHandle(void* handle);

  /// @brief Method DangerousGetHandle, addr 0x24d775c, size 0x8, virtual false, abstract: false, final false
  inline void* DangerousGetHandle();

  /// @brief Method get_IsClosed, addr 0x24d7764, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsClosed();

  /// @brief Method get_IsInvalid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsInvalid();

  /// @brief Method Close, addr 0x24d7770, size 0x10, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x24d7780, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x24d7790, size 0x1c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ReleaseHandle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ReleaseHandle();

  /// @brief Method SetHandleAsInvalid, addr 0x24d7868, size 0x84, virtual false, abstract: false, final false
  inline void SetHandleAsInvalid();

  /// @brief Method DangerousAddRef, addr 0x24d6d7c, size 0xd0, virtual false, abstract: false, final false
  inline void DangerousAddRef(ByRef<bool> success);

  /// @brief Method DangerousRelease, addr 0x24d6f28, size 0x8, virtual false, abstract: false, final false
  inline void DangerousRelease();

  /// @brief Method InternalDispose, addr 0x24d77ac, size 0xa8, virtual false, abstract: false, final false
  inline void InternalDispose();

  /// @brief Method InternalFinalize, addr 0x24d7854, size 0x14, virtual false, abstract: false, final false
  inline void InternalFinalize();

  /// @brief Method DangerousReleaseInternal, addr 0x24d78ec, size 0x170, virtual false, abstract: false, final false
  inline void DangerousReleaseInternal(bool dispose);

  // Ctor Parameters [CppParam { name: "", ty: "SafeHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeHandle(SafeHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeHandle(SafeHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeHandle();

public:
  /// @brief Field handle, offset: 0x10, size: 0x8, def value: None
  void* ___handle;

  /// @brief Field _state, offset: 0x18, size: 0x4, def value: None
  int32_t ____state;

  /// @brief Field _ownsHandle, offset: 0x1c, size: 0x1, def value: None
  bool ____ownsHandle;

  /// @brief Field _fullyInitialized, offset: 0x1d, size: 0x1, def value: None
  bool ____fullyInitialized;

  /// @brief Field RefCount_Mask offset 0xffffffff size 0x4
  static constexpr int32_t RefCount_Mask{ static_cast<int32_t>(0x7ffffffc) };

  /// @brief Field RefCount_One offset 0xffffffff size 0x4
  static constexpr int32_t RefCount_One{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::SafeHandle, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::SafeHandle, ___handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::SafeHandle, ____state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::SafeHandle, ____ownsHandle) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::SafeHandle, ____fullyInitialized) == 0x1d, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::SafeHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::SafeHandle*, "System.Runtime.InteropServices", "SafeHandle");
