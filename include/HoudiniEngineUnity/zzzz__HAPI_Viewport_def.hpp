#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_Viewport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_Viewport)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Viewport;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Viewport);
// Type: HoudiniEngineUnity::HAPI_Viewport
// SizeInfo { instance_size: 24, native_size: 32, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_Viewport
struct CORDL_TYPE HAPI_Viewport {
public:
  // Declarations
  /// @brief Method Init, addr 0x2576ef4, size 0x70, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method .ctor, addr 0x2576e6c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(bool initializeFields);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_Viewport();

  // Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "rotationQuaternion", ty:
  // "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HAPI_Viewport(::ArrayW<float_t, ::Array<float_t>*> position, ::ArrayW<float_t, ::Array<float_t>*> rotationQuaternion, float_t offset) noexcept;

  /// @brief Field position, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> position;

  /// @brief Field rotationQuaternion, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> rotationQuaternion;

  /// @brief Field offset, offset: 0x10, size: 0x4, def value: None
  float_t offset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Viewport, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Viewport, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Viewport, rotationQuaternion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Viewport, offset) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Viewport, "HoudiniEngineUnity", "HAPI_Viewport");
