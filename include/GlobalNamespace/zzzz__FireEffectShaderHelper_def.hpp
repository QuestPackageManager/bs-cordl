#pragma once
// IWYU pragma private; include "GlobalNamespace/FireEffectShaderHelper.hpp"
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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FireEffectShaderHelper
class CORDL_TYPE FireEffectShaderHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_colorPropertyId, put = setStaticF_colorPropertyId)) int32_t colorPropertyId;

  /// @brief Field effectStartSongTimePropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_effectStartSongTimePropertyId, put = setStaticF_effectStartSongTimePropertyId)) int32_t effectStartSongTimePropertyId;

  /// @brief Field emissionTexColorPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_emissionTexColorPropertyId, put = setStaticF_emissionTexColorPropertyId)) int32_t emissionTexColorPropertyId;

  /// @brief Field privatePointLightColorPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_privatePointLightColorPropertyId, put = setStaticF_privatePointLightColorPropertyId)) int32_t privatePointLightColorPropertyId;

  static inline int32_t getStaticF_colorPropertyId();

  static inline int32_t getStaticF_effectStartSongTimePropertyId();

  static inline int32_t getStaticF_emissionTexColorPropertyId();

  static inline int32_t getStaticF_privatePointLightColorPropertyId();

  static inline void setStaticF_colorPropertyId(int32_t value);

  static inline void setStaticF_effectStartSongTimePropertyId(int32_t value);

  static inline void setStaticF_emissionTexColorPropertyId(int32_t value);

  static inline void setStaticF_privatePointLightColorPropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireEffectShaderHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FireEffectShaderHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireEffectShaderHelper(FireEffectShaderHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireEffectShaderHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireEffectShaderHelper(FireEffectShaderHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5607 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireEffectShaderHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireEffectShaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireEffectShaderHelper*, "", "FireEffectShaderHelper");
