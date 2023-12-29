#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MipMapBiasSpriteSetter)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class MipMapBiasSpriteSetter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MipMapBiasSpriteSetter);
// Type: ::MipMapBiasSpriteSetter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13814))
// CS Name: ::MipMapBiasSpriteSetter*
class CORDL_TYPE MipMapBiasSpriteSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sprites, offset 0x18, size 0x8
  __declspec(property(get = __get__sprites, put = __set__sprites))::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> _sprites;

  /// @brief Field _mipMapBias, offset 0x20, size 0x4
  __declspec(property(get = __get__mipMapBias, put = __set__mipMapBias)) float_t _mipMapBias;

  constexpr ::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*>& __get__sprites();

  constexpr ::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> const& __get__sprites() const;

  constexpr void __set__sprites(::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> value);

  constexpr float_t& __get__mipMapBias();

  constexpr float_t const& __get__mipMapBias() const;

  constexpr void __set__mipMapBias(float_t value);

  /// @brief Method Start addr 0x1f92004 size 0x74 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::MipMapBiasSpriteSetter* New_ctor();

  /// @brief Method .ctor addr 0x1f92078 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MipMapBiasSpriteSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MipMapBiasSpriteSetter(MipMapBiasSpriteSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MipMapBiasSpriteSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MipMapBiasSpriteSetter(MipMapBiasSpriteSetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MipMapBiasSpriteSetter();

public:
  /// @brief Field _sprites, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> ____sprites;

  /// @brief Field _mipMapBias, offset: 0x20, size: 0x4, def value: None
  float_t ____mipMapBias;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MipMapBiasSpriteSetter, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MipMapBiasSpriteSetter, ____sprites) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MipMapBiasSpriteSetter, ____mipMapBias) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MipMapBiasSpriteSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MipMapBiasSpriteSetter*, "", "MipMapBiasSpriteSetter");
