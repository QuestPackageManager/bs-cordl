#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AddressablesExtensions)
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class AddressablesExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::AddressablesExtensions);
// Type: BGLib.UnityExtension::AddressablesExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15878))
// CS Name: ::BGLib.UnityExtension::AddressablesExtensions*
class CORDL_TYPE AddressablesExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method LoadContentAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<T>*>* LoadContentAsync(::UnityEngine::AddressableAssets::IKeyEvaluator* label);

  /// @brief Method LoadContent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::IList_1<T>* LoadContent(::UnityEngine::AddressableAssets::IKeyEvaluator* label);

  /// @brief Method LoadContentOperation addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>
  LoadContentOperation(::UnityEngine::AddressableAssets::IKeyEvaluator* label);

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesExtensions(AddressablesExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesExtensions(AddressablesExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::AddressablesExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::AddressablesExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::AddressablesExtensions*, "BGLib.UnityExtension", "AddressablesExtensions");
