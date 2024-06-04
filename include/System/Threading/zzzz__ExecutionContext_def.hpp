#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
struct __LogicalCallContext__Reader;
}
namespace System::Runtime::Serialization {
class ISerializable;
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
namespace System::Threading {
struct __ExecutionContext__CaptureOptions;
}
namespace System::Threading {
struct __ExecutionContext__Flags;
}
namespace System::Threading {
struct __ExecutionContext__Reader;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExecutionContext__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ExecutionContext__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IsFlowSuppressed value: static_cast<int32_t>(0x2)
  static ::System::Threading::__ExecutionContext__Flags const IsFlowSuppressed;

  /// @brief Field IsNewCapture value: static_cast<int32_t>(0x1)
  static ::System::Threading::__ExecutionContext__Flags const IsNewCapture;

  /// @brief Field IsPreAllocatedDefault value: static_cast<int32_t>(0x4)
  static ::System::Threading::__ExecutionContext__Flags const IsPreAllocatedDefault;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::__ExecutionContext__Flags const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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
// CS Name: ::ExecutionContext::Reader
struct CORDL_TYPE __ExecutionContext__Reader {
public:
  // Declarations
  __declspec(property(get = get_IsFlowSuppressed)) bool IsFlowSuppressed;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_LogicalCallContext))::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader LogicalCallContext;

  __declspec(property(get = get_SynchronizationContext))::System::Threading::SynchronizationContext* SynchronizationContext;

  __declspec(property(get = get_SynchronizationContextNoFlow))::System::Threading::SynchronizationContext* SynchronizationContextNoFlow;

  /// @brief Method DangerousGetRawExecutionContext, addr 0x29bb254, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext* DangerousGetRawExecutionContext();

  /// @brief Method HasSameLocalValues, addr 0x29ba8b8, size 0x28, virtual false, abstract: false, final false
  inline bool HasSameLocalValues(::System::Threading::ExecutionContext* other);

  /// @brief Method IsDefaultFTContext, addr 0x29ba84c, size 0x1c, virtual false, abstract: false, final false
  inline bool IsDefaultFTContext(bool ignoreSyncCtx);

  /// @brief Method .ctor, addr 0x29bb24c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ExecutionContext* ec);

  /// @brief Method get_IsFlowSuppressed, addr 0x29bb25c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsFlowSuppressed();

  /// @brief Method get_IsNull, addr 0x29ba83c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method get_LogicalCallContext, addr 0x29baf94, size 0x18, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader get_LogicalCallContext();

  /// @brief Method get_SynchronizationContext, addr 0x29bab28, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method get_SynchronizationContextNoFlow, addr 0x29bab40, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExecutionContext__Reader();

  // Ctor Parameters [CppParam { name: "m_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: None }]
  constexpr __ExecutionContext__Reader(::System::Threading::ExecutionContext* m_ec) noexcept;

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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExecutionContext__CaptureOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ExecutionContext__CaptureOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IgnoreSyncCtx value: static_cast<int32_t>(0x1)
  static ::System::Threading::__ExecutionContext__CaptureOptions const IgnoreSyncCtx;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::__ExecutionContext__CaptureOptions const None;

  /// @brief Field OptimizeDefaultCase value: static_cast<int32_t>(0x2)
  static ::System::Threading::__ExecutionContext__CaptureOptions const OptimizeDefaultCase;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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
// CS Name: ::System.Threading::ExecutionContext*
class CORDL_TYPE ExecutionContext : public ::System::Object {
public:
  // Declarations
  using CaptureOptions = ::System::Threading::__ExecutionContext__CaptureOptions;

  using Flags = ::System::Threading::__ExecutionContext__Flags;

  using Reader = ::System::Threading::__ExecutionContext__Reader;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::Threading::ExecutionContext* Default;

  __declspec(property(get = get_IllogicalCallContext, put = set_IllogicalCallContext))::System::Runtime::Remoting::Messaging::IllogicalCallContext* IllogicalCallContext;

  __declspec(property(get = get_IsPreAllocatedDefault)) bool IsPreAllocatedDefault;

  __declspec(property(get = get_LogicalCallContext, put = set_LogicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_SynchronizationContext, put = set_SynchronizationContext))::System::Threading::SynchronizationContext* SynchronizationContext;

