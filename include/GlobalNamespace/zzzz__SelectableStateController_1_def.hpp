#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectableStateController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
CORDL_MODULE_EXPORT(SelectableStateController_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class SelectableStateController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SelectableStateController_1);
// Dependencies SelectableStateController
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: SelectableStateController`1<T>
class CORDL_TYPE SelectableStateController_1 : public ::GlobalNamespace::SelectableStateController {
public:
  // Declarations
  /// @brief Field _component, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__component, put = __cordl_internal_set__component)) T _component;

  static inline ::GlobalNamespace::SelectableStateController_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get__component() const;

  constexpr T& __cordl_internal_get__component();

  constexpr void __cordl_internal_set__component(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectableStateController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectableStateController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectableStateController_1(SelectableStateController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectableStateController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectableStateController_1(SelectableStateController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18205 };

  /// @brief Field _component, offset: 0x38, size: 0x8, def value: None
  T ____component;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SelectableStateController_1, "", "SelectableStateController`1");
