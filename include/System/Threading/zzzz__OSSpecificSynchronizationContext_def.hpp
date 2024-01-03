#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OSSpecificSynchronizationContext)
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
class __OSSpecificSynchronizationContext____c;
}
namespace System::Threading {
class __OSSpecificSynchronizationContext__InvocationContext;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class __OSSpecificSynchronizationContext__InvocationEntryDelegate;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System {
class Object;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class __ConditionalWeakTable_2__CreateValueCallback;
}
// Forward declare root types
namespace System::Threading {
class OSSpecificSynchronizationContext;
}
namespace System::Threading {
class __OSSpecificSynchronizationContext__InvocationContext;
}
namespace System::Threading {
class __OSSpecificSynchronizationContext__InvocationEntryDelegate;
}
namespace System::Threading {
class __OSSpecificSynchronizationContext____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::OSSpecificSynchronizationContext);
MARK_REF_PTR_T(::System::Threading::__OSSpecificSynchronizationContext__InvocationContext);
MARK_REF_PTR_T(::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate);
MARK_REF_PTR_T(::System::Threading::__OSSpecificSynchronizationContext____c);
// Type: ::InvocationEntryDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2718))
// CS Name: ::OSSpecificSynchronizationContext::InvocationEntryDelegate*
class CORDL_TYPE __OSSpecificSynchronizationContext__InvocationEntryDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2619014, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x26191bc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(void* arg);

  // Ctor Parameters [CppParam { name: "", ty: "__OSSpecificSynchronizationContext__InvocationEntryDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OSSpecificSynchronizationContext__InvocationEntryDelegate(__OSSpecificSynchronizationContext__InvocationEntryDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OSSpecificSynchronizationContext__InvocationEntryDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OSSpecificSynchronizationContext__InvocationEntryDelegate(__OSSpecificSynchronizationContext__InvocationEntryDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OSSpecificSynchronizationContext__InvocationEntryDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate, 0x80>, "Size mismatch!");

} // namespace System::Threading
// Type: ::InvocationContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2719))
// CS Name: ::OSSpecificSynchronizationContext::InvocationContext*
class CORDL_TYPE __OSSpecificSynchronizationContext__InvocationContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Delegate, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Delegate, put = __set_m_Delegate))::System::Threading::SendOrPostCallback* m_Delegate;

  /// @brief Field m_State, offset 0x18, size 0x8
  __declspec(property(get = __get_m_State, put = __set_m_State))::System::Object* m_State;

  constexpr ::System::Threading::SendOrPostCallback*& __get_m_Delegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SendOrPostCallback*> const& __get_m_Delegate() const;

  constexpr void __set_m_Delegate(::System::Threading::SendOrPostCallback* value);

  constexpr ::System::Object*& __get_m_State();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_State() const;

  constexpr void __set_m_State(::System::Object* value);

  static inline ::System::Threading::__OSSpecificSynchronizationContext__InvocationContext* New_ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method .ctor, addr 0x26190d8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method Invoke, addr 0x2619108, size 0x28, virtual false, abstract: false, final false
  inline void Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "__OSSpecificSynchronizationContext__InvocationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OSSpecificSynchronizationContext__InvocationContext(__OSSpecificSynchronizationContext__InvocationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OSSpecificSynchronizationContext__InvocationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OSSpecificSynchronizationContext__InvocationContext(__OSSpecificSynchronizationContext__InvocationContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OSSpecificSynchronizationContext__InvocationContext();

