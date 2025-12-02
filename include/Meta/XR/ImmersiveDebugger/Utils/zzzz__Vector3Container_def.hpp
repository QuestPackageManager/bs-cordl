#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/Vector3Container.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueContainer_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Vector3Container)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
class Vector3Container;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::Vector3Container);
// Dependencies Meta.XR.ImmersiveDebugger.Utils.ValueContainer`1<T>, UnityEngine.Vector3
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.Vector3Container
class CORDL_TYPE Vector3Container : public ::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<::UnityEngine::Vector3> {
public:
  // Declarations
  static inline ::Meta::XR::ImmersiveDebugger::Utils::Vector3Container* New_ctor();

  /// @brief Method .ctor, addr 0x5832f20, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Container();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Container", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Container(Vector3Container&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Container", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Container(Vector3Container const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::Vector3Container, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::Vector3Container);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::Vector3Container*, "Meta.XR.ImmersiveDebugger.Utils", "Vector3Container");
