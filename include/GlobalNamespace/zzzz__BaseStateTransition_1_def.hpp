#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseStateTransition_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_def.hpp"
CORDL_MODULE_EXPORT(BaseStateTransition_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class BaseStateTransition_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BaseStateTransition_1);
// Type: ::BaseStateTransition`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BaseStateTransition`1<T>*
class CORDL_TYPE BaseStateTransition_1 : public ::GlobalNamespace::BaseStateTransition {
public:
  // Declarations
  /// @brief Field _component, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__component, put = __cordl_internal_set__component)) T _component;

  static inline ::GlobalNamespace::BaseStateTransition_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get__component() const;

  constexpr T& __cordl_internal_get__component();

  constexpr void __cordl_internal_set__component(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseStateTransition_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseStateTransition_1(BaseStateTransition_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseStateTransition_1(BaseStateTransition_1 const&) = delete;

  /// @brief Field _component, offset: 0x20, size: 0x8, def value: None
  T ____component;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BaseStateTransition_1, "", "BaseStateTransition`1");
