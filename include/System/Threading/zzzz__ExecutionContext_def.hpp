#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExecutionContext)
namespace System::Threading {
class IAsyncLocal;
}
namespace System::Runtime::Remoting::Messaging {
class IllogicalCallContext;
}
namespace System::Threading {
struct __ExecutionContext__Reader;
}
namespace System::Threading {
struct __ExecutionContext__CaptureOptions;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
struct __ExecutionContext__Flags;
}
namespace System::Threading {
struct ExecutionContextSwitcher;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading {
class Thread;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Runtime::Remoting::Messaging {
struct __LogicalCallContext__Reader;
}
// Forward declare root types
namespace System::Threading {
struct __ExecutionContext__CaptureOptions;
}
namespace System::Threading {
struct __ExecutionContext__Flags;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
struct __ExecutionContext__Reader;
}
// Write type traits
MARK_VAL_T(::System::Threading::__ExecutionContext__CaptureOptions);
MARK_VAL_T(::System::Threading::__ExecutionContext__Flags);
MARK_REF_PTR_T(::System::Threading::ExecutionContext);
MARK_VAL_T(::System::Threading::__ExecutionContext__Reader);
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2709))
// CS Name: ::ExecutionContext::Flags
struct CORDL_TYPE __ExecutionContext__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ExecutionContext__Flags_Unwrapped
  enum struct ____ExecutionContext__Flags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IsNewCapture = static_cast<int32_t>(0x1),
    __E_IsFlowSuppressed = static_cast<int32_t>(0x2),
    __E_IsPreAllocatedDefault = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ExecutionContext__Flags_Unwrapped() const noexcept {
    return static_cast<____ExecutionContext__Flags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ExecutionContext__Flags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExecutionContext__Flags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::__ExecutionContext__Flags const None;

  /// @brief Field IsNewCapture value: static_cast<int32_t>(0x1)
  static ::System::Threading::__ExecutionContext__Flags const IsNewCapture;

  /// @brief Field IsFlowSuppressed value: static_cast<int32_t>(0x2)
  static ::System::Threading::__ExecutionContext__Flags const IsFlowSuppressed;

  /// @brief Field IsPreAllocatedDefault value: static_cast<int32_t>(0x4)
  static ::System::Threading::__ExecutionContext__Flags const IsPreAllocatedDefault;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ExecutionContext__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__ExecutionContext__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading
// Type: ::Reader
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2710))
// CS Name: ::ExecutionContext::Reader
struct CORDL_TYPE __ExecutionContext__Reader {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsFlowSuppressed)) bool IsFlowSuppressed;

  __declspec(property(get = get_SynchronizationContext))::System::Threading::SynchronizationContext* SynchronizationContext;

  __declspec(property(get = get_SynchronizationContextNoFlow))::System::Threading::SynchronizationContext* SynchronizationContextNoFlow;

  __declspec(property(get = get_LogicalCallContext))::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader LogicalCallContext;

  /// @brief Method .ctor addr 0x24bd3e0 size 0x8 virtual false final false
  inline void _ctor(::System::Threading::ExecutionContext* ec);

  /// @brief Method DangerousGetRawExecutionContext addr 0x24bd3e8 size 0x8 virtual false final false
  inline ::System::Threading::ExecutionContext* DangerousGetRawExecutionContext();

  /// @brief Method get_IsNull addr 0x24bc9d0 size 0x10 virtual false final false
  inline bool get_IsNull();

  /// @brief Method IsDefaultFTContext addr 0x24bc9e0 size 0x1c virtual false final false
  inline bool IsDefaultFTContext(bool ignoreSyncCtx);

  /// @brief Method get_IsFlowSuppressed addr 0x24bd3f0 size 0x1c virtual false final false
  inline bool get_IsFlowSuppressed();

  /// @brief Method get_SynchronizationContext addr 0x24bccbc size 0x18 virtual false final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method get_SynchronizationContextNoFlow addr 0x24bccd4 size 0x18 virtual false final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();

  /// @brief Method get_LogicalCallContext addr 0x24bd128 size 0x18 virtual false final false
  inline ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader get_LogicalCallContext();

  /// @brief Method HasSameLocalValues addr 0x24bca4c size 0x28 virtual false final false
  inline bool HasSameLocalValues(::System::Threading::ExecutionContext* other);

  // Ctor Parameters [CppParam { name: "m_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: None }]
  constexpr __ExecutionContext__Reader(::System::Threading::ExecutionContext* m_ec) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExecutionContext__Reader();

  /// @brief Field m_ec, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* m_ec;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ExecutionContext__Reader, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__ExecutionContext__Reader, m_ec) == 0x0, "Offset mismatch!");

} // namespace System::Threading
// Type: ::CaptureOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2711))
// CS Name: ::ExecutionContext::CaptureOptions
struct CORDL_TYPE __ExecutionContext__CaptureOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ExecutionContext__CaptureOptions_Unwrapped
  enum struct ____ExecutionContext__CaptureOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IgnoreSyncCtx = static_cast<int32_t>(0x1),
    __E_OptimizeDefaultCase = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ExecutionContext__CaptureOptions_Unwrapped() const noexcept {
    return static_cast<____ExecutionContext__CaptureOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ExecutionContext__CaptureOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExecutionContext__CaptureOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::__ExecutionContext__CaptureOptions const None;

  /// @brief Field IgnoreSyncCtx value: static_cast<int32_t>(0x1)
  static ::System::Threading::__ExecutionContext__CaptureOptions const IgnoreSyncCtx;

  /// @brief Field OptimizeDefaultCase value: static_cast<int32_t>(0x2)
  static ::System::Threading::__ExecutionContext__CaptureOptions const OptimizeDefaultCase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__ExecutionContext__CaptureOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__ExecutionContext__CaptureOptions, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading
// Type: System.Threading::ExecutionContext
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2712))
// CS Name: ::System.Threading::ExecutionContext*
class CORDL_TYPE ExecutionContext : public ::System::Object {
public:
  // Declarations
  using CaptureOptions = ::System::Threading::__ExecutionContext__CaptureOptions;

