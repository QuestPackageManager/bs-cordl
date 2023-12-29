#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FireEffectShaderHelper)
// Forward declare root types
namespace GlobalNamespace {
class FireEffectShaderHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FireEffectShaderHelper);
// Type: ::FireEffectShaderHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3991))
// CS Name: ::FireEffectShaderHelper*
class CORDL_TYPE FireEffectShaderHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field effectStartSongTimePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_effectStartSongTimePropertyId, put = setStaticF_effectStartSongTimePropertyId)) int32_t effectStartSongTimePropertyId;

  /// @brief Field colorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_colorPropertyId, put = setStaticF_colorPropertyId)) int32_t colorPropertyId;

  /// @brief Field privatePointLightColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_privatePointLightColorPropertyId, put = setStaticF_privatePointLightColorPropertyId)) int32_t privatePointLightColorPropertyId;

  static inline void setStaticF_effectStartSongTimePropertyId(int32_t value);

  static inline int32_t getStaticF_effectStartSongTimePropertyId();

  static inline void setStaticF_colorPropertyId(int32_t value);

  static inline int32_t getStaticF_colorPropertyId();

  static inline void setStaticF_privatePointLightColorPropertyId(int32_t value);

  static inline int32_t getStaticF_privatePointLightColorPropertyId();

  // Ctor Parameters [CppParam { name: "", ty: "FireEffectShaderHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireEffectShaderHelper(FireEffectShaderHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireEffectShaderHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireEffectShaderHelper(FireEffectShaderHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireEffectShaderHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireEffectShaderHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireEffectShaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireEffectShaderHelper*, "", "FireEffectShaderHelper");
