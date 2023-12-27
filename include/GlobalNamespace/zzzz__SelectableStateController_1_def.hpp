#pragma once
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
// Type: ::SelectableStateController`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5456))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5457))
// CS Name: ::SelectableStateController`1<T>*
class CORDL_TYPE SelectableStateController_1 : public ::GlobalNamespace::SelectableStateController {
public:
  // Declarations
  /// @brief Field _component, offset 0x30, size 0x8
  __declspec(property(get = __get__component, put = __set__component)) T _component;

  constexpr T& __get__component();

  constexpr T const& __get__component() const;

  constexpr void __set__component(T value);

  static inline ::GlobalNamespace::SelectableStateController_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SelectableStateController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectableStateController_1(SelectableStateController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectableStateController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectableStateController_1(SelectableStateController_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectableStateController_1();

public:
  /// @brief Field _component, offset: 0x30, size: 0x8, def value: None
  T ____component;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SelectableStateController_1, "", "SelectableStateController`1");
