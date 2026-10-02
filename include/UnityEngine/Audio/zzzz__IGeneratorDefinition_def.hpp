#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IGeneratorDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGeneratorDefinition)
// Forward declare root types
namespace UnityEngine::Audio {
class IGeneratorDefinition;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::IGeneratorDefinition*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IGeneratorDefinition*, "UnityEngine.Audio", "IGeneratorDefinition");
// [Obsolete("IGeneratorDefinition has been deprecated. Use IAudioGenerator instead. (UnityUpgradable) -> IAudioGenerator", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.IGeneratorDefinition
class CORDL_TYPE IGeneratorDefinition {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IGeneratorDefinition", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGeneratorDefinition(IGeneratorDefinition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
