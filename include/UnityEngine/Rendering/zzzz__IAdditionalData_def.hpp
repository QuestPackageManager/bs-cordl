#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IAdditionalData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAdditionalData)
// Forward declare root types
namespace UnityEngine::Rendering {
class IAdditionalData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IAdditionalData);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IAdditionalData
class CORDL_TYPE IAdditionalData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IAdditionalData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAdditionalData(IAdditionalData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11889 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IAdditionalData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IAdditionalData*, "UnityEngine.Rendering", "IAdditionalData");
