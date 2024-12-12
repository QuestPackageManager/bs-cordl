#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationContext)
namespace UnityEngine::UIElements {
class IStylePainter;
}
namespace UnityEngine::UIElements {
struct MeshGenerationContext_MeshFlags;
}
namespace UnityEngine::UIElements {
class Painter2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct MeshGenerationContext_MeshFlags;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::MeshGenerationContext_MeshFlags);
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshGenerationContext);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshGenerationContext/MeshFlags
struct CORDL_TYPE MeshGenerationContext_MeshFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MeshGenerationContext_MeshFlags_Unwrapped
  enum struct __MeshGenerationContext_MeshFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UVisDisplacement = static_cast<int32_t>(0x1),
    __E_SkipDynamicAtlas = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MeshGenerationContext_MeshFlags_Unwrapped() const noexcept {
    return static_cast<__MeshGenerationContext_MeshFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationContext_MeshFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshGenerationContext_MeshFlags(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags const None;

  /// @brief Field SkipDynamicAtlas value: I32(2)
  static ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags const SkipDynamicAtlas;

  /// @brief Field UVisDisplacement value: I32(1)
  static ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags const UVisDisplacement;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6033 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationContext_MeshFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationContext_MeshFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MeshGenerationContext
class CORDL_TYPE MeshGenerationContext : public ::System::Object {
public:
  // Declarations
  using MeshFlags = ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags;

  __declspec(property(get = get_hasPainter2D)) bool hasPainter2D;

  /// @brief Field m_Painter2D, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Painter2D, put = __cordl_internal_set_m_Painter2D)) ::UnityEngine::UIElements::Painter2D* m_Painter2D;

  /// @brief Field painter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_painter, put = __cordl_internal_set_painter)) ::UnityEngine::UIElements::IStylePainter* painter;

  __declspec(property(get = get_painter2D)) ::UnityEngine::UIElements::Painter2D* painter2D;

  /// @brief Field s_AllocateMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_AllocateMarker, put = setStaticF_s_AllocateMarker)) ::Unity::Profiling::ProfilerMarker s_AllocateMarker;

  /// @brief Field s_DrawVectorImageMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DrawVectorImageMarker, put = setStaticF_s_DrawVectorImageMarker)) ::Unity::Profiling::ProfilerMarker s_DrawVectorImageMarker;

  static inline ::UnityEngine::UIElements::MeshGenerationContext* New_ctor(::UnityEngine::UIElements::IStylePainter* painter);

  constexpr ::UnityEngine::UIElements::Painter2D* const& __cordl_internal_get_m_Painter2D() const;

  constexpr ::UnityEngine::UIElements::Painter2D*& __cordl_internal_get_m_Painter2D();

  constexpr ::UnityEngine::UIElements::IStylePainter* const& __cordl_internal_get_painter() const;

  constexpr ::UnityEngine::UIElements::IStylePainter*& __cordl_internal_get_painter();

  constexpr void __cordl_internal_set_m_Painter2D(::UnityEngine::UIElements::Painter2D* value);

  constexpr void __cordl_internal_set_painter(::UnityEngine::UIElements::IStylePainter* value);

  /// @brief Method .ctor, addr 0x4a4a6dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::IStylePainter* painter);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_AllocateMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_DrawVectorImageMarker();

  /// @brief Method get_hasPainter2D, addr 0x4a4a6cc, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasPainter2D();

  /// @brief Method get_painter2D, addr 0x4a4a610, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Painter2D* get_painter2D();

  static inline void setStaticF_s_AllocateMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_DrawVectorImageMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshGenerationContext(MeshGenerationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshGenerationContext(MeshGenerationContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6034 };

  /// @brief Field m_Painter2D, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::Painter2D* ___m_Painter2D;

  /// @brief Field painter, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::IStylePainter* ___painter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationContext, ___m_Painter2D) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationContext, ___painter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationContext, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContext_MeshFlags, "UnityEngine.UIElements", "MeshGenerationContext/MeshFlags");
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContext*, "UnityEngine.UIElements", "MeshGenerationContext");
