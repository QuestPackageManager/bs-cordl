#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(YogaConstants)
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::YogaConstants);
// Type: UnityEngine.Yoga::YogaConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15389))
// CS Name: ::UnityEngine.Yoga::YogaConstants*
class CORDL_TYPE YogaConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsUndefined addr 0x2d3ca00 size 0x64 virtual false final false
  static inline bool IsUndefined(float_t value);

  // Ctor Parameters [CppParam { name: "", ty: "YogaConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  YogaConstants(YogaConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "YogaConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  YogaConstants(YogaConstants const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaConstants();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::YogaConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaConstants*, "UnityEngine.Yoga", "YogaConstants");
