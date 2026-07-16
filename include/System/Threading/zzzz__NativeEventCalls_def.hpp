#pragma once
// IWYU pragma private; include "System/Threading/NativeEventCalls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeEventCalls)
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Threading {
class NativeEventCalls;
}
// Write type traits
MARK_REF_T(::System::Threading::NativeEventCalls*);
DEFINE_IL2CPP_CLASS(::System::Threading::NativeEventCalls*, "System.Threading", "NativeEventCalls");
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.NativeEventCalls
class CORDL_TYPE NativeEventCalls : public ::System::Object {
public:
  // Declarations
  /// @brief Method CloseEvent_internal, addr 0x5cb6828, size 0x14, virtual false, abstract: false, final false
  static inline void CloseEvent_internal(::System::IntPtr handle);

  /// @brief Method CreateEvent_icall, addr 0x5cb660c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateEvent_icall(bool manual, bool initial, char16_t* name, int32_t name_length, ::by_ref<int32_t> errorCode);

  /// @brief Method CreateEvent_internal, addr 0x5cb65e8, size 0x24, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateEvent_internal(bool manual, bool initial, ::StringW name, ::by_ref<int32_t> errorCode);

  /// @brief Method ResetEvent, addr 0x5cb671c, size 0xec, virtual false, abstract: false, final false
  static inline bool ResetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);

  /// @brief Method ResetEvent_internal, addr 0x5cb6808, size 0x20, virtual false, abstract: false, final false
  static inline bool ResetEvent_internal(::System::IntPtr handle);

  /// @brief Method SetEvent, addr 0x5cb6610, size 0xec, virtual false, abstract: false, final false
  static inline bool SetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);

  /// @brief Method SetEvent_internal, addr 0x5cb66fc, size 0x20, virtual false, abstract: false, final false
  static inline bool SetEvent_internal(::System::IntPtr handle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeEventCalls();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeEventCalls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeEventCalls(NativeEventCalls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeEventCalls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeEventCalls(NativeEventCalls const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2758 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::NativeEventCalls) == 0x10, "Size mismatch!");

} // namespace System::Threading
