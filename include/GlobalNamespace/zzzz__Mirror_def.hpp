#pragma once
// IWYU pragma private; include "GlobalNamespace/Mirror.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mirror)
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class Mirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Mirror);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Mirror
class CORDL_TYPE Mirror : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <isEnabled>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isEnabled_k__BackingField, put = __cordl_internal_set__isEnabled_k__BackingField)) bool _isEnabled_k__BackingField;

  /// @brief Field _mirrorMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorMaterial, put = __cordl_internal_set__mirrorMaterial)) ::UnityW<::UnityEngine::Material> _mirrorMaterial;

  /// @brief Field _mirrorRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer)) ::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _noMirrorMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__noMirrorMaterial, put = __cordl_internal_set__noMirrorMaterial)) ::UnityW<::UnityEngine::Material> _noMirrorMaterial;

  /// @brief Field _renderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer)) ::UnityW<::UnityEngine::MeshRenderer> _renderer;

  /// @brief Field _texturePropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__texturePropertyID, put = setStaticF__texturePropertyID)) int32_t _texturePropertyID;

  __declspec(property(get = get_isEnabled, put = set_isEnabled)) bool isEnabled;

  /// @brief Field mirrorDidChangeEnabledStateEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mirrorDidChangeEnabledStateEvent,
                      put = __cordl_internal_set_mirrorDidChangeEnabledStateEvent)) ::System::Action_1<bool>* mirrorDidChangeEnabledStateEvent;

  __declspec(property(get = get_mirrorMaterial)) ::UnityW<::UnityEngine::Material> mirrorMaterial;

  __declspec(property(get = get_noMirrorMaterial)) ::UnityW<::UnityEngine::Material> noMirrorMaterial;

  /// @brief Method ChangeMirrorEnabledState, addr 0x408282c, size 0x3c, virtual false, abstract: false, final false
  inline void ChangeMirrorEnabledState(bool newIsEnabled);

  static inline ::GlobalNamespace::Mirror* New_ctor();

  /// @brief Method OnWillRenderObject, addr 0x408256c, size 0x2c0, virtual false, abstract: false, final false
  inline void OnWillRenderObject();

  /// @brief Method Update, addr 0x40823c8, size 0x18, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__isEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isEnabled_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__mirrorMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__mirrorMaterial();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& __cordl_internal_get__mirrorRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& __cordl_internal_get__mirrorRenderer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__noMirrorMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__noMirrorMaterial();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__renderer();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_mirrorDidChangeEnabledStateEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_mirrorDidChangeEnabledStateEvent();

  constexpr void __cordl_internal_set__isEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__mirrorMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  constexpr void __cordl_internal_set__noMirrorMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x40830e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_mirrorDidChangeEnabledStateEvent, addr 0x4082268, size 0xb0, virtual false, abstract: false, final false
  inline void add_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value);

  static inline int32_t getStaticF__texturePropertyID();

  /// @brief Method get_isEnabled, addr 0x4082254, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEnabled();

  /// @brief Method get_mirrorMaterial, addr 0x4082244, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_mirrorMaterial();

  /// @brief Method get_noMirrorMaterial, addr 0x408224c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_noMirrorMaterial();

  /// @brief Method remove_mirrorDidChangeEnabledStateEvent, addr 0x4082318, size 0xb0, virtual false, abstract: false, final false
  inline void remove_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value);

  static inline void setStaticF__texturePropertyID(int32_t value);

  /// @brief Method set_isEnabled, addr 0x408225c, size 0xc, virtual false, abstract: false, final false
  inline void set_isEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mirror();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Mirror", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mirror(Mirror&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mirror", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mirror(Mirror const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17902 };

  /// @brief Field _mirrorRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererSO> ____mirrorRenderer;

  /// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____renderer;

  /// @brief Field _mirrorMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____mirrorMaterial;

  /// @brief Field _noMirrorMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____noMirrorMaterial;

  /// @brief Field <isEnabled>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____isEnabled_k__BackingField;

  /// @brief Field mirrorDidChangeEnabledStateEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<bool>* ___mirrorDidChangeEnabledStateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mirror, ____mirrorRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mirror, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mirror, ____mirrorMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mirror, ____noMirrorMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mirror, ____isEnabled_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mirror, ___mirrorDidChangeEnabledStateEvent) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Mirror, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Mirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Mirror*, "", "Mirror");
