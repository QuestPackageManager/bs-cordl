#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroup)
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroup);
// Type: ::LightGroup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14509))
// CS Name: ::LightGroup*
class CORDL_TYPE LightGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightGroupSO, offset 0x18, size 0x8
  __declspec(property(get = __get__lightGroupSO, put = __set__lightGroupSO))::GlobalNamespace::LightGroupSO* _lightGroupSO;

  /// @brief Field respawnEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_respawnEvent, put = __set_respawnEvent))::System::Action_1<::UnityEngine::GameObject*>* respawnEvent;

  /// @brief Field didRefreshContentEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_didRefreshContentEvent, put = __set_didRefreshContentEvent))::System::Action_1<::UnityEngine::GameObject*>* didRefreshContentEvent;

  __declspec(property(get = get_lightGroupSO))::GlobalNamespace::LightGroupSO* lightGroupSO;

  __declspec(property(get = get_numberOfElements)) int32_t numberOfElements;

  __declspec(property(get = get_startLightId)) int32_t startLightId;

  __declspec(property(get = get_groupId)) int32_t groupId;

  __declspec(property(get = get_sameIdElements)) int32_t sameIdElements;

  __declspec(property(get = get_ignoreLightGroupEffectManager)) bool ignoreLightGroupEffectManager;

  constexpr ::GlobalNamespace::LightGroupSO*& __get__lightGroupSO();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& __get__lightGroupSO() const;

  constexpr void __set__lightGroupSO(::GlobalNamespace::LightGroupSO* value);

  constexpr ::System::Action_1<::UnityEngine::GameObject*>*& __get_respawnEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::GameObject*>*> const& __get_respawnEvent() const;

  constexpr void __set_respawnEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  constexpr ::System::Action_1<::UnityEngine::GameObject*>*& __get_didRefreshContentEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::GameObject*>*> const& __get_didRefreshContentEvent() const;

  constexpr void __set_didRefreshContentEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  /// @brief Method get_lightGroupSO addr 0x210ddf8 size 0x8 virtual false final false
  inline ::GlobalNamespace::LightGroupSO* get_lightGroupSO();

  /// @brief Method get_numberOfElements addr 0x210de00 size 0x7c virtual false final false
  inline int32_t get_numberOfElements();

  /// @brief Method get_startLightId addr 0x210de7c size 0x7c virtual false final false
  inline int32_t get_startLightId();

  /// @brief Method get_groupId addr 0x210def8 size 0x7c virtual false final false
  inline int32_t get_groupId();

  /// @brief Method get_sameIdElements addr 0x210df74 size 0x7c virtual false final false
  inline int32_t get_sameIdElements();

  /// @brief Method get_ignoreLightGroupEffectManager addr 0x210dff0 size 0x84 virtual false final false
  inline bool get_ignoreLightGroupEffectManager();

  /// @brief Method add_respawnEvent addr 0x210e074 size 0xb0 virtual false final false
  inline void add_respawnEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  /// @brief Method remove_respawnEvent addr 0x210e124 size 0xb0 virtual false final false
  inline void remove_respawnEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  /// @brief Method add_didRefreshContentEvent addr 0x210e1d4 size 0xb0 virtual false final false
  inline void add_didRefreshContentEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  /// @brief Method remove_didRefreshContentEvent addr 0x210e284 size 0xb0 virtual false final false
  inline void remove_didRefreshContentEvent(::System::Action_1<::UnityEngine::GameObject*>* value);

  static inline ::GlobalNamespace::LightGroup* New_ctor();

  /// @brief Method .ctor addr 0x210e334 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroup(LightGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroup(LightGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroup();

public:
  /// @brief Field _lightGroupSO, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LightGroupSO* ____lightGroupSO;

  /// @brief Field respawnEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::GameObject*>* ___respawnEvent;

  /// @brief Field didRefreshContentEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::GameObject*>* ___didRefreshContentEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroup, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroup*, "", "LightGroup");
