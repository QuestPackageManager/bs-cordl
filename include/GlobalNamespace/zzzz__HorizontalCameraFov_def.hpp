#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HorizontalCameraFov)
// Forward declare root types
namespace GlobalNamespace {
class HorizontalCameraFov;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HorizontalCameraFov);
// Type: ::HorizontalCameraFov
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13871))
// CS Name: ::HorizontalCameraFov*
class CORDL_TYPE HorizontalCameraFov : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _horizontalFOV, offset 0x18, size 0x4
  __declspec(property(get = __get__horizontalFOV, put = __set__horizontalFOV)) float_t _horizontalFOV;

  constexpr float_t& __get__horizontalFOV();

  constexpr float_t const& __get__horizontalFOV() const;

  constexpr void __set__horizontalFOV(float_t value);

  /// @brief Method Awake addr 0x1f97124 size 0xb8 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::HorizontalCameraFov* New_ctor();

  /// @brief Method .ctor addr 0x1f971dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HorizontalCameraFov", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HorizontalCameraFov(HorizontalCameraFov&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HorizontalCameraFov", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HorizontalCameraFov(HorizontalCameraFov const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalCameraFov();

public:
  /// @brief Field _horizontalFOV, offset: 0x18, size: 0x4, def value: None
  float_t ____horizontalFOV;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HorizontalCameraFov, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HorizontalCameraFov, ____horizontalFOV) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HorizontalCameraFov);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HorizontalCameraFov*, "", "HorizontalCameraFov");
