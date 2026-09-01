#pragma once
// IWYU pragma private; include "Meta\XR\EnvironmentDepth\DepthProviderNotSupported.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DepthProviderNotSupported)
namespace Meta::XR::EnvironmentDepth {
struct DepthFrameDesc;
}
namespace Meta::XR::EnvironmentDepth {
class IDepthProvider;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Meta::XR::EnvironmentDepth {
class DepthProviderNotSupported;
}
// Write type traits
MARK_REF_T(::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*);
DEFINE_IL2CPP_CLASS(::Meta::XR::EnvironmentDepth::DepthProviderNotSupported*, "Meta.XR.EnvironmentDepth", "DepthProviderNotSupported");
// Dependencies System.Object
namespace Meta::XR::EnvironmentDepth {
// Is value type: false
// CS Name: Meta.XR.EnvironmentDepth.DepthProviderNotSupported
class CORDL_TYPE DepthProviderNotSupported : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Meta_XR_EnvironmentDepth_IDepthProvider_get_IsSupported)) bool Meta_XR_EnvironmentDepth_IDepthProvider_IsSupported;

  __declspec(property(put = Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands)) bool Meta_XR_EnvironmentDepth_IDepthProvider_RemoveHands;

  /// @brief Convert operator to "::Meta::XR::EnvironmentDepth::IDepthProvider"
  constexpr operator ::Meta::XR::EnvironmentDepth::IDepthProvider*() noexcept;

  /// @brief Method Meta.XR.EnvironmentDepth.IDepthProvider.SetDepthEnabled, addr 0x5a3f338, size 0x4, virtual true, abstract: false, final true
  inline void Meta_XR_EnvironmentDepth_IDepthProvider_SetDepthEnabled(bool isEnabled, bool removeHands);

  /// @brief Method Meta.XR.EnvironmentDepth.IDepthProvider.TryGetUpdatedDepthTexture, addr 0x5a3f33c, size 0x38, virtual true, abstract: false, final true
  inline bool Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture(::by_ref<::UnityEngine::RenderTexture*> depthTexture,
                                                                                ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc> frameDescriptors);

  /// @brief Method Meta.XR.EnvironmentDepth.IDepthProvider.get_IsSupported, addr 0x5a3f32c, size 0x8, virtual true, abstract: false, final true
  inline bool Meta_XR_EnvironmentDepth_IDepthProvider_get_IsSupported();

  /// @brief Method Meta.XR.EnvironmentDepth.IDepthProvider.set_RemoveHands, addr 0x5a3f334, size 0x4, virtual true, abstract: false, final true
  inline void Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands(bool value);

  static inline ::Meta::XR::EnvironmentDepth::DepthProviderNotSupported* New_ctor();

  /// @brief Method .ctor, addr 0x5a3caa4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Meta::XR::EnvironmentDepth::IDepthProvider"
  constexpr ::Meta::XR::EnvironmentDepth::IDepthProvider* i___Meta__XR__EnvironmentDepth__IDepthProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthProviderNotSupported();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthProviderNotSupported", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthProviderNotSupported(DepthProviderNotSupported&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthProviderNotSupported", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthProviderNotSupported(DepthProviderNotSupported const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23029 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::EnvironmentDepth::DepthProviderNotSupported) == 0x10, "Size mismatch!");

} // namespace Meta::XR::EnvironmentDepth
