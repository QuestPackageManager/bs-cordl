#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(EnableOnVisible)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableOnVisible;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnableOnVisible);
// Type: ::EnableOnVisible
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnableOnVisible*
class CORDL_TYPE EnableOnVisible : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field VisibilityChangedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_VisibilityChangedEvent, put = __cordl_internal_set_VisibilityChangedEvent))::System::Action_1<bool>* VisibilityChangedEvent;

  /// @brief Field _components, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__components,
                      put = __cordl_internal_set__components))::ArrayW<::UnityW<::UnityEngine::Behaviour>, ::Array<::UnityW<::UnityEngine::Behaviour>>*> _components;

  /// @brief Method Awake, addr 0x23dd40c, size 0x64, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::EnableOnVisible* New_ctor();

  /// @brief Method OnBecameInvisible, addr 0x23dd4f8, size 0x88, virtual false, abstract: false, final false
  inline void OnBecameInvisible();

  /// @brief Method OnBecameVisible, addr 0x23dd470, size 0x88, virtual false, abstract: false, final false
  inline void OnBecameVisible();

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_VisibilityChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_VisibilityChangedEvent() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>, ::Array<::UnityW<::UnityEngine::Behaviour>>*> const& __cordl_internal_get__components() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>, ::Array<::UnityW<::UnityEngine::Behaviour>>*>& __cordl_internal_get__components();

  constexpr void __cordl_internal_set_VisibilityChangedEvent(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set__components(::ArrayW<::UnityW<::UnityEngine::Behaviour>, ::Array<::UnityW<::UnityEngine::Behaviour>>*> value);

  /// @brief Method .ctor, addr 0x23dd580, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_VisibilityChangedEvent, addr 0x23dd2ac, size 0xb0, virtual false, abstract: false, final false
  inline void add_VisibilityChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_VisibilityChangedEvent, addr 0x23dd35c, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief Field VisibilityChangedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<bool>* ___VisibilityChangedEvent;

  /// @brief Field _components, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Behaviour>, ::Array<::UnityW<::UnityEngine::Behaviour>>*> ____components;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableOnVisible, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableOnVisible, ___VisibilityChangedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableOnVisible, ____components) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableOnVisible);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableOnVisible*, "", "EnableOnVisible");
