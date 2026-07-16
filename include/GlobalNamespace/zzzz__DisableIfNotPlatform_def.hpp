#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableIfNotPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DisableIfNotPlatform)
// Forward declare root types
namespace GlobalNamespace {
class DisableIfNotPlatform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisableIfNotPlatform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisableIfNotPlatform*, "", "DisableIfNotPlatform");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.RuntimePlatform
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisableIfNotPlatform
class CORDL_TYPE DisableIfNotPlatform : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _whitelistPlatforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__whitelistPlatforms, put = __cordl_internal_set__whitelistPlatforms)) ::ArrayW<::UnityEngine::RuntimePlatform> _whitelistPlatforms;

  /// @brief Method Awake, addr 0x58546e4, size 0x108, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::DisableIfNotPlatform* New_ctor();

  constexpr ::ArrayW<::UnityEngine::RuntimePlatform> const& __cordl_internal_get__whitelistPlatforms() const;

  constexpr ::ArrayW<::UnityEngine::RuntimePlatform>& __cordl_internal_get__whitelistPlatforms();

  constexpr void __cordl_internal_set__whitelistPlatforms(::ArrayW<::UnityEngine::RuntimePlatform> value);

  /// @brief Method .ctor, addr 0x58547ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableIfNotPlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableIfNotPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableIfNotPlatform(DisableIfNotPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableIfNotPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableIfNotPlatform(DisableIfNotPlatform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22706 };

  /// @brief Field _whitelistPlatforms, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RuntimePlatform> ____whitelistPlatforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisableIfNotPlatform, ____whitelistPlatforms) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DisableIfNotPlatform) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
