#pragma once
// IWYU pragma private; include "GlobalNamespace/IAsyncComputeManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
CORDL_MODULE_EXPORT(IAsyncComputeManager)
namespace GlobalNamespace {
template <typename T> class AsyncComputeOperation_1;
}
namespace GlobalNamespace {
class AsyncComputeOperation;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IAsyncComputeManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAsyncComputeManager);
// Dependencies System.IDisposable
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAsyncComputeManager
class CORDL_TYPE IAsyncComputeManager {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginOperation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* asyncComputeOperation);

  /// @brief Method BeginOperation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void BeginOperation(::GlobalNamespace::AsyncComputeOperation* asyncComputeOperation);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncComputeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncComputeManager(IAsyncComputeManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14777 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAsyncComputeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAsyncComputeManager*, "", "IAsyncComputeManager");
