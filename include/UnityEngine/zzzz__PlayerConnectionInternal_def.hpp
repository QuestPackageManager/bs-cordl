#pragma once
// IWYU pragma private; include "UnityEngine/PlayerConnectionInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__IPlayerEditorConnectionNative_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerConnectionInternal)
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine {
class PlayerConnectionInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PlayerConnectionInternal);
// Dependencies System.Object, UnityEngine.IPlayerEditorConnectionNative
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PlayerConnectionInternal
class CORDL_TYPE PlayerConnectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::IPlayerEditorConnectionNative"
  constexpr operator ::UnityEngine::IPlayerEditorConnectionNative*() noexcept;

  /// @brief Method DisconnectAll, addr 0x48b3128, size 0x28, virtual false, abstract: false, final false
  static inline void DisconnectAll();

  /// @brief Method Initialize, addr 0x48b3088, size 0x28, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method IsConnected, addr 0x48b30d8, size 0x28, virtual false, abstract: false, final false
  static inline bool IsConnected();

  static inline ::UnityEngine::PlayerConnectionInternal* New_ctor();

  /// @brief Method PollInternal, addr 0x48b2eb8, size 0x28, virtual false, abstract: false, final false
  static inline void PollInternal();

  /// @brief Method RegisterInternal, addr 0x48b2f64, size 0x3c, virtual false, abstract: false, final false
  static inline void RegisterInternal(::StringW messageId);

  /// @brief Method SendMessage, addr 0x48b2cbc, size 0x54, virtual false, abstract: false, final false
  static inline void SendMessage(::StringW messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method TrySendMessage, addr 0x48b2e3c, size 0x54, virtual false, abstract: false, final false
  static inline bool TrySendMessage(::StringW messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.DisconnectAll, addr 0x48b3100, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.Initialize, addr 0x48b3060, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_Initialize();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.IsConnected, addr 0x48b30b0, size 0x28, virtual true, abstract: false, final true
  inline bool UnityEngine_IPlayerEditorConnectionNative_IsConnected();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.Poll, addr 0x48b2e90, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_Poll();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.RegisterInternal, addr 0x48b2ee0, size 0x84, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(::System::Guid messageId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.SendMessage, addr 0x48b2b94, size 0x128, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_SendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.TrySendMessage, addr 0x48b2d10, size 0x12c, virtual true, abstract: false, final true
  inline bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal, addr 0x48b2fa0, size 0x84, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(::System::Guid messageId);

  /// @brief Method UnregisterInternal, addr 0x48b3024, size 0x3c, virtual false, abstract: false, final false
  static inline void UnregisterInternal(::StringW messageId);

  /// @brief Method .ctor, addr 0x48b3150, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::IPlayerEditorConnectionNative"
  constexpr ::UnityEngine::IPlayerEditorConnectionNative* i___UnityEngine__IPlayerEditorConnectionNative() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerConnectionInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerConnectionInternal(PlayerConnectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerConnectionInternal(PlayerConnectionInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10835 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerConnectionInternal, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PlayerConnectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerConnectionInternal*, "UnityEngine", "PlayerConnectionInternal");
