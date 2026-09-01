#pragma once
// IWYU pragma private; include "GlobalNamespace\CreditsScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
CORDL_MODULE_EXPORT(CreditsScenesTransitionSetupData)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreditsScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreditsScenesTransitionSetupData*, "", "CreditsScenesTransitionSetupData");
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsScenesTransitionSetupData
class CORDL_TYPE CreditsScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  /// @brief Field didFinishEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* didFinishEvent;

  /// @brief Method Finish, addr 0x590e1e4, size 0x20, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Init, addr 0x590e124, size 0xc0, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::CreditsScenesTransitionSetupData* New_ctor();

  constexpr ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* value);

  /// @brief Method .ctor, addr 0x590e204, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x590dfa4, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x590e064, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsScenesTransitionSetupData(CreditsScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsScenesTransitionSetupData(CreditsScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6736 };

  /// @brief Field didFinishEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupData*>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsScenesTransitionSetupData, ___didFinishEvent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreditsScenesTransitionSetupData) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
