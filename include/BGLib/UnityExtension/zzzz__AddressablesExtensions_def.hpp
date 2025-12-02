#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/AddressablesExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
CORDL_MODULE_EXPORT(AddressablesExtensions)
namespace BGLib::UnityExtension {
template <typename T> class AddressablesExtensions___c__DisplayClass3_0_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class AddressablesExtensions;
}
namespace BGLib::UnityExtension {
template <typename T> class AddressablesExtensions___c__DisplayClass3_0_1;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::AddressablesExtensions);
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass3_0_1);
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace BGLib::UnityExtension {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BGLib.UnityExtension.AddressablesExtensions/<>c__DisplayClass3_0`1<T>
class CORDL_TYPE AddressablesExtensions___c__DisplayClass3_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field asyncOperationHandle, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_asyncOperationHandle, put = __cordl_internal_set_asyncOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>
      asyncOperationHandle;

  /// @brief Field taskSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_taskSource, put = __cordl_internal_set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<T>* taskSource;

  static inline ::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass3_0_1<T>* New_ctor();

  /// @brief Method <GetAwaiter>g__SetResult|0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _GetAwaiter_g__SetResult_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> handle);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> const& __cordl_internal_get_asyncOperationHandle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>& __cordl_internal_get_asyncOperationHandle();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& __cordl_internal_get_taskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get_taskSource();

  constexpr void __cordl_internal_set_asyncOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> value);

  constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesExtensions___c__DisplayClass3_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddressablesExtensions___c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesExtensions___c__DisplayClass3_0_1(AddressablesExtensions___c__DisplayClass3_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesExtensions___c__DisplayClass3_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesExtensions___c__DisplayClass3_0_1(AddressablesExtensions___c__DisplayClass3_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20696 };

  /// @brief Field asyncOperationHandle, offset: 0x10, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> ___asyncOperationHandle;

  /// @brief Field taskSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* ___taskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.AddressablesExtensions
class CORDL_TYPE AddressablesExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass3_0_1 = ::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass3_0_1<T>;

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<T> GetAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> asyncOperationHandle);

  /// @brief Method LoadContent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IList_1<T>* LoadContent(::System::Object* label);

  /// @brief Method LoadContentAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<T>*>* LoadContentAsync(::UnityEngine::AddressableAssets::IKeyEvaluator* label);

  /// @brief Method LoadContentOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> LoadContentOperation(::System::Object* label);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddressablesExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesExtensions(AddressablesExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesExtensions(AddressablesExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20697 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::AddressablesExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::AddressablesExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::AddressablesExtensions*, "BGLib.UnityExtension", "AddressablesExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::AddressablesExtensions___c__DisplayClass3_0_1, "BGLib.UnityExtension", "AddressablesExtensions/<>c__DisplayClass3_0`1");