  using Reader = ::System::Threading::__ExecutionContext__Reader;

  using Flags = ::System::Threading::__ExecutionContext__Flags;

  /// @brief Field _syncContext, offset 0x10, size 0x8
  __declspec(property(get = __get__syncContext, put = __set__syncContext))::System::Threading::SynchronizationContext* _syncContext;

  /// @brief Field _syncContextNoFlow, offset 0x18, size 0x8
  __declspec(property(get = __get__syncContextNoFlow, put = __set__syncContextNoFlow))::System::Threading::SynchronizationContext* _syncContextNoFlow;

  /// @brief Field _logicalCallContext, offset 0x20, size 0x8
  __declspec(property(get = __get__logicalCallContext, put = __set__logicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* _logicalCallContext;

  /// @brief Field _illogicalCallContext, offset 0x28, size 0x8
  __declspec(property(get = __get__illogicalCallContext, put = __set__illogicalCallContext))::System::Runtime::Remoting::Messaging::IllogicalCallContext* _illogicalCallContext;

  /// @brief Field _flags, offset 0x30, size 0x4
  __declspec(property(get = __get__flags, put = __set__flags))::System::Threading::__ExecutionContext__Flags _flags;

  /// @brief Field _localValues, offset 0x38, size 0x8
  __declspec(property(get = __get__localValues, put = __set__localValues))::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* _localValues;

  /// @brief Field _localChangeNotifications, offset 0x40, size 0x8
  __declspec(property(get = __get__localChangeNotifications,
                      put = __set__localChangeNotifications))::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* _localChangeNotifications;

  /// @brief Field s_dummyDefaultEC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dummyDefaultEC, put = setStaticF_s_dummyDefaultEC))::System::Threading::ExecutionContext* s_dummyDefaultEC;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::Threading::ExecutionContext* Default;

  __declspec(property(get = get_isNewCapture, put = set_isNewCapture)) bool isNewCapture;

  __declspec(property(get = get_isFlowSuppressed, put = set_isFlowSuppressed)) bool isFlowSuppressed;

  __declspec(property(get = get_IsPreAllocatedDefault)) bool IsPreAllocatedDefault;

  __declspec(property(get = get_LogicalCallContext, put = set_LogicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_IllogicalCallContext, put = set_IllogicalCallContext))::System::Runtime::Remoting::Messaging::IllogicalCallContext* IllogicalCallContext;

  __declspec(property(get = get_SynchronizationContext, put = set_SynchronizationContext))::System::Threading::SynchronizationContext* SynchronizationContext;

  __declspec(property(get = get_SynchronizationContextNoFlow, put = set_SynchronizationContextNoFlow))::System::Threading::SynchronizationContext* SynchronizationContextNoFlow;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::System::Threading::SynchronizationContext*& __get__syncContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& __get__syncContext() const;

  constexpr void __set__syncContext(::System::Threading::SynchronizationContext* value);

  constexpr ::System::Threading::SynchronizationContext*& __get__syncContextNoFlow();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& __get__syncContextNoFlow() const;

  constexpr void __set__syncContextNoFlow(::System::Threading::SynchronizationContext* value);

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __get__logicalCallContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::LogicalCallContext*> const& __get__logicalCallContext() const;

  constexpr void __set__logicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext*& __get__illogicalCallContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IllogicalCallContext*> const& __get__illogicalCallContext() const;

  constexpr void __set__illogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value);

  constexpr ::System::Threading::__ExecutionContext__Flags& __get__flags();

  constexpr ::System::Threading::__ExecutionContext__Flags const& __get__flags() const;

  constexpr void __set__flags(::System::Threading::__ExecutionContext__Flags value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>*& __get__localValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>*> const& __get__localValues() const;

  constexpr void __set__localValues(::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*& __get__localChangeNotifications();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*> const& __get__localChangeNotifications() const;

  constexpr void __set__localChangeNotifications(::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* value);

  static inline void setStaticF_s_dummyDefaultEC(::System::Threading::ExecutionContext* value);

  static inline ::System::Threading::ExecutionContext* getStaticF_s_dummyDefaultEC();

  static inline void setStaticF_Default(::System::Threading::ExecutionContext* value);

  static inline ::System::Threading::ExecutionContext* getStaticF_Default();

  /// @brief Method get_isNewCapture addr 0x24bc1dc size 0x14 virtual false final false
  inline bool get_isNewCapture();

  /// @brief Method set_isNewCapture addr 0x24bc1f0 size 0x1c virtual false final false
  inline void set_isNewCapture(bool value);

  /// @brief Method get_isFlowSuppressed addr 0x24bc20c size 0xc virtual false final false
  inline bool get_isFlowSuppressed();

  /// @brief Method set_isFlowSuppressed addr 0x24bc218 size 0x1c virtual false final false
  inline void set_isFlowSuppressed(bool value);

  /// @brief Method get_IsPreAllocatedDefault addr 0x24bc234 size 0xc virtual false final false
  inline bool get_IsPreAllocatedDefault();

  static inline ::System::Threading::ExecutionContext* New_ctor();

  /// @brief Method .ctor addr 0x24bc240 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Threading::ExecutionContext* New_ctor(bool isPreAllocatedDefault);

  /// @brief Method .ctor addr 0x24bc248 size 0x30 virtual false final false
  inline void _ctor(bool isPreAllocatedDefault);

  /// @brief Method SetLocalValue addr 0x24bc278 size 0x2cc virtual false final false
  static inline void SetLocalValue(::System::Threading::IAsyncLocal* local, ::System::Object* newValue, bool needChangeNotifications);

  /// @brief Method OnAsyncLocalContextChanged addr 0x24bbd58 size 0x484 virtual false final false
  static inline void OnAsyncLocalContextChanged(::System::Threading::ExecutionContext* previous, ::System::Threading::ExecutionContext* current);

  /// @brief Method get_LogicalCallContext addr 0x24bc5d0 size 0x6c virtual false final false
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method set_LogicalCallContext addr 0x24bc63c size 0x8 virtual false final false
  inline void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  /// @brief Method get_IllogicalCallContext addr 0x24bc644 size 0x6c virtual false final false
  inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext();

  /// @brief Method set_IllogicalCallContext addr 0x24bc6b0 size 0x8 virtual false final false
  inline void set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value);

  /// @brief Method get_SynchronizationContext addr 0x24bc6b8 size 0x8 virtual false final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method set_SynchronizationContext addr 0x24bc6c0 size 0x8 virtual false final false
  inline void set_SynchronizationContext(::System::Threading::SynchronizationContext* value);

  /// @brief Method get_SynchronizationContextNoFlow addr 0x24bc6c8 size 0x8 virtual false final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();

  /// @brief Method set_SynchronizationContextNoFlow addr 0x24bc6d0 size 0x8 virtual false final false
  inline void set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext* value);

  /// @brief Method Dispose addr 0x24bc6d8 size 0x4 virtual true final true
  inline void Dispose();

  /// @brief Method Run addr 0x24b8fc8 size 0xe8 virtual false final false
  static inline void Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state);

