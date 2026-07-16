#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperationHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncInstantiateOperationHelper)
namespace UnityEngine {
class AsyncInstantiateOperation;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AsyncInstantiateOperationHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::AsyncInstantiateOperationHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AsyncInstantiateOperationHelper*, "UnityEngine", "AsyncInstantiateOperationHelper");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AsyncInstantiateOperationHelper
class CORDL_TYPE AsyncInstantiateOperationHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateAsyncInstantiateOperationResultArray, addr 0x6ad68fc, size 0x18, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>> CreateAsyncInstantiateOperationResultArray(::UnityEngine::AsyncInstantiateOperation* op, int32_t size);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncInstantiateOperationHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperationHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncInstantiateOperationHelper(AsyncInstantiateOperationHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstantiateOperationHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncInstantiateOperationHelper(AsyncInstantiateOperationHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AsyncInstantiateOperationHelper) == 0x10, "Size mismatch!");

} // namespace UnityEngine
