#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderVariantsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShaderVariantsSO)
namespace GlobalNamespace {
class ShaderVariant_ShaderVariantsSO_Variant;
}
namespace GlobalNamespace {
class ShaderVariantsSO_ShaderVariant;
}
namespace UnityEngine::Rendering {
struct PassType;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderVariant_ShaderVariantsSO_Variant;
}
namespace GlobalNamespace {
class ShaderVariantsSO;
}
namespace GlobalNamespace {
class ShaderVariantsSO_ShaderVariant;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant);
MARK_REF_PTR_T(::GlobalNamespace::ShaderVariantsSO);
MARK_REF_PTR_T(::GlobalNamespace::ShaderVariantsSO_ShaderVariant);
// Dependencies System.Object, UnityEngine.Rendering.PassType
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShaderVariantsSO/ShaderVariant/Variant
class CORDL_TYPE ShaderVariant_ShaderVariantsSO_Variant : public ::System::Object {
public:
  // Declarations
  /// @brief Field _keywords, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__keywords, put = __cordl_internal_set__keywords)) ::StringW _keywords;

  /// @brief Field _passType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__passType, put = __cordl_internal_set__passType)) ::UnityEngine::Rendering::PassType _passType;

  __declspec(property(get = get_keywords)) ::StringW keywords;

  __declspec(property(get = get_passType)) ::UnityEngine::Rendering::PassType passType;

  static inline ::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant* New_ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords);

  constexpr ::StringW const& __cordl_internal_get__keywords() const;

  constexpr ::StringW& __cordl_internal_get__keywords();

  constexpr ::UnityEngine::Rendering::PassType const& __cordl_internal_get__passType() const;

  constexpr ::UnityEngine::Rendering::PassType& __cordl_internal_get__passType();

  constexpr void __cordl_internal_set__keywords(::StringW value);

  constexpr void __cordl_internal_set__passType(::UnityEngine::Rendering::PassType value);

  /// @brief Method .ctor, addr 0x5d9a55c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords);

  /// @brief Method get_keywords, addr 0x5d9a554, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_keywords();

  /// @brief Method get_passType, addr 0x5d9a54c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::PassType get_passType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariant_ShaderVariantsSO_Variant();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariant_ShaderVariantsSO_Variant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderVariant_ShaderVariantsSO_Variant(ShaderVariant_ShaderVariantsSO_Variant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariant_ShaderVariantsSO_Variant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderVariant_ShaderVariantsSO_Variant(ShaderVariant_ShaderVariantsSO_Variant const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20810 };

  /// @brief Field _passType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::PassType ____passType;

  /// @brief Field _keywords, offset: 0x18, size: 0x8, def value: None
  ::StringW ____keywords;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant, ____passType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant, ____keywords) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShaderVariantsSO/ShaderVariant
class CORDL_TYPE ShaderVariantsSO_ShaderVariant : public ::System::Object {
public:
  // Declarations
  using Variant = ::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant;

  /// @brief Field _shader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shader, put = __cordl_internal_set__shader)) ::UnityW<::UnityEngine::Shader> _shader;

  /// @brief Field _variants, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__variants,
                      put = __cordl_internal_set__variants)) ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*>
      _variants;

  __declspec(property(get = get_shader)) ::UnityW<::UnityEngine::Shader> shader;

  __declspec(property(get = get_variants)) ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*> variants;

  static inline ::GlobalNamespace::ShaderVariantsSO_ShaderVariant*
  New_ctor(::UnityEngine::Shader* shader, ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*> variants);

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__shader();

  constexpr ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*> const& __cordl_internal_get__variants() const;

  constexpr ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*>& __cordl_internal_get__variants();

  constexpr void __cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__variants(::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*> value);

  /// @brief Method .ctor, addr 0x5d9a544, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader, ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*> variants);

  /// @brief Method get_shader, addr 0x5d9a53c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shader();

  /// @brief Method get_variants, addr 0x5d9a534, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*> get_variants();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariantsSO_ShaderVariant();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariantsSO_ShaderVariant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderVariantsSO_ShaderVariant(ShaderVariantsSO_ShaderVariant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariantsSO_ShaderVariant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderVariantsSO_ShaderVariant(ShaderVariantsSO_ShaderVariant const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20811 };

  /// @brief Field _variants, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, ::Array<::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*>*> ____variants;

  /// @brief Field _shader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____shader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderVariantsSO_ShaderVariant, ____variants) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderVariantsSO_ShaderVariant, ____shader) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderVariantsSO_ShaderVariant, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShaderVariantsSO
class CORDL_TYPE ShaderVariantsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using ShaderVariant = ::GlobalNamespace::ShaderVariantsSO_ShaderVariant;

  /// @brief Field _shaderVariants, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderVariants,
                      put = __cordl_internal_set__shaderVariants)) ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, ::Array<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>*>
      _shaderVariants;

  __declspec(property(get = get_shaderVariants)) ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, ::Array<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>*> shaderVariants;

  /// @brief Method Init, addr 0x5d9a524, size 0x8, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, ::Array<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>*> shaderVariants);

  static inline ::GlobalNamespace::ShaderVariantsSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, ::Array<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>*> const& __cordl_internal_get__shaderVariants() const;

  constexpr ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, ::Array<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>*>& __cordl_internal_get__shaderVariants();

  constexpr void __cordl_internal_set__shaderVariants(::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, ::Array<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>*> value);

  /// @brief Method .ctor, addr 0x5d9a52c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_shaderVariants, addr 0x5d9a51c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, ::Array<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>*> get_shaderVariants();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariantsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariantsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderVariantsSO(ShaderVariantsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariantsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderVariantsSO(ShaderVariantsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20812 };

  /// @brief Field _shaderVariants, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, ::Array<::GlobalNamespace::ShaderVariantsSO_ShaderVariant*>*> ____shaderVariants;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderVariantsSO, ____shaderVariants) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderVariantsSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderVariant_ShaderVariantsSO_Variant*, "", "ShaderVariantsSO/ShaderVariant/Variant");
NEED_NO_BOX(::GlobalNamespace::ShaderVariantsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderVariantsSO*, "", "ShaderVariantsSO");
NEED_NO_BOX(::GlobalNamespace::ShaderVariantsSO_ShaderVariant);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderVariantsSO_ShaderVariant*, "", "ShaderVariantsSO/ShaderVariant");
