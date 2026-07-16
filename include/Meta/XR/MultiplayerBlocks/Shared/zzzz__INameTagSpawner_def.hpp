#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/INameTagSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(INameTagSpawner)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class INameTagSpawner;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*, "Meta.XR.MultiplayerBlocks.Shared", "INameTagSpawner");
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.INameTagSpawner
class CORDL_TYPE INameTagSpawner {
public:
  // Declarations
  __declspec(property(get = get_IsConnected)) bool IsConnected;

  /// @brief Method Spawn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Spawn(::StringW playerName);

  /// @brief Method get_IsConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsConnected();

  // Ctor Parameters [CppParam { name: "", ty: "INameTagSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INameTagSpawner(INameTagSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::MultiplayerBlocks::Shared
