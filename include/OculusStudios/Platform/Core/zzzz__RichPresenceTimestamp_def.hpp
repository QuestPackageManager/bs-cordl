#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/RichPresenceTimestamp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestampType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RichPresenceTimestamp)
namespace OculusStudios::Platform::Core {
struct RichPresenceTimestampType;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
struct RichPresenceTimestamp;
}
// Write type traits
MARK_VAL_T(::OculusStudios::Platform::Core::RichPresenceTimestamp);
// Dependencies OculusStudios.Platform.Core.RichPresenceTimestampType
namespace OculusStudios::Platform::Core {
// Is value type: true
// CS Name: OculusStudios.Platform.Core.RichPresenceTimestamp
struct CORDL_TYPE RichPresenceTimestamp {
public:
  // Declarations
  __declspec(property(get = get_timestamp)) ::StringW timestamp;

  __declspec(property(get = get_type)) ::OculusStudios::Platform::Core::RichPresenceTimestampType type;

  /// @brief Method .ctor, addr 0x5d7ff24, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW timestamp, ::OculusStudios::Platform::Core::RichPresenceTimestampType type);

  /// @brief Method get_timestamp, addr 0x5d7ff14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_timestamp();

  /// @brief Method get_type, addr 0x5d7ff1c, size 0x8, virtual false, abstract: false, final false
  inline ::OculusStudios::Platform::Core::RichPresenceTimestampType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresenceTimestamp();

  // Ctor Parameters [CppParam { name: "_timestamp_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_type_k__BackingField", ty:
  // "::OculusStudios::Platform::Core::RichPresenceTimestampType", modifiers: "", def_value: None }]
  constexpr RichPresenceTimestamp(::StringW _timestamp_k__BackingField, ::OculusStudios::Platform::Core::RichPresenceTimestampType _type_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22174 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <timestamp>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _timestamp_k__BackingField;

  /// @brief Field <type>k__BackingField, offset: 0x8, size: 0x4, def value: None
  ::OculusStudios::Platform::Core::RichPresenceTimestampType _type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceTimestamp, _timestamp_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceTimestamp, _type_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::RichPresenceTimestamp, 0x10>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::RichPresenceTimestamp, "OculusStudios.Platform.Core", "RichPresenceTimestamp");
