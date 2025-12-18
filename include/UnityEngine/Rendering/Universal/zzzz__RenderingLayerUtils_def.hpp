#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingLayerUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingLayerUtils)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_Event;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_MaskSize;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_Event;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_MaskSize;
}
namespace UnityEngine::Rendering::Universal {
class RenderingLayerUtils;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event);
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderingLayerUtils);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderingLayerUtils/Event
struct CORDL_TYPE RenderingLayerUtils_Event {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderingLayerUtils_Event_Unwrapped
  enum struct __RenderingLayerUtils_Event_Unwrapped : int32_t {
    __E_DepthNormalPrePass = static_cast<int32_t>(0x0),
    __E_Opaque = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderingLayerUtils_Event_Unwrapped() const noexcept {
    return static_cast<__RenderingLayerUtils_Event_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingLayerUtils_Event();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderingLayerUtils_Event(int32_t value__) noexcept;

  /// @brief Field DepthNormalPrePass value: I32(0)
  static ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event const DepthNormalPrePass;

  /// @brief Field Opaque value: I32(1)
  static ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event const Opaque;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12908 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderingLayerUtils/MaskSize
struct CORDL_TYPE RenderingLayerUtils_MaskSize {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderingLayerUtils_MaskSize_Unwrapped
  enum struct __RenderingLayerUtils_MaskSize_Unwrapped : int32_t {
    __E_Bits8 = static_cast<int32_t>(0x0),
    __E_Bits16 = static_cast<int32_t>(0x1),
    __E_Bits24 = static_cast<int32_t>(0x2),
    __E_Bits32 = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderingLayerUtils_MaskSize_Unwrapped() const noexcept {
    return static_cast<__RenderingLayerUtils_MaskSize_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingLayerUtils_MaskSize();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderingLayerUtils_MaskSize(int32_t value__) noexcept;

  /// @brief Field Bits16 value: I32(1)
  static ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const Bits16;

  /// @brief Field Bits24 value: I32(2)
  static ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const Bits24;

  /// @brief Field Bits32 value: I32(3)
  static ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const Bits32;

  /// @brief Field Bits8 value: I32(0)
  static ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const Bits8;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderingLayerUtils
class CORDL_TYPE RenderingLayerUtils : public ::System::Object {
public:
  // Declarations
  using Event = ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event;

  using MaskSize = ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize;

  /// @brief Method Combine, addr 0x66f9828, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event Combine(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event a,
                                                                                       ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event b);

  /// @brief Method Combine, addr 0x66f9b5c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize Combine(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize a,
                                                                                          ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize b);

  /// @brief Method CombineRendererEvents, addr 0x66f9800, size 0x28, virtual false, abstract: false, final false
  static inline void CombineRendererEvents(bool isDeferred, int32_t msaaSampleCount, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event rendererEvent,
                                           ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent);

  /// @brief Method GetBits, addr 0x66f9cd8, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t GetBits(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize);

  /// @brief Method GetFormat, addr 0x66f9d24, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize);

  /// @brief Method GetMaskSize, addr 0x66f9b68, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize GetMaskSize(int32_t bits);

  /// @brief Method RequireRenderingLayers, addr 0x66f98a4, size 0x2b8, virtual false, abstract: false, final false
  static inline bool RequireRenderingLayers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures,
                                            ::UnityEngine::Rendering::Universal::RenderingMode renderingMode, bool accurateGbufferNormals, int32_t msaaSampleCount,
                                            ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent,
                                            ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> combinedMaskSize);

  /// @brief Method RequireRenderingLayers, addr 0x66f9834, size 0x70, virtual false, abstract: false, final false
  static inline bool RequireRenderingLayers(::UnityEngine::Rendering::Universal::UniversalRenderer* universalRenderer,
                                            ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures, int32_t msaaSampleCount,
                                            ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent,
                                            ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> combinedMaskSize);

  /// @brief Method SetupProperties, addr 0x66f9b9c, size 0x70, virtual false, abstract: false, final false
  static inline void SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize);

  /// @brief Method SetupProperties, addr 0x66f9c0c, size 0xcc, virtual false, abstract: false, final false
  static inline void SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize);

  /// @brief Method ToValidRenderingLayers, addr 0x66f9dc8, size 0x104, virtual false, abstract: false, final false
  static inline uint32_t ToValidRenderingLayers(uint32_t renderingLayers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingLayerUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderingLayerUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderingLayerUtils(RenderingLayerUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderingLayerUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderingLayerUtils(RenderingLayerUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderingLayerUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event, "UnityEngine.Rendering.Universal", "RenderingLayerUtils/Event");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, "UnityEngine.Rendering.Universal", "RenderingLayerUtils/MaskSize");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderingLayerUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderingLayerUtils*, "UnityEngine.Rendering.Universal", "RenderingLayerUtils");
