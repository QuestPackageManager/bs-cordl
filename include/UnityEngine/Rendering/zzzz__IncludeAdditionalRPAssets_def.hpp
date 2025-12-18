#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IncludeAdditionalRPAssets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IncludeAdditionalRPAssets)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
struct IncludeAdditionalRPAssets_Version;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct IncludeAdditionalRPAssets_Version;
}
namespace UnityEngine::Rendering {
class IncludeAdditionalRPAssets;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::IncludeAdditionalRPAssets);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IncludeAdditionalRPAssets/Version
struct CORDL_TYPE IncludeAdditionalRPAssets_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IncludeAdditionalRPAssets_Version_Unwrapped
  enum struct __IncludeAdditionalRPAssets_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_Count = static_cast<int32_t>(0x1),
    __E_Last = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IncludeAdditionalRPAssets_Version_Unwrapped() const noexcept {
    return static_cast<__IncludeAdditionalRPAssets_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IncludeAdditionalRPAssets_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IncludeAdditionalRPAssets_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(1)
  static ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version const Initial;

  /// @brief Field Last value: I32(0)
  static ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version const Last;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12168 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.IncludeAdditionalRPAssets::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IncludeAdditionalRPAssets
class CORDL_TYPE IncludeAdditionalRPAssets : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

  __declspec(property(get = get_includeAssetsByLabel, put = set_includeAssetsByLabel)) bool includeAssetsByLabel;

  __declspec(property(get = get_includeReferencedInScenes, put = set_includeReferencedInScenes)) bool includeReferencedInScenes;

  __declspec(property(get = get_labelToInclude, put = set_labelToInclude)) ::StringW labelToInclude;

  /// @brief Field m_IncludeAssetsByLabel, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IncludeAssetsByLabel, put = __cordl_internal_set_m_IncludeAssetsByLabel)) bool m_IncludeAssetsByLabel;

  /// @brief Field m_IncludeReferencedInScenes, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IncludeReferencedInScenes, put = __cordl_internal_set_m_IncludeReferencedInScenes)) bool m_IncludeReferencedInScenes;

  /// @brief Field m_LabelToInclude, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LabelToInclude, put = __cordl_internal_set_m_LabelToInclude)) ::StringW m_LabelToInclude;

  /// @brief Field m_version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version m_version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::IncludeAdditionalRPAssets* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0x65ebdd8, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version();

  constexpr bool const& __cordl_internal_get_m_IncludeAssetsByLabel() const;

  constexpr bool& __cordl_internal_get_m_IncludeAssetsByLabel();

  constexpr bool const& __cordl_internal_get_m_IncludeReferencedInScenes() const;

  constexpr bool& __cordl_internal_get_m_IncludeReferencedInScenes();

  constexpr ::StringW const& __cordl_internal_get_m_LabelToInclude() const;

  constexpr ::StringW& __cordl_internal_get_m_LabelToInclude();

  constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version const& __cordl_internal_get_m_version() const;

  constexpr ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_IncludeAssetsByLabel(bool value);

  constexpr void __cordl_internal_set_m_IncludeReferencedInScenes(bool value);

  constexpr void __cordl_internal_set_m_LabelToInclude(::StringW value);

  constexpr void __cordl_internal_set_m_version(::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version value);

  /// @brief Method .ctor, addr 0x65ebf48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_includeAssetsByLabel, addr 0x65ebe58, size 0x8, virtual false, abstract: false, final false
  inline bool get_includeAssetsByLabel();

  /// @brief Method get_includeReferencedInScenes, addr 0x65ebde0, size 0x8, virtual false, abstract: false, final false
  inline bool get_includeReferencedInScenes();

  /// @brief Method get_labelToInclude, addr 0x65ebed0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_labelToInclude();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_includeAssetsByLabel, addr 0x65ebe60, size 0x70, virtual false, abstract: false, final false
  inline void set_includeAssetsByLabel(bool value);

  /// @brief Method set_includeReferencedInScenes, addr 0x65ebde8, size 0x70, virtual false, abstract: false, final false
  inline void set_includeReferencedInScenes(bool value);

  /// @brief Method set_labelToInclude, addr 0x65ebed8, size 0x70, virtual false, abstract: false, final false
  inline void set_labelToInclude(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncludeAdditionalRPAssets();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncludeAdditionalRPAssets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncludeAdditionalRPAssets(IncludeAdditionalRPAssets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncludeAdditionalRPAssets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncludeAdditionalRPAssets(IncludeAdditionalRPAssets const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12169 };

  /// @brief Field m_version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version ___m_version;

  /// @brief Field m_IncludeReferencedInScenes, offset: 0x14, size: 0x1, def value: None
  bool ___m_IncludeReferencedInScenes;

  /// @brief Field m_IncludeAssetsByLabel, offset: 0x15, size: 0x1, def value: None
  bool ___m_IncludeAssetsByLabel;

  /// @brief Field m_LabelToInclude, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_LabelToInclude;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets, ___m_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets, ___m_IncludeReferencedInScenes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets, ___m_IncludeAssetsByLabel) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IncludeAdditionalRPAssets, ___m_LabelToInclude) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IncludeAdditionalRPAssets, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IncludeAdditionalRPAssets_Version, "UnityEngine.Rendering", "IncludeAdditionalRPAssets/Version");
NEED_NO_BOX(::UnityEngine::Rendering::IncludeAdditionalRPAssets);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IncludeAdditionalRPAssets*, "UnityEngine.Rendering", "IncludeAdditionalRPAssets");
