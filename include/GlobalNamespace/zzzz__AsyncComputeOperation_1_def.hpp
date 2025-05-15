#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncComputeOperation_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncComputeOperation_1)
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class AsyncComputeOperation_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AsyncComputeOperation_1);
// Dependencies AsyncComputeOperation
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: AsyncComputeOperation`1<T>
class CORDL_TYPE AsyncComputeOperation_1 : public ::GlobalNamespace::AsyncComputeOperation {
public:
  // Declarations
  /// @brief Field _tcs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tcs, put = __cordl_internal_set__tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<T>* _tcs;

  __declspec(property(get = get_task)) ::System::Threading::Tasks::Task_1<T>* task;

  /// @brief Method Cancel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Complete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Complete(T computeResult);

  /// @brief Method Compute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Compute();

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Execute(bool disposed);

  /// @brief Method Fail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Fail(::System::Exception* ex);

  /// @brief Method Finally, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finally();

  /// @brief Method IsValidRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsValidRequest();

  static inline ::GlobalNamespace::AsyncComputeOperation_1<T>* New_ctor(int32_t timeoutMs);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& __cordl_internal_get__tcs() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get__tcs();

  constexpr void __cordl_internal_set__tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t timeoutMs);

  /// @brief Method get_task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* get_task();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncComputeOperation_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncComputeOperation_1(AsyncComputeOperation_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncComputeOperation_1(AsyncComputeOperation_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14688 };

  /// @brief Field _tcs, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* ____tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AsyncComputeOperation_1, "", "AsyncComputeOperation`1");
