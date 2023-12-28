#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IOOperation_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IOSelectorJob)
namespace System {
struct IOOperation;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System {
class IOAsyncCallback;
}
namespace System {
class IOAsyncResult;
}
// Forward declare root types
namespace System {
class IOSelectorJob;
}
// Write type traits
MARK_REF_PTR_T(::System::IOSelectorJob);
// Type: System::IOSelectorJob
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8893))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8896))
// CS Name: ::System::IOSelectorJob*
class CORDL_TYPE IOSelectorJob : public ::System::Object {
public:
  // Declarations
  /// @brief Field operation, offset 0x10, size 0x4
  __declspec(property(get = __get_operation, put = __set_operation))::System::IOOperation operation;

  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::IOAsyncCallback* callback;

  /// @brief Field state, offset 0x20, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::System::IOAsyncResult* state;

  /// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
  constexpr operator ::System::Threading::IThreadPoolWorkItem*() noexcept;

  constexpr ::System::IOOperation& __get_operation();

  constexpr ::System::IOOperation const& __get_operation() const;

  constexpr void __set_operation(::System::IOOperation value);

  constexpr ::System::IOAsyncCallback*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::IOAsyncCallback*> const& __get_callback() const;

  constexpr void __set_callback(::System::IOAsyncCallback* value);

  constexpr ::System::IOAsyncResult*& __get_state();

  constexpr ::cordl_internals::to_const_pointer<::System::IOAsyncResult*> const& __get_state() const;

  constexpr void __set_state(::System::IOAsyncResult* value);

  static inline ::System::IOSelectorJob* New_ctor(::System::IOOperation operation, ::System::IOAsyncCallback* callback, ::System::IOAsyncResult* state);

  /// @brief Method .ctor addr 0x294d874 size 0x3c virtual false final false
  inline void _ctor(::System::IOOperation operation, ::System::IOAsyncCallback* callback, ::System::IOAsyncResult* state);

  /// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x294d8b0 size 0x28 virtual true final true
  inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();

  /// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted addr 0x294d8d8 size 0x4 virtual true final true
  inline void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae);

  /// @brief Method MarkDisposed addr 0x294d8dc size 0x20 virtual false final false
  inline void MarkDisposed();

  // Ctor Parameters [CppParam { name: "", ty: "IOSelectorJob", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOSelectorJob(IOSelectorJob&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOSelectorJob", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOSelectorJob(IOSelectorJob const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOSelectorJob();

public:
  /// @brief Field operation, offset: 0x10, size: 0x4, def value: None
  ::System::IOOperation ___operation;

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::System::IOAsyncCallback* ___callback;

  /// @brief Field state, offset: 0x20, size: 0x8, def value: None
  ::System::IOAsyncResult* ___state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IOSelectorJob, 0x28>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IOSelectorJob);
DEFINE_IL2CPP_ARG_TYPE(::System::IOSelectorJob*, "System", "IOSelectorJob");
