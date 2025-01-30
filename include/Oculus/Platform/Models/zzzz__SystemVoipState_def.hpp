#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SystemVoipState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemVoipState)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SystemVoipState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SystemVoipState);
// Dependencies Oculus.Platform.SystemVoipStatus, Oculus.Platform.VoipMuteState, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.SystemVoipState
class CORDL_TYPE SystemVoipState : public ::System::Object {
public:
  // Declarations
  /// @brief Field MicrophoneMuted, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_MicrophoneMuted, put = __cordl_internal_set_MicrophoneMuted)) ::Oculus::Platform::VoipMuteState MicrophoneMuted;

  /// @brief Field Status, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_Status, put = __cordl_internal_set_Status)) ::Oculus::Platform::SystemVoipStatus Status;

  static inline ::Oculus::Platform::Models::SystemVoipState* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::VoipMuteState const& __cordl_internal_get_MicrophoneMuted() const;

  constexpr ::Oculus::Platform::VoipMuteState& __cordl_internal_get_MicrophoneMuted();

  constexpr ::Oculus::Platform::SystemVoipStatus const& __cordl_internal_get_Status() const;

  constexpr ::Oculus::Platform::SystemVoipStatus& __cordl_internal_get_Status();

  constexpr void __cordl_internal_set_MicrophoneMuted(::Oculus::Platform::VoipMuteState value);

  constexpr void __cordl_internal_set_Status(::Oculus::Platform::SystemVoipStatus value);

  /// @brief Method .ctor, addr 0x3f958b0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemVoipState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemVoipState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemVoipState(SystemVoipState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemVoipState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemVoipState(SystemVoipState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15568 };

  /// @brief Field MicrophoneMuted, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::VoipMuteState ___MicrophoneMuted;

  /// @brief Field Status, offset: 0x14, size: 0x4, def value: None
  ::Oculus::Platform::SystemVoipStatus ___Status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::SystemVoipState, ___MicrophoneMuted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::SystemVoipState, ___Status) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SystemVoipState, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SystemVoipState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SystemVoipState*, "Oculus.Platform.Models", "SystemVoipState");
