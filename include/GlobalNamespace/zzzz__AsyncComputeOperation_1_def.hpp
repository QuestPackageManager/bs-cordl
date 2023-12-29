#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncComputeOperation_1)
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class AsyncComputeOperation_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AsyncComputeOperation_1);
// Type: ::AsyncComputeOperation`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12607))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12608))
// CS Name: ::AsyncComputeOperation`1<T>*
class CORDL_TYPE AsyncComputeOperation_1 : public ::GlobalNamespace::AsyncComputeOperation {
public:
  // Declarations
  /// @brief Field _tcs, offset 0x20, size 0x8
  __declspec(property(get = __get__tcs, put = __set__tcs))::System::Threading::Tasks::TaskCompletionSource_1<T>* _tcs;

  __declspec(property(get = get_task))::System::Threading::Tasks::Task_1<T>* task;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __get__tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> const& __get__tcs() const;

  constexpr void __set__tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>* value);

  /// @brief Method get_task addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Threading::Tasks::Task_1<T>* get_task();

  static inline ::GlobalNamespace::AsyncComputeOperation_1<T>* New_ctor(int32_t timeoutMs);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t timeoutMs);

  /// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Execute(bool disposed);

  /// @brief Method IsValidRequest addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool IsValidRequest();

  /// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Complete(T computeResult);

  /// @brief Method Cancel addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Cancel();

  /// @brief Method Fail addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Fail(::System::Exception* ex);

  /// @brief Method Compute addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T Compute();

  /// @brief Method Finally addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Finally();

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncComputeOperation_1(AsyncComputeOperation_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncComputeOperation_1(AsyncComputeOperation_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncComputeOperation_1();

public:
  /// @brief Field _tcs, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* ____tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AsyncComputeOperation_1, "", "AsyncComputeOperation`1");
