#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExecutionContext)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::Remoting::Messaging {
class IllogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
struct LogicalCallContext_Reader;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
struct ExecutionContextSwitcher;
}
namespace System::Threading {
struct ExecutionContext_CaptureOptions;
}
namespace System::Threading {
struct ExecutionContext_Flags;
}
namespace System::Threading {
struct ExecutionContext_Reader;
}
namespace System::Threading {
class IAsyncLocal;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
struct ExecutionContext_CaptureOptions;
}
namespace System::Threading {
struct ExecutionContext_Flags;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
struct ExecutionContext_Reader;
}
// Write type traits
MARK_VAL_T(::System::Threading::ExecutionContext_CaptureOptions);
MARK_VAL_T(::System::Threading::ExecutionContext_Flags);
MARK_REF_PTR_T(::System::Threading::ExecutionContext);
MARK_VAL_T(::System::Threading::ExecutionContext_Reader);
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.ExecutionContext/Flags
struct CORDL_TYPE ExecutionContext_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExecutionContext_Flags_Unwrapped
  enum struct __ExecutionContext_Flags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IsNewCapture = static_cast<int32_t>(0x1),
    __E_IsFlowSuppressed = static_cast<int32_t>(0x2),
    __E_IsPreAllocatedDefault = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExecutionContext_Flags_Unwrapped() const noexcept {
    return static_cast<__ExecutionContext_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionContext_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExecutionContext_Flags(int32_t value__) noexcept;

  /// @brief Field IsFlowSuppressed value: I32(2)
  static ::System::Threading::ExecutionContext_Flags const IsFlowSuppressed;

  /// @brief Field IsNewCapture value: I32(1)
  static ::System::Threading::ExecutionContext_Flags const IsNewCapture;

  /// @brief Field IsPreAllocatedDefault value: I32(4)
  static ::System::Threading::ExecutionContext_Flags const IsPreAllocatedDefault;

  /// @brief Field None value: I32(0)
  static ::System::Threading::ExecutionContext_Flags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ExecutionContext_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ExecutionContext_Flags, 0x4>, "Size mismatch!");

} // namespace System::Threading
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.ExecutionContext/Reader
struct CORDL_TYPE ExecutionContext_Reader {
public:
  // Declarations
  __declspec(property(get = get_IsFlowSuppressed)) bool IsFlowSuppressed;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_LogicalCallContext)) ::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader LogicalCallContext;

  __declspec(property(get = get_SynchronizationContext)) ::System::Threading::SynchronizationContext* SynchronizationContext;

  __declspec(property(get = get_SynchronizationContextNoFlow)) ::System::Threading::SynchronizationContext* SynchronizationContextNoFlow;

  /// @brief Method DangerousGetRawExecutionContext, addr 0x3e5a7f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext* DangerousGetRawExecutionContext();

  /// @brief Method HasSameLocalValues, addr 0x3e59e48, size 0x28, virtual false, abstract: false, final false
  inline bool HasSameLocalValues(::System::Threading::ExecutionContext* other);

  /// @brief Method IsDefaultFTContext, addr 0x3e59ddc, size 0x1c, virtual false, abstract: false, final false
  inline bool IsDefaultFTContext(bool ignoreSyncCtx);

  /// @brief Method .ctor, addr 0x3e5a7e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ExecutionContext* ec);

  /// @brief Method get_IsFlowSuppressed, addr 0x3e5a7f8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsFlowSuppressed();

  /// @brief Method get_IsNull, addr 0x3e59dcc, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method get_LogicalCallContext, addr 0x3e5a540, size 0x18, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader get_LogicalCallContext();

  /// @brief Method get_SynchronizationContext, addr 0x3e5a0b8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method get_SynchronizationContextNoFlow, addr 0x3e5a0d0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionContext_Reader();

  // Ctor Parameters [CppParam { name: "m_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: None }]
  constexpr ExecutionContext_Reader(::System::Threading::ExecutionContext* m_ec) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ec, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* m_ec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ExecutionContext_Reader, m_ec) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ExecutionContext_Reader, 0x8>, "Size mismatch!");

} // namespace System::Threading
// Dependencies
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.ExecutionContext/CaptureOptions
struct CORDL_TYPE ExecutionContext_CaptureOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExecutionContext_CaptureOptions_Unwrapped
  enum struct __ExecutionContext_CaptureOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IgnoreSyncCtx = static_cast<int32_t>(0x1),
    __E_OptimizeDefaultCase = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExecutionContext_CaptureOptions_Unwrapped() const noexcept {
    return static_cast<__ExecutionContext_CaptureOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionContext_CaptureOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExecutionContext_CaptureOptions(int32_t value__) noexcept;

  /// @brief Field IgnoreSyncCtx value: I32(1)
  static ::System::Threading::ExecutionContext_CaptureOptions const IgnoreSyncCtx;

  /// @brief Field None value: I32(0)
  static ::System::Threading::ExecutionContext_CaptureOptions const None;

  /// @brief Field OptimizeDefaultCase value: I32(2)
  static ::System::Threading::ExecutionContext_CaptureOptions const OptimizeDefaultCase;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2716 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ExecutionContext_CaptureOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ExecutionContext_CaptureOptions, 0x4>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.IDisposable, System.Object, System.Runtime.Serialization.ISerializable, System.Threading.ExecutionContext::Flags
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ExecutionContext
class CORDL_TYPE ExecutionContext : public ::System::Object {
public:
  // Declarations
  using CaptureOptions = ::System::Threading::ExecutionContext_CaptureOptions;

  using Flags = ::System::Threading::ExecutionContext_Flags;

  using Reader = ::System::Threading::ExecutionContext_Reader;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::System::Threading::ExecutionContext* Default;

  __declspec(property(get = get_IllogicalCallContext, put = set_IllogicalCallContext)) ::System::Runtime::Remoting::Messaging::IllogicalCallContext* IllogicalCallContext;

  __declspec(property(get = get_IsPreAllocatedDefault)) bool IsPreAllocatedDefault;

  __declspec(property(get = get_LogicalCallContext, put = set_LogicalCallContext)) ::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_SynchronizationContext, put = set_SynchronizationContext)) ::System::Threading::SynchronizationContext* SynchronizationContext;

  __declspec(property(get = get_SynchronizationContextNoFlow, put = set_SynchronizationContextNoFlow)) ::System::Threading::SynchronizationContext* SynchronizationContextNoFlow;

  /// @brief Field _flags, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags)) ::System::Threading::ExecutionContext_Flags _flags;

  /// @brief Field _illogicalCallContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__illogicalCallContext,
                      put = __cordl_internal_set__illogicalCallContext)) ::System::Runtime::Remoting::Messaging::IllogicalCallContext* _illogicalCallContext;

  /// @brief Field _localChangeNotifications, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__localChangeNotifications,
                      put = __cordl_internal_set__localChangeNotifications)) ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* _localChangeNotifications;

  /// @brief Field _localValues, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__localValues,
                      put = __cordl_internal_set__localValues)) ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* _localValues;

  /// @brief Field _logicalCallContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__logicalCallContext, put = __cordl_internal_set__logicalCallContext)) ::System::Runtime::Remoting::Messaging::LogicalCallContext* _logicalCallContext;

  /// @brief Field _syncContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__syncContext, put = __cordl_internal_set__syncContext)) ::System::Threading::SynchronizationContext* _syncContext;

  /// @brief Field _syncContextNoFlow, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__syncContextNoFlow, put = __cordl_internal_set__syncContextNoFlow)) ::System::Threading::SynchronizationContext* _syncContextNoFlow;

  __declspec(property(get = get_isFlowSuppressed, put = set_isFlowSuppressed)) bool isFlowSuppressed;

  __declspec(property(get = get_isNewCapture, put = set_isNewCapture)) bool isNewCapture;

  /// @brief Field s_dummyDefaultEC, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_dummyDefaultEC, put = setStaticF_s_dummyDefaultEC)) ::System::Threading::ExecutionContext* s_dummyDefaultEC;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Capture, addr 0x3e524c8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Threading::ExecutionContext* Capture();

  /// @brief Method Capture, addr 0x3e5a364, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Threading::ExecutionContext* Capture(::ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Threading::ExecutionContext_CaptureOptions options);

  /// @brief Method CreateCopy, addr 0x3e5a0fc, size 0x140, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext* CreateCopy();

  /// @brief Method CreateMutableCopy, addr 0x3e5a23c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext* CreateMutableCopy();

  /// @brief Method Dispose, addr 0x3e59ae8, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EstablishCopyOnWriteScope, addr 0x3e59e70, size 0x34, virtual false, abstract: false, final false
  static inline void EstablishCopyOnWriteScope(::System::Threading::Thread* currentThread, bool knownNullWindowsIdentity, ::ByRef<::System::Threading::ExecutionContextSwitcher> ecsw);

  /// @brief Method EstablishCopyOnWriteScope, addr 0x3e5a014, size 0x84, virtual false, abstract: false, final false
  static inline void EstablishCopyOnWriteScope(::ByRef<::System::Threading::ExecutionContextSwitcher> ecsw);

  /// @brief Method FastCapture, addr 0x3e5a4f0, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Threading::ExecutionContext* FastCapture();

  /// @brief Method GetObjectData, addr 0x3e5a558, size 0x10c, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsDefaultFTContext, addr 0x3e59df8, size 0x50, virtual false, abstract: false, final false
  inline bool IsDefaultFTContext(bool ignoreSyncCtx);

  /// @brief Method IsFlowSuppressed, addr 0x3e5a334, size 0x30, virtual false, abstract: false, final false
  static inline bool IsFlowSuppressed();

  static inline ::System::Threading::ExecutionContext* New_ctor();

  static inline ::System::Threading::ExecutionContext* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::ExecutionContext* New_ctor(bool isPreAllocatedDefault);

  /// @brief Method OnAsyncLocalContextChanged, addr 0x3e59150, size 0x4b8, virtual false, abstract: false, final false
  static inline void OnAsyncLocalContextChanged(::System::Threading::ExecutionContext* previous, ::System::Threading::ExecutionContext* current);

  /// @brief Method Run, addr 0x3e560cc, size 0xe0, virtual false, abstract: false, final false
  static inline void Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state);

  /// @brief Method Run, addr 0x3e59aec, size 0x7c, virtual false, abstract: false, final false
  static inline void Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state, bool preserveSyncCtx);

  /// @brief Method RunInternal, addr 0x3e59d5c, size 0x70, virtual false, abstract: false, final false
  static inline void RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state);

  /// @brief Method RunInternal, addr 0x3e59b68, size 0x1f4, virtual false, abstract: false, final false
  static inline void RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state, bool preserveSyncCtx);

  /// @brief Method SetExecutionContext, addr 0x3e59ea4, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Threading::ExecutionContextSwitcher SetExecutionContext(::System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx);

  /// @brief Method SetLocalValue, addr 0x3e5969c, size 0x2d0, virtual false, abstract: false, final false
  static inline void SetLocalValue(::System::Threading::IAsyncLocal* local, ::System::Object* newValue, bool needChangeNotifications);

  constexpr ::System::Threading::ExecutionContext_Flags const& __cordl_internal_get__flags() const;

  constexpr ::System::Threading::ExecutionContext_Flags& __cordl_internal_get__flags();

  constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext* const& __cordl_internal_get__illogicalCallContext() const;

  constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext*& __cordl_internal_get__illogicalCallContext();

  constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* const& __cordl_internal_get__localChangeNotifications() const;

  constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*& __cordl_internal_get__localChangeNotifications();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* const& __cordl_internal_get__localValues() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>*& __cordl_internal_get__localValues();

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext* const& __cordl_internal_get__logicalCallContext() const;

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __cordl_internal_get__logicalCallContext();

  constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get__syncContext() const;

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get__syncContext();

  constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get__syncContextNoFlow() const;

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get__syncContextNoFlow();

  constexpr void __cordl_internal_set__flags(::System::Threading::ExecutionContext_Flags value);

  constexpr void __cordl_internal_set__illogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value);

  constexpr void __cordl_internal_set__localChangeNotifications(::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* value);

  constexpr void __cordl_internal_set__localValues(::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__logicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  constexpr void __cordl_internal_set__syncContext(::System::Threading::SynchronizationContext* value);

  constexpr void __cordl_internal_set__syncContextNoFlow(::System::Threading::SynchronizationContext* value);

  /// @brief Method .ctor, addr 0x3e59664, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e5a664, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e5966c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool isPreAllocatedDefault);

  static inline ::System::Threading::ExecutionContext* getStaticF_Default();

  static inline ::System::Threading::ExecutionContext* getStaticF_s_dummyDefaultEC();

  /// @brief Method get_IllogicalCallContext, addr 0x3e59a5c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext();

  /// @brief Method get_IsPreAllocatedDefault, addr 0x3e59658, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsPreAllocatedDefault();

  /// @brief Method get_LogicalCallContext, addr 0x3e599f0, size 0x64, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method get_SynchronizationContext, addr 0x3e59ac8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method get_SynchronizationContextNoFlow, addr 0x3e59ad8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();

  /// @brief Method get_isFlowSuppressed, addr 0x3e5962c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isFlowSuppressed();

  /// @brief Method get_isNewCapture, addr 0x3e59608, size 0x14, virtual false, abstract: false, final false
  inline bool get_isNewCapture();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_Default(::System::Threading::ExecutionContext* value);

  static inline void setStaticF_s_dummyDefaultEC(::System::Threading::ExecutionContext* value);

  /// @brief Method set_IllogicalCallContext, addr 0x3e59ac0, size 0x8, virtual false, abstract: false, final false
  inline void set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value);

  /// @brief Method set_LogicalCallContext, addr 0x3e59a54, size 0x8, virtual false, abstract: false, final false
  inline void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  /// @brief Method set_SynchronizationContext, addr 0x3e59ad0, size 0x8, virtual false, abstract: false, final false
  inline void set_SynchronizationContext(::System::Threading::SynchronizationContext* value);

  /// @brief Method set_SynchronizationContextNoFlow, addr 0x3e59ae0, size 0x8, virtual false, abstract: false, final false
  inline void set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext* value);

  /// @brief Method set_isFlowSuppressed, addr 0x3e59638, size 0x20, virtual false, abstract: false, final false
  inline void set_isFlowSuppressed(bool value);

  /// @brief Method set_isNewCapture, addr 0x3e5961c, size 0x10, virtual false, abstract: false, final false
  inline void set_isNewCapture(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecutionContext(ExecutionContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecutionContext(ExecutionContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2717 };

  /// @brief Field _syncContext, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ____syncContext;

  /// @brief Field _syncContextNoFlow, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ____syncContextNoFlow;

  /// @brief Field _logicalCallContext, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::LogicalCallContext* ____logicalCallContext;

  /// @brief Field _illogicalCallContext, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IllogicalCallContext* ____illogicalCallContext;

  /// @brief Field _flags, offset: 0x30, size: 0x4, def value: None
  ::System::Threading::ExecutionContext_Flags ____flags;

  /// @brief Field _localValues, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* ____localValues;

  /// @brief Field _localChangeNotifications, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* ____localChangeNotifications;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ExecutionContext, ____syncContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____syncContextNoFlow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____logicalCallContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____illogicalCallContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____localValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____localChangeNotifications) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ExecutionContext, 0x48>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContext_CaptureOptions, "System.Threading", "ExecutionContext/CaptureOptions");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContext_Flags, "System.Threading", "ExecutionContext/Flags");
NEED_NO_BOX(::System::Threading::ExecutionContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContext*, "System.Threading", "ExecutionContext");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContext_Reader, "System.Threading", "ExecutionContext/Reader");
