#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AudioTypeHelper)
namespace UnityEngine {
struct AudioType;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioTypeHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioTypeHelper);
// Type: ::AudioTypeHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15842))
// CS Name: ::AudioTypeHelper*
class CORDL_TYPE AudioTypeHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAudioTypeFromPath, addr 0xe26670, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioType GetAudioTypeFromPath(::StringW path);

  // Ctor Parameters [CppParam { name: "", ty: "AudioTypeHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioTypeHelper(AudioTypeHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioTypeHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioTypeHelper(AudioTypeHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioTypeHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioTypeHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioTypeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTypeHelper*, "", "AudioTypeHelper");
