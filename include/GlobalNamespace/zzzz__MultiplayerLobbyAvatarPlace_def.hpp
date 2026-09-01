#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLobbyAvatarPlace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarPlace)
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace_Pool;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace_Pool;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MultiplayerLobbyAvatarPlace*);
MARK_REF_T(::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerLobbyAvatarPlace*, "", "MultiplayerLobbyAvatarPlace");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool*, "", "MultiplayerLobbyAvatarPlace/Pool");
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarPlace/Pool
class CORDL_TYPE MultiplayerLobbyAvatarPlace_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x59dcd88, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarPlace_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlace_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarPlace_Pool(MultiplayerLobbyAvatarPlace_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlace_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarPlace_Pool(MultiplayerLobbyAvatarPlace_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6159 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLobbyAvatarPlace
class CORDL_TYPE MultiplayerLobbyAvatarPlace : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool;

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarPlace* New_ctor();

  /// @brief Method SetPositionAndRotation, addr 0x59dcd0c, size 0x78, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 worldPos, ::UnityEngine::Quaternion rotation);

  /// @brief Method .ctor, addr 0x59dcd84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarPlace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarPlace(MultiplayerLobbyAvatarPlace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarPlace(MultiplayerLobbyAvatarPlace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6160 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MultiplayerLobbyAvatarPlace) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
