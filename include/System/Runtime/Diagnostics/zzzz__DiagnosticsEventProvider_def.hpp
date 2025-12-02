#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticsEventProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticsEventProvider)
namespace System::Runtime::Diagnostics {
struct DiagnosticsEventProvider_WriteEventErrorCode;
}
namespace System::Runtime::Diagnostics {
struct EventDescriptor;
}
namespace System::Runtime::Diagnostics {
class EventTraceActivity;
}
namespace System::Runtime::Interop {
class UnsafeNativeMethods_EtwEnableCallback;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
struct DiagnosticsEventProvider_WriteEventErrorCode;
}
namespace System::Runtime::Diagnostics {
class DiagnosticsEventProvider;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode);
MARK_REF_PTR_T(::System::Runtime::Diagnostics::DiagnosticsEventProvider);
// Dependencies
namespace System::Runtime::Diagnostics {
// Is value type: true
// CS Name: System.Runtime.Diagnostics.DiagnosticsEventProvider/WriteEventErrorCode
struct CORDL_TYPE DiagnosticsEventProvider_WriteEventErrorCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DiagnosticsEventProvider_WriteEventErrorCode_Unwrapped
  enum struct __DiagnosticsEventProvider_WriteEventErrorCode_Unwrapped : int32_t {
    __E_NoError = static_cast<int32_t>(0x0),
    __E_NoFreeBuffers = static_cast<int32_t>(0x1),
    __E_EventTooBig = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DiagnosticsEventProvider_WriteEventErrorCode_Unwrapped() const noexcept {
    return static_cast<__DiagnosticsEventProvider_WriteEventErrorCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticsEventProvider_WriteEventErrorCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DiagnosticsEventProvider_WriteEventErrorCode(int32_t value__) noexcept;

  /// @brief Field EventTooBig value: I32(2)
  static ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode const EventTooBig;

  /// @brief Field NoError value: I32(0)
  static ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode const NoError;

  /// @brief Field NoFreeBuffers value: I32(1)
  static ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode const NoFreeBuffers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21098 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
// Dependencies System.Guid, System.Object, System.Runtime.Diagnostics.DiagnosticsEventProvider::WriteEventErrorCode
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.DiagnosticsEventProvider
class CORDL_TYPE DiagnosticsEventProvider : public ::System::Object {
public:
  // Declarations
  using WriteEventErrorCode = ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode;

  /// @brief Field allKeywordMask, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_allKeywordMask, put = __cordl_internal_set_allKeywordMask)) int64_t allKeywordMask;

  /// @brief Field anyKeywordMask, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_anyKeywordMask, put = __cordl_internal_set_anyKeywordMask)) int64_t anyKeywordMask;

  /// @brief Field currentTraceLevel, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_currentTraceLevel, put = __cordl_internal_set_currentTraceLevel)) uint8_t currentTraceLevel;

  /// @brief Field errorCode, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_errorCode, put = setStaticF_errorCode)) ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode errorCode;

  /// @brief Field etwCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_etwCallback, put = __cordl_internal_set_etwCallback)) ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* etwCallback;

  /// @brief Field isDisposed, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_isDisposed, put = __cordl_internal_set_isDisposed)) int32_t isDisposed;

  /// @brief Field isProviderEnabled, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isProviderEnabled, put = __cordl_internal_set_isProviderEnabled)) bool isProviderEnabled;

  /// @brief Field providerId, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_providerId, put = __cordl_internal_set_providerId)) ::System::Guid providerId;

  /// @brief Field traceRegistrationHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_traceRegistrationHandle, put = __cordl_internal_set_traceRegistrationHandle)) int64_t traceRegistrationHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Deregister, addr 0x5f6e918, size 0x20, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method Dispose, addr 0x5f6e864, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x5f6e8d4, size 0x44, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EtwEnableCallBack, addr 0x5f6e988, size 0x20, virtual false, abstract: false, final false
  inline void EtwEnableCallBack(::ByRef<::System::Guid> sourceId, ::ByRefConst<int32_t> isEnabled, ::ByRefConst<uint8_t> setLevel, ::ByRefConst<int64_t> anyKeyword, ::ByRefConst<int64_t> allKeyword,
                                ::ByRefConst<void*> filterData, ::ByRefConst<void*> callbackContext);

  /// @brief Method EtwRegister, addr 0x5f6e74c, size 0x118, virtual false, abstract: false, final false
  inline void EtwRegister();

  /// @brief Method Finalize, addr 0x5f6e938, size 0x50, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method IsEnabled, addr 0x5f6e9a8, size 0x8, virtual false, abstract: false, final false
  inline bool IsEnabled();

  /// @brief Method IsEnabled, addr 0x5f6e9b0, size 0x44, virtual false, abstract: false, final false
  inline bool IsEnabled(uint8_t level, int64_t keywords);

  /// @brief Method IsEventEnabled, addr 0x5f6e9f4, size 0x4c, virtual false, abstract: false, final false
  inline bool IsEventEnabled(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor);

  static inline ::System::Runtime::Diagnostics::DiagnosticsEventProvider* New_ctor(::System::Guid providerGuid);

  /// @brief Method OnControllerCommand, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnControllerCommand();

  /// @brief Method SetActivityId, addr 0x5f6ec68, size 0xc, virtual false, abstract: false, final false
  static inline void SetActivityId(::ByRef<::System::Guid> id);

  /// @brief Method SetLastError, addr 0x5f6ea40, size 0x94, virtual false, abstract: false, final false
  static inline void SetLastError(int32_t error);

  /// @brief Method WriteEvent, addr 0x5f6ead4, size 0x194, virtual false, abstract: false, final false
  inline bool WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW data);

  /// @brief Method WriteEvent, addr 0x5f6ec74, size 0x68, virtual false, abstract: false, final false
  inline bool WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, int32_t dataCount,
                         ::System::IntPtr data);

