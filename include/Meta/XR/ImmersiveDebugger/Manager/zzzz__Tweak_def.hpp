#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/Tweak.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Hook_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Tweak)
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class Tweak;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::Tweak);
// Dependencies Meta.XR.ImmersiveDebugger.Manager.Hook
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.Tweak
class CORDL_TYPE Tweak : public ::Meta::XR::ImmersiveDebugger::Manager::Hook {
public:
  // Declarations
  __declspec(property(get = get_Tween, put = set_Tween)) float_t Tween;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak* New_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                        ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method .ctor, addr 0x58b6330, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method get_Tween, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_Tween();

  /// @brief Method set_Tween, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Tween(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tweak();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tweak", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tweak(Tweak&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tweak", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tweak(Tweak const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18407 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::Tweak, 0x40>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::Tweak);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::Tweak*, "Meta.XR.ImmersiveDebugger.Manager", "Tweak");
