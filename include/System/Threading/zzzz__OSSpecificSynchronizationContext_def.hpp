#pragma once
// IWYU pragma private; include "System/Threading/OSSpecificSynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OSSpecificSynchronizationContext)
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2_CreateValueCallback;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System::Threading {
class OSSpecificSynchronizationContext_InvocationContext;
}
namespace System::Threading {
class OSSpecificSynchronizationContext_InvocationEntryDelegate;
}
namespace System::Threading {
class OSSpecificSynchronizationContext___c;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class OSSpecificSynchronizationContext;
}
namespace System::Threading {
class OSSpecificSynchronizationContext_InvocationContext;
}
namespace System::Threading {
class OSSpecificSynchronizationContext_InvocationEntryDelegate;
}
namespace System::Threading {
class OSSpecificSynchronizationContext___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::OSSpecificSynchronizationContext);
MARK_REF_PTR_T(::System::Threading::OSSpecificSynchronizationContext_InvocationContext);
MARK_REF_PTR_T(::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate);
MARK_REF_PTR_T(::System::Threading::OSSpecificSynchronizationContext___c);
// Dependencies System.MulticastDelegate
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate
class CORDL_TYPE OSSpecificSynchronizationContext_InvocationEntryDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3e55560, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr arg);

  static inline ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3e553f0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OSSpecificSynchronizationContext_InvocationEntryDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext_InvocationEntryDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OSSpecificSynchronizationContext_InvocationEntryDelegate(OSSpecificSynchronizationContext_InvocationEntryDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext_InvocationEntryDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OSSpecificSynchronizationContext_InvocationEntryDelegate(OSSpecificSynchronizationContext_InvocationEntryDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate, 0x80>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.OSSpecificSynchronizationContext/InvocationContext
class CORDL_TYPE OSSpecificSynchronizationContext_InvocationContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Delegate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Delegate, put = __cordl_internal_set_m_Delegate)) ::System::Threading::SendOrPostCallback* m_Delegate;

  /// @brief Field m_State, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State)) ::System::Object* m_State;

  /// @brief Method Invoke, addr 0x3e554ac, size 0x28, virtual false, abstract: false, final false
  inline void Invoke();

  static inline ::System::Threading::OSSpecificSynchronizationContext_InvocationContext* New_ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get_m_Delegate() const;

  constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get_m_Delegate();

  constexpr ::System::Object* const& __cordl_internal_get_m_State() const;

  constexpr ::System::Object*& __cordl_internal_get_m_State();

  constexpr void __cordl_internal_set_m_Delegate(::System::Threading::SendOrPostCallback* value);

  constexpr void __cordl_internal_set_m_State(::System::Object* value);

  /// @brief Method .ctor, addr 0x3e5547c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OSSpecificSynchronizationContext_InvocationContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext_InvocationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OSSpecificSynchronizationContext_InvocationContext(OSSpecificSynchronizationContext_InvocationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext_InvocationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OSSpecificSynchronizationContext_InvocationContext(OSSpecificSynchronizationContext_InvocationContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2722 };

  /// @brief Field m_Delegate, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::SendOrPostCallback* ___m_Delegate;

  /// @brief Field m_State, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_State;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::OSSpecificSynchronizationContext_InvocationContext, ___m_Delegate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::OSSpecificSynchronizationContext_InvocationContext, ___m_State) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::OSSpecificSynchronizationContext_InvocationContext, 0x20>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.OSSpecificSynchronizationContext/<>c
