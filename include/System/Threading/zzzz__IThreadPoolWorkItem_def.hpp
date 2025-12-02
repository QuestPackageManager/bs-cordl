#pragma once
// IWYU pragma private; include "System/Threading/IThreadPoolWorkItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IThreadPoolWorkItem)
namespace System::Threading {
class ThreadAbortException;
}
// Forward declare root types
namespace System::Threading {
class IThreadPoolWorkItem;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::IThreadPoolWorkItem);
// Dependencies
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.IThreadPoolWorkItem
class CORDL_TYPE IThreadPoolWorkItem {
public:
  // Declarations
  /// @brief Method ExecuteWorkItem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteWorkItem();

  /// @brief Method MarkAborted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MarkAborted(::System::Threading::ThreadAbortException* tae);

  // Ctor Parameters [CppParam { name: "", ty: "IThreadPoolWorkItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IThreadPoolWorkItem(IThreadPoolWorkItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
NEED_NO_BOX(::System::Threading::IThreadPoolWorkItem);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::IThreadPoolWorkItem*, "System.Threading", "IThreadPoolWorkItem");
