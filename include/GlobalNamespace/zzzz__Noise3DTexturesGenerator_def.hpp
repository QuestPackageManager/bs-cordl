#pragma once
// IWYU pragma private; include "GlobalNamespace/Noise3DTexturesGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Noise3DTexturesGenerator)
namespace GlobalNamespace {
struct Noise3DTexturesGenerator_MaterialPropertyNameCouple;
}
namespace GlobalNamespace {
struct Noise3DTexturesGenerator_MaterialTextureParamsCouple;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture3D;
}
// Forward declare root types
namespace GlobalNamespace {
class Noise3DTexturesGenerator;
}
namespace GlobalNamespace {
struct Noise3DTexturesGenerator_MaterialPropertyNameCouple;
}
namespace GlobalNamespace {
struct Noise3DTexturesGenerator_MaterialTextureParamsCouple;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Noise3DTexturesGenerator);
MARK_VAL_T(::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple);
MARK_VAL_T(::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: Noise3DTexturesGenerator/MaterialTextureParamsCouple
struct CORDL_TYPE Noise3DTexturesGenerator_MaterialTextureParamsCouple {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Noise3DTexturesGenerator_MaterialTextureParamsCouple();

  // Ctor Parameters [CppParam { name: "globalPropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "materialPropertyNameCouples", ty:
  // "::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple,::Array<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple>*>", modifiers: "", def_value: None
  // }]
  constexpr Noise3DTexturesGenerator_MaterialTextureParamsCouple(
      ::StringW globalPropertyName, ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple, ::Array<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple>*>
                                        materialPropertyNameCouples) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20796 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field globalPropertyName, offset: 0x0, size: 0x8, def value: None
  ::StringW globalPropertyName;

  /// @brief Field materialPropertyNameCouples, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple, ::Array<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple>*> materialPropertyNameCouples;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple, globalPropertyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple, materialPropertyNameCouples) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: Noise3DTexturesGenerator/MaterialPropertyNameCouple
struct CORDL_TYPE Noise3DTexturesGenerator_MaterialPropertyNameCouple {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Noise3DTexturesGenerator_MaterialPropertyNameCouple();

  // Ctor Parameters [CppParam { name: "texturePropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "",
  // def_value: None }]
  constexpr Noise3DTexturesGenerator_MaterialPropertyNameCouple(::StringW texturePropertyName, ::UnityW<::UnityEngine::Material> material) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20797 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field texturePropertyName, offset: 0x0, size: 0x8, def value: None
  ::StringW texturePropertyName;

  /// @brief Field material, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple, texturePropertyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple, material) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Noise3DTexturesGenerator
class CORDL_TYPE Noise3DTexturesGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MaterialPropertyNameCouple = ::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple;

  using MaterialTextureParamsCouple = ::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple;

  /// @brief Field _data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple,
                                                                                                    ::Array<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple>*>
      _data;

  /// @brief Field _texture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__texture, put = setStaticF__texture)) ::UnityW<::UnityEngine::Texture3D> _texture;

  /// @brief Method Awake, addr 0x5d97eac, size 0x21c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateNoisePixels, addr 0x5d980c8, size 0x33c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> CreateNoisePixels(int32_t width, int32_t height, int32_t depth, float_t scale, int32_t repeat, float_t contrast);

  static inline ::GlobalNamespace::Noise3DTexturesGenerator* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple, ::Array<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple>*> const&
  __cordl_internal_get__data() const;

  constexpr ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple, ::Array<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple>*>&
  __cordl_internal_get__data();

  constexpr void __cordl_internal_set__data(
      ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple, ::Array<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple>*> value);

  /// @brief Method .ctor, addr 0x5d98404, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Texture3D> getStaticF__texture();

  static inline void setStaticF__texture(::UnityW<::UnityEngine::Texture3D> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Noise3DTexturesGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Noise3DTexturesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Noise3DTexturesGenerator(Noise3DTexturesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Noise3DTexturesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Noise3DTexturesGenerator(Noise3DTexturesGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20798 };

  /// @brief Field _data, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple, ::Array<::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple>*> ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Noise3DTexturesGenerator, ____data) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Noise3DTexturesGenerator, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Noise3DTexturesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Noise3DTexturesGenerator*, "", "Noise3DTexturesGenerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Noise3DTexturesGenerator_MaterialPropertyNameCouple, "", "Noise3DTexturesGenerator/MaterialPropertyNameCouple");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Noise3DTexturesGenerator_MaterialTextureParamsCouple, "", "Noise3DTexturesGenerator/MaterialTextureParamsCouple");