  constexpr int64_t const& __cordl_internal_get_allKeywordMask() const;

  constexpr int64_t& __cordl_internal_get_allKeywordMask();

  constexpr int64_t const& __cordl_internal_get_anyKeywordMask() const;

  constexpr int64_t& __cordl_internal_get_anyKeywordMask();

  constexpr uint8_t const& __cordl_internal_get_currentTraceLevel() const;

  constexpr uint8_t& __cordl_internal_get_currentTraceLevel();

  constexpr ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* const& __cordl_internal_get_etwCallback() const;

  constexpr ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*& __cordl_internal_get_etwCallback();

  constexpr int32_t const& __cordl_internal_get_isDisposed() const;

  constexpr int32_t& __cordl_internal_get_isDisposed();

  constexpr bool const& __cordl_internal_get_isProviderEnabled() const;

  constexpr bool& __cordl_internal_get_isProviderEnabled();

  constexpr ::System::Guid const& __cordl_internal_get_providerId() const;

  constexpr ::System::Guid& __cordl_internal_get_providerId();

  constexpr int64_t const& __cordl_internal_get_traceRegistrationHandle() const;

  constexpr int64_t& __cordl_internal_get_traceRegistrationHandle();

  constexpr void __cordl_internal_set_allKeywordMask(int64_t value);

  constexpr void __cordl_internal_set_anyKeywordMask(int64_t value);

  constexpr void __cordl_internal_set_currentTraceLevel(uint8_t value);

  constexpr void __cordl_internal_set_etwCallback(::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* value);

  constexpr void __cordl_internal_set_isDisposed(int32_t value);

  constexpr void __cordl_internal_set_isProviderEnabled(bool value);

  constexpr void __cordl_internal_set_providerId(::System::Guid value);

  constexpr void __cordl_internal_set_traceRegistrationHandle(int64_t value);

  /// @brief Method .ctor, addr 0x5f6e704, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Guid providerGuid);

  static inline ::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode getStaticF_errorCode();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_errorCode(::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticsEventProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsEventProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticsEventProvider(DiagnosticsEventProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsEventProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticsEventProvider(DiagnosticsEventProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21099 };

  /// @brief Field etwCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* ___etwCallback;

  /// @brief Field traceRegistrationHandle, offset: 0x18, size: 0x8, def value: None
  int64_t ___traceRegistrationHandle;

  /// @brief Field currentTraceLevel, offset: 0x20, size: 0x1, def value: None
  uint8_t ___currentTraceLevel;

  /// @brief Field anyKeywordMask, offset: 0x28, size: 0x8, def value: None
  int64_t ___anyKeywordMask;

  /// @brief Field allKeywordMask, offset: 0x30, size: 0x8, def value: None
  int64_t ___allKeywordMask;

  /// @brief Field isProviderEnabled, offset: 0x38, size: 0x1, def value: None
  bool ___isProviderEnabled;

  /// @brief Field providerId, offset: 0x3c, size: 0x10, def value: None
  ::System::Guid ___providerId;

  /// @brief Field isDisposed, offset: 0x4c, size: 0x4, def value: None
  int32_t ___isDisposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider, ___etwCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider, ___traceRegistrationHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider, ___currentTraceLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider, ___anyKeywordMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider, ___allKeywordMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider, ___isProviderEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider, ___providerId) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::DiagnosticsEventProvider, ___isDisposed) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::DiagnosticsEventProvider, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::DiagnosticsEventProvider_WriteEventErrorCode, "System.Runtime.Diagnostics", "DiagnosticsEventProvider/WriteEventErrorCode");
NEED_NO_BOX(::System::Runtime::Diagnostics::DiagnosticsEventProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::DiagnosticsEventProvider*, "System.Runtime.Diagnostics", "DiagnosticsEventProvider");
