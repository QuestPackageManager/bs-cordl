#pragma once
// IWYU pragma private; include "GlobalNamespace\SmoothCameraSmoothnessSettingsController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SmoothCameraSmoothnessSettingsController)
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCameraSmoothnessSettingsController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SmoothCameraSmoothnessSettingsController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SmoothCameraSmoothnessSettingsController*, "", "SmoothCameraSmoothnessSettingsController");
// Dependencies ListSettingsController
namespace GlobalNamespace {
// Is value type: false
// CS Name: SmoothCameraSmoothnessSettingsController
class CORDL_TYPE SmoothCameraSmoothnessSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  /// @brief Field _settingsManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field kSmoothnesses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kSmoothnesses, put = setStaticF_kSmoothnesses)) ::ArrayW<float_t> kSmoothnesses;

  /// @brief Method ApplyValue, addr 0x5a16060, size 0xa4, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x5a15f4c, size 0x114, virtual true, abstract: false, final false
  inline bool GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements);

  static inline ::GlobalNamespace::SmoothCameraSmoothnessSettingsController* New_ctor();

  /// @brief Method TextForValue, addr 0x5a16104, size 0x10c, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x5a16210, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<float_t> getStaticF_kSmoothnesses();

  static inline void setStaticF_kSmoothnesses(::ArrayW<float_t> value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6413 };

  /// @brief Field _settingsManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmoothCameraSmoothnessSettingsController, ____settingsManager) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SmoothCameraSmoothnessSettingsController) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
