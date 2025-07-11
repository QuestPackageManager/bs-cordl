#pragma once
// IWYU pragma private; include "UnityEngine/CachedAssetBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CachedAssetBundle)
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine {
struct CachedAssetBundle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CachedAssetBundle);
// Dependencies UnityEngine.Hash128
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CachedAssetBundle
struct CORDL_TYPE CachedAssetBundle {
public:
  // Declarations
  __declspec(property(get = get_hash)) ::UnityEngine::Hash128 hash;

  __declspec(property(get = get_name)) ::StringW name;

  /// @brief Method .ctor, addr 0x4864cfc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::UnityEngine::Hash128 hash);

  /// @brief Method get_hash, addr 0x4864d10, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Hash128 get_hash();

  /// @brief Method get_name, addr 0x4864d08, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedAssetBundle();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Hash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: None }]
  constexpr CachedAssetBundle(::StringW m_Name, ::UnityEngine::Hash128 m_Hash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10668 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Hash, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Hash128 m_Hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CachedAssetBundle, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CachedAssetBundle, m_Hash) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CachedAssetBundle, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CachedAssetBundle, "UnityEngine", "CachedAssetBundle");
