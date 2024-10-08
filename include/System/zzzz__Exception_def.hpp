#pragma once
// IWYU pragma private; include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Exception)
namespace System::Collections {
class IDictionary;
}
namespace System::Diagnostics {
class StackTrace;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SafeSerializationManager;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
struct __Exception__ExceptionMessageKind;
}
// Forward declare root types
namespace System {
struct __Exception__ExceptionMessageKind;
}
namespace System {
class Exception;
}
// Write type traits
MARK_VAL_T(::System::__Exception__ExceptionMessageKind);
MARK_REF_PTR_T(::System::Exception);
// Type: ::ExceptionMessageKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Exception::ExceptionMessageKind
struct CORDL_TYPE __Exception__ExceptionMessageKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Exception__ExceptionMessageKind_Unwrapped
  enum struct ____Exception__ExceptionMessageKind_Unwrapped : int32_t {
    __E_ThreadAbort = static_cast<int32_t>(0x1),
    __E_ThreadInterrupted = static_cast<int32_t>(0x2),
    __E_OutOfMemory = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Exception__ExceptionMessageKind_Unwrapped() const noexcept {
    return static_cast<____Exception__ExceptionMessageKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Exception__ExceptionMessageKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Exception__ExceptionMessageKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field OutOfMemory value: static_cast<int32_t>(0x3)
  static ::System::__Exception__ExceptionMessageKind const OutOfMemory;

  /// @brief Field ThreadAbort value: static_cast<int32_t>(0x1)
  static ::System::__Exception__ExceptionMessageKind const ThreadAbort;

  /// @brief Field ThreadInterrupted value: static_cast<int32_t>(0x2)
  static ::System::__Exception__ExceptionMessageKind const ThreadInterrupted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2561 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Exception__ExceptionMessageKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Exception__ExceptionMessageKind, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: System::Exception
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Exception*
class CORDL_TYPE Exception : public ::System::Object {
public:
  // Declarations
  using ExceptionMessageKind = ::System::__Exception__ExceptionMessageKind;

  __declspec(property(get = get_Data)) ::System::Collections::IDictionary* Data;

  __declspec(property(get = get_HResult, put = set_HResult)) int32_t HResult;

  __declspec(property(get = get_InnerException)) ::System::Exception* InnerException;

  __declspec(property(get = get_Message)) ::StringW Message;

  __declspec(property(get = get_Source)) ::StringW Source;

  __declspec(property(get = get_StackTrace)) ::StringW StackTrace;

  /// @brief Field _HResult, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__HResult, put = __cordl_internal_set__HResult)) int32_t _HResult;

  /// @brief Field _className, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__className, put = __cordl_internal_set__className)) ::StringW _className;

  /// @brief Field _data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::System::Collections::IDictionary* _data;

  /// @brief Field _dynamicMethods, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__dynamicMethods, put = __cordl_internal_set__dynamicMethods)) ::System::Object* _dynamicMethods;

  /// @brief Field _helpURL, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__helpURL, put = __cordl_internal_set__helpURL)) ::StringW _helpURL;

  /// @brief Field _innerException, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__innerException, put = __cordl_internal_set__innerException)) ::System::Exception* _innerException;

  /// @brief Field _message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__message, put = __cordl_internal_set__message)) ::StringW _message;

  /// @brief Field _remoteStackIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__remoteStackIndex, put = __cordl_internal_set__remoteStackIndex)) int32_t _remoteStackIndex;

  /// @brief Field _remoteStackTraceString, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__remoteStackTraceString, put = __cordl_internal_set__remoteStackTraceString)) ::StringW _remoteStackTraceString;

  /// @brief Field _safeSerializationManager, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__safeSerializationManager,
                      put = __cordl_internal_set__safeSerializationManager)) ::System::Runtime::Serialization::SafeSerializationManager* _safeSerializationManager;

  /// @brief Field _source, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__source, put = __cordl_internal_set__source)) ::StringW _source;

  /// @brief Field _stackTrace, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__stackTrace, put = __cordl_internal_set__stackTrace)) ::System::Object* _stackTrace;

  /// @brief Field _stackTraceString, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__stackTraceString, put = __cordl_internal_set__stackTraceString)) ::StringW _stackTraceString;

  /// @brief Field captured_traces, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_captured_traces,
                      put = __cordl_internal_set_captured_traces)) ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>
      captured_traces;

  /// @brief Field caught_in_unmanaged, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_caught_in_unmanaged, put = __cordl_internal_set_caught_in_unmanaged)) int32_t caught_in_unmanaged;

  /// @brief Field native_trace_ips, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_native_trace_ips, put = __cordl_internal_set_native_trace_ips)) ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> native_trace_ips;

  /// @brief Field s_EDILock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EDILock, put = setStaticF_s_EDILock)) ::System::Object* s_EDILock;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method FixRemotingException, addr 0x3dae0f0, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Exception* FixRemotingException();

  /// @brief Method GetClassName, addr 0x3dad68c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetClassName();

  /// @brief Method GetMessageFromNativeResources, addr 0x3dae06c, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW GetMessageFromNativeResources(::System::__Exception__ExceptionMessageKind kind);

  /// @brief Method GetObjectData, addr 0x3dadaa0, size 0x4a8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetStackTrace, addr 0x3dad744, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW GetStackTrace(bool needFileInfo);

  /// @brief Method GetType, addr 0x3dad72c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetType();

  /// @brief Method Init, addr 0x3dad064, size 0x70, virtual false, abstract: false, final false
  inline void Init();

  static inline ::System::Exception* New_ctor();

  static inline ::System::Exception* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Exception* New_ctor(::StringW message);

  static inline ::System::Exception* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method OnDeserialized, addr 0x3dadf48, size 0x78, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ReportUnhandledException, addr 0x3dae1d8, size 0x4, virtual false, abstract: false, final false
  static inline void ReportUnhandledException(::System::Exception* exception);

  /// @brief Method RestoreExceptionDispatchInfo, addr 0x3dadfc0, size 0x9c, virtual false, abstract: false, final false
  inline void RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo);

  /// @brief Method SetErrorCode, addr 0x3dad798, size 0x8, virtual false, abstract: false, final false
  inline void SetErrorCode(int32_t hr);

  /// @brief Method StripFileInfo, addr 0x3dad790, size 0x8, virtual false, abstract: false, final false
  inline ::StringW StripFileInfo(::StringW stackTrace, bool isRemoteStackTrace);

  /// @brief Method ToString, addr 0x3dad8ac, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3dad8b8, size 0x1e8, virtual false, abstract: false, final false
  inline ::StringW ToString(bool needFileLineInfo, bool needMessage);

  constexpr int32_t const& __cordl_internal_get__HResult() const;

  constexpr int32_t& __cordl_internal_get__HResult();

  constexpr ::StringW const& __cordl_internal_get__className() const;

  constexpr ::StringW& __cordl_internal_get__className();

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get__data() const;

  constexpr ::System::Object*& __cordl_internal_get__dynamicMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__dynamicMethods() const;

  constexpr ::StringW const& __cordl_internal_get__helpURL() const;

  constexpr ::StringW& __cordl_internal_get__helpURL();

  constexpr ::System::Exception*& __cordl_internal_get__innerException();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__innerException() const;

  constexpr ::StringW const& __cordl_internal_get__message() const;

  constexpr ::StringW& __cordl_internal_get__message();

  constexpr int32_t const& __cordl_internal_get__remoteStackIndex() const;

  constexpr int32_t& __cordl_internal_get__remoteStackIndex();

  constexpr ::StringW const& __cordl_internal_get__remoteStackTraceString() const;

  constexpr ::StringW& __cordl_internal_get__remoteStackTraceString();

  constexpr ::System::Runtime::Serialization::SafeSerializationManager*& __cordl_internal_get__safeSerializationManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SafeSerializationManager*> const& __cordl_internal_get__safeSerializationManager() const;

  constexpr ::StringW const& __cordl_internal_get__source() const;

  constexpr ::StringW& __cordl_internal_get__source();

  constexpr ::System::Object*& __cordl_internal_get__stackTrace();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__stackTrace() const;

  constexpr ::StringW const& __cordl_internal_get__stackTraceString() const;

  constexpr ::StringW& __cordl_internal_get__stackTraceString();

  constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> const& __cordl_internal_get_captured_traces() const;

  constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>& __cordl_internal_get_captured_traces();

  constexpr int32_t const& __cordl_internal_get_caught_in_unmanaged() const;

  constexpr int32_t& __cordl_internal_get_caught_in_unmanaged();

  constexpr ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> const& __cordl_internal_get_native_trace_ips() const;

  constexpr ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*>& __cordl_internal_get_native_trace_ips();

  constexpr void __cordl_internal_set__HResult(int32_t value);

  constexpr void __cordl_internal_set__className(::StringW value);

  constexpr void __cordl_internal_set__data(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set__dynamicMethods(::System::Object* value);

  constexpr void __cordl_internal_set__helpURL(::StringW value);

  constexpr void __cordl_internal_set__innerException(::System::Exception* value);

  constexpr void __cordl_internal_set__message(::StringW value);

  constexpr void __cordl_internal_set__remoteStackIndex(int32_t value);

  constexpr void __cordl_internal_set__remoteStackTraceString(::StringW value);

  constexpr void __cordl_internal_set__safeSerializationManager(::System::Runtime::Serialization::SafeSerializationManager* value);

  constexpr void __cordl_internal_set__source(::StringW value);

  constexpr void __cordl_internal_set__stackTrace(::System::Object* value);

  constexpr void __cordl_internal_set__stackTraceString(::StringW value);

  constexpr void __cordl_internal_set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> value);

  constexpr void __cordl_internal_set_caught_in_unmanaged(int32_t value);

  constexpr void __cordl_internal_set_native_trace_ips(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> value);

  /// @brief Method .ctor, addr 0x3dad0d4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3dad158, size 0x45c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dad0f0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3dad120, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::Object* getStaticF_s_EDILock();

  /// @brief Method get_Data, addr 0x3dad6c8, size 0x64, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Data();

  /// @brief Method get_HResult, addr 0x3dae05c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_HResult();

  /// @brief Method get_InnerException, addr 0x3dad734, size 0x8, virtual true, abstract: false, final true
  inline ::System::Exception* get_InnerException();

  /// @brief Method get_Message, addr 0x3dad5b4, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_Source, addr 0x3dad7a0, size 0x10c, virtual true, abstract: false, final false
  inline ::StringW get_Source();

  /// @brief Method get_StackTrace, addr 0x3dad73c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_StackTrace();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_s_EDILock(::System::Object* value);

  /// @brief Method set_HResult, addr 0x3dae064, size 0x8, virtual false, abstract: false, final false
  inline void set_HResult(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Exception();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Exception", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Exception(Exception&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Exception", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Exception(Exception const&) = delete;

  /// @brief Field _className, offset: 0x10, size: 0x8, def value: None
  ::StringW ____className;

  /// @brief Field _message, offset: 0x18, size: 0x8, def value: None
  ::StringW ____message;

  /// @brief Field _data, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____data;

  /// @brief Field _innerException, offset: 0x28, size: 0x8, def value: None
  ::System::Exception* ____innerException;

  /// @brief Field _helpURL, offset: 0x30, size: 0x8, def value: None
  ::StringW ____helpURL;

  /// @brief Field _stackTrace, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____stackTrace;

  /// @brief Field _stackTraceString, offset: 0x40, size: 0x8, def value: None
  ::StringW ____stackTraceString;

  /// @brief Field _remoteStackTraceString, offset: 0x48, size: 0x8, def value: None
  ::StringW ____remoteStackTraceString;

  /// @brief Field _remoteStackIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ____remoteStackIndex;

  /// @brief Field _dynamicMethods, offset: 0x58, size: 0x8, def value: None
  ::System::Object* ____dynamicMethods;

  /// @brief Field _HResult, offset: 0x60, size: 0x4, def value: None
  int32_t ____HResult;

  /// @brief Field _source, offset: 0x68, size: 0x8, def value: None
  ::StringW ____source;

  /// @brief Field _safeSerializationManager, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Serialization::SafeSerializationManager* ____safeSerializationManager;

  /// @brief Field captured_traces, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> ___captured_traces;

  /// @brief Field native_trace_ips, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> ___native_trace_ips;

  /// @brief Field caught_in_unmanaged, offset: 0x88, size: 0x4, def value: None
  int32_t ___caught_in_unmanaged;

  /// @brief Field _COMPlusExceptionCode offset 0xffffffff size 0x4
  static constexpr int32_t _COMPlusExceptionCode{ static_cast<int32_t>(0xe0434352) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Exception, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Exception, ____className) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____innerException) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____helpURL) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____stackTrace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____stackTraceString) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____remoteStackTraceString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____remoteStackIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____dynamicMethods) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____HResult) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____source) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ____safeSerializationManager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ___captured_traces) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ___native_trace_ips) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Exception, ___caught_in_unmanaged) == 0x88, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__Exception__ExceptionMessageKind, "System", "Exception/ExceptionMessageKind");
NEED_NO_BOX(::System::Exception);
DEFINE_IL2CPP_ARG_TYPE(::System::Exception*, "System", "Exception");
