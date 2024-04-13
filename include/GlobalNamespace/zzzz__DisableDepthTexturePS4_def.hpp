#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableDepthTexturePS4)
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableDepthTexturePS4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableDepthTexturePS4);
// Type: ::DisableDepthTexturePS4
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DisableDepthTexturePS4*
class CORDL_TYPE DisableDepthTexturePS4 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _depthTextureEnabled, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__depthTextureEnabled, put = __cordl_internal_set__depthTextureEnabled))::UnityW<::GlobalNamespace::BoolSO> _depthTextureEnabled;

  static inline ::GlobalNamespace::DisableDepthTexturePS4* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__depthTextureEnabled() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__depthTextureEnabled();

  constexpr void __cordl_internal_set__depthTextureEnabled(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x2ad6f38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableDepthTexturePS4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableDepthTexturePS4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableDepthTexturePS4(DisableDepthTexturePS4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableDepthTexturePS4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableDepthTexturePS4(DisableDepthTexturePS4 const&) = delete;

  /// @brief Field _depthTextureEnabled, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____depthTextureEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableDepthTexturePS4, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableDepthTexturePS4, ____depthTextureEnabled) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableDepthTexturePS4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableDepthTexturePS4*, "", "DisableDepthTexturePS4");
