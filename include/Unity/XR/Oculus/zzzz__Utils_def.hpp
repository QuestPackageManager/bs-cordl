#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Utils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Utils);
// Type: Unity.XR.Oculus::Utils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: ::Unity.XR.Oculus::Utils*
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnableDynamicFFR, addr 0x33ab544, size 0x8c, virtual false, abstract: false, final false
  static inline bool EnableDynamicFFR(bool enable);

  /// @brief Method GetFoveationLevel, addr 0x33ab5d8, size 0x78, virtual false, abstract: false, final false
  static inline int32_t GetFoveationLevel();

  /// @brief Method GetSystemHeadsetType, addr 0x33ab4a8, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType();

  /// @brief Method SetColorScaleAndOffset, addr 0x33ab460, size 0x40, virtual false, abstract: false, final false
  static inline void SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset);

  /// @brief Method SetFoveationLevel, addr 0x33ab4b0, size 0x8c, virtual false, abstract: false, final false
  static inline bool SetFoveationLevel(int32_t level);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Utils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::Utils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Utils*, "Unity.XR.Oculus", "Utils");
