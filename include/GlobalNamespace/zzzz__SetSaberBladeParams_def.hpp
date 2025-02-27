#pragma once
// IWYU pragma private; include "GlobalNamespace/SetSaberBladeParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SetSaberBladeParams)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
class SetSaberBladeParams_PropertyTintColorPair;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetSaberBladeParams;
}
namespace GlobalNamespace {
class SetSaberBladeParams_PropertyTintColorPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetSaberBladeParams);
MARK_REF_PTR_T(::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair);
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetSaberBladeParams/PropertyTintColorPair
class CORDL_TYPE SetSaberBladeParams_PropertyTintColorPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field property, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_property, put = __cordl_internal_set_property)) ::StringW property;

  /// @brief Field tintColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_tintColor, put = __cordl_internal_set_tintColor)) ::UnityEngine::Color tintColor;

  static inline ::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_property() const;

  constexpr ::StringW& __cordl_internal_get_property();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_tintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_tintColor();

  constexpr void __cordl_internal_set_property(::StringW value);

  constexpr void __cordl_internal_set_tintColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x3bf99c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetSaberBladeParams_PropertyTintColorPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetSaberBladeParams_PropertyTintColorPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetSaberBladeParams_PropertyTintColorPair(SetSaberBladeParams_PropertyTintColorPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberBladeParams_PropertyTintColorPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetSaberBladeParams_PropertyTintColorPair(SetSaberBladeParams_PropertyTintColorPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4668 };

  /// @brief Field tintColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___tintColor;

  /// @brief Field property, offset: 0x20, size: 0x8, def value: None
  ::StringW ___property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair, ___tintColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair, ___property) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetSaberBladeParams
class CORDL_TYPE SetSaberBladeParams : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PropertyTintColorPair = ::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair;

  /// @brief Field _colorManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _meshRenderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyTintColorPairs,
                      put = __cordl_internal_set__propertyTintColorPairs)) ::ArrayW<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*,
                                                                                    ::Array<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>*>
      _propertyTintColorPairs;

  /// @brief Field _saber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber)) ::UnityW<::GlobalNamespace::SaberTypeObject> _saber;

  static inline ::GlobalNamespace::SetSaberBladeParams* New_ctor();

  /// @brief Method Start, addr 0x3bf98b8, size 0x104, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::ArrayW<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>*> const&
  __cordl_internal_get__propertyTintColorPairs() const;

  constexpr ::ArrayW<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>*>&
  __cordl_internal_get__propertyTintColorPairs();

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& __cordl_internal_get__saber();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void
  __cordl_internal_set__propertyTintColorPairs(::ArrayW<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>*> value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::SaberTypeObject> value);

  /// @brief Method .ctor, addr 0x3bf99bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetSaberBladeParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetSaberBladeParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetSaberBladeParams(SetSaberBladeParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberBladeParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetSaberBladeParams(SetSaberBladeParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4669 };

  /// @brief Field _saber, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTypeObject> ____saber;

  /// @brief Field _meshRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*, ::Array<::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*>*> ____propertyTintColorPairs;

  /// @brief Field _colorManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____saber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____meshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____propertyTintColorPairs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____colorManager) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberBladeParams, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetSaberBladeParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberBladeParams*, "", "SetSaberBladeParams");
NEED_NO_BOX(::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberBladeParams_PropertyTintColorPair*, "", "SetSaberBladeParams/PropertyTintColorPair");
