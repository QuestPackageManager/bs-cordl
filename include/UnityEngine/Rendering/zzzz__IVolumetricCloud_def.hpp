#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IVolumetricCloud.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVolumetricCloud)
// Forward declare root types
namespace UnityEngine::Rendering {
class IVolumetricCloud;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IVolumetricCloud);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IVolumetricCloud
class CORDL_TYPE IVolumetricCloud {
public:
  // Declarations
  /// @brief Method IsVolumetricCloudUsable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsVolumetricCloudUsable();

  // Ctor Parameters [CppParam { name: "", ty: "IVolumetricCloud", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVolumetricCloud(IVolumetricCloud const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12161 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IVolumetricCloud);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IVolumetricCloud*, "UnityEngine.Rendering", "IVolumetricCloud");
