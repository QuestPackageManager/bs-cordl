#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Noise3DTexturesGenerator)
namespace UnityEngine {
struct Color32;
}
namespace GlobalNamespace {
struct __Noise3DTexturesGenerator__MaterialTextureParamsCouple;
}
namespace UnityEngine {
class Texture3D;
}
namespace GlobalNamespace {
struct __Noise3DTexturesGenerator__MaterialPropertyNameCouple;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class Noise3DTexturesGenerator;
}
namespace GlobalNamespace {
struct __Noise3DTexturesGenerator__MaterialPropertyNameCouple;
}
namespace GlobalNamespace {
struct __Noise3DTexturesGenerator__MaterialTextureParamsCouple;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Noise3DTexturesGenerator);
MARK_VAL_T(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple);
MARK_VAL_T(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple);
// Type: ::MaterialTextureParamsCouple
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15300))
// CS Name: ::Noise3DTexturesGenerator::MaterialTextureParamsCouple
struct CORDL_TYPE __Noise3DTexturesGenerator__MaterialTextureParamsCouple {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "globalPropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "materialPropertyNameCouples", ty:
  // "::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>", modifiers: "",
  // def_value: None }]
  constexpr __Noise3DTexturesGenerator__MaterialTextureParamsCouple(
      ::StringW globalPropertyName,
      ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>
          materialPropertyNameCouples) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Noise3DTexturesGenerator__MaterialTextureParamsCouple();

  /// @brief Field globalPropertyName, offset: 0x0, size: 0x8, def value: None
  ::StringW globalPropertyName;

  /// @brief Field materialPropertyNameCouples, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*> materialPropertyNameCouples;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, globalPropertyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, materialPropertyNameCouples) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MaterialPropertyNameCouple
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15301))
// CS Name: ::Noise3DTexturesGenerator::MaterialPropertyNameCouple
struct CORDL_TYPE __Noise3DTexturesGenerator__MaterialPropertyNameCouple {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "texturePropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value:
  // None }]
  constexpr __Noise3DTexturesGenerator__MaterialPropertyNameCouple(::StringW texturePropertyName, ::UnityEngine::Material* material) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Noise3DTexturesGenerator__MaterialPropertyNameCouple();

  /// @brief Field texturePropertyName, offset: 0x0, size: 0x8, def value: None
  ::StringW texturePropertyName;

  /// @brief Field material, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Material* material;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, texturePropertyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, material) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Noise3DTexturesGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15302))
// CS Name: ::Noise3DTexturesGenerator*
class CORDL_TYPE Noise3DTexturesGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MaterialPropertyNameCouple = ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple;

  using MaterialTextureParamsCouple = ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple;

  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,
                                                                     ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*> _data;

  /// @brief Field _texture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__texture, put = setStaticF__texture))::UnityEngine::Texture3D* _texture;

  constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>& __get__data();

  constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*> const&
  __get__data() const;

  constexpr void
  __set__data(::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*> value);

  static inline void setStaticF__texture(::UnityEngine::Texture3D* value);

  static inline ::UnityEngine::Texture3D* getStaticF__texture();

  /// @brief Method Awake, addr 0x280afac, size 0x210, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateNoisePixels, addr 0x280b1bc, size 0x324, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> CreateNoisePixels(int32_t width, int32_t height, int32_t depth, float_t scale, int32_t repeat, float_t contrast);

  static inline ::GlobalNamespace::Noise3DTexturesGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x280b4e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Noise3DTexturesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Noise3DTexturesGenerator(Noise3DTexturesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Noise3DTexturesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Noise3DTexturesGenerator(Noise3DTexturesGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Noise3DTexturesGenerator();

public:
  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*> ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Noise3DTexturesGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Noise3DTexturesGenerator, ____data) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Noise3DTexturesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Noise3DTexturesGenerator*, "", "Noise3DTexturesGenerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, "", "Noise3DTexturesGenerator/MaterialPropertyNameCouple");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, "", "Noise3DTexturesGenerator/MaterialTextureParamsCouple");
