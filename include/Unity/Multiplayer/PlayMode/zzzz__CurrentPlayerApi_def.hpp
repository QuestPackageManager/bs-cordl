#pragma once
// IWYU pragma private; include "Unity/Multiplayer/PlayMode/CurrentPlayerApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CurrentPlayerApi)
// Forward declare root types
namespace Unity::Multiplayer::PlayMode {
class CurrentPlayerApi;
}
// Write type traits
MARK_REF_T(::Unity::Multiplayer::PlayMode::CurrentPlayerApi*);
DEFINE_IL2CPP_CLASS(::Unity::Multiplayer::PlayMode::CurrentPlayerApi*, "Unity.Multiplayer.PlayMode", "CurrentPlayerApi");
// Dependencies System.Object
namespace Unity::Multiplayer::PlayMode {
// Is value type: false
// CS Name: Unity.Multiplayer.PlayMode.CurrentPlayerApi
class CORDL_TYPE CurrentPlayerApi : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurrentPlayerApi();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurrentPlayerApi", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurrentPlayerApi(CurrentPlayerApi&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurrentPlayerApi", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurrentPlayerApi(CurrentPlayerApi const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24512 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Multiplayer::PlayMode::CurrentPlayerApi) == 0x10, "Size mismatch!");

} // namespace Unity::Multiplayer::PlayMode
