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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5691))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5705))
// CS Name: ::SmoothCameraSmoothnessSettingsController*
class CORDL_TYPE SmoothCameraSmoothnessSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  /// @brief Field _smoothCameraPositionSmooth, offset 0x28, size 0x8
  __declspec(property(get = __get__smoothCameraPositionSmooth, put = __set__smoothCameraPositionSmooth))::GlobalNamespace::FloatSO* _smoothCameraPositionSmooth;

  /// @brief Field _smoothCameraRotationSmooth, offset 0x30, size 0x8
  __declspec(property(get = __get__smoothCameraRotationSmooth, put = __set__smoothCameraRotationSmooth))::GlobalNamespace::FloatSO* _smoothCameraRotationSmooth;

  /// @brief Field _smoothnesses, offset 0x38, size 0x8
  __declspec(property(get = __get__smoothnesses, put = __set__smoothnesses))::ArrayW<float_t, ::Array<float_t>*> _smoothnesses;

  constexpr ::GlobalNamespace::FloatSO*& __get__smoothCameraPositionSmooth();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__smoothCameraPositionSmooth() const;

  constexpr void __set__smoothCameraPositionSmooth(::GlobalNamespace::FloatSO* value);

  constexpr ::GlobalNamespace::FloatSO*& __get__smoothCameraRotationSmooth();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__smoothCameraRotationSmooth() const;

  constexpr void __set__smoothCameraRotationSmooth(::GlobalNamespace::FloatSO* value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__smoothnesses();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__smoothnesses() const;

  constexpr void __set__smoothnesses(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method GetInitValues addr 0x2166fe4 size 0x114 virtual true final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue addr 0x21670f8 size 0xac virtual true final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue addr 0x21671a4 size 0xcc virtual true final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::SmoothCameraSmoothnessSettingsController* New_ctor();

  /// @brief Method .ctor addr 0x2167270 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SmoothCameraSmoothnessSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothCameraSmoothnessSettingsController(SmoothCameraSmoothnessSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothCameraSmoothnessSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothCameraSmoothnessSettingsController(SmoothCameraSmoothnessSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothCameraSmoothnessSettingsController();

public:
  /// @brief Field _smoothCameraPositionSmooth, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____smoothCameraPositionSmooth;

  /// @brief Field _smoothCameraRotationSmooth, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____smoothCameraRotationSmooth;

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