class CORDL_TYPE OSSpecificSynchronizationContext___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Threading::OSSpecificSynchronizationContext___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__3_0,
      put = setStaticF___9__3_0)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* __9__3_0;

  static inline ::System::Threading::OSSpecificSynchronizationContext___c* New_ctor();

  /// @brief Method <Get>b__3_0, addr 0x3e555d8, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Threading::OSSpecificSynchronizationContext* _Get_b__3_0(::System::Object* _osContext);

  /// @brief Method .ctor, addr 0x3e555d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::OSSpecificSynchronizationContext___c* getStaticF___9();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* getStaticF___9__3_0();

  static inline void setStaticF___9(::System::Threading::OSSpecificSynchronizationContext___c* value);

  static inline void
  setStaticF___9__3_0(::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OSSpecificSynchronizationContext___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OSSpecificSynchronizationContext___c(OSSpecificSynchronizationContext___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OSSpecificSynchronizationContext___c(OSSpecificSynchronizationContext___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2723 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::OSSpecificSynchronizationContext___c, 0x10>, "Size mismatch!");

} // namespace System::Threading
// Dependencies System.Threading.SynchronizationContext
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.OSSpecificSynchronizationContext
class CORDL_TYPE OSSpecificSynchronizationContext : public ::System::Threading::SynchronizationContext {
public:
  // Declarations
  using InvocationContext = ::System::Threading::OSSpecificSynchronizationContext_InvocationContext;

  using InvocationEntryDelegate = ::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate;

  using __c = ::System::Threading::OSSpecificSynchronizationContext___c;

  /// @brief Field m_OSSynchronizationContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OSSynchronizationContext, put = __cordl_internal_set_m_OSSynchronizationContext)) ::System::Object* m_OSSynchronizationContext;

  /// @brief Field s_ContextCache, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_ContextCache,
      put = setStaticF_s_ContextCache)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* s_ContextCache;

  /// @brief Method CreateCopy, addr 0x3e55204, size 0x60, virtual true, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* CreateCopy();

  /// @brief Method Get, addr 0x3e54ec0, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Threading::OSSpecificSynchronizationContext* Get();

  /// @brief Method GetOSContext, addr 0x3e55200, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* GetOSContext();

  /// @brief Method InvocationEntry, addr 0x3e55070, size 0x168, virtual false, abstract: false, final false
  static inline void InvocationEntry(::System::IntPtr arg);

  static inline ::System::Threading::OSSpecificSynchronizationContext* New_ctor(::System::Object* osContext);

  /// @brief Method Post, addr 0x3e5529c, size 0x154, virtual true, abstract: false, final false
  inline void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method PostInternal, addr 0x3e554a8, size 0x4, virtual false, abstract: false, final false
  static inline void PostInternal(::System::Object* osSynchronizationContext, ::System::IntPtr callback, ::System::IntPtr arg);

  /// @brief Method Send, addr 0x3e55264, size 0x38, virtual true, abstract: false, final false
  inline void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  constexpr ::System::Object* const& __cordl_internal_get_m_OSSynchronizationContext() const;

  constexpr ::System::Object*& __cordl_internal_get_m_OSSynchronizationContext();

  constexpr void __cordl_internal_set_m_OSSynchronizationContext(::System::Object* value);

  /// @brief Method .ctor, addr 0x3e551d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* osContext);

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* getStaticF_s_ContextCache();

  static inline void setStaticF_s_ContextCache(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OSSpecificSynchronizationContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OSSpecificSynchronizationContext(OSSpecificSynchronizationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OSSpecificSynchronizationContext(OSSpecificSynchronizationContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2724 };

  /// @brief Field m_OSSynchronizationContext, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_OSSynchronizationContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::OSSpecificSynchronizationContext, ___m_OSSynchronizationContext) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::OSSpecificSynchronizationContext, 0x20>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::OSSpecificSynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::OSSpecificSynchronizationContext*, "System.Threading", "OSSpecificSynchronizationContext");
NEED_NO_BOX(::System::Threading::OSSpecificSynchronizationContext_InvocationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::OSSpecificSynchronizationContext_InvocationContext*, "System.Threading", "OSSpecificSynchronizationContext/InvocationContext");
NEED_NO_BOX(::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::OSSpecificSynchronizationContext_InvocationEntryDelegate*, "System.Threading", "OSSpecificSynchronizationContext/InvocationEntryDelegate");
NEED_NO_BOX(::System::Threading::OSSpecificSynchronizationContext___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::OSSpecificSynchronizationContext___c*, "System.Threading", "OSSpecificSynchronizationContext/<>c");
