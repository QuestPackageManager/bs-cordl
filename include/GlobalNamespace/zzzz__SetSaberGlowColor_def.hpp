#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SetSaberGlowColor)
namespace GlobalNamespace {
class __SetSaberGlowColor__PropertyTintColorPair;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct SaberType;
}
// Forward declare root types
namespace GlobalNamespace {
class SetSaberGlowColor;
}
namespace GlobalNamespace {
class __SetSaberGlowColor__PropertyTintColorPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetSaberGlowColor);
MARK_REF_PTR_T(::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair);
// Type: ::PropertyTintColorPair
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5307))
// CS Name: ::SetSaberGlowColor::PropertyTintColorPair*
class CORDL_TYPE __SetSaberGlowColor__PropertyTintColorPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field tintColor, offset 0x10, size 0x10
  __declspec(property(get = __get_tintColor, put = __set_tintColor))::UnityEngine::Color tintColor;

  /// @brief Field property, offset 0x20, size 0x8
  __declspec(property(get = __get_property, put = __set_property))::StringW property;

  constexpr ::UnityEngine::Color& __get_tintColor();

  constexpr ::UnityEngine::Color const& __get_tintColor() const;

  constexpr void __set_tintColor(::UnityEngine::Color value);

  constexpr ::StringW& __get_property();

  constexpr ::StringW const& __get_property() const;

  constexpr void __set_property(::StringW value);

  static inline ::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair* New_ctor();

  /// @brief Method .ctor addr 0x2264c14 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SetSaberGlowColor__PropertyTintColorPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SetSaberGlowColor__PropertyTintColorPair(__SetSaberGlowColor__PropertyTintColorPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SetSaberGlowColor__PropertyTintColorPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SetSaberGlowColor__PropertyTintColorPair(__SetSaberGlowColor__PropertyTintColorPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SetSaberGlowColor__PropertyTintColorPair();

public:
  /// @brief Field tintColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___tintColor;

  /// @brief Field property, offset: 0x20, size: 0x8, def value: None
  ::StringW ___property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetSaberGlowColor
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(15036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5308))
// CS Name: ::SetSaberGlowColor*
class CORDL_TYPE SetSaberGlowColor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PropertyTintColorPair = ::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair;

  /// @brief Field _saberTypeObject, offset 0x18, size 0x8
  __declspec(property(get = __get__saberTypeObject, put = __set__saberTypeObject))::GlobalNamespace::SaberTypeObject* _saberTypeObject;

  /// @brief Field _meshRenderer, offset 0x20, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset 0x28, size 0x8
  __declspec(property(get = __get__propertyTintColorPairs,
                      put = __set__propertyTintColorPairs))::ArrayW<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*,
                                                                    ::Array<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>*> _propertyTintColorPairs;

  /// @brief Field _colorManager, offset 0x30, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _materialPropertyBlock, offset 0x38, size 0x8
  __declspec(property(get = __get__materialPropertyBlock, put = __set__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _saberType, offset 0x40, size 0x4
  __declspec(property(get = __get__saberType, put = __set__saberType))::GlobalNamespace::SaberType _saberType;

  __declspec(property(put = set_saberType))::GlobalNamespace::SaberType saberType;

  constexpr ::GlobalNamespace::SaberTypeObject*& __get__saberTypeObject();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> const& __get__saberTypeObject() const;

  constexpr void __set__saberTypeObject(::GlobalNamespace::SaberTypeObject* value);

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::ArrayW<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>*>& __get__propertyTintColorPairs();

  constexpr ::ArrayW<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>*> const&
  __get__propertyTintColorPairs() const;

  constexpr void
  __set__propertyTintColorPairs(::ArrayW<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>*> value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::UnityEngine::MaterialPropertyBlock*& __get__materialPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __get__materialPropertyBlock() const;

  constexpr void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr ::GlobalNamespace::SaberType& __get__saberType();

  constexpr ::GlobalNamespace::SaberType const& __get__saberType() const;

  constexpr void __set__saberType(::GlobalNamespace::SaberType value);

  /// @brief Method set_saberType addr 0x22644a4 size 0xc virtual false final false
  inline void set_saberType(::GlobalNamespace::SaberType value);

  /// @brief Method Start addr 0x2264b8c size 0x80 virtual false final false
  inline void Start();

  /// @brief Method SetColors addr 0x2264a74 size 0x118 virtual false final false
  inline void SetColors();

  static inline ::GlobalNamespace::SetSaberGlowColor* New_ctor();

  /// @brief Method .ctor addr 0x2264c0c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberGlowColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetSaberGlowColor(SetSaberGlowColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberGlowColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetSaberGlowColor(SetSaberGlowColor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetSaberGlowColor();

public:
  /// @brief Field _saberTypeObject, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SaberTypeObject* ____saberTypeObject;

  /// @brief Field _meshRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*>*> ____propertyTintColorPairs;

  /// @brief Field _colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _materialPropertyBlock, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____materialPropertyBlock;

  /// @brief Field _saberType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberGlowColor, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberGlowColor*, "", "SetSaberGlowColor");
NEED_NO_BOX(::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SetSaberGlowColor__PropertyTintColorPair*, "", "SetSaberGlowColor/PropertyTintColorPair");
