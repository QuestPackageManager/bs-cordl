#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DisableIfNotPlatform)
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableIfNotPlatform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableIfNotPlatform);
// Type: ::DisableIfNotPlatform
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DisableIfNotPlatform*
class CORDL_TYPE DisableIfNotPlatform : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _whitelistPlatforms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__whitelistPlatforms,
                      put = __cordl_internal_set__whitelistPlatforms))::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> _whitelistPlatforms;

  /// @brief Method Awake, addr 0x24d06d8, size 0x98, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::DisableIfNotPlatform* New_ctor();

  constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> const& __cordl_internal_get__whitelistPlatforms() const;

  constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>& __cordl_internal_get__whitelistPlatforms();

  constexpr void __cordl_internal_set__whitelistPlatforms(::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> value);

  /// @brief Method .ctor, addr 0x24d0770, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _whitelistPlatforms, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> ____whitelistPlatforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableIfNotPlatform, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableIfNotPlatform, ____whitelistPlatforms) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableIfNotPlatform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableIfNotPlatform*, "", "DisableIfNotPlatform");
