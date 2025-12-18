#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalPostProcessingData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalPostProcessingData)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalPostProcessingData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalPostProcessingData);
// Dependencies UnityEngine.Rendering.ContextItem, UnityEngine.Rendering.Universal.ColorGradingMode
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalPostProcessingData
class CORDL_TYPE UniversalPostProcessingData : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field gradingMode, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_gradingMode, put = __cordl_internal_set_gradingMode)) ::UnityEngine::Rendering::Universal::ColorGradingMode gradingMode;

  /// @brief Field isEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isEnabled, put = __cordl_internal_set_isEnabled)) bool isEnabled;

  /// @brief Field lutSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lutSize, put = __cordl_internal_set_lutSize)) int32_t lutSize;

  /// @brief Field supportDataDrivenLensFlare, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_supportDataDrivenLensFlare, put = __cordl_internal_set_supportDataDrivenLensFlare)) bool supportDataDrivenLensFlare;

  /// @brief Field supportScreenSpaceLensFlare, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_supportScreenSpaceLensFlare, put = __cordl_internal_set_supportScreenSpaceLensFlare)) bool supportScreenSpaceLensFlare;

  /// @brief Field useFastSRGBLinearConversion, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_useFastSRGBLinearConversion, put = __cordl_internal_set_useFastSRGBLinearConversion)) bool useFastSRGBLinearConversion;

  static inline ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* New_ctor();

  /// @brief Method Reset, addr 0x66be8b4, size 0x10, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode const& __cordl_internal_get_gradingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode& __cordl_internal_get_gradingMode();

  constexpr bool const& __cordl_internal_get_isEnabled() const;

  constexpr bool& __cordl_internal_get_isEnabled();

  constexpr int32_t const& __cordl_internal_get_lutSize() const;

  constexpr int32_t& __cordl_internal_get_lutSize();

  constexpr bool const& __cordl_internal_get_supportDataDrivenLensFlare() const;

  constexpr bool& __cordl_internal_get_supportDataDrivenLensFlare();

  constexpr bool const& __cordl_internal_get_supportScreenSpaceLensFlare() const;

  constexpr bool& __cordl_internal_get_supportScreenSpaceLensFlare();

  constexpr bool const& __cordl_internal_get_useFastSRGBLinearConversion() const;

  constexpr bool& __cordl_internal_get_useFastSRGBLinearConversion();

  constexpr void __cordl_internal_set_gradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value);

  constexpr void __cordl_internal_set_isEnabled(bool value);

  constexpr void __cordl_internal_set_lutSize(int32_t value);

  constexpr void __cordl_internal_set_supportDataDrivenLensFlare(bool value);

  constexpr void __cordl_internal_set_supportScreenSpaceLensFlare(bool value);

  constexpr void __cordl_internal_set_useFastSRGBLinearConversion(bool value);

  /// @brief Method .ctor, addr 0x66be8c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalPostProcessingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalPostProcessingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalPostProcessingData(UniversalPostProcessingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalPostProcessingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalPostProcessingData(UniversalPostProcessingData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12729 };

  /// @brief Field isEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___isEnabled;

  /// @brief Field gradingMode, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ColorGradingMode ___gradingMode;

  /// @brief Field lutSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___lutSize;

  /// @brief Field useFastSRGBLinearConversion, offset: 0x1c, size: 0x1, def value: None
  bool ___useFastSRGBLinearConversion;

  /// @brief Field supportScreenSpaceLensFlare, offset: 0x1d, size: 0x1, def value: None
  bool ___supportScreenSpaceLensFlare;

  /// @brief Field supportDataDrivenLensFlare, offset: 0x1e, size: 0x1, def value: None
  bool ___supportDataDrivenLensFlare;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalPostProcessingData, ___isEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalPostProcessingData, ___gradingMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalPostProcessingData, ___lutSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalPostProcessingData, ___useFastSRGBLinearConversion) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalPostProcessingData, ___supportScreenSpaceLensFlare) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalPostProcessingData, ___supportDataDrivenLensFlare) == 0x1e, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalPostProcessingData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalPostProcessingData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalPostProcessingData*, "UnityEngine.Rendering.Universal", "UniversalPostProcessingData");
