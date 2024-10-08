#pragma once
// IWYU pragma private; include "HMUI/IGlobalLightTintIntensity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IGlobalLightTintIntensity)
// Forward declare root types
namespace HMUI {
class IGlobalLightTintIntensity;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IGlobalLightTintIntensity);
// Type: HMUI::IGlobalLightTintIntensity
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::IGlobalLightTintIntensity*
class CORDL_TYPE IGlobalLightTintIntensity {
public:
  // Declarations
  __declspec(property(get = get_globalLightTintIntensity, put = set_globalLightTintIntensity)) float_t globalLightTintIntensity;

  /// @brief Method get_globalLightTintIntensity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_globalLightTintIntensity();

  /// @brief Method set_globalLightTintIntensity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_globalLightTintIntensity(float_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IGlobalLightTintIntensity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGlobalLightTintIntensity(IGlobalLightTintIntensity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGlobalLightTintIntensity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGlobalLightTintIntensity(IGlobalLightTintIntensity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
NEED_NO_BOX(::HMUI::IGlobalLightTintIntensity);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IGlobalLightTintIntensity*, "HMUI", "IGlobalLightTintIntensity");
