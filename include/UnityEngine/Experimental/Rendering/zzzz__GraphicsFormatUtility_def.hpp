#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/GraphicsFormatUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsFormatUtility)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class GraphicsFormatUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::GraphicsFormatUtility);
// Type: UnityEngine.Experimental.Rendering::GraphicsFormatUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::GraphicsFormatUtility*
class CORDL_TYPE GraphicsFormatUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field tableNoStencil, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tableNoStencil,
                             put = setStaticF_tableNoStencil)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      tableNoStencil;

  /// @brief Field tableStencil, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tableStencil,
                             put = setStaticF_tableStencil)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      tableStencil;

  /// @brief Method CanDecompressFormat, addr 0x486dc58, size 0x78, virtual false, abstract: false, final false
  static inline bool CanDecompressFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method CanDecompressFormat, addr 0x486dc14, size 0x44, virtual false, abstract: false, final false
  static inline bool CanDecompressFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool wholeImage);

  /// @brief Method GetDepthBits, addr 0x486d840, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetDepthBits(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetDepthStencilFormat, addr 0x486d7cc, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormat(int32_t minimumDepthBits);

  /// @brief Method GetDepthStencilFormat, addr 0x486d87c, size 0x1f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormat(int32_t minimumDepthBits, int32_t minimumStencilBits);

  /// @brief Method GetDepthStencilFormatFromBitsLegacy_Native, addr 0x486d790, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatFromBitsLegacy_Native(int32_t minimumDepthBits);

  /// @brief Method GetGraphicsFormat, addr 0x486d640, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::RenderTextureFormat format, bool isSRGB);

  /// @brief Method GetGraphicsFormat, addr 0x486d708, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetGraphicsFormat, addr 0x486d578, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::TextureFormat format, bool isSRGB);

  /// @brief Method GetGraphicsFormat_Native_RenderTextureFormat, addr 0x486d6c4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(::UnityEngine::RenderTextureFormat format, bool isSRGB);

  /// @brief Method GetGraphicsFormat_Native_TextureFormat, addr 0x486d5fc, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_TextureFormat(::UnityEngine::TextureFormat format, bool isSRGB);

  /// @brief Method GetLinearFormat, addr 0x486daec, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetLinearFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetRenderTextureFormat, addr 0x486db28, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureFormat GetRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetSRGBFormat, addr 0x486dab0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsCompressedFormat, addr 0x486dba0, size 0x74, virtual false, abstract: false, final false
  static inline bool IsCompressedFormat(::UnityEngine::TextureFormat format);

  /// @brief Method IsCompressedFormat_Native_TextureFormat, addr 0x486db64, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsCompressedFormat_Native_TextureFormat(::UnityEngine::TextureFormat format);

  /// @brief Method IsCrunchFormat, addr 0x486dd48, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsCrunchFormat(::UnityEngine::TextureFormat format);

  /// @brief Method IsDepthStencilFormat, addr 0x486dcd0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsDepthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsPVRTCFormat, addr 0x486dd0c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsPVRTCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsSRGBFormat, addr 0x486da74, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11285 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::GraphicsFormatUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*, "UnityEngine.Experimental.Rendering", "GraphicsFormatUtility");
