#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(WhiteColorOrAlphaGroupEffectManager)
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class WhiteColorOrAlphaGroupEffect;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class WhiteColorOrAlphaGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager);
// Type: ::WhiteColorOrAlphaGroupEffectManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4927))
// CS Name: ::WhiteColorOrAlphaGroupEffectManager*
class CORDL_TYPE WhiteColorOrAlphaGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightGroup, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroup, put = __set__lightGroup))::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> _lightGroup;

  /// @brief Field _color, offset 0x20, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _container, offset 0x30, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _whiteColorOrAlphaEffects, offset 0x38, size 0x8
  __declspec(property(get = __get__whiteColorOrAlphaEffects,
                      put = __set__whiteColorOrAlphaEffects))::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* _whiteColorOrAlphaEffects;

  constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*>& __get__lightGroup();

  constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> const& __get__lightGroup() const;

  constexpr void __set__lightGroup(::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*& __get__whiteColorOrAlphaEffects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*> const& __get__whiteColorOrAlphaEffects() const;

  constexpr void __set__whiteColorOrAlphaEffects(::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* value);

  /// @brief Method Start, addr 0x23a93ec, size 0x280, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23a966c, size 0x148, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager* New_ctor();

  /// @brief Method .ctor, addr 0x23a97b4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhiteColorOrAlphaGroupEffectManager(WhiteColorOrAlphaGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhiteColorOrAlphaGroupEffectManager(WhiteColorOrAlphaGroupEffectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhiteColorOrAlphaGroupEffectManager();

public:
  /// @brief Field _lightGroup, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> ____lightGroup;

  /// @brief Field _color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _container, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _whiteColorOrAlphaEffects, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* ____whiteColorOrAlphaEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, ____lightGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, ____color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, ____container) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, ____whiteColorOrAlphaEffects) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*, "", "WhiteColorOrAlphaGroupEffectManager");
