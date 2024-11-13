#pragma once
// IWYU pragma private; include "System/Threading/InternalThread.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "System/Threading/zzzz__ThreadState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalThread)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class InternalThread;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::InternalThread);
// Type: System.Threading::InternalThread
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::InternalThread*
class CORDL_TYPE InternalThread : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
  // Declarations
  /// @brief Field _serialized_principal, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__serialized_principal, put = __cordl_internal_set__serialized_principal)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _serialized_principal;

  /// @brief Field _serialized_principal_version, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__serialized_principal_version, put = __cordl_internal_set__serialized_principal_version)) int32_t _serialized_principal_version;

  /// @brief Field abort_exc, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_abort_exc, put = __cordl_internal_set_abort_exc)) ::System::Object* abort_exc;

  /// @brief Field abort_protected_block_count, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_abort_protected_block_count, put = __cordl_internal_set_abort_protected_block_count)) ::System::IntPtr abort_protected_block_count;

  /// @brief Field abort_state_handle, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_abort_state_handle, put = __cordl_internal_set_abort_state_handle)) int32_t abort_state_handle;

  /// @brief Field apartment_state, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_apartment_state, put = __cordl_internal_set_apartment_state)) uint8_t apartment_state;

  /// @brief Field appdomain_refs, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_appdomain_refs, put = __cordl_internal_set_appdomain_refs)) ::System::IntPtr appdomain_refs;

  /// @brief Field critical_region_level, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_critical_region_level, put = __cordl_internal_set_critical_region_level)) int32_t critical_region_level;

  /// @brief Field current_appcontext, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_current_appcontext, put = __cordl_internal_set_current_appcontext)) ::System::Object* current_appcontext;

  /// @brief Field debugger_thread, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_debugger_thread, put = __cordl_internal_set_debugger_thread)) ::System::IntPtr debugger_thread;

  /// @brief Field flags, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) ::System::IntPtr flags;

  /// @brief Field handle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) ::System::IntPtr handle;

  /// @brief Field interruption_requested, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_interruption_requested, put = __cordl_internal_set_interruption_requested)) int32_t interruption_requested;

  /// @brief Field last, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_last, put = __cordl_internal_set_last)) ::System::IntPtr last;

  /// @brief Field lock_thread_id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lock_thread_id, put = __cordl_internal_set_lock_thread_id)) int32_t lock_thread_id;

  /// @brief Field longlived, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_longlived, put = __cordl_internal_set_longlived)) ::System::IntPtr longlived;

  /// @brief Field manage_callback, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_manage_callback, put = __cordl_internal_set_manage_callback)) ::System::IntPtr manage_callback;

  /// @brief Field managed_id, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_managed_id, put = __cordl_internal_set_managed_id)) int32_t managed_id;

  /// @brief Field name_chars, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_name_chars, put = __cordl_internal_set_name_chars)) ::System::IntPtr name_chars;

  /// @brief Field name_free, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_name_free, put = __cordl_internal_set_name_free)) int32_t name_free;

  /// @brief Field name_length, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_name_length, put = __cordl_internal_set_name_length)) int32_t name_length;

  /// @brief Field native_handle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_native_handle, put = __cordl_internal_set_native_handle)) ::System::IntPtr native_handle;

  /// @brief Field netcore0, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_netcore0, put = __cordl_internal_set_netcore0)) ::System::IntPtr netcore0;

  /// @brief Field netcore1, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_netcore1, put = __cordl_internal_set_netcore1)) ::System::IntPtr netcore1;

  /// @brief Field netcore2, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_netcore2, put = __cordl_internal_set_netcore2)) ::System::IntPtr netcore2;

  /// @brief Field owned_mutex, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_owned_mutex, put = __cordl_internal_set_owned_mutex)) ::System::IntPtr owned_mutex;

  /// @brief Field priority, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_priority, put = __cordl_internal_set_priority)) int32_t priority;

  /// @brief Field root_domain_thread, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_root_domain_thread, put = __cordl_internal_set_root_domain_thread)) ::System::Object* root_domain_thread;

  /// @brief Field runtime_thread_info, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_runtime_thread_info, put = __cordl_internal_set_runtime_thread_info)) ::System::IntPtr runtime_thread_info;

  /// @brief Field self_suspended, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_self_suspended, put = __cordl_internal_set_self_suspended)) int32_t self_suspended;

  /// @brief Field small_id, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_small_id, put = __cordl_internal_set_small_id)) int32_t small_id;

  /// @brief Field stack_size, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_stack_size, put = __cordl_internal_set_stack_size)) int32_t stack_size;

  /// @brief Field state, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::System::Threading::ThreadState state;

  /// @brief Field static_data, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_static_data, put = __cordl_internal_set_static_data)) ::System::UIntPtr static_data;

  /// @brief Field suspended_event, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_suspended_event, put = __cordl_internal_set_suspended_event)) ::System::IntPtr suspended_event;

  /// @brief Field thread_id, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_thread_id, put = __cordl_internal_set_thread_id)) int64_t thread_id;

  /// @brief Field thread_interrupt_requested, offset 0xa9, size 0x1
  __declspec(property(get = __cordl_internal_get_thread_interrupt_requested, put = __cordl_internal_set_thread_interrupt_requested)) bool thread_interrupt_requested;

  /// @brief Field thread_pinning_ref, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_thread_pinning_ref, put = __cordl_internal_set_thread_pinning_ref)) ::System::IntPtr thread_pinning_ref;

  /// @brief Field thread_state, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_thread_state, put = __cordl_internal_set_thread_state)) ::System::IntPtr thread_state;

  /// @brief Field threadpool_thread, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_threadpool_thread, put = __cordl_internal_set_threadpool_thread)) bool threadpool_thread;

  /// @brief Method Finalize, addr 0x3dfc1a8, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Threading::InternalThread* New_ctor();

  /// @brief Method Thread_free_internal, addr 0x3dfc1a4, size 0x4, virtual false, abstract: false, final false
  inline void Thread_free_internal();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__serialized_principal() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__serialized_principal();

  constexpr int32_t const& __cordl_internal_get__serialized_principal_version() const;

  constexpr int32_t& __cordl_internal_get__serialized_principal_version();

  constexpr ::System::Object*& __cordl_internal_get_abort_exc();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_abort_exc() const;

  constexpr ::System::IntPtr const& __cordl_internal_get_abort_protected_block_count() const;

  constexpr ::System::IntPtr& __cordl_internal_get_abort_protected_block_count();

  constexpr int32_t const& __cordl_internal_get_abort_state_handle() const;

  constexpr int32_t& __cordl_internal_get_abort_state_handle();

  constexpr uint8_t const& __cordl_internal_get_apartment_state() const;

  constexpr uint8_t& __cordl_internal_get_apartment_state();

  constexpr ::System::IntPtr const& __cordl_internal_get_appdomain_refs() const;

  constexpr ::System::IntPtr& __cordl_internal_get_appdomain_refs();

  constexpr int32_t const& __cordl_internal_get_critical_region_level() const;

  constexpr int32_t& __cordl_internal_get_critical_region_level();

  constexpr ::System::Object*& __cordl_internal_get_current_appcontext();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_current_appcontext() const;

  constexpr ::System::IntPtr const& __cordl_internal_get_debugger_thread() const;

  constexpr ::System::IntPtr& __cordl_internal_get_debugger_thread();

  constexpr ::System::IntPtr const& __cordl_internal_get_flags() const;

  constexpr ::System::IntPtr& __cordl_internal_get_flags();

  constexpr ::System::IntPtr const& __cordl_internal_get_handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_handle();

  constexpr int32_t const& __cordl_internal_get_interruption_requested() const;

  constexpr int32_t& __cordl_internal_get_interruption_requested();

  constexpr ::System::IntPtr const& __cordl_internal_get_last() const;

  constexpr ::System::IntPtr& __cordl_internal_get_last();

  constexpr int32_t const& __cordl_internal_get_lock_thread_id() const;

  constexpr int32_t& __cordl_internal_get_lock_thread_id();

  constexpr ::System::IntPtr const& __cordl_internal_get_longlived() const;

  constexpr ::System::IntPtr& __cordl_internal_get_longlived();

  constexpr ::System::IntPtr const& __cordl_internal_get_manage_callback() const;

  constexpr ::System::IntPtr& __cordl_internal_get_manage_callback();

  constexpr int32_t const& __cordl_internal_get_managed_id() const;

  constexpr int32_t& __cordl_internal_get_managed_id();

  constexpr ::System::IntPtr const& __cordl_internal_get_name_chars() const;

  constexpr ::System::IntPtr& __cordl_internal_get_name_chars();

  constexpr int32_t const& __cordl_internal_get_name_free() const;

  constexpr int32_t& __cordl_internal_get_name_free();

  constexpr int32_t const& __cordl_internal_get_name_length() const;

  constexpr int32_t& __cordl_internal_get_name_length();

  constexpr ::System::IntPtr const& __cordl_internal_get_native_handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_native_handle();

  constexpr ::System::IntPtr const& __cordl_internal_get_netcore0() const;

  constexpr ::System::IntPtr& __cordl_internal_get_netcore0();

  constexpr ::System::IntPtr const& __cordl_internal_get_netcore1() const;

  constexpr ::System::IntPtr& __cordl_internal_get_netcore1();

  constexpr ::System::IntPtr const& __cordl_internal_get_netcore2() const;

  constexpr ::System::IntPtr& __cordl_internal_get_netcore2();

  constexpr ::System::IntPtr const& __cordl_internal_get_owned_mutex() const;

  constexpr ::System::IntPtr& __cordl_internal_get_owned_mutex();

  constexpr int32_t const& __cordl_internal_get_priority() const;

  constexpr int32_t& __cordl_internal_get_priority();

  constexpr ::System::Object*& __cordl_internal_get_root_domain_thread();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_root_domain_thread() const;

  constexpr ::System::IntPtr const& __cordl_internal_get_runtime_thread_info() const;

  constexpr ::System::IntPtr& __cordl_internal_get_runtime_thread_info();

  constexpr int32_t const& __cordl_internal_get_self_suspended() const;

  constexpr int32_t& __cordl_internal_get_self_suspended();

  constexpr int32_t const& __cordl_internal_get_small_id() const;

  constexpr int32_t& __cordl_internal_get_small_id();

  constexpr int32_t const& __cordl_internal_get_stack_size() const;

  constexpr int32_t& __cordl_internal_get_stack_size();

  constexpr ::System::Threading::ThreadState const& __cordl_internal_get_state() const;

  constexpr ::System::Threading::ThreadState& __cordl_internal_get_state();

  constexpr ::System::UIntPtr const& __cordl_internal_get_static_data() const;

  constexpr ::System::UIntPtr& __cordl_internal_get_static_data();

  constexpr ::System::IntPtr const& __cordl_internal_get_suspended_event() const;

  constexpr ::System::IntPtr& __cordl_internal_get_suspended_event();

  constexpr int64_t const& __cordl_internal_get_thread_id() const;

  constexpr int64_t& __cordl_internal_get_thread_id();

  constexpr bool const& __cordl_internal_get_thread_interrupt_requested() const;

  constexpr bool& __cordl_internal_get_thread_interrupt_requested();

  constexpr ::System::IntPtr const& __cordl_internal_get_thread_pinning_ref() const;

  constexpr ::System::IntPtr& __cordl_internal_get_thread_pinning_ref();

  constexpr ::System::IntPtr const& __cordl_internal_get_thread_state() const;

  constexpr ::System::IntPtr& __cordl_internal_get_thread_state();

  constexpr bool const& __cordl_internal_get_threadpool_thread() const;

  constexpr bool& __cordl_internal_get_threadpool_thread();

  constexpr void __cordl_internal_set__serialized_principal(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__serialized_principal_version(int32_t value);

  constexpr void __cordl_internal_set_abort_exc(::System::Object* value);

  constexpr void __cordl_internal_set_abort_protected_block_count(::System::IntPtr value);

  constexpr void __cordl_internal_set_abort_state_handle(int32_t value);

  constexpr void __cordl_internal_set_apartment_state(uint8_t value);

  constexpr void __cordl_internal_set_appdomain_refs(::System::IntPtr value);

  constexpr void __cordl_internal_set_critical_region_level(int32_t value);

  constexpr void __cordl_internal_set_current_appcontext(::System::Object* value);

  constexpr void __cordl_internal_set_debugger_thread(::System::IntPtr value);

  constexpr void __cordl_internal_set_flags(::System::IntPtr value);

  constexpr void __cordl_internal_set_handle(::System::IntPtr value);

  constexpr void __cordl_internal_set_interruption_requested(int32_t value);

  constexpr void __cordl_internal_set_last(::System::IntPtr value);

  constexpr void __cordl_internal_set_lock_thread_id(int32_t value);

  constexpr void __cordl_internal_set_longlived(::System::IntPtr value);

  constexpr void __cordl_internal_set_manage_callback(::System::IntPtr value);

  constexpr void __cordl_internal_set_managed_id(int32_t value);

  constexpr void __cordl_internal_set_name_chars(::System::IntPtr value);

  constexpr void __cordl_internal_set_name_free(int32_t value);

  constexpr void __cordl_internal_set_name_length(int32_t value);

  constexpr void __cordl_internal_set_native_handle(::System::IntPtr value);

  constexpr void __cordl_internal_set_netcore0(::System::IntPtr value);

  constexpr void __cordl_internal_set_netcore1(::System::IntPtr value);

  constexpr void __cordl_internal_set_netcore2(::System::IntPtr value);

  constexpr void __cordl_internal_set_owned_mutex(::System::IntPtr value);

  constexpr void __cordl_internal_set_priority(int32_t value);

  constexpr void __cordl_internal_set_root_domain_thread(::System::Object* value);

  constexpr void __cordl_internal_set_runtime_thread_info(::System::IntPtr value);

  constexpr void __cordl_internal_set_self_suspended(int32_t value);

  constexpr void __cordl_internal_set_small_id(int32_t value);

  constexpr void __cordl_internal_set_stack_size(int32_t value);

  constexpr void __cordl_internal_set_state(::System::Threading::ThreadState value);

  constexpr void __cordl_internal_set_static_data(::System::UIntPtr value);

  constexpr void __cordl_internal_set_suspended_event(::System::IntPtr value);

  constexpr void __cordl_internal_set_thread_id(int64_t value);

  constexpr void __cordl_internal_set_thread_interrupt_requested(bool value);

  constexpr void __cordl_internal_set_thread_pinning_ref(::System::IntPtr value);

  constexpr void __cordl_internal_set_thread_state(::System::IntPtr value);

  constexpr void __cordl_internal_set_threadpool_thread(bool value);

  /// @brief Method .ctor, addr 0x3dfc23c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalThread();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalThread", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalThread(InternalThread&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalThread", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalThread(InternalThread const&) = delete;

  /// @brief Field lock_thread_id, offset: 0x10, size: 0x4, def value: None
  int32_t ___lock_thread_id;

  /// @brief Field handle, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___handle;

  /// @brief Field native_handle, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ___native_handle;

  /// @brief Field name_chars, offset: 0x28, size: 0x8, def value: None
  ::System::IntPtr ___name_chars;

  /// @brief Field name_free, offset: 0x30, size: 0x4, def value: None
  int32_t ___name_free;

  /// @brief Field name_length, offset: 0x34, size: 0x4, def value: None
  int32_t ___name_length;

  /// @brief Field state, offset: 0x38, size: 0x4, def value: None
  ::System::Threading::ThreadState ___state;

  /// @brief Field abort_exc, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___abort_exc;

  /// @brief Field abort_state_handle, offset: 0x48, size: 0x4, def value: None
  int32_t ___abort_state_handle;

  /// @brief Field thread_id, offset: 0x50, size: 0x8, def value: None
  int64_t ___thread_id;

  /// @brief Field debugger_thread, offset: 0x58, size: 0x8, def value: None
  ::System::IntPtr ___debugger_thread;

  /// @brief Field static_data, offset: 0x60, size: 0x8, def value: None
  ::System::UIntPtr ___static_data;

  /// @brief Field runtime_thread_info, offset: 0x68, size: 0x8, def value: None
  ::System::IntPtr ___runtime_thread_info;

  /// @brief Field current_appcontext, offset: 0x70, size: 0x8, def value: None
  ::System::Object* ___current_appcontext;

  /// @brief Field root_domain_thread, offset: 0x78, size: 0x8, def value: None
  ::System::Object* ___root_domain_thread;

  /// @brief Field _serialized_principal, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____serialized_principal;

  /// @brief Field _serialized_principal_version, offset: 0x88, size: 0x4, def value: None
  int32_t ____serialized_principal_version;

  /// @brief Field appdomain_refs, offset: 0x90, size: 0x8, def value: None
  ::System::IntPtr ___appdomain_refs;

  /// @brief Field interruption_requested, offset: 0x98, size: 0x4, def value: None
  int32_t ___interruption_requested;

  /// @brief Field longlived, offset: 0xa0, size: 0x8, def value: None
  ::System::IntPtr ___longlived;

  /// @brief Field threadpool_thread, offset: 0xa8, size: 0x1, def value: None
  bool ___threadpool_thread;

  /// @brief Field thread_interrupt_requested, offset: 0xa9, size: 0x1, def value: None
  bool ___thread_interrupt_requested;

  /// @brief Field stack_size, offset: 0xac, size: 0x4, def value: None
  int32_t ___stack_size;

  /// @brief Field apartment_state, offset: 0xb0, size: 0x1, def value: None
  uint8_t ___apartment_state;

  /// @brief Field critical_region_level, offset: 0xb4, size: 0x4, def value: None
  int32_t ___critical_region_level;

  /// @brief Field managed_id, offset: 0xb8, size: 0x4, def value: None
  int32_t ___managed_id;

  /// @brief Field small_id, offset: 0xbc, size: 0x4, def value: None
  int32_t ___small_id;

  /// @brief Field manage_callback, offset: 0xc0, size: 0x8, def value: None
  ::System::IntPtr ___manage_callback;

  /// @brief Field flags, offset: 0xc8, size: 0x8, def value: None
  ::System::IntPtr ___flags;

  /// @brief Field thread_pinning_ref, offset: 0xd0, size: 0x8, def value: None
  ::System::IntPtr ___thread_pinning_ref;

  /// @brief Field abort_protected_block_count, offset: 0xd8, size: 0x8, def value: None
  ::System::IntPtr ___abort_protected_block_count;

  /// @brief Field priority, offset: 0xe0, size: 0x4, def value: None
  int32_t ___priority;

  /// @brief Field owned_mutex, offset: 0xe8, size: 0x8, def value: None
  ::System::IntPtr ___owned_mutex;

  /// @brief Field suspended_event, offset: 0xf0, size: 0x8, def value: None
  ::System::IntPtr ___suspended_event;

  /// @brief Field self_suspended, offset: 0xf8, size: 0x4, def value: None
  int32_t ___self_suspended;

  /// @brief Field thread_state, offset: 0x100, size: 0x8, def value: None
  ::System::IntPtr ___thread_state;

  /// @brief Field netcore0, offset: 0x108, size: 0x8, def value: None
  ::System::IntPtr ___netcore0;

  /// @brief Field netcore1, offset: 0x110, size: 0x8, def value: None
  ::System::IntPtr ___netcore1;

  /// @brief Field netcore2, offset: 0x118, size: 0x8, def value: None
  ::System::IntPtr ___netcore2;

  /// @brief Field last, offset: 0x120, size: 0x8, def value: None
  ::System::IntPtr ___last;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::InternalThread, 0x128>, "Size mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___lock_thread_id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___native_handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___name_chars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___name_free) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___name_length) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___state) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___abort_exc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___abort_state_handle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___thread_id) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___debugger_thread) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___static_data) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___runtime_thread_info) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___current_appcontext) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___root_domain_thread) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ____serialized_principal) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ____serialized_principal_version) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___appdomain_refs) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___interruption_requested) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___longlived) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___threadpool_thread) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___thread_interrupt_requested) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___stack_size) == 0xac, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___apartment_state) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___critical_region_level) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___managed_id) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___small_id) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___manage_callback) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___flags) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___thread_pinning_ref) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___abort_protected_block_count) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___priority) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___owned_mutex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___suspended_event) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___self_suspended) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___thread_state) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___netcore0) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___netcore1) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___netcore2) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Threading::InternalThread, ___last) == 0x120, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::InternalThread);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::InternalThread*, "System.Threading", "InternalThread");
