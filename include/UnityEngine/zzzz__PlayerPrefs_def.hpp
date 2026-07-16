#pragma once
// IWYU pragma private; include "UnityEngine/PlayerPrefs.hpp"
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
  /// @brief Method DeleteKey, addr 0x6ad4b80, size 0x124, virtual false, abstract: false, final false
  static inline void DeleteKey(::StringW key);

  /// @brief Method DeleteKey_Injected, addr 0x6ad4ca4, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteKey_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key);

  /// @brief Method GetInt, addr 0x6ad46e8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetInt(::StringW key);

  /// @brief Method GetInt, addr 0x6ad4568, size 0x13c, virtual false, abstract: false, final false
  static inline int32_t GetInt(::StringW key, int32_t defaultValue);

  /// @brief Method GetInt_Injected, addr 0x6ad46a4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetInt_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key, int32_t defaultValue);

  /// @brief Method GetString, addr 0x6ad49c8, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW key);

  /// @brief Method GetString, addr 0x6ad4748, size 0x22c, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW key, ::StringW defaultValue);

  /// @brief Method GetString_Injected, addr 0x6ad4974, size 0x54, virtual false, abstract: false, final false
  static inline void GetString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> defaultValue,
                                        ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method HasKey, addr 0x6ad4a14, size 0x130, virtual false, abstract: false, final false
  static inline bool HasKey(::StringW key);

  /// @brief Method HasKey_Injected, addr 0x6ad4b44, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasKey_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key);

  /// @brief Method SetInt, addr 0x6ad4510, size 0x58, virtual false, abstract: false, final false
  static inline void SetInt(::StringW key, int32_t value);

  /// @brief Method SetString, addr 0x6ad46f0, size 0x58, virtual false, abstract: false, final false
  static inline void SetString(::StringW key, ::StringW value);

  /// @brief Method TrySetInt, addr 0x6ad4190, size 0x140, virtual false, abstract: false, final false
  static inline bool TrySetInt(::StringW key, int32_t value);

  /// @brief Method TrySetInt_Injected, addr 0x6ad42d0, size 0x44, virtual false, abstract: false, final false
  static inline bool TrySetInt_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> key, int32_t value);

  /// @brief Method TrySetSetString, addr 0x6ad4314, size 0x1b8, virtual false, abstract: false, final false
  static inline bool TrySetSetString(::StringW key, ::StringW value);

  /// @brief Method TrySetSetString_Injected, addr 0x6ad44cc, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerPrefs) == 0x10, "Size mismatch!");

} // namespace UnityEngine
