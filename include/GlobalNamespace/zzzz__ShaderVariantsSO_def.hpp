#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShaderVariantsSO)
namespace GlobalNamespace {
class __ShaderVariantsSO__ShaderVariant;
}
namespace GlobalNamespace {
class __ShaderVariantsSO__ShaderVariant__Variant;
}
namespace UnityEngine::Rendering {
struct PassType;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderVariantsSO;
}
namespace GlobalNamespace {
class __ShaderVariantsSO__ShaderVariant;
}
namespace GlobalNamespace {
class __ShaderVariantsSO__ShaderVariant__Variant;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShaderVariantsSO);
MARK_REF_PTR_T(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant);
MARK_REF_PTR_T(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant);
// Type: ::Variant
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShaderVariantsSO::ShaderVariant::Variant*
class CORDL_TYPE __ShaderVariantsSO__ShaderVariant__Variant : public ::System::Object {
public:
  // Declarations
  /// @brief Field _keywords, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__keywords, put = __cordl_internal_set__keywords))::StringW _keywords;

  /// @brief Field _passType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__passType, put = __cordl_internal_set__passType))::UnityEngine::Rendering::PassType _passType;

  __declspec(property(get = get_keywords))::StringW keywords;

  __declspec(property(get = get_passType))::UnityEngine::Rendering::PassType passType;

  static inline ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant* New_ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords);

  constexpr ::StringW const& __cordl_internal_get__keywords() const;

  constexpr ::StringW& __cordl_internal_get__keywords();

  constexpr ::UnityEngine::Rendering::PassType const& __cordl_internal_get__passType() const;

  constexpr ::UnityEngine::Rendering::PassType& __cordl_internal_get__passType();

  constexpr void __cordl_internal_set__keywords(::StringW value);

  constexpr void __cordl_internal_set__passType(::UnityEngine::Rendering::PassType value);

  /// @brief Method .ctor, addr 0x2bd8054, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords);

  /// @brief Method get_keywords, addr 0x2bd804c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_keywords();

  /// @brief Method get_passType, addr 0x2bd8044, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::PassType get_passType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShaderVariantsSO__ShaderVariant__Variant();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ShaderVariantsSO__ShaderVariant__Variant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShaderVariantsSO__ShaderVariant__Variant(__ShaderVariantsSO__ShaderVariant__Variant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderVariantsSO__ShaderVariant__Variant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShaderVariantsSO__ShaderVariant__Variant(__ShaderVariantsSO__ShaderVariant__Variant const&) = delete;

  /// @brief Field _passType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::PassType ____passType;

  /// @brief Field _keywords, offset: 0x18, size: 0x8, def value: None
  ::StringW ____keywords;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant, ____passType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant, ____keywords) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ShaderVariant
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShaderVariantsSO::ShaderVariant*
class CORDL_TYPE __ShaderVariantsSO__ShaderVariant : public ::System::Object {
public:
  // Declarations
  using Variant = ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant;

  /// @brief Field _shader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shader, put = __cordl_internal_set__shader))::UnityW<::UnityEngine::Shader> _shader;

  /// @brief Field _variants, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__variants, put = __cordl_internal_set__variants))::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*,
                                                                                                           ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> _variants;

  __declspec(property(get = get_shader))::UnityW<::UnityEngine::Shader> shader;

  __declspec(property(get = get_variants))::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> variants;

  static inline ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*
  New_ctor(::UnityEngine::Shader* shader, ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> variants);

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__shader();

  constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> const&
  __cordl_internal_get__variants() const;

  constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>& __cordl_internal_get__variants();

  constexpr void __cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value);

  constexpr void
  __cordl_internal_set__variants(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> value);

  /// @brief Method .ctor, addr 0x2bd8018, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader,
                    ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> variants);

  /// @brief Method get_shader, addr 0x2bd8010, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_shader();

  /// @brief Method get_variants, addr 0x2bd8008, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> get_variants();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShaderVariantsSO__ShaderVariant();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ShaderVariantsSO__ShaderVariant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShaderVariantsSO__ShaderVariant(__ShaderVariantsSO__ShaderVariant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderVariantsSO__ShaderVariant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShaderVariantsSO__ShaderVariant(__ShaderVariantsSO__ShaderVariant const&) = delete;

  /// @brief Field _variants, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> ____variants;

  /// @brief Field _shader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____shader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant, ____variants) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant, ____shader) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ShaderVariantsSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShaderVariantsSO*
class CORDL_TYPE ShaderVariantsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using ShaderVariant = ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant;

  /// @brief Field _shaderVariants, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__shaderVariants,
      put = __cordl_internal_set__shaderVariants))::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> _shaderVariants;

  __declspec(property(get = get_shaderVariants))::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> shaderVariants;

  /// @brief Method Init, addr 0x2bd7ff8, size 0x8, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> shaderVariants);

  static inline ::GlobalNamespace::ShaderVariantsSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> const& __cordl_internal_get__shaderVariants() const;

  constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>& __cordl_internal_get__shaderVariants();

  constexpr void __cordl_internal_set__shaderVariants(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> value);

  /// @brief Method .ctor, addr 0x2bd8000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_shaderVariants, addr 0x2bd7ff0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> get_shaderVariants();

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

  /// @brief Field _shaderVariants, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> ____shaderVariants;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderVariantsSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderVariantsSO, ____shaderVariants) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderVariantsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderVariantsSO*, "", "ShaderVariantsSO");
NEED_NO_BOX(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, "", "ShaderVariantsSO/ShaderVariant");
NEED_NO_BOX(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, "", "ShaderVariantsSO/ShaderVariant/Variant");
