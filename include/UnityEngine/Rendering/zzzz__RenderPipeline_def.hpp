#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipeline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPipeline)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine::Rendering {
class RenderPipeline_StandardRequest;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipeline;
}
namespace UnityEngine::Rendering {
class RenderPipeline_StandardRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipeline);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipeline_StandardRequest);
// Dependencies System.Object, UnityEngine.CubemapFace
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipeline/StandardRequest
class CORDL_TYPE RenderPipeline_StandardRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field destination, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityW<::UnityEngine::RenderTexture> destination;

  /// @brief Field face, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_face, put = __cordl_internal_set_face)) ::UnityEngine::CubemapFace face;

  /// @brief Field mipLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mipLevel, put = __cordl_internal_set_mipLevel)) int32_t mipLevel;

  /// @brief Field slice, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_slice, put = __cordl_internal_set_slice)) int32_t slice;

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_destination() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_destination();

  constexpr ::UnityEngine::CubemapFace const& __cordl_internal_get_face() const;

  constexpr ::UnityEngine::CubemapFace& __cordl_internal_get_face();

  constexpr int32_t const& __cordl_internal_get_mipLevel() const;

  constexpr int32_t& __cordl_internal_get_mipLevel();

  constexpr int32_t const& __cordl_internal_get_slice() const;

  constexpr int32_t& __cordl_internal_get_slice();

  constexpr void __cordl_internal_set_destination(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_face(::UnityEngine::CubemapFace value);

  constexpr void __cordl_internal_set_mipLevel(int32_t value);

  constexpr void __cordl_internal_set_slice(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipeline_StandardRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipeline_StandardRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipeline_StandardRequest(RenderPipeline_StandardRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipeline_StandardRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipeline_StandardRequest(RenderPipeline_StandardRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10793 };

  /// @brief Field destination, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___destination;

  /// @brief Field mipLevel, offset: 0x18, size: 0x4, def value: None
  int32_t ___mipLevel;

  /// @brief Field face, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::CubemapFace ___face;

  /// @brief Field slice, offset: 0x20, size: 0x4, def value: None
  int32_t ___slice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderPipeline_StandardRequest, ___destination) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderPipeline_StandardRequest, ___mipLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderPipeline_StandardRequest, ___face) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderPipeline_StandardRequest, ___slice) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipeline_StandardRequest, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipeline
class CORDL_TYPE RenderPipeline : public ::System::Object {
public:
  // Declarations
  using StandardRequest = ::UnityEngine::Rendering::RenderPipeline_StandardRequest;

  /// @brief Field <disposed>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_defaultSettings)) ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> defaultSettings;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Method BeginCameraRendering, addr 0x6956cc4, size 0x68, virtual false, abstract: false, final false
  static inline void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method BeginContextRendering, addr 0x6956b64, size 0x68, virtual false, abstract: false, final false
  static inline void BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method Dispose, addr 0x6957124, size 0x7c, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Dispose, addr 0x69571a0, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndCameraRendering, addr 0x6956f24, size 0x68, virtual false, abstract: false, final false
  static inline void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method EndContextRendering, addr 0x6956dc0, size 0x68, virtual false, abstract: false, final false
  static inline void EndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method InternalProcessRenderRequests, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename RequestData> inline void InternalProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, RequestData renderRequest);

  /// @brief Method InternalRender, addr 0x695709c, size 0x78, virtual false, abstract: false, final false
  inline void InternalRender(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method IsRenderRequestSupported, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename RequestData> inline bool IsRenderRequestSupported(::UnityEngine::Camera* camera, RequestData data);

  static inline ::UnityEngine::Rendering::RenderPipeline* New_ctor();

  /// @brief Method ProcessRenderRequests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename RequestData> inline void ProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, RequestData renderRequest);

  /// @brief Method Render, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> cameras);

  /// @brief Method Render, addr 0x6957020, size 0x7c, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x69571ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_defaultSettings, addr 0x69571a4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> get_defaultSettings();

  /// @brief Method get_disposed, addr 0x6957114, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method set_disposed, addr 0x695711c, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipeline(RenderPipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipeline(RenderPipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10794 };

  /// @brief Field <disposed>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderPipeline, ____disposed_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipeline, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipeline*, "UnityEngine.Rendering", "RenderPipeline");
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipeline_StandardRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipeline_StandardRequest*, "UnityEngine.Rendering", "RenderPipeline/StandardRequest");
