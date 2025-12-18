#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/Vector2Container.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__ValueContainer_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Vector2Container)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
class Vector2Container;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::Vector2Container);
// Dependencies Meta.XR.ImmersiveDebugger.Utils.ValueContainer`1<T>, UnityEngine.Vector2
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.Vector2Container
class CORDL_TYPE Vector2Container : public ::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<::UnityEngine::Vector2> {
public:
  // Declarations
  static inline ::Meta::XR::ImmersiveDebugger::Utils::Vector2Container* New_ctor();

  /// @brief Method .ctor, addr 0x589963c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Container();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2Container", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Container(Vector2Container&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Container", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Container(Vector2Container const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::Vector2Container, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::Vector2Container);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::Vector2Container*, "Meta.XR.ImmersiveDebugger.Utils", "Vector2Container");
