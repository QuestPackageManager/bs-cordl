#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Exception)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SafeSerializationManager;
}
namespace System::Diagnostics {
class StackTrace;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
class Type;
}
namespace System {
struct __Exception__ExceptionMessageKind;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2558))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Exception__ExceptionMessageKind(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Exception__ExceptionMessageKind();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ThreadAbort value: static_cast<int32_t>(0x1)
  static ::System::__Exception__ExceptionMessageKind const ThreadAbort;

  /// @brief Field ThreadInterrupted value: static_cast<int32_t>(0x2)
  static ::System::__Exception__ExceptionMessageKind const ThreadInterrupted;

  /// @brief Field OutOfMemory value: static_cast<int32_t>(0x3)
  static ::System::__Exception__ExceptionMessageKind const OutOfMemory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Exception__ExceptionMessageKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Exception__ExceptionMessageKind, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: System::Exception
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2559))
// CS Name: ::System::Exception*
class CORDL_TYPE Exception : public ::System::Object {
public:
  // Declarations
  using ExceptionMessageKind = ::System::__Exception__ExceptionMessageKind;

  /// @brief Field _className, offset 0x10, size 0x8
  __declspec(property(get = __get__className, put = __set__className))::StringW _className;

  /// @brief Field _message, offset 0x18, size 0x8
  __declspec(property(get = __get__message, put = __set__message))::StringW _message;

  /// @brief Field _data, offset 0x20, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::System::Collections::IDictionary* _data;

  /// @brief Field _innerException, offset 0x28, size 0x8
  __declspec(property(get = __get__innerException, put = __set__innerException))::System::Exception* _innerException;

  /// @brief Field _helpURL, offset 0x30, size 0x8
  __declspec(property(get = __get__helpURL, put = __set__helpURL))::StringW _helpURL;

  /// @brief Field _stackTrace, offset 0x38, size 0x8
  __declspec(property(get = __get__stackTrace, put = __set__stackTrace))::System::Object* _stackTrace;

  /// @brief Field _stackTraceString, offset 0x40, size 0x8
  __declspec(property(get = __get__stackTraceString, put = __set__stackTraceString))::StringW _stackTraceString;

  /// @brief Field _remoteStackTraceString, offset 0x48, size 0x8
  __declspec(property(get = __get__remoteStackTraceString, put = __set__remoteStackTraceString))::StringW _remoteStackTraceString;

  /// @brief Field _remoteStackIndex, offset 0x50, size 0x4
  __declspec(property(get = __get__remoteStackIndex, put = __set__remoteStackIndex)) int32_t _remoteStackIndex;

  /// @brief Field _dynamicMethods, offset 0x58, size 0x8
  __declspec(property(get = __get__dynamicMethods, put = __set__dynamicMethods))::System::Object* _dynamicMethods;

  /// @brief Field _HResult, offset 0x60, size 0x4
  __declspec(property(get = __get__HResult, put = __set__HResult)) int32_t _HResult;

  /// @brief Field _source, offset 0x68, size 0x8
  __declspec(property(get = __get__source, put = __set__source))::StringW _source;

  /// @brief Field _safeSerializationManager, offset 0x70, size 0x8
  __declspec(property(get = __get__safeSerializationManager, put = __set__safeSerializationManager))::System::Runtime::Serialization::SafeSerializationManager* _safeSerializationManager;

  /// @brief Field captured_traces, offset 0x78, size 0x8
  __declspec(property(get = __get_captured_traces, put = __set_captured_traces))::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> captured_traces;

  /// @brief Field native_trace_ips, offset 0x80, size 0x8
  __declspec(property(get = __get_native_trace_ips, put = __set_native_trace_ips))::ArrayW<void*, ::Array<void*>*> native_trace_ips;

  /// @brief Field caught_in_unmanaged, offset 0x88, size 0x4
  __declspec(property(get = __get_caught_in_unmanaged, put = __set_caught_in_unmanaged)) int32_t caught_in_unmanaged;

  /// @brief Field s_EDILock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EDILock, put = setStaticF_s_EDILock))::System::Object* s_EDILock;

  __declspec(property(get = get_Message))::StringW Message;

  __declspec(property(get = get_Data))::System::Collections::IDictionary* Data;

  __declspec(property(get = get_InnerException))::System::Exception* InnerException;

  __declspec(property(get = get_StackTrace))::StringW StackTrace;

  __declspec(property(get = get_Source))::StringW Source;

  __declspec(property(get = get_HResult, put = set_HResult)) int32_t HResult;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::StringW& __get__className();

  constexpr ::StringW const& __get__className() const;

  constexpr void __set__className(::StringW value);

  constexpr ::StringW& __get__message();

  constexpr ::StringW const& __get__message() const;

  constexpr void __set__message(::StringW value);

  constexpr ::System::Collections::IDictionary*& __get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get__data() const;

  constexpr void __set__data(::System::Collections::IDictionary* value);

  constexpr ::System::Exception*& __get__innerException();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get__innerException() const;

  constexpr void __set__innerException(::System::Exception* value);

  constexpr ::StringW& __get__helpURL();

  constexpr ::StringW const& __get__helpURL() const;

  constexpr void __set__helpURL(::StringW value);

  constexpr ::System::Object*& __get__stackTrace();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__stackTrace() const;

  constexpr void __set__stackTrace(::System::Object* value);

  constexpr ::StringW& __get__stackTraceString();

  constexpr ::StringW const& __get__stackTraceString() const;

