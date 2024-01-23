#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefs)
// Forward declare root types
namespace UnityEngine {
class PlayerPrefs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PlayerPrefs);
// Type: UnityEngine::PlayerPrefs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10040))
// CS Name: ::UnityEngine::PlayerPrefs*
class CORDL_TYPE PlayerPrefs : public ::System::Object {
public:
  // Declarations
  /// @brief Method TrySetInt, addr 0x2c9e6f0, size 0x44, virtual false, abstract: false, final false
  static inline bool TrySetInt(::StringW key, int32_t value);

  /// @brief Method TrySetSetString, addr 0x2c9e734, size 0x44, virtual false, abstract: false, final false
  static inline bool TrySetSetString(::StringW key, ::StringW value);

  /// @brief Method SetInt, addr 0x2c9e778, size 0x94, virtual false, abstract: false, final false
  static inline void SetInt(::StringW key, int32_t value);

  /// @brief Method GetInt, addr 0x2c9e80c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetInt(::StringW key, int32_t defaultValue);

  /// @brief Method GetInt, addr 0x2c9e850, size 0x40, virtual false, abstract: false, final false
  static inline int32_t GetInt(::StringW key);

  /// @brief Method SetString, addr 0x2c9e890, size 0x94, virtual false, abstract: false, final false
  static inline void SetString(::StringW key, ::StringW value);

  /// @brief Method GetString, addr 0x2c9e924, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW key, ::StringW defaultValue);

  /// @brief Method GetString, addr 0x2c9e968, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW key);

  /// @brief Method HasKey, addr 0x2c9e9d4, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasKey(::StringW key);

  /// @brief Method DeleteKey, addr 0x2c9ea10, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteKey(::StringW key);

  /// @brief Method Save, addr 0x2c9ea4c, size 0x28, virtual false, abstract: false, final false
  static inline void Save();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerPrefs(PlayerPrefs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerPrefs(PlayerPrefs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPrefs();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerPrefs, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PlayerPrefs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
