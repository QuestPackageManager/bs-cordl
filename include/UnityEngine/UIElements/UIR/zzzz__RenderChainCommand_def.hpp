#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandType_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChainCommand)
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace System {
class Action;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Rect;
}
namespace System {
class Exception;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::UIR {
class DrawParams;
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
// Type: UnityEngine.UIElements.UIR::RenderChainCommand
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7399)), TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(7442)),
// TypeDefinitionIndex(TypeDefinitionIndex(7441)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7399), inst: 383 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7444)) CS
// Name: ::UnityEngine.UIElements.UIR::RenderChainCommand*
class CORDL_TYPE RenderChainCommand : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::RenderChainCommand*> {
public:
  // Declarations
  /// @brief Field owner, offset 0x18, size 0x8
  __declspec(property(get = __get_owner, put = __set_owner))::UnityEngine::UIElements::VisualElement* owner;

  /// @brief Field prev, offset 0x20, size 0x8
  __declspec(property(get = __get_prev, put = __set_prev))::UnityEngine::UIElements::UIR::RenderChainCommand* prev;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::UnityEngine::UIElements::UIR::RenderChainCommand* next;

  /// @brief Field closing, offset 0x30, size 0x1
  __declspec(property(get = __get_closing, put = __set_closing)) bool closing;

  /// @brief Field type, offset 0x34, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::UnityEngine::UIElements::UIR::CommandType type;

  /// @brief Field state, offset 0x38, size 0x20
  __declspec(property(get = __get_state, put = __set_state))::UnityEngine::UIElements::UIR::State state;

  /// @brief Field mesh, offset 0x58, size 0x8
  __declspec(property(get = __get_mesh, put = __set_mesh))::UnityEngine::UIElements::UIR::MeshHandle* mesh;

  /// @brief Field indexOffset, offset 0x60, size 0x4
  __declspec(property(get = __get_indexOffset, put = __set_indexOffset)) int32_t indexOffset;

  /// @brief Field indexCount, offset 0x64, size 0x4
  __declspec(property(get = __get_indexCount, put = __set_indexCount)) int32_t indexCount;

  /// @brief Field callback, offset 0x68, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::Action* callback;

  /// @brief Field k_ID_MainTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ID_MainTex, put = setStaticF_k_ID_MainTex)) int32_t k_ID_MainTex;

  /// @brief Field s_ImmediateOverheadMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ImmediateOverheadMarker, put = setStaticF_s_ImmediateOverheadMarker))::Unity::Profiling::ProfilerMarker s_ImmediateOverheadMarker;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_owner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_owner() const;

  constexpr void __set_owner(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __get_prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> const& __get_prev() const;

  constexpr void __set_prev(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> const& __get_next() const;

  constexpr void __set_next(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr bool& __get_closing();

  constexpr bool const& __get_closing() const;

  constexpr void __set_closing(bool value);

  constexpr ::UnityEngine::UIElements::UIR::CommandType& __get_type();

  constexpr ::UnityEngine::UIElements::UIR::CommandType const& __get_type() const;

  constexpr void __set_type(::UnityEngine::UIElements::UIR::CommandType value);

  constexpr ::UnityEngine::UIElements::UIR::State& __get_state();

  constexpr ::UnityEngine::UIElements::UIR::State const& __get_state() const;

  constexpr void __set_state(::UnityEngine::UIElements::UIR::State value);

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& __get_mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::MeshHandle*> const& __get_mesh() const;

  constexpr void __set_mesh(::UnityEngine::UIElements::UIR::MeshHandle* value);

  constexpr int32_t& __get_indexOffset();

  constexpr int32_t const& __get_indexOffset() const;

  constexpr void __set_indexOffset(int32_t value);

  constexpr int32_t& __get_indexCount();

  constexpr int32_t const& __get_indexCount() const;

  constexpr void __set_indexCount(int32_t value);

  constexpr ::System::Action*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_callback() const;

  constexpr void __set_callback(::System::Action* value);

  static inline void setStaticF_k_ID_MainTex(int32_t value);

  static inline int32_t getStaticF_k_ID_MainTex();

  static inline void setStaticF_s_ImmediateOverheadMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ImmediateOverheadMarker();

  /// @brief Method Reset addr 0x2dd54f8 size 0x24 virtual false final false
  inline void Reset();

  /// @brief Method ExecuteNonDrawMesh addr 0x2dd3c84 size 0xbbc virtual false final false
  inline void ExecuteNonDrawMesh(::UnityEngine::UIElements::UIR::DrawParams* drawParams, float_t pixelsPerPoint, ByRef<::System::Exception*> immediateException);

  /// @brief Method Blit addr 0x2dd5ad8 size 0x170 virtual false final false
  inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* destination, float_t depth);

  /// @brief Method CombineScissorRects addr 0x2dd5920 size 0x1b8 virtual false final false
  static inline ::UnityEngine::Rect CombineScissorRects(::UnityEngine::Rect r0, ::UnityEngine::Rect r1);

  /// @brief Method RectPointsToPixelsAndFlipYAxis addr 0x2dd551c size 0x404 virtual false final false
  static inline ::UnityEngine::RectInt RectPointsToPixelsAndFlipYAxis(::UnityEngine::Rect rect, float_t pixelsPerPoint);

  static inline ::UnityEngine::UIElements::UIR::RenderChainCommand* New_ctor();

  /// @brief Method .ctor addr 0x2dd5c48 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RenderChainCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderChainCommand(RenderChainCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderChainCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderChainCommand(RenderChainCommand const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChainCommand();

public:
  /// @brief Field owner, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___owner;

  /// @brief Field prev, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___prev;

  /// @brief Field next, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___next;

  /// @brief Field closing, offset: 0x30, size: 0x1, def value: None
  bool ___closing;

  /// @brief Field type, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::CommandType ___type;

  /// @brief Field state, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::State ___state;

  /// @brief Field mesh, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* ___mesh;

  /// @brief Field indexOffset, offset: 0x60, size: 0x4, def value: None
  int32_t ___indexOffset;

  /// @brief Field indexCount, offset: 0x64, size: 0x4, def value: None
  int32_t ___indexCount;

  /// @brief Field callback, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderChainCommand);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChainCommand*, "UnityEngine.UIElements.UIR", "RenderChainCommand");
