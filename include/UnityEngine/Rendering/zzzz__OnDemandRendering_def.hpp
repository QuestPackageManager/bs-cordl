#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OnDemandRendering.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnDemandRendering)
// Forward declare root types
namespace UnityEngine::Rendering {
class OnDemandRendering;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::OnDemandRendering);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OnDemandRendering
class CORDL_TYPE OnDemandRendering : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_RenderFrameInterval, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_RenderFrameInterval, put = setStaticF_m_RenderFrameInterval)) int32_t m_RenderFrameInterval;

  /// @brief Method GetRenderFrameInterval, addr 0x48bef40, size 0x58, virtual false, abstract: false, final false
  static inline void GetRenderFrameInterval(::ByRef<int32_t> frameInterval);

  static inline int32_t getStaticF_m_RenderFrameInterval();

  /// @brief Method get_renderFrameInterval, addr 0x48beee8, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_renderFrameInterval();

  static inline void setStaticF_m_RenderFrameInterval(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnDemandRendering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnDemandRendering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnDemandRendering(OnDemandRendering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnDemandRendering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnDemandRendering(OnDemandRendering const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11216 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OnDemandRendering, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::OnDemandRendering);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OnDemandRendering*, "UnityEngine.Rendering", "OnDemandRendering");
