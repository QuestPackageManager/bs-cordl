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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15280))
// CS Name: ::DisableDepthTexturePS4*
class CORDL_TYPE DisableDepthTexturePS4 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _depthTextureEnabled, offset 0x18, size 0x8
  __declspec(property(get = __get__depthTextureEnabled, put = __set__depthTextureEnabled))::GlobalNamespace::BoolSO* _depthTextureEnabled;

  constexpr ::GlobalNamespace::BoolSO*& __get__depthTextureEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__depthTextureEnabled() const;

  constexpr void __set__depthTextureEnabled(::GlobalNamespace::BoolSO* value);

  static inline ::GlobalNamespace::DisableDepthTexturePS4* New_ctor();

  /// @brief Method .ctor addr 0x2807490 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DisableDepthTexturePS4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableDepthTexturePS4(DisableDepthTexturePS4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableDepthTexturePS4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableDepthTexturePS4(DisableDepthTexturePS4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableDepthTexturePS4();

public:
  /// @brief Field _depthTextureEnabled, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____depthTextureEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableDepthTexturePS4, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableDepthTexturePS4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableDepthTexturePS4*, "", "DisableDepthTexturePS4");
