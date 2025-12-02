#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FSRUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FSRUtils)
namespace UnityEngine::Rendering {
class BaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class FSRUtils_ShaderConstants;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class FSRUtils;
}
namespace UnityEngine::Rendering {
class FSRUtils_ShaderConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::FSRUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::FSRUtils_ShaderConstants);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.FSRUtils/ShaderConstants
class CORDL_TYPE FSRUtils_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _FsrEasuConstants0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FsrEasuConstants0, put = setStaticF__FsrEasuConstants0)) int32_t _FsrEasuConstants0;

  /// @brief Field _FsrEasuConstants1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FsrEasuConstants1, put = setStaticF__FsrEasuConstants1)) int32_t _FsrEasuConstants1;

  /// @brief Field _FsrEasuConstants2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FsrEasuConstants2, put = setStaticF__FsrEasuConstants2)) int32_t _FsrEasuConstants2;

  /// @brief Field _FsrEasuConstants3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FsrEasuConstants3, put = setStaticF__FsrEasuConstants3)) int32_t _FsrEasuConstants3;

  /// @brief Field _FsrRcasConstants, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FsrRcasConstants, put = setStaticF__FsrRcasConstants)) int32_t _FsrRcasConstants;

  static inline int32_t getStaticF__FsrEasuConstants0();

  static inline int32_t getStaticF__FsrEasuConstants1();

  static inline int32_t getStaticF__FsrEasuConstants2();

  static inline int32_t getStaticF__FsrEasuConstants3();

  static inline int32_t getStaticF__FsrRcasConstants();

  static inline void setStaticF__FsrEasuConstants0(int32_t value);

  static inline void setStaticF__FsrEasuConstants1(int32_t value);

  static inline void setStaticF__FsrEasuConstants2(int32_t value);

  static inline void setStaticF__FsrEasuConstants3(int32_t value);

  static inline void setStaticF__FsrRcasConstants(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FSRUtils_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FSRUtils_ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FSRUtils_ShaderConstants(FSRUtils_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FSRUtils_ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FSRUtils_ShaderConstants(FSRUtils_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12251 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FSRUtils_ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.FSRUtils
class CORDL_TYPE FSRUtils : public ::System::Object {
public:
  // Declarations
  using ShaderConstants = ::UnityEngine::Rendering::FSRUtils_ShaderConstants;

  /// @brief Method IsSupported, addr 0x65a3e8c, size 0x34, virtual false, abstract: false, final false
  static inline bool IsSupported();

  /// @brief Method SetEasuConstants, addr 0x65a3d78, size 0x14, virtual false, abstract: false, final false
  static inline void SetEasuConstants(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::UnityEngine::Vector2 inputViewportSizeInPixels, ::UnityEngine::Vector2 inputImageSizeInPixels,
                                      ::UnityEngine::Vector2 outputImageSizeInPixels);

  /// @brief Method SetEasuConstants, addr 0x65a3bf4, size 0x184, virtual false, abstract: false, final false
  static inline void SetEasuConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2 inputViewportSizeInPixels, ::UnityEngine::Vector2 inputImageSizeInPixels,
                                      ::UnityEngine::Vector2 outputImageSizeInPixels);

  /// @brief Method SetRcasConstants, addr 0x65a3d8c, size 0xc8, virtual false, abstract: false, final false
  static inline void SetRcasConstants(::UnityEngine::Rendering::CommandBuffer* cmd, float_t sharpnessStops);

  /// @brief Method SetRcasConstantsLinear, addr 0x65a3e54, size 0x14, virtual false, abstract: false, final false
  static inline void SetRcasConstantsLinear(::UnityEngine::Rendering::CommandBuffer* cmd, float_t sharpnessLinear);

  /// @brief Method SetRcasConstantsLinear, addr 0x65a3e68, size 0x24, virtual false, abstract: false, final false
  static inline void SetRcasConstantsLinear(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t sharpnessLinear);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FSRUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FSRUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FSRUtils(FSRUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FSRUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FSRUtils(FSRUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12252 };

  /// @brief Field kDefaultSharpnessLinear offset 0xffffffff size 0x4
  static constexpr float_t kDefaultSharpnessLinear{ static_cast<float_t>(0.92f) };

  /// @brief Field kDefaultSharpnessStops offset 0xffffffff size 0x4
  static constexpr float_t kDefaultSharpnessStops{ static_cast<float_t>(0.2f) };

  /// @brief Field kMaxSharpnessStops offset 0xffffffff size 0x4
  static constexpr float_t kMaxSharpnessStops{ static_cast<float_t>(2.5f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FSRUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::FSRUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FSRUtils*, "UnityEngine.Rendering", "FSRUtils");
NEED_NO_BOX(::UnityEngine::Rendering::FSRUtils_ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FSRUtils_ShaderConstants*, "UnityEngine.Rendering", "FSRUtils/ShaderConstants");