  /// @brief Method Run addr 0x24bc6dc size 0x7c virtual false final false
  static inline void Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state, bool preserveSyncCtx);

  /// @brief Method RunInternal addr 0x24bc960 size 0x70 virtual false final false
  static inline void RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state);

  /// @brief Method RunInternal addr 0x24bc758 size 0x208 virtual false final false
  static inline void RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state, bool preserveSyncCtx);

  /// @brief Method EstablishCopyOnWriteScope addr 0x24bcc18 size 0x84 virtual false final false
  static inline void EstablishCopyOnWriteScope(ByRef<::System::Threading::ExecutionContextSwitcher> ecsw);

  /// @brief Method EstablishCopyOnWriteScope addr 0x24bca74 size 0x34 virtual false final false
  static inline void EstablishCopyOnWriteScope(::System::Threading::Thread* currentThread, bool knownNullWindowsIdentity, ByRef<::System::Threading::ExecutionContextSwitcher> ecsw);

  /// @brief Method SetExecutionContext addr 0x24bcaa8 size 0x170 virtual false final false
  static inline ::System::Threading::ExecutionContextSwitcher SetExecutionContext(::System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx);

  /// @brief Method CreateCopy addr 0x24bcd00 size 0x140 virtual false final false
  inline ::System::Threading::ExecutionContext* CreateCopy();

  /// @brief Method CreateMutableCopy addr 0x24bce40 size 0xf8 virtual false final false
  inline ::System::Threading::ExecutionContext* CreateMutableCopy();

  /// @brief Method IsFlowSuppressed addr 0x24bcf38 size 0x30 virtual false final false
  static inline bool IsFlowSuppressed();

  /// @brief Method Capture addr 0x24b579c size 0x50 virtual false final false
  static inline ::System::Threading::ExecutionContext* Capture();

  /// @brief Method FastCapture addr 0x24bd0d8 size 0x50 virtual false final false
  static inline ::System::Threading::ExecutionContext* FastCapture();

  /// @brief Method Capture addr 0x24bcf68 size 0x170 virtual false final false
  static inline ::System::Threading::ExecutionContext* Capture(ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Threading::__ExecutionContext__CaptureOptions options);

  /// @brief Method GetObjectData addr 0x24bd140 size 0x110 virtual true final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::ExecutionContext* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x24bd250 size 0x100 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsDefaultFTContext addr 0x24bc9fc size 0x50 virtual false final false
  inline bool IsDefaultFTContext(bool ignoreSyncCtx);

  // Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecutionContext(ExecutionContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecutionContext(ExecutionContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionContext();

public:
  /// @brief Field _syncContext, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ____syncContext;

  /// @brief Field _syncContextNoFlow, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ____syncContextNoFlow;

  /// @brief Field _logicalCallContext, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::LogicalCallContext* ____logicalCallContext;

  /// @brief Field _illogicalCallContext, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IllogicalCallContext* ____illogicalCallContext;

  /// @brief Field _flags, offset: 0x30, size: 0x4, def value: None
  ::System::Threading::__ExecutionContext__Flags ____flags;

  /// @brief Field _localValues, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* ____localValues;

  /// @brief Field _localChangeNotifications, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* ____localChangeNotifications;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ExecutionContext, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____syncContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____syncContextNoFlow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____logicalCallContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____illogicalCallContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____localValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____localChangeNotifications) == 0x40, "Offset mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ExecutionContext__CaptureOptions, "System.Threading", "ExecutionContext/CaptureOptions");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ExecutionContext__Flags, "System.Threading", "ExecutionContext/Flags");
NEED_NO_BOX(::System::Threading::ExecutionContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContext*, "System.Threading", "ExecutionContext");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__ExecutionContext__Reader, "System.Threading", "ExecutionContext/Reader");
