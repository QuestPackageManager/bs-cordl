#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(QueueUserWorkItemCallback)
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading {
class WaitCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class QueueUserWorkItemCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::QueueUserWorkItemCallback);
// Type: System.Threading::QueueUserWorkItemCallback
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::QueueUserWorkItemCallback*
class CORDL_TYPE QueueUserWorkItemCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Threading::WaitCallback* callback;

  /// @brief Field ccb, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ccb, put = setStaticF_ccb))::System::Threading::ContextCallback* ccb;

  /// @brief Field context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::System::Threading::ExecutionContext* context;

  /// @brief Field state, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::System::Object* state;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  static inline ::System::Threading::QueueUserWorkItemCallback* New_ctor(::System::Threading::WaitCallback* waitCallback, ::System::Object* stateObj, bool compressStack,
                                                                         ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem, addr 0x29a3e2c, size 0xd8, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  /// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted, addr 0x29a3f04, size 0x4, virtual true, abstract: false, final true
  inline void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae);

  /// @brief Method WaitCallback_Context, addr 0x29a3f08, size 0x78, virtual false, abstract: false, final false
  static inline void WaitCallback_Context(::System::Object* state);

  constexpr ::System::Threading::WaitCallback*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitCallback*> const& __cordl_internal_get_callback() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& __cordl_internal_get_context() const;

  constexpr ::System::Object*& __cordl_internal_get_state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_state() const;

  constexpr void __cordl_internal_set_callback(::System::Threading::WaitCallback* value);

  constexpr void __cordl_internal_set_context(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_state(::System::Object* value);

  /// @brief Method .ctor, addr 0x29a3d74, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::WaitCallback* waitCallback, ::System::Object* stateObj, bool compressStack, ByRef<::System::Threading::StackCrawlMark> stackMark);

  static inline ::System::Threading::ContextCallback* getStaticF_ccb();

  /// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
  constexpr ::System::Threading::IThreadPoolWorkItem* i___System__Threading__IThreadPoolWorkItem() noexcept;

  static inline void setStaticF_ccb(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueueUserWorkItemCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueueUserWorkItemCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueueUserWorkItemCallback(QueueUserWorkItemCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueueUserWorkItemCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueueUserWorkItemCallback(QueueUserWorkItemCallback const&) = delete;

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::WaitCallback* ___callback;

  /// @brief Field context, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___context;

  /// @brief Field state, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::QueueUserWorkItemCallback, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Threading::QueueUserWorkItemCallback, ___callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::QueueUserWorkItemCallback, ___context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::QueueUserWorkItemCallback, ___state) == 0x20, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::QueueUserWorkItemCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::QueueUserWorkItemCallback*, "System.Threading", "QueueUserWorkItemCallback");
