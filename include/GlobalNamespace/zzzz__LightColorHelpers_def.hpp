#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightColorHelpers)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorHelpers);
// Type: ::LightColorHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5029))
// CS Name: ::LightColorHelpers*
class CORDL_TYPE LightColorHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method AdjustColorWithStrobe addr 0x227113c size 0xd8 virtual false final false
  static inline ::UnityEngine::Color AdjustColorWithStrobe(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color offColor, float_t t, float_t fromStrobeFrequency,
                                                           float_t toStrobeFrequency, float_t tweenDuration);

  // Ctor Parameters [CppParam { name: "", ty: "LightColorHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorHelpers(LightColorHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorHelpers(LightColorHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorHelpers*, "", "LightColorHelpers");
