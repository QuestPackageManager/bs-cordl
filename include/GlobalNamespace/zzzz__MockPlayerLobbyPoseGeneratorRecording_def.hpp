#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
CORDL_MODULE_EXPORT(MockPlayerLobbyPoseGeneratorRecording)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGeneratorRecording;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording);
// Type: ::MockPlayerLobbyPoseGeneratorRecording
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15522))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5183))
// CS Name: ::MockPlayerLobbyPoseGeneratorRecording*
class CORDL_TYPE MockPlayerLobbyPoseGeneratorRecording : public ::GlobalNamespace::MockPlayerLobbyPoseGenerator {
public:
  // Declarations
  static inline ::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method .ctor, addr 0x22442f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method Init, addr 0x22442fc, size 0x68, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method Tick, addr 0x2244364, size 0x68, virtual true, abstract: false, final false
  inline void Tick();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorRecording", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerLobbyPoseGeneratorRecording(MockPlayerLobbyPoseGeneratorRecording&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorRecording", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerLobbyPoseGeneratorRecording(MockPlayerLobbyPoseGeneratorRecording const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerLobbyPoseGeneratorRecording();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording*, "", "MockPlayerLobbyPoseGeneratorRecording");
