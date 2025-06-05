#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_SphereInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_SphereInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SphereInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_SphereInfo);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_SphereInfo
struct CORDL_TYPE HAPI_SphereInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3a48820, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(bool initialize_fields);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_SphereInfo();

  // Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None
  // }]
  constexpr HAPI_SphereInfo(::ArrayW<float_t, ::Array<float_t>*> center, float_t radius) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11738 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field center, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> center;

  /// @brief Field radius, offset: 0x8, size: 0x4, def value: None
  float_t radius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_SphereInfo, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_SphereInfo, radius) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_SphereInfo, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SphereInfo, "HoudiniEngineUnity", "HAPI_SphereInfo");
