#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MicrophoneAvailabilityState)
// Forward declare root types
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::MicrophoneAvailabilityState);
// Type: Oculus.Platform.Models::MicrophoneAvailabilityState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::MicrophoneAvailabilityState*
class CORDL_TYPE MicrophoneAvailabilityState : public ::System::Object {
public:
  // Declarations
  /// @brief Field MicrophoneAvailable, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_MicrophoneAvailable, put = __cordl_internal_set_MicrophoneAvailable)) bool MicrophoneAvailable;

  static inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* New_ctor(void* o);

  constexpr bool const& __cordl_internal_get_MicrophoneAvailable() const;

  constexpr bool& __cordl_internal_get_MicrophoneAvailable();

  constexpr void __cordl_internal_set_MicrophoneAvailable(bool value);

  /// @brief Method .ctor, addr 0x27f8d6c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MicrophoneAvailabilityState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MicrophoneAvailabilityState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MicrophoneAvailabilityState(MicrophoneAvailabilityState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MicrophoneAvailabilityState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MicrophoneAvailabilityState(MicrophoneAvailabilityState const&) = delete;

  /// @brief Field MicrophoneAvailable, offset: 0x10, size: 0x1, def value: None
  bool ___MicrophoneAvailable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::MicrophoneAvailabilityState, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MicrophoneAvailabilityState, ___MicrophoneAvailable) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::MicrophoneAvailabilityState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MicrophoneAvailabilityState*, "Oculus.Platform.Models", "MicrophoneAvailabilityState");
