#pragma once
// IWYU pragma private; include "UnityEngine/PlayerConnectionInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerConnectionInternal)
namespace System {
struct Guid;
}
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
// Forward declare root types
namespace UnityEngine {
class PlayerConnectionInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PlayerConnectionInternal);
// Type: UnityEngine::PlayerConnectionInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::PlayerConnectionInternal*
class CORDL_TYPE PlayerConnectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::IPlayerEditorConnectionNative"
  constexpr operator ::UnityEngine::IPlayerEditorConnectionNative*() noexcept;

  /// @brief Method DisconnectAll, addr 0x3428b84, size 0x28, virtual false, abstract: false, final false
  static inline void DisconnectAll();

  /// @brief Method Initialize, addr 0x3428ae4, size 0x28, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method IsConnected, addr 0x3428b34, size 0x28, virtual false, abstract: false, final false
  static inline bool IsConnected();

  static inline ::UnityEngine::PlayerConnectionInternal* New_ctor();

  /// @brief Method PollInternal, addr 0x3428914, size 0x28, virtual false, abstract: false, final false
  static inline void PollInternal();

  /// @brief Method RegisterInternal, addr 0x34289c0, size 0x3c, virtual false, abstract: false, final false
  static inline void RegisterInternal(::StringW messageId);

  /// @brief Method SendMessage, addr 0x3428714, size 0x54, virtual false, abstract: false, final false
  static inline void SendMessage(::StringW messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method TrySendMessage, addr 0x3428898, size 0x54, virtual false, abstract: false, final false
  static inline bool TrySendMessage(::StringW messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.DisconnectAll, addr 0x3428b5c, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.Initialize, addr 0x3428abc, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_Initialize();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.IsConnected, addr 0x3428b0c, size 0x28, virtual true, abstract: false, final true
  inline bool UnityEngine_IPlayerEditorConnectionNative_IsConnected();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.Poll, addr 0x34288ec, size 0x28, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_Poll();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.RegisterInternal, addr 0x342893c, size 0x84, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(::System::Guid messageId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.SendMessage, addr 0x34285e8, size 0x12c, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_SendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.TrySendMessage, addr 0x3428768, size 0x130, virtual true, abstract: false, final true
  inline bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal, addr 0x34289fc, size 0x84, virtual true, abstract: false, final true
  inline void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(::System::Guid messageId);

  /// @brief Method UnregisterInternal, addr 0x3428a80, size 0x3c, virtual false, abstract: false, final false
  static inline void UnregisterInternal(::StringW messageId);

  /// @brief Method .ctor, addr 0x3428bac, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerConnectionInternal, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PlayerConnectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerConnectionInternal*, "UnityEngine", "PlayerConnectionInternal");
