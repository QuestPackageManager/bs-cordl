#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ICloudBackground.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICloudBackground)
// Forward declare root types
namespace UnityEngine::Rendering {
class ICloudBackground;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ICloudBackground*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ICloudBackground*, "UnityEngine.Rendering", "ICloudBackground");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ICloudBackground
class CORDL_TYPE ICloudBackground {
public:
  // Declarations
  /// @brief Method IsCloudBackgroundUsable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsCloudBackgroundUsable();

  // Ctor Parameters [CppParam { name: "", ty: "ICloudBackground", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICloudBackground(ICloudBackground const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
