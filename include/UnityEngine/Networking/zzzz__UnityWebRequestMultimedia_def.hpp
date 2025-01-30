#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequestMultimedia.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestMultimedia)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
struct AudioType;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestMultimedia;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UnityWebRequestMultimedia);
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UnityWebRequestMultimedia
class CORDL_TYPE UnityWebRequestMultimedia : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAudioClip, addr 0x4ae45c0, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* GetAudioClip(::StringW uri, ::UnityEngine::AudioType audioType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestMultimedia();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestMultimedia", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestMultimedia(UnityWebRequestMultimedia&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestMultimedia", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestMultimedia(UnityWebRequestMultimedia const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UnityWebRequestMultimedia, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestMultimedia);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestMultimedia*, "UnityEngine.Networking", "UnityWebRequestMultimedia");
