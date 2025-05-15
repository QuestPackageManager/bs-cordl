#pragma once
// IWYU pragma private; include "UnityEngine/AttributeHelperEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeHelperEngine)
namespace System {
class Type;
}
namespace UnityEngine {
class DisallowMultipleComponent;
}
namespace UnityEngine {
class ExecuteInEditMode;
}
namespace UnityEngine {
class RequireComponent;
}
// Forward declare root types
namespace UnityEngine {
class AttributeHelperEngine;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AttributeHelperEngine);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AttributeHelperEngine
class CORDL_TYPE AttributeHelperEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disallowMultipleComponentArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__disallowMultipleComponentArray,
                      put = setStaticF__disallowMultipleComponentArray)) ::ArrayW<::UnityEngine::DisallowMultipleComponent*, ::Array<::UnityEngine::DisallowMultipleComponent*>*>
      _disallowMultipleComponentArray;

  /// @brief Field _executeInEditModeArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__executeInEditModeArray, put = setStaticF__executeInEditModeArray)) ::ArrayW<::UnityEngine::ExecuteInEditMode*, ::Array<::UnityEngine::ExecuteInEditMode*>*>
      _executeInEditModeArray;

  /// @brief Field _requireComponentArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__requireComponentArray, put = setStaticF__requireComponentArray)) ::ArrayW<::UnityEngine::RequireComponent*, ::Array<::UnityEngine::RequireComponent*>*>
      _requireComponentArray;

  /// @brief Method CheckIsEditorScript, addr 0x48a8c08, size 0x110, virtual false, abstract: false, final false
  static inline int32_t CheckIsEditorScript(::System::Type* klass);

  /// @brief Method GetCustomAttributeOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetCustomAttributeOfType(::System::Type* klass);

  /// @brief Method GetDefaultExecutionOrderFor, addr 0x48a8d18, size 0x78, virtual false, abstract: false, final false
  static inline int32_t GetDefaultExecutionOrderFor(::System::Type* klass);

  /// @brief Method GetExecuteMode, addr 0x48a8af4, size 0x114, virtual false, abstract: false, final false
  static inline int32_t GetExecuteMode(::System::Type* klass);

  /// @brief Method GetParentTypeDisallowingMultipleInclusion, addr 0x48a84ec, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Type* GetParentTypeDisallowingMultipleInclusion(::System::Type* type);

  /// @brief Method GetRequiredComponents, addr 0x48a8620, size 0x4d4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetRequiredComponents(::System::Type* klass);

  static inline ::ArrayW<::UnityEngine::DisallowMultipleComponent*, ::Array<::UnityEngine::DisallowMultipleComponent*>*> getStaticF__disallowMultipleComponentArray();

  static inline ::ArrayW<::UnityEngine::ExecuteInEditMode*, ::Array<::UnityEngine::ExecuteInEditMode*>*> getStaticF__executeInEditModeArray();

  static inline ::ArrayW<::UnityEngine::RequireComponent*, ::Array<::UnityEngine::RequireComponent*>*> getStaticF__requireComponentArray();

  static inline void setStaticF__disallowMultipleComponentArray(::ArrayW<::UnityEngine::DisallowMultipleComponent*, ::Array<::UnityEngine::DisallowMultipleComponent*>*> value);

  static inline void setStaticF__executeInEditModeArray(::ArrayW<::UnityEngine::ExecuteInEditMode*, ::Array<::UnityEngine::ExecuteInEditMode*>*> value);

  static inline void setStaticF__requireComponentArray(::ArrayW<::UnityEngine::RequireComponent*, ::Array<::UnityEngine::RequireComponent*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeHelperEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeHelperEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeHelperEngine(AttributeHelperEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeHelperEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeHelperEngine(AttributeHelperEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10859 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AttributeHelperEngine, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AttributeHelperEngine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AttributeHelperEngine*, "UnityEngine", "AttributeHelperEngine");
