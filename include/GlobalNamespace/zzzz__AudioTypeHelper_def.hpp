#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioTypeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AudioTypeHelper)
namespace UnityEngine {
struct AudioType;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioTypeHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioTypeHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioTypeHelper*, "", "AudioTypeHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioTypeHelper
class CORDL_TYPE AudioTypeHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAudioTypeFromPath, addr 0x331fd08, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioType GetAudioTypeFromPath(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioTypeHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioTypeHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioTypeHelper(AudioTypeHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioTypeHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioTypeHelper(AudioTypeHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20508 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioTypeHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
