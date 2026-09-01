#pragma once
// IWYU pragma private; include "GlobalNamespace\EnableOnVisible.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(EnableOnVisible)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableOnVisible;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnableOnVisible*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnableOnVisible*, "", "EnableOnVisible");
// Dependencies UnityEngine.Behaviour, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnableOnVisible
class CORDL_TYPE EnableOnVisible : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field VisibilityChangedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_VisibilityChangedEvent, put = __cordl_internal_set_VisibilityChangedEvent)) ::System::Action_1<bool>* VisibilityChangedEvent;

  /// @brief Field _components, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__components, put = __cordl_internal_set__components)) ::ArrayW<::UnityW<::UnityEngine::Behaviour>> _components;

  /// @brief Method Awake, addr 0x585653c, size 0x58, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::EnableOnVisible* New_ctor();

  /// @brief Method OnBecameInvisible, addr 0x5856610, size 0x7c, virtual false, abstract: false, final false
  inline void OnBecameInvisible();

  /// @brief Method OnBecameVisible, addr 0x5856594, size 0x7c, virtual false, abstract: false, final false
  inline void OnBecameVisible();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_VisibilityChangedEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_VisibilityChangedEvent();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& __cordl_internal_get__components() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& __cordl_internal_get__components();

  constexpr void __cordl_internal_set_VisibilityChangedEvent(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set__components(::ArrayW<::UnityW<::UnityEngine::Behaviour>> value);

  /// @brief Method .ctor, addr 0x585668c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_VisibilityChangedEvent, addr 0x58563bc, size 0xc0, virtual false, abstract: false, final false
  inline void add_VisibilityChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_VisibilityChangedEvent, addr 0x585647c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_VisibilityChangedEvent(::System::Action_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableOnVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableOnVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableOnVisible(EnableOnVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableOnVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableOnVisible(EnableOnVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21408 };

  /// @brief Field VisibilityChangedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<bool>* ___VisibilityChangedEvent;

  /// @brief Field _components, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Behaviour>> ____components;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnableOnVisible, ___VisibilityChangedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableOnVisible, ____components) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnableOnVisible) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
