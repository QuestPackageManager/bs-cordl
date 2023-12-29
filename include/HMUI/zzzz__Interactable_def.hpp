#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Interactable)
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace HMUI {
class Interactable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::Interactable);
// Type: HMUI::Interactable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13656))
// CS Name: ::HMUI::Interactable*
class CORDL_TYPE Interactable : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _interactable, offset 0x18, size 0x1
  __declspec(property(get = __get__interactable, put = __set__interactable)) bool _interactable;

  /// @brief Field interactableChangeEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_interactableChangeEvent, put = __set_interactableChangeEvent))::System::Action_2<::HMUI::Interactable*, bool>* interactableChangeEvent;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  constexpr bool& __get__interactable();

  constexpr bool const& __get__interactable() const;

  constexpr void __set__interactable(bool value);

  constexpr ::System::Action_2<::HMUI::Interactable*, bool>*& __get_interactableChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::Interactable*, bool>*> const& __get_interactableChangeEvent() const;

  constexpr void __set_interactableChangeEvent(::System::Action_2<::HMUI::Interactable*, bool>* value);

  /// @brief Method add_interactableChangeEvent addr 0x1fc774c size 0xb0 virtual false final false
  inline void add_interactableChangeEvent(::System::Action_2<::HMUI::Interactable*, bool>* value);

  /// @brief Method remove_interactableChangeEvent addr 0x1fc77fc size 0xb0 virtual false final false
  inline void remove_interactableChangeEvent(::System::Action_2<::HMUI::Interactable*, bool>* value);

  /// @brief Method get_interactable addr 0x1fc78ac size 0x8 virtual false final false
  inline bool get_interactable();

  /// @brief Method set_interactable addr 0x1fc78b4 size 0x3c virtual false final false
  inline void set_interactable(bool value);

  static inline ::HMUI::Interactable* New_ctor();

  /// @brief Method .ctor addr 0x1fc1fb8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interactable(Interactable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interactable(Interactable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interactable();

public:
  /// @brief Field _interactable, offset: 0x18, size: 0x1, def value: None
  bool ____interactable;

  /// @brief Field interactableChangeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::HMUI::Interactable*, bool>* ___interactableChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::Interactable, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::Interactable, ____interactable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::Interactable, ___interactableChangeEvent) == 0x20, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::Interactable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Interactable*, "HMUI", "Interactable");
