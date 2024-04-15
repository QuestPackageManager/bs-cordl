#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockComboController)
namespace GlobalNamespace {
class IComboController;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MockComboController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockComboController);
// Type: ::MockComboController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockComboController*
class CORDL_TYPE MockComboController : public ::System::Object {
public:
  // Declarations
  /// @brief Field comboBreakingEventHappenedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_comboBreakingEventHappenedEvent, put = __cordl_internal_set_comboBreakingEventHappenedEvent))::System::Action* comboBreakingEventHappenedEvent;

  /// @brief Field comboDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_comboDidChangeEvent, put = __cordl_internal_set_comboDidChangeEvent))::System::Action_1<int32_t>* comboDidChangeEvent;

  /// @brief Convert operator to "::GlobalNamespace::IComboController"
  constexpr operator ::GlobalNamespace::IComboController*() noexcept;

  static inline ::GlobalNamespace::MockComboController* New_ctor();

  constexpr ::System::Action*& __cordl_internal_get_comboBreakingEventHappenedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_comboBreakingEventHappenedEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_comboDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_comboDidChangeEvent() const;

  constexpr void __cordl_internal_set_comboBreakingEventHappenedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x2628498, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_comboBreakingEventHappenedEvent, addr 0x2628360, size 0x9c, virtual true, abstract: false, final true
  inline void add_comboBreakingEventHappenedEvent(::System::Action* value);

  /// @brief Method add_comboDidChangeEvent, addr 0x2628200, size 0xb0, virtual true, abstract: false, final true
  inline void add_comboDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Convert to "::GlobalNamespace::IComboController"
  constexpr ::GlobalNamespace::IComboController* i___GlobalNamespace__IComboController() noexcept;

  /// @brief Method remove_comboBreakingEventHappenedEvent, addr 0x26283fc, size 0x9c, virtual true, abstract: false, final true
  inline void remove_comboBreakingEventHappenedEvent(::System::Action* value);

  /// @brief Method remove_comboDidChangeEvent, addr 0x26282b0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_comboDidChangeEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockComboController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockComboController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockComboController(MockComboController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockComboController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockComboController(MockComboController const&) = delete;

  /// @brief Field comboDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___comboDidChangeEvent;

  /// @brief Field comboBreakingEventHappenedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___comboBreakingEventHappenedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockComboController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockComboController, ___comboDidChangeEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockComboController, ___comboBreakingEventHappenedEvent) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockComboController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockComboController*, "", "MockComboController");
