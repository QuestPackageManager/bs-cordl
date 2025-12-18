#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/IAvatarBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAvatarBehaviour)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class IAvatarBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.IAvatarBehaviour
class CORDL_TYPE IAvatarBehaviour {
public:
  // Declarations
  __declspec(property(get = get_HasInputAuthority)) bool HasInputAuthority;

  __declspec(property(get = get_LocalAvatarIndex)) int32_t LocalAvatarIndex;

  __declspec(property(get = get_OculusId)) uint64_t OculusId;

  /// @brief Method ReceiveStreamData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReceiveStreamData(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method get_HasInputAuthority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_HasInputAuthority();

  /// @brief Method get_LocalAvatarIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_LocalAvatarIndex();

  /// @brief Method get_OculusId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint64_t get_OculusId();

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarBehaviour(IAvatarBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20370 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*, "Meta.XR.MultiplayerBlocks.Shared", "IAvatarBehaviour");
