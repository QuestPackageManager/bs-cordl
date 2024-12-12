#pragma once
// IWYU pragma private; include "UnityEngine/IPlayerEditorConnectionNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
// Dependencies
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IPlayerEditorConnectionNative
class CORDL_TYPE IPlayerEditorConnectionNative {
public:
  // Declarations
  /// @brief Method DisconnectAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DisconnectAll();

  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method IsConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsConnected();

  /// @brief Method Poll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Poll();

  /// @brief Method RegisterInternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterInternal(::System::Guid messageId);

  /// @brief Method SendMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method TrySendMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnregisterInternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterInternal(::System::Guid messageId);

  // Ctor Parameters [CppParam { name: "", ty: "IPlayerEditorConnectionNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayerEditorConnectionNative(IPlayerEditorConnectionNative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10829 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IPlayerEditorConnectionNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IPlayerEditorConnectionNative*, "UnityEngine", "IPlayerEditorConnectionNative");
