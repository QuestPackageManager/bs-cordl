#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/GraphicsFormatUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsFormatUtility)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct FormatSwizzle;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class GraphicsFormatUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::GraphicsFormatUtility);
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.GraphicsFormatUtility
class CORDL_TYPE GraphicsFormatUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field tableNoStencil, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tableNoStencil,
                      put = setStaticF_tableNoStencil)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      tableNoStencil;

  /// @brief Field tableStencil, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tableStencil,
                      put = setStaticF_tableStencil)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      tableStencil;

  /// @brief Method CanDecompressFormat, addr 0x68fd4b8, size 0x7c, virtual false, abstract: false, final false
  static inline bool CanDecompressFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method CanDecompressFormat, addr 0x68fd474, size 0x44, virtual false, abstract: false, final false
  static inline bool CanDecompressFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool wholeImage);

  /// @brief Method GetAlphaComponentCount, addr 0x68fd1fc, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetAlphaComponentCount(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetBlockSize, addr 0x68fd840, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetBlockSize(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetComponentCount, addr 0x68fd238, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetComponentCount(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetDepthBits, addr 0x68fce98, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetDepthBits(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetDepthStencilFormat, addr 0x68fce20, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormat(int32_t depthBits);

  /// @brief Method GetDepthStencilFormat, addr 0x68fced4, size 0x238, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormat(int32_t minimumDepthBits, int32_t minimumStencilBits);

  /// @brief Method GetDepthStencilFormatFromBitsLegacy_Native, addr 0x68fcde4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatFromBitsLegacy_Native(int32_t minimumDepthBits);

  /// @brief Method GetFormat, addr 0x68fcaa0, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(::UnityEngine::Texture* texture);

  /// @brief Method GetFormatString, addr 0x68fd274, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW GetFormatString(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetFormatString_Injected, addr 0x68fd37c, size 0x44, virtual false, abstract: false, final false
  static inline void GetFormatString_Injected(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetFormat_Injected, addr 0x68fcb6c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat_Injected(::System::IntPtr texture);

  /// @brief Method GetGraphicsFormat, addr 0x68fcc74, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::RenderTextureFormat format, bool isSRGB);

  /// @brief Method GetGraphicsFormat, addr 0x68fcd40, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetGraphicsFormat, addr 0x68fcba8, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::TextureFormat format, bool isSRGB);

  /// @brief Method GetGraphicsFormat_Native_RenderTextureFormat, addr 0x68fccfc, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(::UnityEngine::RenderTextureFormat format, bool isSRGB);

  /// @brief Method GetGraphicsFormat_Native_TextureFormat, addr 0x68fcc30, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_TextureFormat(::UnityEngine::TextureFormat format, bool isSRGB);

  /// @brief Method GetLinearFormat, addr 0x68fd184, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetLinearFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetRenderTextureFormat, addr 0x68fd1c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureFormat GetRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetSRGBFormat, addr 0x68fd148, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetSwizzleA, addr 0x68fd804, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FormatSwizzle GetSwizzleA(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetSwizzleB, addr 0x68fd7c8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FormatSwizzle GetSwizzleB(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetSwizzleG, addr 0x68fd78c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FormatSwizzle GetSwizzleG(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetSwizzleR, addr 0x68fd750, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FormatSwizzle GetSwizzleR(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method HasAlphaChannel, addr 0x68fd570, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasAlphaChannel(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsAlphaOnlyFormat, addr 0x68fd534, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsAlphaOnlyFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsCompressedFormat, addr 0x68fd3fc, size 0x78, virtual false, abstract: false, final false
  static inline bool IsCompressedFormat(::UnityEngine::TextureFormat format);

  /// @brief Method IsCompressedFormat_Native_TextureFormat, addr 0x68fd3c0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsCompressedFormat_Native_TextureFormat(::UnityEngine::TextureFormat format);

  /// @brief Method IsCrunchFormat, addr 0x68fd714, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsCrunchFormat(::UnityEngine::TextureFormat format);

  /// @brief Method IsDepthFormat, addr 0x68fd5ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsDepthFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsDepthStencilFormat, addr 0x68fd624, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsDepthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsFloatFormat, addr 0x68fd660, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsFloatFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsHalfFormat, addr 0x68fd69c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsHalfFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsPVRTCFormat, addr 0x68fd6d8, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsPVRTCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsSRGBFormat, addr 0x68fd10c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsStencilFormat, addr 0x68fd5e8, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  static inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> getStaticF_tableNoStencil();

  static inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> getStaticF_tableStencil();

  static inline void setStaticF_tableNoStencil(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  static inline void setStaticF_tableStencil(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsFormatUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicsFormatUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsFormatUtility(GraphicsFormatUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsFormatUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsFormatUtility(GraphicsFormatUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10900 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::GraphicsFormatUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*, "UnityEngine.Experimental.Rendering", "GraphicsFormatUtility");
