#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Painter2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__SafeHandleAccess_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Painter2D)
namespace UnityEngine::UIElements::UIR {
class DetachedAllocator;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Painter2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Painter2D);
// Dependencies System.IDisposable, System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.SafeHandleAccess
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Painter2D
class CORDL_TYPE Painter2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isPainterActive>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isPainterActive_k__BackingField, put = setStaticF__isPainterActive_k__BackingField)) bool _isPainterActive_k__BackingField;

  /// @brief Field m_Ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ctx, put = __cordl_internal_set_m_Ctx)) ::UnityEngine::UIElements::MeshGenerationContext* m_Ctx;

  /// @brief Field m_DetachedAllocator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DetachedAllocator, put = __cordl_internal_set_m_DetachedAllocator)) ::UnityEngine::UIElements::UIR::DetachedAllocator* m_DetachedAllocator;

  /// @brief Field m_Disposed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Disposed, put = __cordl_internal_set_m_Disposed)) bool m_Disposed;

  /// @brief Field m_Handle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Handle, put = __cordl_internal_set_m_Handle)) ::UnityEngine::UIElements::SafeHandleAccess m_Handle;

  /// @brief Field s_FillMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FillMarker, put = setStaticF_s_FillMarker)) ::Unity::Profiling::ProfilerMarker s_FillMarker;

  /// @brief Field s_MaxArcRadius, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_MaxArcRadius, put = setStaticF_s_MaxArcRadius)) float_t s_MaxArcRadius;

  /// @brief Field s_StrokeMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_StrokeMarker, put = setStaticF_s_StrokeMarker)) ::Unity::Profiling::ProfilerMarker s_StrokeMarker;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x4a4cf48, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x4a4cfac, size 0x88, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::Painter2D* New_ctor(::UnityEngine::UIElements::MeshGenerationContext* ctx);

  /// @brief Method Reset, addr 0x4a4cf04, size 0x44, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::UIElements::MeshGenerationContext* const& __cordl_internal_get_m_Ctx() const;

  constexpr ::UnityEngine::UIElements::MeshGenerationContext*& __cordl_internal_get_m_Ctx();

  constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator* const& __cordl_internal_get_m_DetachedAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::DetachedAllocator*& __cordl_internal_get_m_DetachedAllocator();

  constexpr bool const& __cordl_internal_get_m_Disposed() const;

  constexpr bool& __cordl_internal_get_m_Disposed();

  constexpr ::UnityEngine::UIElements::SafeHandleAccess const& __cordl_internal_get_m_Handle() const;

  constexpr ::UnityEngine::UIElements::SafeHandleAccess& __cordl_internal_get_m_Handle();

  constexpr void __cordl_internal_set_m_Ctx(::UnityEngine::UIElements::MeshGenerationContext* value);

  constexpr void __cordl_internal_set_m_DetachedAllocator(::UnityEngine::UIElements::UIR::DetachedAllocator* value);

  constexpr void __cordl_internal_set_m_Disposed(bool value);

  constexpr void __cordl_internal_set_m_Handle(::UnityEngine::UIElements::SafeHandleAccess value);

  /// @brief Method .ctor, addr 0x4a4cdc0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::MeshGenerationContext* ctx);

  static inline bool getStaticF__isPainterActive_k__BackingField();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_FillMarker();

  static inline float_t getStaticF_s_MaxArcRadius();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_StrokeMarker();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__isPainterActive_k__BackingField(bool value);

  static inline void setStaticF_s_FillMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MaxArcRadius(float_t value);

  static inline void setStaticF_s_StrokeMarker(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_isPainterActive, addr 0x4a4d034, size 0x60, virtual false, abstract: false, final false
  static inline void set_isPainterActive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Painter2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Painter2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Painter2D(Painter2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Painter2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Painter2D(Painter2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6040 };

  /// @brief Field m_Ctx, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshGenerationContext* ___m_Ctx;

  /// @brief Field m_DetachedAllocator, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::DetachedAllocator* ___m_DetachedAllocator;

  /// @brief Field m_Handle, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::SafeHandleAccess ___m_Handle;

  /// @brief Field m_Disposed, offset: 0x28, size: 0x1, def value: None
  bool ___m_Disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_DetachedAllocator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Painter2D, ___m_Disposed) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Painter2D, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Painter2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Painter2D*, "UnityEngine.UIElements", "Painter2D");
