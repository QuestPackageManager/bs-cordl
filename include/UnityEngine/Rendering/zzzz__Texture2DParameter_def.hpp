#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Texture2DParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DParameter)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class Texture2DParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Texture2DParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Texture2DParameter
class CORDL_TYPE Texture2DParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityW<::UnityEngine::Texture>> {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x6616964, size 0x108, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::Texture2DParameter* New_ctor(::UnityEngine::Texture* value, bool overrideState);

  /// @brief Method .ctor, addr 0x6616900, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture2DParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture2DParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture2DParameter(Texture2DParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture2DParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture2DParameter(Texture2DParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12340 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Texture2DParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::Texture2DParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Texture2DParameter*, "UnityEngine.Rendering", "Texture2DParameter");
