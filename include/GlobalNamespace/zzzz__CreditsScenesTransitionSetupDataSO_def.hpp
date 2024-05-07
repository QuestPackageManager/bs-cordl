#pragma once
// IWYU pragma private; include "GlobalNamespace/CreditsScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(CreditsScenesTransitionSetupDataSO)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CreditsScenesTransitionSetupDataSO);
// Type: ::CreditsScenesTransitionSetupDataSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CreditsScenesTransitionSetupDataSO*
class CORDL_TYPE CreditsScenesTransitionSetupDataSO : public ::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field didFinishEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent))::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* didFinishEvent;

  /// @brief Method Finish, addr 0x26a2df4, size 0x20, virtual false, abstract: false, final false
  inline void Finish();

  static inline ::GlobalNamespace::CreditsScenesTransitionSetupDataSO* New_ctor();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* value);

  /// @brief Method .ctor, addr 0x26a2e14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x26a2c94, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* value);

  /// @brief Method remove_didFinishEvent, addr 0x26a2d44, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsScenesTransitionSetupDataSO(CreditsScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsScenesTransitionSetupDataSO(CreditsScenesTransitionSetupDataSO const&) = delete;

  /// @brief Field didFinishEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsScenesTransitionSetupDataSO, ___didFinishEvent) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreditsScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsScenesTransitionSetupDataSO*, "", "CreditsScenesTransitionSetupDataSO");
