#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/AssignableOf_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__AssignableOf_1_def.hpp"
CORDL_MODULE_EXPORT(AssignableOf_2)
// Forward declare root types
namespace OculusStudios::Platform::Core {
template <typename TBase, typename TDerived> class AssignableOf_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::OculusStudios::Platform::Core::AssignableOf_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::OculusStudios::Platform::Core::AssignableOf_2, "OculusStudios.Platform.Core", "AssignableOf`2");
// Dependencies OculusStudios.Platform.Core.AssignableOf`1<TBase>
namespace OculusStudios::Platform::Core {
// cpp template
template <typename TBase, typename TDerived>
// Is value type: false
// CS Name: OculusStudios.Platform.Core.AssignableOf`2<TBase,TDerived>
class CORDL_TYPE AssignableOf_2 : public ::OculusStudios::Platform::Core::AssignableOf_1<TBase> {
public:
  // Declarations
  static inline ::OculusStudios::Platform::Core::AssignableOf_2<TBase, TDerived>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssignableOf_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssignableOf_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssignableOf_2(AssignableOf_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssignableOf_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssignableOf_2(AssignableOf_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22406 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
