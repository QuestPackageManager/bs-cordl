#pragma once
// IWYU pragma private; include "UnityEngine\PlayerPrefs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefs)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
class PlayerPrefs;
}
// Write type traits
MARK_REF_T(::UnityEngine::PlayerPrefs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PlayerPrefs
class CORDL_TYPE PlayerPrefs : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeleteKey, addr 0x6ad7e90, size 0x124, virtual false, abstract: false, final false
  static inline void DeleteKey(::StringW key);

  /// @brief Method DeleteKey_Injected, addr 0x6ad7fb4, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteKey_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key);

  /// @brief Method GetInt, addr 0x6ad79f8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetInt(::StringW key);

  /// @brief Method GetInt, addr 0x6ad7878, size 0x13c, virtual false, abstract: false, final false
  static inline int32_t GetInt(::StringW key, int32_t defaultValue);

  /// @brief Method GetInt_Injected, addr 0x6ad79b4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetInt_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key, int32_t defaultValue);

  /// @brief Method GetString, addr 0x6ad7cd8, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW key);

  /// @brief Method GetString, addr 0x6ad7a58, size 0x22c, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW key, ::StringW defaultValue);

  /// @brief Method GetString_Injected, addr 0x6ad7c84, size 0x54, virtual false, abstract: false, final false
  static inline void GetString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> defaultValue,
                                        ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method HasKey, addr 0x6ad7d24, size 0x130, virtual false, abstract: false, final false
  static inline bool HasKey(::StringW key);

  /// @brief Method HasKey_Injected, addr 0x6ad7e54, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasKey_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key);

  /// @brief Method SetInt, addr 0x6ad7820, size 0x58, virtual false, abstract: false, final false
  static inline void SetInt(::StringW key, int32_t value);

  /// @brief Method SetString, addr 0x6ad7a00, size 0x58, virtual false, abstract: false, final false
  static inline void SetString(::StringW key, ::StringW value);

  /// @brief Method TrySetInt, addr 0x6ad74a0, size 0x140, virtual false, abstract: false, final false
  static inline bool TrySetInt(::StringW key, int32_t value);

  /// @brief Method TrySetInt_Injected, addr 0x6ad75e0, size 0x44, virtual false, abstract: false, final false
  static inline bool TrySetInt_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key, int32_t value);

  /// @brief Method TrySetSetString, addr 0x6ad7624, size 0x1b8, virtual false, abstract: false, final false
  static inline bool TrySetSetString(::StringW key, ::StringW value);

  /// @brief Method TrySetSetString_Injected, addr 0x6ad77dc, size 0x44, virtual false, abstract: false, final false
  static inline bool TrySetSetString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPrefs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerPrefs(PlayerPrefs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerPrefs(PlayerPrefs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10275 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerPrefs) == 0x10, "Size mismatch!");

} // namespace UnityEngine
