#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/IInspector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInspector)
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IInspector;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::IInspector);
// Dependencies
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.IInspector
class CORDL_TYPE IInspector {
public:
  // Declarations
  /// @brief Method GetMember, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* GetMember(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method RegisterMember, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* RegisterMember(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  // Ctor Parameters [CppParam { name: "", ty: "IInspector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInspector(IInspector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18335 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::IInspector);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*, "Meta.XR.ImmersiveDebugger.UserInterface", "IInspector");
