#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockScoreSyncStateSender)
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MockScoreSyncStateSender;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockScoreSyncStateSender);
// Type: ::MockScoreSyncStateSender
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15524))
// CS Name: ::MockScoreSyncStateSender*
class CORDL_TYPE MockScoreSyncStateSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  static inline ::GlobalNamespace::MockScoreSyncStateSender* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* msm);

  /// @brief Method .ctor addr 0x23e71c8 size 0x17c virtual false final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* msm);

  /// @brief Method Dispose addr 0x23e7370 size 0xc8 virtual true final true
  inline void Dispose();

  /// @brief Method SendScore addr 0x23ea708 size 0x224 virtual false final false
  inline void SendScore(int32_t modifiedScore, int32_t multipliedScore, int32_t immediateMaxPossibleMultipliedScore, int32_t combo, int32_t multiplier);

  /// @brief Method HandleScoreSyncStateUpdate addr 0x23ecb28 size 0x4 virtual false final false
  inline void HandleScoreSyncStateUpdate(::GlobalNamespace::StandardScoreSyncStateNetSerializable* nodePose, ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  // Ctor Parameters [CppParam { name: "", ty: "MockScoreSyncStateSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockScoreSyncStateSender(MockScoreSyncStateSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockScoreSyncStateSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockScoreSyncStateSender(MockScoreSyncStateSender const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockScoreSyncStateSender();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockScoreSyncStateSender, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockScoreSyncStateSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockScoreSyncStateSender*, "", "MockScoreSyncStateSender");
