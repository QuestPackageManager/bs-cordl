#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MaterialParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(MaterialParameter)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class MaterialParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::MaterialParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.MaterialParameter
class CORDL_TYPE MaterialParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityW<::UnityEngine::Material>> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::MaterialParameter* New_ctor(::UnityEngine::Material* value, bool overrideState);

  /// @brief Method .ctor, addr 0x66173f8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialParameter(MaterialParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialParameter(MaterialParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12349 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MaterialParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::MaterialParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MaterialParameter*, "UnityEngine.Rendering", "MaterialParameter");
