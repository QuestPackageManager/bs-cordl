#pragma once
// IWYU pragma private; include "UnityEngine/Playables/IDataPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDataPlayer)
namespace UnityEngine::Playables {
struct DataPlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IDataPlayer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::IDataPlayer);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.IDataPlayer
class CORDL_TYPE IDataPlayer {
public:
  // Declarations
  /// @brief Method Bind, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Bind(::UnityEngine::Playables::DataPlayableOutput output);

  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::Playables::DataPlayableOutput output);

  // Ctor Parameters [CppParam { name: "", ty: "IDataPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDataPlayer(IDataPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22322 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::IDataPlayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::IDataPlayer*, "UnityEngine.Playables", "IDataPlayer");
