#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPShaderStrippingSetting.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(URPShaderStrippingSetting)
namespace UnityEngine::Rendering::Universal {
struct URPShaderStrippingSetting_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct URPShaderStrippingSetting_Version;
}
namespace UnityEngine::Rendering::Universal {
class URPShaderStrippingSetting;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.URPShaderStrippingSetting/Version
struct CORDL_TYPE URPShaderStrippingSetting_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __URPShaderStrippingSetting_Version_Unwrapped
  enum struct __URPShaderStrippingSetting_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __URPShaderStrippingSetting_Version_Unwrapped() const noexcept {
    return static_cast<__URPShaderStrippingSetting_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr URPShaderStrippingSetting_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr URPShaderStrippingSetting_Version(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12926 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.URPShaderStrippingSetting::Version
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.URPShaderStrippingSetting
class CORDL_TYPE URPShaderStrippingSetting : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version;

  /// @brief Field m_StripScreenCoordOverrideVariants, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripScreenCoordOverrideVariants, put = __cordl_internal_set_m_StripScreenCoordOverrideVariants)) bool m_StripScreenCoordOverrideVariants;

  /// @brief Field m_StripUnusedPostProcessingVariants, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripUnusedPostProcessingVariants, put = __cordl_internal_set_m_StripUnusedPostProcessingVariants)) bool m_StripUnusedPostProcessingVariants;

  /// @brief Field m_StripUnusedVariants, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripUnusedVariants, put = __cordl_internal_set_m_StripUnusedVariants)) bool m_StripUnusedVariants;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version m_Version;

  __declspec(property(get = get_stripScreenCoordOverrideVariants, put = set_stripScreenCoordOverrideVariants)) bool stripScreenCoordOverrideVariants;

  __declspec(property(get = get_stripUnusedPostProcessingVariants, put = set_stripUnusedPostProcessingVariants)) bool stripUnusedPostProcessingVariants;

  __declspec(property(get = get_stripUnusedVariants, put = set_stripUnusedVariants)) bool stripUnusedVariants;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* New_ctor();

  constexpr bool const& __cordl_internal_get_m_StripScreenCoordOverrideVariants() const;

  constexpr bool& __cordl_internal_get_m_StripScreenCoordOverrideVariants();

  constexpr bool const& __cordl_internal_get_m_StripUnusedPostProcessingVariants() const;

  constexpr bool& __cordl_internal_get_m_StripUnusedPostProcessingVariants();

  constexpr bool const& __cordl_internal_get_m_StripUnusedVariants() const;

  constexpr bool& __cordl_internal_get_m_StripUnusedVariants();

  constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_StripScreenCoordOverrideVariants(bool value);

  constexpr void __cordl_internal_set_m_StripUnusedPostProcessingVariants(bool value);

  constexpr void __cordl_internal_set_m_StripUnusedVariants(bool value);

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version value);

  /// @brief Method .ctor, addr 0x6702094, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_stripScreenCoordOverrideVariants, addr 0x670201c, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripScreenCoordOverrideVariants();

  /// @brief Method get_stripUnusedPostProcessingVariants, addr 0x6701f2c, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripUnusedPostProcessingVariants();

  /// @brief Method get_stripUnusedVariants, addr 0x6701fa4, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripUnusedVariants();

  /// @brief Method get_version, addr 0x6701f24, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_stripScreenCoordOverrideVariants, addr 0x6702024, size 0x70, virtual false, abstract: false, final false
  inline void set_stripScreenCoordOverrideVariants(bool value);

  /// @brief Method set_stripUnusedPostProcessingVariants, addr 0x6701f34, size 0x70, virtual false, abstract: false, final false
  inline void set_stripUnusedPostProcessingVariants(bool value);

  /// @brief Method set_stripUnusedVariants, addr 0x6701fac, size 0x70, virtual false, abstract: false, final false
  inline void set_stripUnusedVariants(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPShaderStrippingSetting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPShaderStrippingSetting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPShaderStrippingSetting(URPShaderStrippingSetting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPShaderStrippingSetting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPShaderStrippingSetting(URPShaderStrippingSetting const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12927 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version ___m_Version;

  /// @brief Field m_StripUnusedPostProcessingVariants, offset: 0x14, size: 0x1, def value: None
  bool ___m_StripUnusedPostProcessingVariants;

  /// @brief Field m_StripUnusedVariants, offset: 0x15, size: 0x1, def value: None
  bool ___m_StripUnusedVariants;

  /// @brief Field m_StripScreenCoordOverrideVariants, offset: 0x16, size: 0x1, def value: None
  bool ___m_StripScreenCoordOverrideVariants;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, ___m_StripUnusedPostProcessingVariants) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, ___m_StripUnusedVariants) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, ___m_StripScreenCoordOverrideVariants) == 0x16, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPShaderStrippingSetting, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting_Version, "UnityEngine.Rendering.Universal", "URPShaderStrippingSetting/Version");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*, "UnityEngine.Rendering.Universal", "URPShaderStrippingSetting");
