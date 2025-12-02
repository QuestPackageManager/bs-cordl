#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IRichPresenceDefinition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IRichPresenceDefinition)
namespace OculusStudios::Platform::Core {
struct RichPresenceRuntimeInstance;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class IRichPresenceDefinition;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::IRichPresenceDefinition);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IRichPresenceDefinition
class CORDL_TYPE IRichPresenceDefinition {
public:
  // Declarations
  __declspec(property(get = get_activity)) ::StringW activity;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_imageIdLarge)) ::StringW imageIdLarge;

  __declspec(property(get = get_imageIdSmall)) ::StringW imageIdSmall;

  /// @brief Method CreateRuntime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance CreateRuntime();

  /// @brief Method get_activity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_activity();

  /// @brief Method get_id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_imageIdLarge, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_imageIdLarge();

  /// @brief Method get_imageIdSmall, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_imageIdSmall();

  // Ctor Parameters [CppParam { name: "", ty: "IRichPresenceDefinition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRichPresenceDefinition(IRichPresenceDefinition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22169 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::IRichPresenceDefinition);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::IRichPresenceDefinition*, "OculusStudios.Platform.Core", "IRichPresenceDefinition");
