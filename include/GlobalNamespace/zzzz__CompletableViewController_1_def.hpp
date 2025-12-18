#pragma once
// IWYU pragma private; include "GlobalNamespace/CompletableViewController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(CompletableViewController_1)
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class CompletableViewController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::CompletableViewController_1);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: CompletableViewController`1<T>
class CORDL_TYPE CompletableViewController_1 : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _taskCompletionSource, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__taskCompletionSource, put = __cordl_internal_set__taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<T>* _taskCompletionSource;

  /// @brief Method Complete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Complete(T result);

  static inline ::GlobalNamespace::CompletableViewController_1<T>* New_ctor();

  /// @brief Method ResetCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetCompletion();

  /// @brief Method WaitForCompletionAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* WaitForCompletionAsync();

  /// @brief Method __Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void __Activate(bool addedToHierarchy, bool screenSystemEnabling);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& __cordl_internal_get__taskCompletionSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get__taskCompletionSource();

  constexpr void __cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompletableViewController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompletableViewController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompletableViewController_1(CompletableViewController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompletableViewController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompletableViewController_1(CompletableViewController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6454 };

  /// @brief Field _taskCompletionSource, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* ____taskCompletionSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::CompletableViewController_1, "", "CompletableViewController`1");
