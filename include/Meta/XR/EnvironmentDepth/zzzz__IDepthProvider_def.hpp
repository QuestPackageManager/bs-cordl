#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/IDepthProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IDepthProvider)
namespace Meta::XR::EnvironmentDepth {
struct DepthFrameDesc;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Meta::XR::EnvironmentDepth {
class IDepthProvider;
}
// Write type traits
MARK_REF_T(::Meta::XR::EnvironmentDepth::IDepthProvider*);
DEFINE_IL2CPP_CLASS(::Meta::XR::EnvironmentDepth::IDepthProvider*, "Meta.XR.EnvironmentDepth", "IDepthProvider");
// Dependencies
namespace Meta::XR::EnvironmentDepth {
// Is value type: false
// CS Name: Meta.XR.EnvironmentDepth.IDepthProvider
class CORDL_TYPE IDepthProvider {
public:
  // Declarations
  __declspec(property(get = get_IsSupported)) bool IsSupported;

  __declspec(property(put = set_RemoveHands)) bool RemoveHands;

  /// @brief Method SetDepthEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetDepthEnabled(bool isEnabled, bool removeHands);

  /// @brief Method TryGetUpdatedDepthTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetUpdatedDepthTexture(::by_ref<::UnityEngine::RenderTexture*> depthTexture, ::ArrayW<::Meta::XR::EnvironmentDepth::DepthFrameDesc> frameDescriptors);

  /// @brief Method get_IsSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsSupported();

  /// @brief Method set_RemoveHands, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_RemoveHands(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IDepthProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDepthProvider(IDepthProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22979 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::EnvironmentDepth
