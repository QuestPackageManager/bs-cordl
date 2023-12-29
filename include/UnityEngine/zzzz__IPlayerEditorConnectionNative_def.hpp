#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPlayerEditorConnectionNative)
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IPlayerEditorConnectionNative);
// Type: UnityEngine::IPlayerEditorConnectionNative
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10069))
// CS Name: ::UnityEngine::IPlayerEditorConnectionNative*
class CORDL_TYPE IPlayerEditorConnectionNative {
public:
  // Declarations
  /// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Initialize();

  /// @brief Method DisconnectAll addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DisconnectAll();

  /// @brief Method SendMessage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method TrySendMessage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method Poll addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Poll();

  /// @brief Method RegisterInternal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void RegisterInternal(::System::Guid messageId);

  /// @brief Method UnregisterInternal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UnregisterInternal(::System::Guid messageId);

  /// @brief Method IsConnected addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsConnected();

  // Ctor Parameters [CppParam { name: "", ty: "IPlayerEditorConnectionNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlayerEditorConnectionNative(IPlayerEditorConnectionNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlayerEditorConnectionNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayerEditorConnectionNative(IPlayerEditorConnectionNative const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IPlayerEditorConnectionNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IPlayerEditorConnectionNative*, "UnityEngine", "IPlayerEditorConnectionNative");