  __declspec(property(get = get_SynchronizationContextNoFlow, put = set_SynchronizationContextNoFlow))::System::Threading::SynchronizationContext* SynchronizationContextNoFlow;

  /// @brief Field _flags, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags))::System::Threading::__ExecutionContext__Flags _flags;

  /// @brief Field _illogicalCallContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__illogicalCallContext,
                      put = __cordl_internal_set__illogicalCallContext))::System::Runtime::Remoting::Messaging::IllogicalCallContext* _illogicalCallContext;

  /// @brief Field _localChangeNotifications, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__localChangeNotifications,
                      put = __cordl_internal_set__localChangeNotifications))::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* _localChangeNotifications;

  /// @brief Field _localValues, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__localValues,
                      put = __cordl_internal_set__localValues))::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* _localValues;

  /// @brief Field _logicalCallContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__logicalCallContext, put = __cordl_internal_set__logicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* _logicalCallContext;

  /// @brief Field _syncContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__syncContext, put = __cordl_internal_set__syncContext))::System::Threading::SynchronizationContext* _syncContext;

  /// @brief Field _syncContextNoFlow, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__syncContextNoFlow, put = __cordl_internal_set__syncContextNoFlow))::System::Threading::SynchronizationContext* _syncContextNoFlow;

  __declspec(property(get = get_isFlowSuppressed, put = set_isFlowSuppressed)) bool isFlowSuppressed;

  __declspec(property(get = get_isNewCapture, put = set_isNewCapture)) bool isNewCapture;

  /// @brief Field s_dummyDefaultEC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dummyDefaultEC, put = setStaticF_s_dummyDefaultEC))::System::Threading::ExecutionContext* s_dummyDefaultEC;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Capture, addr 0x29b3574, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Threading::ExecutionContext* Capture();

  /// @brief Method Capture, addr 0x29badd4, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Threading::ExecutionContext* Capture(ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Threading::__ExecutionContext__CaptureOptions options);

  /// @brief Method CreateCopy, addr 0x29bab6c, size 0x140, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext* CreateCopy();

  /// @brief Method CreateMutableCopy, addr 0x29bacac, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext* CreateMutableCopy();

  /// @brief Method Dispose, addr 0x29ba544, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EstablishCopyOnWriteScope, addr 0x29ba8e0, size 0x34, virtual false, abstract: false, final false
  static inline void EstablishCopyOnWriteScope(::System::Threading::Thread* currentThread, bool knownNullWindowsIdentity, ByRef<::System::Threading::ExecutionContextSwitcher> ecsw);

  /// @brief Method EstablishCopyOnWriteScope, addr 0x29baa84, size 0x84, virtual false, abstract: false, final false
  static inline void EstablishCopyOnWriteScope(ByRef<::System::Threading::ExecutionContextSwitcher> ecsw);

  /// @brief Method FastCapture, addr 0x29baf44, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Threading::ExecutionContext* FastCapture();

  /// @brief Method GetObjectData, addr 0x29bafac, size 0x110, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsDefaultFTContext, addr 0x29ba868, size 0x50, virtual false, abstract: false, final false
  inline bool IsDefaultFTContext(bool ignoreSyncCtx);

  /// @brief Method IsFlowSuppressed, addr 0x29bada4, size 0x30, virtual false, abstract: false, final false
  static inline bool IsFlowSuppressed();

  static inline ::System::Threading::ExecutionContext* New_ctor();

  static inline ::System::Threading::ExecutionContext* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::ExecutionContext* New_ctor(bool isPreAllocatedDefault);

  /// @brief Method OnAsyncLocalContextChanged, addr 0x29b9bc4, size 0x484, virtual false, abstract: false, final false
  static inline void OnAsyncLocalContextChanged(::System::Threading::ExecutionContext* previous, ::System::Threading::ExecutionContext* current);

  /// @brief Method Run, addr 0x29b6e34, size 0xe8, virtual false, abstract: false, final false
  static inline void Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state);

  /// @brief Method Run, addr 0x29ba548, size 0x7c, virtual false, abstract: false, final false
  static inline void Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state, bool preserveSyncCtx);

  /// @brief Method RunInternal, addr 0x29ba7cc, size 0x70, virtual false, abstract: false, final false
  static inline void RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state);

  /// @brief Method RunInternal, addr 0x29ba5c4, size 0x208, virtual false, abstract: false, final false
  static inline void RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state, bool preserveSyncCtx);

  /// @brief Method SetExecutionContext, addr 0x29ba914, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Threading::ExecutionContextSwitcher SetExecutionContext(::System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx);

  /// @brief Method SetLocalValue, addr 0x29ba0e4, size 0x2cc, virtual false, abstract: false, final false
  static inline void SetLocalValue(::System::Threading::IAsyncLocal* local, ::System::Object* newValue, bool needChangeNotifications);

  constexpr ::System::Threading::__ExecutionContext__Flags const& __cordl_internal_get__flags() const;

  constexpr ::System::Threading::__ExecutionContext__Flags& __cordl_internal_get__flags();

  constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext*& __cordl_internal_get__illogicalCallContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IllogicalCallContext*> const& __cordl_internal_get__illogicalCallContext() const;

  constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*& __cordl_internal_get__localChangeNotifications();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*> const& __cordl_internal_get__localChangeNotifications() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>*& __cordl_internal_get__localValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>*> const& __cordl_internal_get__localValues() const;

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __cordl_internal_get__logicalCallContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::LogicalCallContext*> const& __cordl_internal_get__logicalCallContext() const;

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get__syncContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& __cordl_internal_get__syncContext() const;

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get__syncContextNoFlow();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& __cordl_internal_get__syncContextNoFlow() const;

  constexpr void __cordl_internal_set__flags(::System::Threading::__ExecutionContext__Flags value);

  constexpr void __cordl_internal_set__illogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value);

  constexpr void __cordl_internal_set__localChangeNotifications(::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* value);

  constexpr void __cordl_internal_set__localValues(::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__logicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  constexpr void __cordl_internal_set__syncContext(::System::Threading::SynchronizationContext* value);

  constexpr void __cordl_internal_set__syncContextNoFlow(::System::Threading::SynchronizationContext* value);

  /// @brief Method .ctor, addr 0x29ba0ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29bb0bc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x29ba0b4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool isPreAllocatedDefault);

  static inline ::System::Threading::ExecutionContext* getStaticF_Default();

  static inline ::System::Threading::ExecutionContext* getStaticF_s_dummyDefaultEC();

  /// @brief Method get_IllogicalCallContext, addr 0x29ba4b0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext();

  /// @brief Method get_IsPreAllocatedDefault, addr 0x29ba0a0, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsPreAllocatedDefault();

  /// @brief Method get_LogicalCallContext, addr 0x29ba43c, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method get_SynchronizationContext, addr 0x29ba524, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContext();

  /// @brief Method get_SynchronizationContextNoFlow, addr 0x29ba534, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();

  /// @brief Method get_isFlowSuppressed, addr 0x29ba078, size 0xc, virtual false, abstract: false, final false
  inline bool get_isFlowSuppressed();

  /// @brief Method get_isNewCapture, addr 0x29ba048, size 0x14, virtual false, abstract: false, final false
  inline bool get_isNewCapture();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_Default(::System::Threading::ExecutionContext* value);

  static inline void setStaticF_s_dummyDefaultEC(::System::Threading::ExecutionContext* value);

  /// @brief Method set_IllogicalCallContext, addr 0x29ba51c, size 0x8, virtual false, abstract: false, final false
  inline void set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value);

  /// @brief Method set_LogicalCallContext, addr 0x29ba4a8, size 0x8, virtual false, abstract: false, final false
  inline void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  /// @brief Method set_SynchronizationContext, addr 0x29ba52c, size 0x8, virtual false, abstract: false, final false
  inline void set_SynchronizationContext(::System::Threading::SynchronizationContext* value);

  /// @brief Method set_SynchronizationContextNoFlow, addr 0x29ba53c, size 0x8, virtual false, abstract: false, final false
  inline void set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext* value);

  /// @brief Method set_isFlowSuppressed, addr 0x29ba084, size 0x1c, virtual false, abstract: false, final false
  inline void set_isFlowSuppressed(bool value);

  /// @brief Method set_isNewCapture, addr 0x29ba05c, size 0x1c, virtual false, abstract: false, final false
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