public:
  /// @brief Field m_Delegate, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::SendOrPostCallback* ___m_Delegate;

  /// @brief Field m_State, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_State;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__OSSpecificSynchronizationContext__InvocationContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__OSSpecificSynchronizationContext__InvocationContext, ___m_Delegate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::__OSSpecificSynchronizationContext__InvocationContext, ___m_State) == 0x18, "Offset mismatch!");

} // namespace System::Threading
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2720))
// CS Name: ::OSSpecificSynchronizationContext::<>c*
class CORDL_TYPE __OSSpecificSynchronizationContext____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Threading::__OSSpecificSynchronizationContext____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<
      ::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* __9__3_0;

  static inline void setStaticF___9(::System::Threading::__OSSpecificSynchronizationContext____c* value);

  static inline ::System::Threading::__OSSpecificSynchronizationContext____c* getStaticF___9();

  static inline void
  setStaticF___9__3_0(::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value);

  static inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* getStaticF___9__3_0();

  static inline ::System::Threading::__OSSpecificSynchronizationContext____c* New_ctor();

  /// @brief Method .ctor, addr 0x2619234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Get>b__3_0, addr 0x261923c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Threading::OSSpecificSynchronizationContext* _Get_b__3_0(::System::Object* _osContext);

  // Ctor Parameters [CppParam { name: "", ty: "__OSSpecificSynchronizationContext____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OSSpecificSynchronizationContext____c(__OSSpecificSynchronizationContext____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OSSpecificSynchronizationContext____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OSSpecificSynchronizationContext____c(__OSSpecificSynchronizationContext____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OSSpecificSynchronizationContext____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__OSSpecificSynchronizationContext____c, 0x10>, "Size mismatch!");

} // namespace System::Threading
// Type: System.Threading::OSSpecificSynchronizationContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2721))
// CS Name: ::System.Threading::OSSpecificSynchronizationContext*
class CORDL_TYPE OSSpecificSynchronizationContext : public ::System::Threading::SynchronizationContext {
public:
  // Declarations
  using __c = ::System::Threading::__OSSpecificSynchronizationContext____c;

  using InvocationContext = ::System::Threading::__OSSpecificSynchronizationContext__InvocationContext;

  using InvocationEntryDelegate = ::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate;

  /// @brief Field m_OSSynchronizationContext, offset 0x18, size 0x8
  __declspec(property(get = __get_m_OSSynchronizationContext, put = __set_m_OSSynchronizationContext))::System::Object* m_OSSynchronizationContext;

  /// @brief Field s_ContextCache, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_ContextCache,
               put = setStaticF_s_ContextCache))::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* s_ContextCache;

  constexpr ::System::Object*& __get_m_OSSynchronizationContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_m_OSSynchronizationContext() const;

  constexpr void __set_m_OSSynchronizationContext(::System::Object* value);

  static inline void setStaticF_s_ContextCache(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value);

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* getStaticF_s_ContextCache();

  static inline ::System::Threading::OSSpecificSynchronizationContext* New_ctor(::System::Object* osContext);

  /// @brief Method .ctor, addr 0x2618de8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* osContext);

  /// @brief Method Get, addr 0x2618ac4, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::Threading::OSSpecificSynchronizationContext* Get();

  /// @brief Method CreateCopy, addr 0x2618e14, size 0x68, virtual true, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* CreateCopy();

  /// @brief Method Send, addr 0x2618e7c, size 0x40, virtual true, abstract: false, final false
  inline void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method Post, addr 0x2618ebc, size 0x158, virtual true, abstract: false, final false
  inline void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method InvocationEntry, addr 0x2618c80, size 0x168, virtual false, abstract: false, final false
  static inline void InvocationEntry(void* arg);

  /// @brief Method GetOSContext, addr 0x2618e10, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* GetOSContext();

  /// @brief Method PostInternal, addr 0x2619104, size 0x4, virtual false, abstract: false, final false
  static inline void PostInternal(::System::Object* osSynchronizationContext, void* callback, void* arg);

  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OSSpecificSynchronizationContext(OSSpecificSynchronizationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OSSpecificSynchronizationContext(OSSpecificSynchronizationContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OSSpecificSynchronizationContext();

public:
  /// @brief Field m_OSSynchronizationContext, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_OSSynchronizationContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::OSSpecificSynchronizationContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Threading::OSSpecificSynchronizationContext, ___m_OSSynchronizationContext) == 0x18, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::OSSpecificSynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::OSSpecificSynchronizationContext*, "System.Threading", "OSSpecificSynchronizationContext");
NEED_NO_BOX(::System::Threading::__OSSpecificSynchronizationContext__InvocationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__OSSpecificSynchronizationContext__InvocationContext*, "System.Threading", "OSSpecificSynchronizationContext/InvocationContext");
NEED_NO_BOX(::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate*, "System.Threading", "OSSpecificSynchronizationContext/InvocationEntryDelegate");
NEED_NO_BOX(::System::Threading::__OSSpecificSynchronizationContext____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__OSSpecificSynchronizationContext____c*, "System.Threading", "OSSpecificSynchronizationContext/<>c");
