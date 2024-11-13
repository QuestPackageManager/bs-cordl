#pragma once
// IWYU pragma private; include "System/Threading/NativeEventCalls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Threading::NativeEventCalls);
// Type: System.Threading::NativeEventCalls
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::NativeEventCalls*
class CORDL_TYPE NativeEventCalls : public ::System::Object {
public:
  // Declarations
  /// @brief Method CloseEvent_internal, addr 0x3dfaed0, size 0x4, virtual false, abstract: false, final false
  static inline void CloseEvent_internal(::System::IntPtr handle);

  /// @brief Method CreateEvent_icall, addr 0x3dfacdc, size 0xc, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateEvent_icall(bool manual, bool initial, ::cordl_internals::Ptr<char16_t> name, int32_t name_length, ByRef<int32_t> errorCode);

  /// @brief Method CreateEvent_internal, addr 0x3dfac88, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateEvent_internal(bool manual, bool initial, ::StringW name, ByRef<int32_t> errorCode);

  /// @brief Method ResetEvent, addr 0x3dfaddc, size 0xf0, virtual false, abstract: false, final false
  static inline bool ResetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);

  /// @brief Method ResetEvent_internal, addr 0x3dfaecc, size 0x4, virtual false, abstract: false, final false
  static inline bool ResetEvent_internal(::System::IntPtr handle);

  /// @brief Method SetEvent, addr 0x3dface8, size 0xf0, virtual false, abstract: false, final false
  static inline bool SetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);

  /// @brief Method SetEvent_internal, addr 0x3dfadd8, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2747 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::NativeEventCalls, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::NativeEventCalls);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::NativeEventCalls*, "System.Threading", "NativeEventCalls");
