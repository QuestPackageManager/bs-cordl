#pragma once
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
// Forward declare root types
namespace System::Threading {
class NativeEventCalls;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::NativeEventCalls);
// Type: System.Threading::NativeEventCalls
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2744))
// CS Name: ::System.Threading::NativeEventCalls*
class CORDL_TYPE NativeEventCalls : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateEvent_internal, addr 0x264444c, size 0x58, virtual false, abstract: false, final false
  static inline void* CreateEvent_internal(bool manual, bool initial, ::StringW name, ByRef<int32_t> errorCode);

  /// @brief Method CreateEvent_icall, addr 0x26444a4, size 0xc, virtual false, abstract: false, final false
  static inline void* CreateEvent_icall(bool manual, bool initial, ::cordl_internals::Ptr<char16_t> name, int32_t name_length, ByRef<int32_t> errorCode);

  /// @brief Method SetEvent, addr 0x26444b0, size 0xe0, virtual false, abstract: false, final false
  static inline bool SetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);

  /// @brief Method SetEvent_internal, addr 0x2644590, size 0x4, virtual false, abstract: false, final false
  static inline bool SetEvent_internal(void* handle);

  /// @brief Method ResetEvent, addr 0x2644594, size 0xe0, virtual false, abstract: false, final false
  static inline bool ResetEvent(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);

  /// @brief Method ResetEvent_internal, addr 0x2644674, size 0x4, virtual false, abstract: false, final false
  static inline bool ResetEvent_internal(void* handle);

  /// @brief Method CloseEvent_internal, addr 0x2644678, size 0x4, virtual false, abstract: false, final false
  static inline void CloseEvent_internal(void* handle);

  // Ctor Parameters [CppParam { name: "", ty: "NativeEventCalls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeEventCalls(NativeEventCalls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeEventCalls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeEventCalls(NativeEventCalls const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeEventCalls();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::NativeEventCalls, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::NativeEventCalls);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::NativeEventCalls*, "System.Threading", "NativeEventCalls");