  constexpr void __set__stackTraceString(::StringW value);

  constexpr ::StringW& __get__remoteStackTraceString();

  constexpr ::StringW const& __get__remoteStackTraceString() const;

  constexpr void __set__remoteStackTraceString(::StringW value);

  constexpr int32_t& __get__remoteStackIndex();

  constexpr int32_t const& __get__remoteStackIndex() const;

  constexpr void __set__remoteStackIndex(int32_t value);

  constexpr ::System::Object*& __get__dynamicMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__dynamicMethods() const;

  constexpr void __set__dynamicMethods(::System::Object* value);

  constexpr int32_t& __get__HResult();

  constexpr int32_t const& __get__HResult() const;

  constexpr void __set__HResult(int32_t value);

  constexpr ::StringW& __get__source();

  constexpr ::StringW const& __get__source() const;

  constexpr void __set__source(::StringW value);

  constexpr ::System::Runtime::Serialization::SafeSerializationManager*& __get__safeSerializationManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SafeSerializationManager*> const& __get__safeSerializationManager() const;

  constexpr void __set__safeSerializationManager(::System::Runtime::Serialization::SafeSerializationManager* value);

  constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>& __get_captured_traces();

  constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> const& __get_captured_traces() const;

  constexpr void __set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> value);

  constexpr ::ArrayW<void*, ::Array<void*>*>& __get_native_trace_ips();

  constexpr ::ArrayW<void*, ::Array<void*>*> const& __get_native_trace_ips() const;

  constexpr void __set_native_trace_ips(::ArrayW<void*, ::Array<void*>*> value);

  constexpr int32_t& __get_caught_in_unmanaged();

  constexpr int32_t const& __get_caught_in_unmanaged() const;

  constexpr void __set_caught_in_unmanaged(int32_t value);

  static inline void setStaticF_s_EDILock(::System::Object* value);

  static inline ::System::Object* getStaticF_s_EDILock();

  /// @brief Method Init addr 0x248a9cc size 0x78 virtual false final false
  inline void Init();

  static inline ::System::Exception* New_ctor();

  /// @brief Method .ctor addr 0x248aa44 size 0x1c virtual false final false
  inline void _ctor();

  static inline ::System::Exception* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x248aa60 size 0x30 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Exception* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x248aa90 size 0x38 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::Exception* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x248aac8 size 0x468 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Message addr 0x248af30 size 0xd8 virtual true final false
  inline ::StringW get_Message();

  /// @brief Method get_Data addr 0x248b044 size 0x6c virtual true final false
  inline ::System::Collections::IDictionary* get_Data();

  /// @brief Method GetClassName addr 0x248b008 size 0x3c virtual false final false
  inline ::StringW GetClassName();

  /// @brief Method get_InnerException addr 0x248b0b8 size 0x8 virtual true final true
  inline ::System::Exception* get_InnerException();

  /// @brief Method get_StackTrace addr 0x248b0c0 size 0x8 virtual true final false
  inline ::StringW get_StackTrace();

  /// @brief Method GetStackTrace addr 0x248b0c8 size 0x4c virtual false final false
  inline ::StringW GetStackTrace(bool needFileInfo);

  /// @brief Method SetErrorCode addr 0x248b11c size 0x8 virtual false final false
  inline void SetErrorCode(int32_t hr);

  /// @brief Method get_Source addr 0x248b124 size 0x10c virtual true final false
  inline ::StringW get_Source();

  /// @brief Method ToString addr 0x248b230 size 0xc virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x248b23c size 0x2a4 virtual false final false
  inline ::StringW ToString(bool needFileLineInfo, bool needMessage);

  /// @brief Method GetObjectData addr 0x248b4e0 size 0x4ac virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialized addr 0x248b98c size 0x80 virtual false final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method StripFileInfo addr 0x248b114 size 0x8 virtual false final false
  inline ::StringW StripFileInfo(::StringW stackTrace, bool isRemoteStackTrace);

  /// @brief Method RestoreExceptionDispatchInfo addr 0x248ba0c size 0x9c virtual false final false
  inline void RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo);

  /// @brief Method get_HResult addr 0x248baa8 size 0x8 virtual false final false
  inline int32_t get_HResult();

  /// @brief Method set_HResult addr 0x248bab0 size 0x8 virtual false final false
  inline void set_HResult(int32_t value);

  /// @brief Method GetType addr 0x248b0b0 size 0x8 virtual true final true
  inline ::System::Type* GetType();

  /// @brief Method GetMessageFromNativeResources addr 0x248bab8 size 0x84 virtual false final false
  static inline ::StringW GetMessageFromNativeResources(::System::__Exception__ExceptionMessageKind kind);

  /// @brief Method FixRemotingException addr 0x248bb3c size 0xe8 virtual false final false
  inline ::System::Exception* FixRemotingException();

  /// @brief Method ReportUnhandledException addr 0x248bc24 size 0x4 virtual false final false
  static inline void ReportUnhandledException(::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "", ty: "Exception", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Exception(Exception&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Exception", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Exception(Exception const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Exception();

public:
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
  ::ArrayW<void*, ::Array<void*>*> ___native_trace_ips;

  /// @brief Field caught_in_unmanaged, offset: 0x88, size: 0x4, def value: None
  int32_t ___caught_in_unmanaged;

  /// @brief Field _COMPlusExceptionCode offset 0xffffffff size 0x4
  static constexpr int32_t _COMPlusExceptionCode{ static_cast<int32_t>(0xe0434352) };

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
