#pragma once
// IWYU pragma private; include "GlobalNamespace/WhiteColorOrAlphaGroupEffectManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(WhiteColorOrAlphaGroupEffectManager)
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
MARK_REF_T(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*, "", "WhiteColorOrAlphaGroupEffectManager");
// Dependencies LightGroup, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WhiteColorOrAlphaGroupEffectManager
class CORDL_TYPE WhiteColorOrAlphaGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _container, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _lightGroup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup)) ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> _lightGroup;

  /// @brief Field _whiteColorOrAlphaEffects, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__whiteColorOrAlphaEffects,
                      put = __cordl_internal_set__whiteColorOrAlphaEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* _whiteColorOrAlphaEffects;

  static inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x5992858, size 0x104, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x59925e8, size 0x270, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> const& __cordl_internal_get__lightGroup() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>>& __cordl_internal_get__lightGroup();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* const& __cordl_internal_get__whiteColorOrAlphaEffects() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*& __cordl_internal_get__whiteColorOrAlphaEffects();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__lightGroup(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> value);

  constexpr void __cordl_internal_set__whiteColorOrAlphaEffects(::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* value);

  /// @brief Method .ctor, addr 0x599295c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhiteColorOrAlphaGroupEffectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhiteColorOrAlphaGroupEffectManager(WhiteColorOrAlphaGroupEffectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhiteColorOrAlphaGroupEffectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhiteColorOrAlphaGroupEffectManager(WhiteColorOrAlphaGroupEffectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5868 };

  /// @brief Field _lightGroup, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> ____lightGroup;

  /// @brief Field _color, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _container, offset: 0x38, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _whiteColorOrAlphaEffects, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* ____whiteColorOrAlphaEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, ____lightGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, ____color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, ____container) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager, ____whiteColorOrAlphaEffects) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
