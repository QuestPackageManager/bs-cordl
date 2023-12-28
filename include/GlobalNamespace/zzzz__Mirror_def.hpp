#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mirror)
namespace UnityEngine {
class MeshRenderer;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
// Forward declare root types
namespace GlobalNamespace {
class Mirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Mirror);
// Type: ::Mirror
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15296))
// CS Name: ::Mirror*
class CORDL_TYPE Mirror : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mirrorRenderer, offset 0x18, size 0x8
  __declspec(property(get = __get__mirrorRenderer, put = __set__mirrorRenderer))::GlobalNamespace::MirrorRendererSO* _mirrorRenderer;

  /// @brief Field _renderer, offset 0x20, size 0x8
  __declspec(property(get = __get__renderer, put = __set__renderer))::UnityEngine::MeshRenderer* _renderer;

  /// @brief Field _mirrorMaterial, offset 0x28, size 0x8
  __declspec(property(get = __get__mirrorMaterial, put = __set__mirrorMaterial))::UnityEngine::Material* _mirrorMaterial;

  /// @brief Field _noMirrorMaterial, offset 0x30, size 0x8
  __declspec(property(get = __get__noMirrorMaterial, put = __set__noMirrorMaterial))::UnityEngine::Material* _noMirrorMaterial;

  /// @brief Field <isEnabled>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __get__isEnabled_k__BackingField, put = __set__isEnabled_k__BackingField)) bool _isEnabled_k__BackingField;

  /// @brief Field mirrorDidChangeEnabledStateEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_mirrorDidChangeEnabledStateEvent, put = __set_mirrorDidChangeEnabledStateEvent))::System::Action_1<bool>* mirrorDidChangeEnabledStateEvent;

  /// @brief Field _texturePropertyID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__texturePropertyID, put = setStaticF__texturePropertyID)) int32_t _texturePropertyID;

  __declspec(property(get = get_mirrorMaterial))::UnityEngine::Material* mirrorMaterial;

  __declspec(property(get = get_noMirrorMaterial))::UnityEngine::Material* noMirrorMaterial;

  __declspec(property(get = get_isEnabled, put = set_isEnabled)) bool isEnabled;

  constexpr ::GlobalNamespace::MirrorRendererSO*& __get__mirrorRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirrorRendererSO*> const& __get__mirrorRenderer() const;

  constexpr void __set__mirrorRenderer(::GlobalNamespace::MirrorRendererSO* value);

  constexpr ::UnityEngine::MeshRenderer*& __get__renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__renderer() const;

  constexpr void __set__renderer(::UnityEngine::MeshRenderer* value);

  constexpr ::UnityEngine::Material*& __get__mirrorMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__mirrorMaterial() const;

  constexpr void __set__mirrorMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__noMirrorMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__noMirrorMaterial() const;

  constexpr void __set__noMirrorMaterial(::UnityEngine::Material* value);

  constexpr bool& __get__isEnabled_k__BackingField();

  constexpr bool const& __get__isEnabled_k__BackingField() const;

  constexpr void __set__isEnabled_k__BackingField(bool value);

  constexpr ::System::Action_1<bool>*& __get_mirrorDidChangeEnabledStateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_mirrorDidChangeEnabledStateEvent() const;

  constexpr void __set_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value);

  static inline void setStaticF__texturePropertyID(int32_t value);

  static inline int32_t getStaticF__texturePropertyID();

  /// @brief Method get_mirrorMaterial addr 0x2809140 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_mirrorMaterial();

  /// @brief Method get_noMirrorMaterial addr 0x2809148 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_noMirrorMaterial();

  /// @brief Method get_isEnabled addr 0x2809150 size 0x8 virtual false final false
  inline bool get_isEnabled();

  /// @brief Method set_isEnabled addr 0x2809158 size 0xc virtual false final false
  inline void set_isEnabled(bool value);

  /// @brief Method add_mirrorDidChangeEnabledStateEvent addr 0x2809164 size 0xb0 virtual false final false
  inline void add_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_mirrorDidChangeEnabledStateEvent addr 0x2809214 size 0xb0 virtual false final false
  inline void remove_mirrorDidChangeEnabledStateEvent(::System::Action_1<bool>* value);

  /// @brief Method Update addr 0x28092c4 size 0x18 virtual false final false
  inline void Update();

  /// @brief Method OnWillRenderObject addr 0x2809468 size 0x25c virtual false final false
  inline void OnWillRenderObject();

  /// @brief Method ChangeMirrorEnabledState addr 0x28096c4 size 0x38 virtual false final false
  inline void ChangeMirrorEnabledState(bool newIsEnabled);

  static inline ::GlobalNamespace::Mirror* New_ctor();

  /// @brief Method .ctor addr 0x2809f04 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Mirror", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mirror(Mirror&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mirror", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mirror(Mirror const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mirror();

public:
  /// @brief Field _mirrorRenderer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MirrorRendererSO* ____mirrorRenderer;

  /// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____renderer;

  /// @brief Field _mirrorMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* ____mirrorMaterial;

  /// @brief Field _noMirrorMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Material* ____noMirrorMaterial;

  /// @brief Field <isEnabled>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____isEnabled_k__BackingField;

  /// @brief Field mirrorDidChangeEnabledStateEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<bool>* ___mirrorDidChangeEnabledStateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Mirror, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Mirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Mirror*, "", "Mirror");
