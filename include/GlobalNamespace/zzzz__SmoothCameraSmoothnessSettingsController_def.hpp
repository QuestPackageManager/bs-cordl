#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SmoothCameraSmoothnessSettingsController)
namespace GlobalNamespace {
class FloatSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCameraSmoothnessSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmoothCameraSmoothnessSettingsController);
// Type: ::SmoothCameraSmoothnessSettingsController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SmoothCameraSmoothnessSettingsController*
class CORDL_TYPE SmoothCameraSmoothnessSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  /// @brief Field _smoothCameraPositionSmooth, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__smoothCameraPositionSmooth, put = __cordl_internal_set__smoothCameraPositionSmooth))::UnityW<::GlobalNamespace::FloatSO> _smoothCameraPositionSmooth;

  /// @brief Field _smoothCameraRotationSmooth, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__smoothCameraRotationSmooth, put = __cordl_internal_set__smoothCameraRotationSmooth))::UnityW<::GlobalNamespace::FloatSO> _smoothCameraRotationSmooth;

  /// @brief Field _smoothnesses, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__smoothnesses, put = __cordl_internal_set__smoothnesses))::ArrayW<float_t, ::Array<float_t>*> _smoothnesses;

  /// @brief Method ApplyValue, addr 0x253d438, size 0xac, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x253d324, size 0x114, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  static inline ::GlobalNamespace::SmoothCameraSmoothnessSettingsController* New_ctor();

  /// @brief Method TextForValue, addr 0x253d4e4, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__smoothCameraPositionSmooth() const;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__smoothCameraPositionSmooth();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__smoothCameraRotationSmooth() const;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__smoothCameraRotationSmooth();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__smoothnesses() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__smoothnesses();

  constexpr void __cordl_internal_set__smoothCameraPositionSmooth(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr void __cordl_internal_set__smoothCameraRotationSmooth(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr void __cordl_internal_set__smoothnesses(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x253d5b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothCameraSmoothnessSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmoothCameraSmoothnessSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothCameraSmoothnessSettingsController(SmoothCameraSmoothnessSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothCameraSmoothnessSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothCameraSmoothnessSettingsController(SmoothCameraSmoothnessSettingsController const&) = delete;

  /// @brief Field _smoothCameraPositionSmooth, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____smoothCameraPositionSmooth;

  /// @brief Field _smoothCameraRotationSmooth, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____smoothCameraRotationSmooth;

  /// @brief Field _smoothnesses, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____smoothnesses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothCameraSmoothnessSettingsController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraSmoothnessSettingsController, ____smoothCameraPositionSmooth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraSmoothnessSettingsController, ____smoothCameraRotationSmooth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraSmoothnessSettingsController, ____smoothnesses) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothCameraSmoothnessSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCameraSmoothnessSettingsController*, "", "SmoothCameraSmoothnessSettingsController");
