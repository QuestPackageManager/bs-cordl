#pragma once
// IWYU pragma private; include "HMUI/ModalViewBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModalViewBase)
namespace System {
class Action;
}
// Forward declare root types
namespace HMUI {
class ModalViewBase;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ModalViewBase);
// Type: HMUI::ModalViewBase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ModalViewBase*
class CORDL_TYPE ModalViewBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Hide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Hide(bool animated, ::System::Action* finishedCallback);

  static inline ::HMUI::ModalViewBase* New_ctor();

  /// @brief Method Show, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Show(bool animated, bool moveToCenter, ::System::Action* finishedCallback);

  /// @brief Method .ctor, addr 0x398fd40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_blockerClickedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_blockerClickedEvent(::System::Action* value);

  /// @brief Method remove_blockerClickedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_blockerClickedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModalViewBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModalViewBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModalViewBase(ModalViewBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModalViewBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModalViewBase(ModalViewBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16037 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ModalViewBase, 0x20>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ModalViewBase);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ModalViewBase*, "HMUI", "ModalViewBase");
