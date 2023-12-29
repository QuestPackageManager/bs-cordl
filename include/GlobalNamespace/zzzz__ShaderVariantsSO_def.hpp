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
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
class __ShaderVariantsSO__ShaderVariant__Variant;
}
namespace UnityEngine::Rendering {
struct PassType;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15337))
// CS Name: ::ShaderVariantsSO::ShaderVariant::Variant*
class CORDL_TYPE __ShaderVariantsSO__ShaderVariant__Variant : public ::System::Object {
public:
  // Declarations
  /// @brief Field _passType, offset 0x10, size 0x4
  __declspec(property(get = __get__passType, put = __set__passType))::UnityEngine::Rendering::PassType _passType;

  /// @brief Field _keywords, offset 0x18, size 0x8
  __declspec(property(get = __get__keywords, put = __set__keywords))::StringW _keywords;

  __declspec(property(get = get_passType))::UnityEngine::Rendering::PassType passType;

  __declspec(property(get = get_keywords))::StringW keywords;

  constexpr ::UnityEngine::Rendering::PassType& __get__passType();

  constexpr ::UnityEngine::Rendering::PassType const& __get__passType() const;

  constexpr void __set__passType(::UnityEngine::Rendering::PassType value);

  constexpr ::StringW& __get__keywords();

  constexpr ::StringW const& __get__keywords() const;

  constexpr void __set__keywords(::StringW value);

  /// @brief Method get_passType addr 0x26910a0 size 0x8 virtual false final false
  inline ::UnityEngine::Rendering::PassType get_passType();

  /// @brief Method get_keywords addr 0x26910a8 size 0x8 virtual false final false
  inline ::StringW get_keywords();

  static inline ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant* New_ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords);

  /// @brief Method .ctor addr 0x26910b0 size 0x30 virtual false final false
  inline void _ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords);

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderVariantsSO__ShaderVariant__Variant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShaderVariantsSO__ShaderVariant__Variant(__ShaderVariantsSO__ShaderVariant__Variant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderVariantsSO__ShaderVariant__Variant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShaderVariantsSO__ShaderVariant__Variant(__ShaderVariantsSO__ShaderVariant__Variant const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShaderVariantsSO__ShaderVariant__Variant();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15338))
// CS Name: ::ShaderVariantsSO::ShaderVariant*
class CORDL_TYPE __ShaderVariantsSO__ShaderVariant : public ::System::Object {
public:
  // Declarations
  using Variant = ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant;

  /// @brief Field _variants, offset 0x10, size 0x8
  __declspec(
      property(get = __get__variants,
               put = __set__variants))::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> _variants;

  /// @brief Field _shader, offset 0x18, size 0x8
  __declspec(property(get = __get__shader, put = __set__shader))::UnityEngine::Shader* _shader;

  __declspec(property(get = get_variants))::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> variants;

  __declspec(property(get = get_shader))::UnityEngine::Shader* shader;

  constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*>& __get__variants();

  constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> const& __get__variants() const;

  constexpr void __set__variants(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> value);

  constexpr ::UnityEngine::Shader*& __get__shader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__shader() const;

  constexpr void __set__shader(::UnityEngine::Shader* value);

  /// @brief Method get_variants addr 0x2691064 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> get_variants();

  /// @brief Method get_shader addr 0x269106c size 0x8 virtual false final false
  inline ::UnityEngine::Shader* get_shader();

  static inline ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*
  New_ctor(::UnityEngine::Shader* shader, ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> variants);

  /// @brief Method .ctor addr 0x2691074 size 0x2c virtual false final false
  inline void _ctor(::UnityEngine::Shader* shader,
                    ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> variants);

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderVariantsSO__ShaderVariant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShaderVariantsSO__ShaderVariant(__ShaderVariantsSO__ShaderVariant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShaderVariantsSO__ShaderVariant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShaderVariantsSO__ShaderVariant(__ShaderVariantsSO__ShaderVariant const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShaderVariantsSO__ShaderVariant();

public:
  /// @brief Field _variants, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant__Variant*>*> ____variants;

  /// @brief Field _shader, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Shader* ____shader;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15339))
// CS Name: ::ShaderVariantsSO*
class CORDL_TYPE ShaderVariantsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using ShaderVariant = ::GlobalNamespace::__ShaderVariantsSO__ShaderVariant;

  /// @brief Field _shaderVariants, offset 0x18, size 0x8
  __declspec(property(get = __get__shaderVariants,
                      put = __set__shaderVariants))::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> _shaderVariants;

  __declspec(property(get = get_shaderVariants))::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> shaderVariants;

  constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*>& __get__shaderVariants();

  constexpr ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> const& __get__shaderVariants() const;

  constexpr void __set__shaderVariants(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> value);

  /// @brief Method get_shaderVariants addr 0x269104c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> get_shaderVariants();

  /// @brief Method Init addr 0x2691054 size 0x8 virtual false final false
  inline void Init(::ArrayW<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*, ::Array<::GlobalNamespace::__ShaderVariantsSO__ShaderVariant*>*> shaderVariants);

  static inline ::GlobalNamespace::ShaderVariantsSO* New_ctor();

  /// @brief Method .ctor addr 0x269105c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariantsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderVariantsSO(ShaderVariantsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariantsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderVariantsSO(ShaderVariantsSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariantsSO();

public:
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
