#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VisibilityChecker)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class VisibilityChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VisibilityChecker);
// Type: ::VisibilityChecker
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13916))
// CS Name: ::VisibilityChecker*
class CORDL_TYPE VisibilityChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field OnBecameVisibleEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_OnBecameVisibleEvent, put = __set_OnBecameVisibleEvent))::System::Action* OnBecameVisibleEvent;

  /// @brief Field OnBecameInvisibleEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_OnBecameInvisibleEvent, put = __set_OnBecameInvisibleEvent))::System::Action* OnBecameInvisibleEvent;

  constexpr ::System::Action*& __get_OnBecameVisibleEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_OnBecameVisibleEvent() const;

  constexpr void __set_OnBecameVisibleEvent(::System::Action* value);

  constexpr ::System::Action*& __get_OnBecameInvisibleEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_OnBecameInvisibleEvent() const;

  constexpr void __set_OnBecameInvisibleEvent(::System::Action* value);

  /// @brief Method add_OnBecameVisibleEvent addr 0x1f9c048 size 0x9c virtual false final false
  inline void add_OnBecameVisibleEvent(::System::Action* value);

  /// @brief Method remove_OnBecameVisibleEvent addr 0x1f9c0e4 size 0x9c virtual false final false
  inline void remove_OnBecameVisibleEvent(::System::Action* value);

  /// @brief Method add_OnBecameInvisibleEvent addr 0x1f9c180 size 0x9c virtual false final false
  inline void add_OnBecameInvisibleEvent(::System::Action* value);

  /// @brief Method remove_OnBecameInvisibleEvent addr 0x1f9c21c size 0x9c virtual false final false
  inline void remove_OnBecameInvisibleEvent(::System::Action* value);

  /// @brief Method OnBecameVisible addr 0x1f9c2b8 size 0x1c virtual false final false
  inline void OnBecameVisible();

  /// @brief Method OnBecameInvisible addr 0x1f9c2d4 size 0x1c virtual false final false
  inline void OnBecameInvisible();

  static inline ::GlobalNamespace::VisibilityChecker* New_ctor();

  /// @brief Method .ctor addr 0x1f9c2f0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VisibilityChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisibilityChecker(VisibilityChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisibilityChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisibilityChecker(VisibilityChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisibilityChecker();

public:
  /// @brief Field OnBecameVisibleEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___OnBecameVisibleEvent;

  /// @brief Field OnBecameInvisibleEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___OnBecameInvisibleEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VisibilityChecker, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VisibilityChecker, ___OnBecameVisibleEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisibilityChecker, ___OnBecameInvisibleEvent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VisibilityChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VisibilityChecker*, "", "VisibilityChecker");
