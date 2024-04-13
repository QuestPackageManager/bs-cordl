#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Compute_DT_EventArgs)
namespace TMPro {
struct Compute_DistanceTransform_EventTypes;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace TMPro {
class Compute_DT_EventArgs;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::Compute_DT_EventArgs);
// Type: TMPro::Compute_DT_EventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::Compute_DT_EventArgs*
class CORDL_TYPE Compute_DT_EventArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field Colors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Colors, put = __cordl_internal_set_Colors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> Colors;

  /// @brief Field EventType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_EventType, put = __cordl_internal_set_EventType))::TMPro::Compute_DistanceTransform_EventTypes EventType;

  /// @brief Field ProgressPercentage, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_ProgressPercentage, put = __cordl_internal_set_ProgressPercentage)) float_t ProgressPercentage;

  static inline ::TMPro::Compute_DT_EventArgs* New_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  static inline ::TMPro::Compute_DT_EventArgs* New_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress);

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get_Colors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get_Colors();

  constexpr ::TMPro::Compute_DistanceTransform_EventTypes const& __cordl_internal_get_EventType() const;

  constexpr ::TMPro::Compute_DistanceTransform_EventTypes& __cordl_internal_get_EventType();

  constexpr float_t const& __cordl_internal_get_ProgressPercentage() const;

  constexpr float_t& __cordl_internal_get_ProgressPercentage();

  constexpr void __cordl_internal_set_Colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set_EventType(::TMPro::Compute_DistanceTransform_EventTypes value);

  constexpr void __cordl_internal_set_ProgressPercentage(float_t value);

  /// @brief Method .ctor, addr 0x312ed4c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method .ctor, addr 0x312ed14, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Compute_DT_EventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Compute_DT_EventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Compute_DT_EventArgs(Compute_DT_EventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Compute_DT_EventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Compute_DT_EventArgs(Compute_DT_EventArgs const&) = delete;

  /// @brief Field EventType, offset: 0x10, size: 0x4, def value: None
  ::TMPro::Compute_DistanceTransform_EventTypes ___EventType;

  /// @brief Field ProgressPercentage, offset: 0x14, size: 0x4, def value: None
  float_t ___ProgressPercentage;

  /// @brief Field Colors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ___Colors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::Compute_DT_EventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::TMPro::Compute_DT_EventArgs, ___EventType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::Compute_DT_EventArgs, ___ProgressPercentage) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::Compute_DT_EventArgs, ___Colors) == 0x18, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::Compute_DT_EventArgs);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Compute_DT_EventArgs*, "TMPro", "Compute_DT_EventArgs");
