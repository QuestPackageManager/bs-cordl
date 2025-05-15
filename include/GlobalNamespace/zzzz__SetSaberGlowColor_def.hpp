#pragma once
// IWYU pragma private; include "GlobalNamespace/SetSaberGlowColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SetSaberGlowColor)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class SetSaberGlowColor_PropertyTintColorPair;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetSaberGlowColor;
}
namespace GlobalNamespace {
class SetSaberGlowColor_PropertyTintColorPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetSaberGlowColor);
MARK_REF_PTR_T(::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair);
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetSaberGlowColor/PropertyTintColorPair
class CORDL_TYPE SetSaberGlowColor_PropertyTintColorPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field property, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_property, put = __cordl_internal_set_property)) ::StringW property;

  /// @brief Field tintColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_tintColor, put = __cordl_internal_set_tintColor)) ::UnityEngine::Color tintColor;

  static inline ::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_property() const;

  constexpr ::StringW& __cordl_internal_get_property();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_tintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_tintColor();

  constexpr void __cordl_internal_set_property(::StringW value);

  constexpr void __cordl_internal_set_tintColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x3bec6c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetSaberGlowColor_PropertyTintColorPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetSaberGlowColor_PropertyTintColorPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetSaberGlowColor_PropertyTintColorPair(SetSaberGlowColor_PropertyTintColorPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberGlowColor_PropertyTintColorPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetSaberGlowColor_PropertyTintColorPair(SetSaberGlowColor_PropertyTintColorPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4671 };

  /// @brief Field tintColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___tintColor;

  /// @brief Field property, offset: 0x20, size: 0x8, def value: None
  ::StringW ___property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair, ___tintColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair, ___property) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SaberType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetSaberGlowColor
class CORDL_TYPE SetSaberGlowColor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PropertyTintColorPair = ::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair;

  /// @brief Field _colorManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _materialPropertyBlock, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlock, put = __cordl_internal_set__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _meshRenderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__propertyTintColorPairs,
      put = __cordl_internal_set__propertyTintColorPairs)) ::ArrayW<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*>*>
      _propertyTintColorPairs;

  /// @brief Field _saberType, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__saberType, put = __cordl_internal_set__saberType)) ::GlobalNamespace::SaberType _saberType;

  /// @brief Field _saberTypeObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saberTypeObject, put = __cordl_internal_set__saberTypeObject)) ::UnityW<::GlobalNamespace::SaberTypeObject> _saberTypeObject;

  __declspec(property(put = set_saberType)) ::GlobalNamespace::SaberType saberType;

  static inline ::GlobalNamespace::SetSaberGlowColor* New_ctor();

  /// @brief Method SetColors, addr 0x3bec524, size 0x114, virtual false, abstract: false, final false
  inline void SetColors();

  /// @brief Method Start, addr 0x3bec638, size 0x80, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialPropertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialPropertyBlock();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::ArrayW<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*>*> const&
  __cordl_internal_get__propertyTintColorPairs() const;

  constexpr ::ArrayW<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*>*>&
  __cordl_internal_get__propertyTintColorPairs();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get__saberType() const;

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get__saberType();

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& __cordl_internal_get__saberTypeObject() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& __cordl_internal_get__saberTypeObject();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void
  __cordl_internal_set__propertyTintColorPairs(::ArrayW<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*>*> value);

  constexpr void __cordl_internal_set__saberType(::GlobalNamespace::SaberType value);

  constexpr void __cordl_internal_set__saberTypeObject(::UnityW<::GlobalNamespace::SaberTypeObject> value);

  /// @brief Method .ctor, addr 0x3bec6b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_saberType, addr 0x3bec010, size 0xc, virtual false, abstract: false, final false
  inline void set_saberType(::GlobalNamespace::SaberType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetSaberGlowColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetSaberGlowColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetSaberGlowColor(SetSaberGlowColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberGlowColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetSaberGlowColor(SetSaberGlowColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4672 };

  /// @brief Field _saberTypeObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTypeObject> ____saberTypeObject;

  /// @brief Field _meshRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*>*> ____propertyTintColorPairs;

  /// @brief Field _colorManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _materialPropertyBlock, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____materialPropertyBlock;

  /// @brief Field _saberType, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetSaberGlowColor, ____saberTypeObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberGlowColor, ____meshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberGlowColor, ____propertyTintColorPairs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberGlowColor, ____colorManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberGlowColor, ____materialPropertyBlock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberGlowColor, ____saberType) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberGlowColor, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberGlowColor*, "", "SetSaberGlowColor");
NEED_NO_BOX(::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberGlowColor_PropertyTintColorPair*, "", "SetSaberGlowColor/PropertyTintColorPair");
