#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncComputeManager)
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class AsyncComputeOperation;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
template <typename T> class AsyncComputeOperation_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IAsyncComputeManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAsyncComputeManager);
// Type: ::IAsyncComputeManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12774))
// CS Name: ::IAsyncComputeManager*
class CORDL_TYPE IAsyncComputeManager {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void BeginOperation(::GlobalNamespace::AsyncComputeOperation* asyncComputeOperation);

  /// @brief Method BeginOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* asyncComputeOperation);

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncComputeManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncComputeManager(IAsyncComputeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncComputeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncComputeManager(IAsyncComputeManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAsyncComputeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAsyncComputeManager*, "", "IAsyncComputeManager");
