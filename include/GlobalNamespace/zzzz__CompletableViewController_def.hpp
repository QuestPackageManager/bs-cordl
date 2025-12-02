#pragma once
// IWYU pragma private; include "GlobalNamespace/CompletableViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompletableViewController)
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class CompletableViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CompletableViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompletableViewController
class CORDL_TYPE CompletableViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _taskCompletionSource, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__taskCompletionSource,
                      put = __cordl_internal_set__taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* _taskCompletionSource;

  /// @brief Method Complete, addr 0x580d458, size 0x58, virtual false, abstract: false, final false
  inline void Complete();

  static inline ::GlobalNamespace::CompletableViewController* New_ctor();

  /// @brief Method ResetCompletion, addr 0x580d3e4, size 0x74, virtual false, abstract: false, final false
  inline void ResetCompletion();

  /// @brief Method WaitForCompletionAsync, addr 0x580d394, size 0x50, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitForCompletionAsync();

  /// @brief Method __Activate, addr 0x580d4b0, size 0xa0, virtual true, abstract: false, final false
  inline void __Activate(bool addedToHierarchy, bool screenSystemEnabling);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& __cordl_internal_get__taskCompletionSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& __cordl_internal_get__taskCompletionSource();

  constexpr void __cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x580d550, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompletableViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompletableViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompletableViewController(CompletableViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompletableViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompletableViewController(CompletableViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6459 };

  /// @brief Field _taskCompletionSource, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* ____taskCompletionSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompletableViewController, ____taskCompletionSource) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CompletableViewController, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CompletableViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CompletableViewController*, "", "CompletableViewController");
