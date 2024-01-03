#pragma once
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
class __SetSaberBladeParams__PropertyTintColorPair;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
class ColorManager;
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5304))
// CS Name: ::SetSaberBladeParams::PropertyTintColorPair*
class CORDL_TYPE __SetSaberBladeParams__PropertyTintColorPair : public ::System::Object {
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

  static inline ::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair* New_ctor();

  /// @brief Method .ctor, addr 0x2264988, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SetSaberBladeParams__PropertyTintColorPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SetSaberBladeParams__PropertyTintColorPair(__SetSaberBladeParams__PropertyTintColorPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SetSaberBladeParams__PropertyTintColorPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SetSaberBladeParams__PropertyTintColorPair(__SetSaberBladeParams__PropertyTintColorPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SetSaberBladeParams__PropertyTintColorPair();

public:
  /// @brief Field tintColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___tintColor;

  /// @brief Field property, offset: 0x20, size: 0x8, def value: None
  ::StringW ___property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair, ___tintColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair, ___property) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SetSaberBladeParams
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5305))
// CS Name: ::SetSaberBladeParams*
class CORDL_TYPE SetSaberBladeParams : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PropertyTintColorPair = ::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair;

  /// @brief Field _saber, offset 0x18, size 0x8
  __declspec(property(get = __get__saber, put = __set__saber))::GlobalNamespace::SaberTypeObject* _saber;

  /// @brief Field _meshRenderer, offset 0x20, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset 0x28, size 0x8
  __declspec(property(get = __get__propertyTintColorPairs,
                      put = __set__propertyTintColorPairs))::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*,
                                                                    ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> _propertyTintColorPairs;

  /// @brief Field _colorManager, offset 0x30, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  constexpr ::GlobalNamespace::SaberTypeObject*& __get__saber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> const& __get__saber() const;

  constexpr void __set__saber(::GlobalNamespace::SaberTypeObject* value);

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*>& __get__propertyTintColorPairs();

  constexpr ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> const&
  __get__propertyTintColorPairs() const;

  constexpr void
  __set__propertyTintColorPairs(::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  /// @brief Method Start, addr 0x226487c, size 0x104, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::SetSaberBladeParams* New_ctor();

  /// @brief Method .ctor, addr 0x2264980, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberBladeParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetSaberBladeParams(SetSaberBladeParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetSaberBladeParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetSaberBladeParams(SetSaberBladeParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetSaberBladeParams();

public:
  /// @brief Field _saber, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SaberTypeObject* ____saber;

  /// @brief Field _meshRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

  /// @brief Field _propertyTintColorPairs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, ::Array<::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*>*> ____propertyTintColorPairs;

  /// @brief Field _colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberBladeParams, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____saber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____meshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____propertyTintColorPairs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetSaberBladeParams, ____colorManager) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetSaberBladeParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberBladeParams*, "", "SetSaberBladeParams");
NEED_NO_BOX(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SetSaberBladeParams__PropertyTintColorPair*, "", "SetSaberBladeParams/PropertyTintColorPair");
