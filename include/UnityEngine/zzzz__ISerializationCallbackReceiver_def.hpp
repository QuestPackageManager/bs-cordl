#pragma once
// IWYU pragma private; include "UnityEngine/ISerializationCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISerializationCallbackReceiver)
// Forward declare root types
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ISerializationCallbackReceiver);
// Dependencies
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ISerializationCallbackReceiver
class CORDL_TYPE ISerializationCallbackReceiver {
public:
  // Declarations
  /// @brief Method OnAfterDeserialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnBeforeSerialize();

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationCallbackReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializationCallbackReceiver(ISerializationCallbackReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ISerializationCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISerializationCallbackReceiver*, "UnityEngine", "ISerializationCallbackReceiver");
