#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorFrameData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
CORDL_MODULE_EXPORT(MirrorFrameData)
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorFrameData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MirrorFrameData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorFrameData*, "", "MirrorFrameData");
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rendering.ContextItem
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorFrameData
class CORDL_TYPE MirrorFrameData : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field cameraProjLeft, offset 0x150, size 0x40
  __declspec(property(get = __cordl_internal_get_cameraProjLeft, put = __cordl_internal_set_cameraProjLeft)) ::UnityEngine::Matrix4x4 cameraProjLeft;

  /// @brief Field cameraProjRight, offset 0x1d0, size 0x40
  __declspec(property(get = __cordl_internal_get_cameraProjRight, put = __cordl_internal_set_cameraProjRight)) ::UnityEngine::Matrix4x4 cameraProjRight;

  /// @brief Field cameraViewLeft, offset 0x110, size 0x40
  __declspec(property(get = __cordl_internal_get_cameraViewLeft, put = __cordl_internal_set_cameraViewLeft)) ::UnityEngine::Matrix4x4 cameraViewLeft;

  /// @brief Field cameraViewRight, offset 0x190, size 0x40
  __declspec(property(get = __cordl_internal_get_cameraViewRight, put = __cordl_internal_set_cameraViewRight)) ::UnityEngine::Matrix4x4 cameraViewRight;

  /// @brief Field reflectedProjLeft, offset 0x50, size 0x40
  __declspec(property(get = __cordl_internal_get_reflectedProjLeft, put = __cordl_internal_set_reflectedProjLeft)) ::UnityEngine::Matrix4x4 reflectedProjLeft;

  /// @brief Field reflectedProjRight, offset 0xd0, size 0x40
  __declspec(property(get = __cordl_internal_get_reflectedProjRight, put = __cordl_internal_set_reflectedProjRight)) ::UnityEngine::Matrix4x4 reflectedProjRight;

  /// @brief Field reflectedViewLeft, offset 0x10, size 0x40
  __declspec(property(get = __cordl_internal_get_reflectedViewLeft, put = __cordl_internal_set_reflectedViewLeft)) ::UnityEngine::Matrix4x4 reflectedViewLeft;

  /// @brief Field reflectedViewRight, offset 0x90, size 0x40
  __declspec(property(get = __cordl_internal_get_reflectedViewRight, put = __cordl_internal_set_reflectedViewRight)) ::UnityEngine::Matrix4x4 reflectedViewRight;

  /// @brief Field renderAllowed, offset 0x211, size 0x1
  __declspec(property(get = __cordl_internal_get_renderAllowed, put = __cordl_internal_set_renderAllowed)) bool renderAllowed;

  /// @brief Field singlePassStereo, offset 0x210, size 0x1
  __declspec(property(get = __cordl_internal_get_singlePassStereo, put = __cordl_internal_set_singlePassStereo)) bool singlePassStereo;

  /// @brief Method CleanupPass, addr 0x5f47810, size 0x7c, virtual false, abstract: false, final false
  inline void CleanupPass(::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method CleanupPass, addr 0x5f475a4, size 0x1f0, virtual false, abstract: false, final false
  inline void CleanupPass(::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  static inline ::GlobalNamespace::MirrorFrameData* New_ctor();

  /// @brief Method Reset, addr 0x5f4788c, size 0x10, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetupPass, addr 0x5f47794, size 0x7c, virtual false, abstract: false, final false
  inline void SetupPass(::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method SetupPass, addr 0x5f473b4, size 0x1f0, virtual false, abstract: false, final false
  inline void SetupPass(::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_cameraProjLeft() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_cameraProjLeft();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_cameraProjRight() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_cameraProjRight();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_cameraViewLeft() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_cameraViewLeft();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_cameraViewRight() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_cameraViewRight();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_reflectedProjLeft() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_reflectedProjLeft();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_reflectedProjRight() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_reflectedProjRight();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_reflectedViewLeft() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_reflectedViewLeft();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_reflectedViewRight() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_reflectedViewRight();

  constexpr bool const& __cordl_internal_get_renderAllowed() const;

  constexpr bool& __cordl_internal_get_renderAllowed();

  constexpr bool const& __cordl_internal_get_singlePassStereo() const;

  constexpr bool& __cordl_internal_get_singlePassStereo();

  constexpr void __cordl_internal_set_cameraProjLeft(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_cameraProjRight(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_cameraViewLeft(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_cameraViewRight(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_reflectedProjLeft(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_reflectedProjRight(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_reflectedViewLeft(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_reflectedViewRight(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_renderAllowed(bool value);

  constexpr void __cordl_internal_set_singlePassStereo(bool value);

  /// @brief Method .ctor, addr 0x5f4789c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorFrameData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorFrameData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorFrameData(MirrorFrameData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorFrameData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorFrameData(MirrorFrameData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20651 };

  /// @brief Field reflectedViewLeft, offset: 0x10, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___reflectedViewLeft;

  /// @brief Field reflectedProjLeft, offset: 0x50, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___reflectedProjLeft;

  /// @brief Field reflectedViewRight, offset: 0x90, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___reflectedViewRight;

  /// @brief Field reflectedProjRight, offset: 0xd0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___reflectedProjRight;

  /// @brief Field cameraViewLeft, offset: 0x110, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___cameraViewLeft;

  /// @brief Field cameraProjLeft, offset: 0x150, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___cameraProjLeft;

  /// @brief Field cameraViewRight, offset: 0x190, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___cameraViewRight;

  /// @brief Field cameraProjRight, offset: 0x1d0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___cameraProjRight;

  /// @brief Field singlePassStereo, offset: 0x210, size: 0x1, def value: None
  bool ___singlePassStereo;

  /// @brief Field renderAllowed, offset: 0x211, size: 0x1, def value: None
  bool ___renderAllowed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___reflectedViewLeft) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___reflectedProjLeft) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___reflectedViewRight) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___reflectedProjRight) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___cameraViewLeft) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___cameraProjLeft) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___cameraViewRight) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___cameraProjRight) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___singlePassStereo) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorFrameData, ___renderAllowed) == 0x211, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorFrameData) == 0x218, "Size mismatch!");

} // namespace GlobalNamespace
