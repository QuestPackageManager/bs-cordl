#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderChainCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandType_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChainCommand)
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::RenderChainCommand);
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.UIR.CommandType, UnityEngine.UIElements.UIR.LinkedPoolItem`1<T>, UnityEngine.UIElements.UIR.State
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderChainCommand
class CORDL_TYPE RenderChainCommand : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::RenderChainCommand*> {
public:
  // Declarations
  /// @brief Field callback, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action* callback;

  /// @brief Field indexCount, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_indexCount, put = __cordl_internal_set_indexCount)) int32_t indexCount;

  /// @brief Field indexOffset, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_indexOffset, put = __cordl_internal_set_indexOffset)) int32_t indexOffset;

  /// @brief Field isTail, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isTail, put = __cordl_internal_set_isTail)) bool isTail;

  /// @brief Field k_ID_MainTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ID_MainTex, put = setStaticF_k_ID_MainTex)) int32_t k_ID_MainTex;

  /// @brief Field mesh, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh, put = __cordl_internal_set_mesh)) ::UnityEngine::UIElements::UIR::MeshHandle* mesh;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::UnityEngine::UIElements::UIR::RenderChainCommand* next;

  /// @brief Field owner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner)) ::UnityEngine::UIElements::VisualElement* owner;

  /// @brief Field prev, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prev, put = __cordl_internal_set_prev)) ::UnityEngine::UIElements::UIR::RenderChainCommand* prev;

  /// @brief Field s_ImmediateOverheadMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ImmediateOverheadMarker, put = setStaticF_s_ImmediateOverheadMarker)) ::Unity::Profiling::ProfilerMarker s_ImmediateOverheadMarker;

  /// @brief Field state, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::UnityEngine::UIElements::UIR::State state;

  /// @brief Field type, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::UIElements::UIR::CommandType type;

  /// @brief Method Blit, addr 0x6ac939c, size 0x29c, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* destination, float_t depth);

  /// @brief Method CombineScissorRects, addr 0x6ac9278, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect CombineScissorRects(::UnityEngine::Rect r0, ::UnityEngine::Rect r1);

  /// @brief Method ExecuteNonDrawMesh, addr 0x6ac811c, size 0xdd4, virtual false, abstract: false, final false
  inline void ExecuteNonDrawMesh(::UnityEngine::UIElements::UIR::DrawParams* drawParams, float_t pixelsPerPoint, ::ByRef<::System::Exception*> immediateException);

  static inline ::UnityEngine::UIElements::UIR::RenderChainCommand* New_ctor();

  /// @brief Method RectPointsToPixelsAndFlipYAxis, addr 0x6ac8ef0, size 0x388, virtual false, abstract: false, final false
  static inline ::UnityEngine::RectInt RectPointsToPixelsAndFlipYAxis(::UnityEngine::Rect rect, float_t pixelsPerPoint);

  /// @brief Method Reset, addr 0x6ac80f8, size 0x24, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Action* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action*& __cordl_internal_get_callback();

  constexpr int32_t const& __cordl_internal_get_indexCount() const;

  constexpr int32_t& __cordl_internal_get_indexCount();

  constexpr int32_t const& __cordl_internal_get_indexOffset() const;

  constexpr int32_t& __cordl_internal_get_indexOffset();

  constexpr bool const& __cordl_internal_get_isTail() const;

  constexpr bool& __cordl_internal_get_isTail();

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle* const& __cordl_internal_get_mesh() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& __cordl_internal_get_mesh();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_next() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_next();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_owner() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_owner();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_prev() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_prev();

  constexpr ::UnityEngine::UIElements::UIR::State const& __cordl_internal_get_state() const;

  constexpr ::UnityEngine::UIElements::UIR::State& __cordl_internal_get_state();

  constexpr ::UnityEngine::UIElements::UIR::CommandType const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::UIElements::UIR::CommandType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_callback(::System::Action* value);

  constexpr void __cordl_internal_set_indexCount(int32_t value);

  constexpr void __cordl_internal_set_indexOffset(int32_t value);

  constexpr void __cordl_internal_set_isTail(bool value);

  constexpr void __cordl_internal_set_mesh(::UnityEngine::UIElements::UIR::MeshHandle* value);

  constexpr void __cordl_internal_set_next(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_owner(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_prev(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_state(::UnityEngine::UIElements::UIR::State value);

  constexpr void __cordl_internal_set_type(::UnityEngine::UIElements::UIR::CommandType value);

  /// @brief Method .ctor, addr 0x6ac9638, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_k_ID_MainTex();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ImmediateOverheadMarker();

  static inline void setStaticF_k_ID_MainTex(int32_t value);

  static inline void setStaticF_s_ImmediateOverheadMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChainCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderChainCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderChainCommand(RenderChainCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderChainCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderChainCommand(RenderChainCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5386 };

  /// @brief Field owner, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___owner;

  /// @brief Field prev, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___prev;

  /// @brief Field next, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___next;

  /// @brief Field isTail, offset: 0x30, size: 0x1, def value: None
  bool ___isTail;

  /// @brief Field type, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::CommandType ___type;

  /// @brief Field state, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::State ___state;

  /// @brief Field mesh, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* ___mesh;

  /// @brief Field indexOffset, offset: 0x58, size: 0x4, def value: None
  int32_t ___indexOffset;

  /// @brief Field indexCount, offset: 0x5c, size: 0x4, def value: None
  int32_t ___indexCount;

  /// @brief Field callback, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___owner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___prev) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___next) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___isTail) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___type) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___state) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___mesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___indexOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___indexCount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChainCommand, ___callback) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderChainCommand);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChainCommand*, "UnityEngine.UIElements.UIR", "RenderChainCommand");
