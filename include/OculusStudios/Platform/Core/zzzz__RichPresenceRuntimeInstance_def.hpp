#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/RichPresenceRuntimeInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__PartyInfo_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestamp_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RichPresenceRuntimeInstance)
namespace OculusStudios::Platform::Core {
class IRichPresenceDefinition;
}
namespace OculusStudios::Platform::Core {
struct PartyInfo;
}
namespace OculusStudios::Platform::Core {
struct RichPresenceTimestamp;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
struct RichPresenceRuntimeInstance;
}
// Write type traits
MARK_VAL_T(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance);
// Dependencies OculusStudios.Platform.Core.PartyInfo, OculusStudios.Platform.Core.RichPresenceTimestamp, System.Nullable`1<T>
namespace OculusStudios::Platform::Core {
// Is value type: true
// CS Name: OculusStudios.Platform.Core.RichPresenceRuntimeInstance
struct CORDL_TYPE RichPresenceRuntimeInstance {
public:
  // Declarations
  __declspec(property(get = get_definition)) ::OculusStudios::Platform::Core::IRichPresenceDefinition* definition;

  __declspec(property(get = get_partyInfo)) ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> partyInfo;

  __declspec(property(get = get_state)) ::StringW state;

  __declspec(property(get = get_timestamp)) ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> timestamp;

  /// @brief Method .ctor, addr 0x5d7ff8c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::Platform::Core::IRichPresenceDefinition* definition, ::StringW state, ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> partyInfo,
                    ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> timestamp);

  /// @brief Method get_definition, addr 0x5d7ff5c, size 0x8, virtual false, abstract: false, final false
  inline ::OculusStudios::Platform::Core::IRichPresenceDefinition* get_definition();

  /// @brief Method get_partyInfo, addr 0x5d7ff6c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> get_partyInfo();

  /// @brief Method get_state, addr 0x5d7ff64, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_state();

  /// @brief Method get_timestamp, addr 0x5d7ff78, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> get_timestamp();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresenceRuntimeInstance();

  // Ctor Parameters [CppParam { name: "_definition_k__BackingField", ty: "::OculusStudios::Platform::Core::IRichPresenceDefinition*", modifiers: "", def_value: None }, CppParam { name:
  // "_state_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_partyInfo_k__BackingField", ty: "::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo>",
  // modifiers: "", def_value: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp>", modifiers: "", def_value: None
  // }]
  constexpr RichPresenceRuntimeInstance(::OculusStudios::Platform::Core::IRichPresenceDefinition* _definition_k__BackingField, ::StringW _state_k__BackingField,
                                        ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> _partyInfo_k__BackingField,
                                        ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> _timestamp_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22176 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <definition>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IRichPresenceDefinition* _definition_k__BackingField;

  /// @brief Field <state>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _state_k__BackingField;

  /// @brief Field <partyInfo>k__BackingField, offset: 0x10, size: 0x20, def value: None
  ::System::Nullable_1<::OculusStudios::Platform::Core::PartyInfo> _partyInfo_k__BackingField;

  /// @brief Field <timestamp>k__BackingField, offset: 0x30, size: 0x18, def value: None
  ::System::Nullable_1<::OculusStudios::Platform::Core::RichPresenceTimestamp> _timestamp_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance, _definition_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance, _state_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance, _partyInfo_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance, _timestamp_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::RichPresenceRuntimeInstance, 0x48>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance, "OculusStudios.Platform.Core", "RichPresenceRuntimeInstance");
