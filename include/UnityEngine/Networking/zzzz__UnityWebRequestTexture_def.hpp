#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequestTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestTexture)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestTexture;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::UnityWebRequestTexture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::UnityWebRequestTexture*, "UnityEngine.Networking", "UnityWebRequestTexture");
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UnityWebRequestTexture
class CORDL_TYPE UnityWebRequestTexture : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetTexture, addr 0x6e28354, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* GetTexture(::StringW uri);

  /// @brief Method GetTexture, addr 0x6e2835c, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* GetTexture(::StringW uri, bool nonReadable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestTexture(UnityWebRequestTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestTexture(UnityWebRequestTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Networking::UnityWebRequestTexture) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Networking
