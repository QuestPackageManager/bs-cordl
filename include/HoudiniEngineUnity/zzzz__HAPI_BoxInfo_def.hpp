#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_BoxInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_BoxInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_BoxInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_BoxInfo);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_BoxInfo
struct CORDL_TYPE HAPI_BoxInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3a4843c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(bool initialize_fields);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_BoxInfo();

  // Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "size", ty: "::ArrayW<float_t,::Array<float_t>*>",
  // modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
  constexpr HAPI_BoxInfo(::ArrayW<float_t, ::Array<float_t>*> center, ::ArrayW<float_t, ::Array<float_t>*> size, ::ArrayW<float_t, ::Array<float_t>*> rotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11737 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field center, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> center;

  /// @brief Field size, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> size;

  /// @brief Field rotation, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_BoxInfo, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_BoxInfo, size) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_BoxInfo, rotation) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_BoxInfo, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_BoxInfo, "HoudiniEngineUnity", "HAPI_BoxInfo");
