#pragma once
// IWYU pragma private; include "System/Net/Sockets/SafeSocketHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleMinusOneIsInvalid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeSocketHandle)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Diagnostics {
class StackTrace;
}
namespace System::Threading {
class Thread;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net::Sockets {
class SafeSocketHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::SafeSocketHandle);
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleMinusOneIsInvalid
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.SafeSocketHandle
class CORDL_TYPE SafeSocketHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid {
public:
  // Declarations
  /// @brief Field THROW_ON_ABORT_RETRIES, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_THROW_ON_ABORT_RETRIES, put = setStaticF_THROW_ON_ABORT_RETRIES)) bool THROW_ON_ABORT_RETRIES;

  /// @brief Field blocking_threads, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_blocking_threads, put = __cordl_internal_set_blocking_threads)) ::System::Collections::Generic::List_1<::System::Threading::Thread*>* blocking_threads;

  /// @brief Field in_cleanup, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_in_cleanup, put = __cordl_internal_set_in_cleanup)) bool in_cleanup;

  /// @brief Field threads_stacktraces, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_threads_stacktraces,
      put = __cordl_internal_set_threads_stacktraces)) ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>* threads_stacktraces;

  static inline ::System::Net::Sockets::SafeSocketHandle* New_ctor(::System::IntPtr preexistingHandle, bool ownsHandle);

  /// @brief Method RegisterForBlockingSyscall, addr 0x43fd474, size 0x13c, virtual false, abstract: false, final false
  inline void RegisterForBlockingSyscall();

  /// @brief Method ReleaseHandle, addr 0x43fcec0, size 0x5b4, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method UnRegisterForBlockingSyscall, addr 0x43fd5b0, size 0x1f0, virtual false, abstract: false, final false
  inline void UnRegisterForBlockingSyscall();

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Thread*>* const& __cordl_internal_get_blocking_threads() const;

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Thread*>*& __cordl_internal_get_blocking_threads();

  constexpr bool const& __cordl_internal_get_in_cleanup() const;

  constexpr bool& __cordl_internal_get_in_cleanup();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>* const& __cordl_internal_get_threads_stacktraces() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>*& __cordl_internal_get_threads_stacktraces();

  constexpr void __cordl_internal_set_blocking_threads(::System::Collections::Generic::List_1<::System::Threading::Thread*>* value);

  constexpr void __cordl_internal_set_in_cleanup(bool value);

  constexpr void __cordl_internal_set_threads_stacktraces(::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>* value);

  /// @brief Method .ctor, addr 0x43fcdfc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr preexistingHandle, bool ownsHandle);

  static inline bool getStaticF_THROW_ON_ABORT_RETRIES();

  static inline void setStaticF_THROW_ON_ABORT_RETRIES(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeSocketHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeSocketHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeSocketHandle(SafeSocketHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeSocketHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeSocketHandle(SafeSocketHandle const&) = delete;

  /// @brief Field ABORT_RETRIES offset 0xffffffff size 0x4
  static constexpr int32_t ABORT_RETRIES{ static_cast<int32_t>(0xa) };

  /// @brief Field SOCKET_CLOSED offset 0xffffffff size 0x4
  static constexpr int32_t SOCKET_CLOSED{ static_cast<int32_t>(0x2714) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9877 };

  /// @brief Field blocking_threads, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::Thread*>* ___blocking_threads;

  /// @brief Field threads_stacktraces, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>* ___threads_stacktraces;

  /// @brief Field in_cleanup, offset: 0x30, size: 0x1, def value: None
  bool ___in_cleanup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SafeSocketHandle, ___blocking_threads) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SafeSocketHandle, ___threads_stacktraces) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SafeSocketHandle, ___in_cleanup) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SafeSocketHandle, 0x38>, "Size mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::SafeSocketHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SafeSocketHandle*, "System.Net.Sockets", "SafeSocketHandle");
