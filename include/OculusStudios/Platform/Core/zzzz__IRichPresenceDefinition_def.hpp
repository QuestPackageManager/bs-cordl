#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IRichPresenceDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IRichPresenceDefinition)
namespace OculusStudios::Platform::Core {
struct RichPresenceRuntimeInstance;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class IRichPresenceDefinition;
}
// Write type traits
MARK_REF_T(::OculusStudios::Platform::Core::IRichPresenceDefinition*);
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Core::IRichPresenceDefinition*, "OculusStudios.Platform.Core", "IRichPresenceDefinition");
// [NullableContext(1)]
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IRichPresenceDefinition
class CORDL_TYPE IRichPresenceDefinition {
public:
  // Declarations
  __declspec(property(get = get_activity)) ::StringW activity;

  __declspec(property(get = get_id)) ::StringW id;

  /// @brief [Nullable(2)]
  __declspec(property(get = get_imageIdLarge)) ::StringW imageIdLarge;

  /// @brief [Nullable(2)]
  __declspec(property(get = get_imageIdSmall)) ::StringW imageIdSmall;

  /// @brief Method CreateRuntime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance CreateRuntime();

  /// @brief Method get_activity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_activity();

  /// @brief Method get_id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_id();

  /// [NullableContext(2)]
  /// @brief Method get_imageIdLarge, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_imageIdLarge();

  /// [NullableContext(2)]
  /// @brief Method get_imageIdSmall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_imageIdSmall();

  // Ctor Parameters [CppParam { name: "", ty: "IRichPresenceDefinition", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRichPresenceDefinition(IRichPresenceDefinitionconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22466 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
