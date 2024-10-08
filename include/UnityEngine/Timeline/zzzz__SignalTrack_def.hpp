#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SignalTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__MarkerTrack_def.hpp"
CORDL_MODULE_EXPORT(SignalTrack)
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalTrack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalTrack);
// Type: UnityEngine.Timeline::SignalTrack
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::SignalTrack*
class CORDL_TYPE SignalTrack : public ::UnityEngine::Timeline::MarkerTrack {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::SignalTrack* New_ctor();

  /// @brief Method .ctor, addr 0x47aff40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalTrack(SignalTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalTrack(SignalTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15811 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalTrack, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SignalTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalTrack*, "UnityEngine.Timeline", "SignalTrack");
