#pragma once
// IWYU pragma private; include "UnityEngine/PlayerConnectionInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerConnectionInternal)
namespace System {
struct Guid;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
// Forward declare root types
namespace UnityEngine {
class PlayerConnectionInternal;
}
// Write type traits
MARK_REF_T(::UnityEngine::PlayerConnectionInternal*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerConnectionInternal*, "UnityEngine", "PlayerConnectionInternal");
// [NativeHeader("Runtime/Export/PlayerConnection/PlayerConnectionInternal.bindings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PlayerConnectionInternal
class CORDL_TYPE PlayerConnectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::IPlayerEditorConnectionNative"
  constexpr operator ::UnityEngine::IPlayerEditorConnectionNative*() noexcept;

  /// [FreeFunction("PlayerConnection_Bindings::DisconnectAll")]
  /// @brief Method DisconnectAll, addr 0x6f31300, size 0x28, virtual false, abstract: false, final false
  static inline void DisconnectAll();

  /// [FreeFunction("PlayerConnection_Bindings::Initialize")]
  /// @brief Method Initialize, addr 0x6f31260, size 0x28, virtual false, abstract: false, final false
  static inline void Initialize();

  /// [FreeFunction("PlayerConnection_Bindings::IsConnected")]
  /// @brief Method IsConnected, addr 0x6f312b0, size 0x28, virtual false, abstract: false, final false
  static inline bool IsConnected();

  static inline ::UnityEngine::PlayerConnectionInternal* New_ctor();

  /// [FreeFunction("PlayerConnection_Bindings::PollInternal")]
  /// @brief Method PollInternal, addr 0x6f30f18, size 0x28, virtual false, abstract: false, final false
  static inline void PollInternal();

  /// [FreeFunction("PlayerConnection_Bindings::RegisterInternal")]
  /// @brief Method RegisterInternal, addr 0x6f30f98, size 0x124, virtual false, abstract: false, final false
  static inline void RegisterInternal(::StringW messageId);

  /// @brief Method RegisterInternal_Injected, addr 0x6f31328, size 0x3c, virtual false, abstract: false, final false
  static inline void RegisterInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> messageId);

  /// [FreeFunction("PlayerConnection_Bindings::SendMessage")]
  /// @brief Method SendMessage, addr 0x6f30a88, size 0x1ac, virtual false, abstract: false, final false
  static inline void SendMessage(::StringW messageId, ::ArrayW<uint8_t> data, int32_t playerId);

  /// @brief Method SendMessage_Injected, addr 0x6f313a0, size 0x54, virtual false, abstract: false, final false
  static inline void SendMessage_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> messageId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data, int32_t playerId);

  /// [FreeFunction("PlayerConnection_Bindings::TrySendMessage")]
  /// @brief Method TrySendMessage, addr 0x6f30d38, size 0x1b8, virtual false, abstract: false, final false
  static inline bool TrySendMessage(::StringW messageId, ::ArrayW<uint8_t> data, int32_t playerId);

  /// @brief Method TrySendMessage_Injected, addr 0x6f313f4, size 0x54, virtual false, abstract: false, final false
  static inline bool TrySendMessage_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> messageId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.DisconnectAll, addr 0x6f312d8, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.Initialize, addr 0x6f31238, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_Initialize();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.IsConnected, addr 0x6f31288, size 0x28, virtual true, abstract: false, final true
  inline bool UnityEngine_IPlayerEditorConnectionNative_IsConnected();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.Poll, addr 0x6f30ef0, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_Poll();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.RegisterInternal, addr 0x6f30f40, size 0x58, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(::System::Guid messageId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.SendMessage, addr 0x6f30984, size 0x104, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_SendMessage(::System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.TrySendMessage, addr 0x6f30c34, size 0x104, virtual true, abstract: false, final true
  inline bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal, addr 0x6f310bc, size 0x58, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(::System::Guid messageId);

  /// [FreeFunction("PlayerConnection_Bindings::UnregisterInternal")]
  /// @brief Method UnregisterInternal, addr 0x6f31114, size 0x124, virtual false, abstract: false, final false
  static inline void UnregisterInternal(::StringW messageId);

  /// @brief Method UnregisterInternal_Injected, addr 0x6f31364, size 0x3c, virtual false, abstract: false, final false
  static inline void UnregisterInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> messageId);

  /// @brief Method .ctor, addr 0x6f31448, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::IPlayerEditorConnectionNative"
  constexpr ::UnityEngine::IPlayerEditorConnectionNative* i___UnityEngine__IPlayerEditorConnectionNative() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerConnectionInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnectionInternal", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerConnectionInternal(PlayerConnectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnectionInternal", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerConnectionInternal(PlayerConnectionInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9859 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerConnectionInternal) == 0x10, "Size mismatch!");

} // namespace UnityEngine
