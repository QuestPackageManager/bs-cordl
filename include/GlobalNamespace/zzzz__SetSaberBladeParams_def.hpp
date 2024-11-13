#pragma once
// IWYU pragma private; include "GlobalNamespace/SetSaberBladeParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SetSaberBladeParams)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
class __SetSaberBladeParams__PropertyTintColorPair;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetSaberBladeParams;
}
namespace GlobalNamespace {
class __SetSaberBladeParams__PropertyTintColorPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetSaberBladeParams);
MARK_REF_PTR_T(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair);
// Type: ::PropertyTintColorPair
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetSaberBladeParams::PropertyTintColorPair*
class CORDL_TYPE __SetSaberBladeParams__PropertyTintColorPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field property, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_property, put = __cordl_internal_set_property)) ::StringW property;

  /// @brief Field tintColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_tintColor, put = __cordl_internal_set_tintColor)) ::UnityEngine::Color tintColor;

  static inline ::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_property() const;

  constexpr ::StringW& __cordl_internal_get_property();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_tintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_tintColor();

  constexpr void __cordl_internal_set_property(::StringW value);

  constexpr void __cordl_internal_set_tintColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x3b86768, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SetSaberBladeParams__PropertyTintColorPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SetSaberBladeParams__PropertyTintColorPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SetSaberBladeParams__PropertyTintColorPair(__SetSaberBladeParams__PropertyTintColorPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SetSaberBladeParams__PropertyTintColorPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SetSaberBladeParams__PropertyTintColorPair(__SetSaberBladeParams__PropertyTintColorPair const&) = delete;

  /// @brief Field tintColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___tintColor;

  /// @brief Field property, offset: 0x20, size: 0x8, def value: None
  ::StringW ___property;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair, ___tintColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair, ___property) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SetSaberBladeParams
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetSaberBladeParams*
class CORDL_TYPE SetSaberBladeParams : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PropertyTintColorPair = ::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair;

  /// @brief Field _colorManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _meshRenderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyTintColorPairs,
                      put = __cordl_internal_set__propertyTintColorPairs)) ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*,
                                                                                    ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*>
      _propertyTintColorPairs;

  /// @brief Field _saber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber)) ::UnityW<::GlobalNamespace::SaberTypeObject> _saber;

  static inline ::GlobalNamespace::SetSaberBladeParams* New_ctor();

  /// @brief Method Start, addr 0x3b8665c, size 0x104, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> const&
  __cordl_internal_get__propertyTintColorPairs() const;

  constexpr ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*>&
  __cordl_internal_get__propertyTintColorPairs();

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& __cordl_internal_get__saber();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__propertyTintColorPairs(
      ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::SaberTypeObject> value);

  /// @brief Method .ctor, addr 0x3b86760, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _saber, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTypeObject> ____saber;

  /// @brief Field _meshRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> ____propertyTintColorPairs;

  /// @brief Field _colorManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4653 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberBladeParams, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____saber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____meshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____propertyTintColorPairs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____colorManager) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetSaberBladeParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberBladeParams*, "", "SetSaberBladeParams");
NEED_NO_BOX(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, "", "SetSaberBladeParams/PropertyTintColorPair");
