#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__PeerConnectionState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkingPeer)
namespace Oculus::Platform {
struct PeerConnectionState;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetworkingPeer);
// Type: Oculus.Platform.Models::NetworkingPeer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13266))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13413))
// CS Name: ::Oculus.Platform.Models::NetworkingPeer*
class CORDL_TYPE NetworkingPeer : public ::System::Object {
public:
  // Declarations
  /// @brief Field <ID>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ID_k__BackingField, put = __cordl_internal_set__ID_k__BackingField)) uint64_t _ID_k__BackingField;

  /// @brief Field <State>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__State_k__BackingField, put = __cordl_internal_set__State_k__BackingField))::Oculus::Platform::PeerConnectionState _State_k__BackingField;

  __declspec(property(get = get_ID, put = set_ID)) uint64_t _cordl_ID;

  __declspec(property(get = get_State, put = set_State))::Oculus::Platform::PeerConnectionState State;

  constexpr uint64_t& __cordl_internal_get__ID_k__BackingField();

  constexpr uint64_t const& __cordl_internal_get__ID_k__BackingField() const;

  constexpr void __cordl_internal_set__ID_k__BackingField(uint64_t value);

  constexpr ::Oculus::Platform::PeerConnectionState& __cordl_internal_get__State_k__BackingField();

  constexpr ::Oculus::Platform::PeerConnectionState const& __cordl_internal_get__State_k__BackingField() const;

  constexpr void __cordl_internal_set__State_k__BackingField(::Oculus::Platform::PeerConnectionState value);

  static inline ::Oculus::Platform::Models::NetworkingPeer* New_ctor(uint64_t id, ::Oculus::Platform::PeerConnectionState state);

  /// @brief Method .ctor, addr 0x273bcd0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint64_t id, ::Oculus::Platform::PeerConnectionState state);

  /// @brief Method get_ID, addr 0x273bd00, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_ID();

  /// @brief Method set_ID, addr 0x273bd08, size 0x8, virtual false, abstract: false, final false
  inline void set_ID(uint64_t value);

  /// @brief Method get_State, addr 0x273bd10, size 0x8, virtual false, abstract: false, final false
  inline ::Oculus::Platform::PeerConnectionState get_State();

  /// @brief Method set_State, addr 0x273bd18, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::Oculus::Platform::PeerConnectionState value);

  // Ctor Parameters [CppParam { name: "", ty: "NetworkingPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkingPeer(NetworkingPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkingPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkingPeer(NetworkingPeer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkingPeer();

public:
  /// @brief Field <ID>k__BackingField, offset: 0x10, size: 0x8, def value: None
  uint64_t ____ID_k__BackingField;

  /// @brief Field <State>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Oculus::Platform::PeerConnectionState ____State_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetworkingPeer, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetworkingPeer, ____ID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetworkingPeer, ____State_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetworkingPeer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetworkingPeer*, "Oculus.Platform.Models", "NetworkingPeer");
