#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemVoipState)
// Forward declare root types
namespace Oculus::Platform::Models {
class SystemVoipState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SystemVoipState);
// Type: Oculus.Platform.Models::SystemVoipState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13400)), TypeDefinitionIndex(TypeDefinitionIndex(13391)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13483))
// CS Name: ::Oculus.Platform.Models::SystemVoipState*
class CORDL_TYPE SystemVoipState : public ::System::Object {
public:
  // Declarations
  /// @brief Field MicrophoneMuted, offset 0x10, size 0x4
  __declspec(property(get = __get_MicrophoneMuted, put = __set_MicrophoneMuted))::Oculus::Platform::VoipMuteState MicrophoneMuted;

  /// @brief Field Status, offset 0x14, size 0x4
  __declspec(property(get = __get_Status, put = __set_Status))::Oculus::Platform::SystemVoipStatus Status;

  constexpr ::Oculus::Platform::VoipMuteState& __get_MicrophoneMuted();

  constexpr ::Oculus::Platform::VoipMuteState const& __get_MicrophoneMuted() const;

  constexpr void __set_MicrophoneMuted(::Oculus::Platform::VoipMuteState value);

  constexpr ::Oculus::Platform::SystemVoipStatus& __get_Status();

  constexpr ::Oculus::Platform::SystemVoipStatus const& __get_Status() const;

  constexpr void __set_Status(::Oculus::Platform::SystemVoipStatus value);

  static inline ::Oculus::Platform::Models::SystemVoipState* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2708f38, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "SystemVoipState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemVoipState(SystemVoipState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemVoipState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemVoipState(SystemVoipState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemVoipState();

public:
  /// @brief Field MicrophoneMuted, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::VoipMuteState ___MicrophoneMuted;

  /// @brief Field Status, offset: 0x14, size: 0x4, def value: None
  ::Oculus::Platform::SystemVoipStatus ___Status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SystemVoipState, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::SystemVoipState, ___MicrophoneMuted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::SystemVoipState, ___Status) == 0x14, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SystemVoipState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SystemVoipState*, "Oculus.Platform.Models", "SystemVoipState");
