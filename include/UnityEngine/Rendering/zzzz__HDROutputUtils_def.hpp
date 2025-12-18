#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDROutputUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDROutputUtils)
namespace UnityEngine::Rendering {
struct HDROutputUtils_HDRDisplayInformation;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_Operation;
}
namespace UnityEngine::Rendering {
class HDROutputUtils_ShaderKeywords;
}
namespace UnityEngine::Rendering {
class HDROutputUtils_ShaderPropertyId;
}
namespace UnityEngine::Rendering {
struct ShaderKeywordSet;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct HDROutputUtils_Operation;
}
namespace UnityEngine::Rendering {
class HDROutputUtils;
}
namespace UnityEngine::Rendering {
class HDROutputUtils_ShaderKeywords;
}
namespace UnityEngine::Rendering {
class HDROutputUtils_ShaderPropertyId;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_HDRDisplayInformation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::HDROutputUtils_Operation);
MARK_REF_PTR_T(::UnityEngine::Rendering::HDROutputUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords);
MARK_REF_PTR_T(::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId);
MARK_VAL_T(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.HDROutputUtils/Operation
struct CORDL_TYPE HDROutputUtils_Operation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HDROutputUtils_Operation_Unwrapped
  enum struct __HDROutputUtils_Operation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ColorConversion = static_cast<int32_t>(0x1),
    __E_ColorEncoding = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HDROutputUtils_Operation_Unwrapped() const noexcept {
    return static_cast<__HDROutputUtils_Operation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDROutputUtils_Operation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HDROutputUtils_Operation(int32_t value__) noexcept;

  /// @brief Field ColorConversion value: I32(1)
  static ::UnityEngine::Rendering::HDROutputUtils_Operation const ColorConversion;

  /// @brief Field ColorEncoding value: I32(2)
  static ::UnityEngine::Rendering::HDROutputUtils_Operation const ColorEncoding;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::HDROutputUtils_Operation const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::HDROutputUtils_Operation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HDROutputUtils_Operation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.HDROutputUtils/HDRDisplayInformation
struct CORDL_TYPE HDROutputUtils_HDRDisplayInformation {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x660f174, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxFullFrameToneMapLuminance, int32_t maxToneMapLuminance, int32_t minToneMapLuminance, float_t hdrPaperWhiteNits);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDROutputUtils_HDRDisplayInformation();

  // Ctor Parameters [CppParam { name: "maxFullFrameToneMapLuminance", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxToneMapLuminance", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "minToneMapLuminance", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "paperWhiteNits", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HDROutputUtils_HDRDisplayInformation(int32_t maxFullFrameToneMapLuminance, int32_t maxToneMapLuminance, int32_t minToneMapLuminance, float_t paperWhiteNits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12279 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field maxFullFrameToneMapLuminance, offset: 0x0, size: 0x4, def value: None
  int32_t maxFullFrameToneMapLuminance;

  /// @brief Field maxToneMapLuminance, offset: 0x4, size: 0x4, def value: None
  int32_t maxToneMapLuminance;

  /// @brief Field minToneMapLuminance, offset: 0x8, size: 0x4, def value: None
  int32_t minToneMapLuminance;

  /// @brief Field paperWhiteNits, offset: 0xc, size: 0x4, def value: None
  float_t paperWhiteNits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, maxFullFrameToneMapLuminance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, maxToneMapLuminance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, minToneMapLuminance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, paperWhiteNits) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.ShaderKeyword
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HDROutputUtils/ShaderKeywords
class CORDL_TYPE HDROutputUtils_ShaderKeywords : public ::System::Object {
public:
  // Declarations
  /// @brief Field HDRColorSpaceConversion, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_HDRColorSpaceConversion, put = setStaticF_HDRColorSpaceConversion)) ::UnityEngine::Rendering::ShaderKeyword HDRColorSpaceConversion;

  /// @brief Field HDRColorSpaceConversionAndEncoding, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_HDRColorSpaceConversionAndEncoding,
                      put = setStaticF_HDRColorSpaceConversionAndEncoding)) ::UnityEngine::Rendering::ShaderKeyword HDRColorSpaceConversionAndEncoding;

  /// @brief Field HDREncoding, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_HDREncoding, put = setStaticF_HDREncoding)) ::UnityEngine::Rendering::ShaderKeyword HDREncoding;

  /// @brief Field HDRInput, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_HDRInput, put = setStaticF_HDRInput)) ::UnityEngine::Rendering::ShaderKeyword HDRInput;

  static inline ::UnityEngine::Rendering::ShaderKeyword getStaticF_HDRColorSpaceConversion();

  static inline ::UnityEngine::Rendering::ShaderKeyword getStaticF_HDRColorSpaceConversionAndEncoding();

  static inline ::UnityEngine::Rendering::ShaderKeyword getStaticF_HDREncoding();

  static inline ::UnityEngine::Rendering::ShaderKeyword getStaticF_HDRInput();

  static inline void setStaticF_HDRColorSpaceConversion(::UnityEngine::Rendering::ShaderKeyword value);

  static inline void setStaticF_HDRColorSpaceConversionAndEncoding(::UnityEngine::Rendering::ShaderKeyword value);

  static inline void setStaticF_HDREncoding(::UnityEngine::Rendering::ShaderKeyword value);

  static inline void setStaticF_HDRInput(::UnityEngine::Rendering::ShaderKeyword value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDROutputUtils_ShaderKeywords();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils_ShaderKeywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDROutputUtils_ShaderKeywords(HDROutputUtils_ShaderKeywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils_ShaderKeywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDROutputUtils_ShaderKeywords(HDROutputUtils_ShaderKeywords const&) = delete;

  /// @brief Field HDR_COLORSPACE_CONVERSION offset 0xffffffff size 0x8
  static constexpr ::ConstString HDR_COLORSPACE_CONVERSION{ u"HDR_COLORSPACE_CONVERSION" };

  /// @brief Field HDR_COLORSPACE_CONVERSION_AND_ENCODING offset 0xffffffff size 0x8
  static constexpr ::ConstString HDR_COLORSPACE_CONVERSION_AND_ENCODING{ u"HDR_COLORSPACE_CONVERSION_AND_ENCODING" };

  /// @brief Field HDR_ENCODING offset 0xffffffff size 0x8
  static constexpr ::ConstString HDR_ENCODING{ u"HDR_ENCODING" };

  /// @brief Field HDR_INPUT offset 0xffffffff size 0x8
  static constexpr ::ConstString HDR_INPUT{ u"HDR_INPUT" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12280 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HDROutputUtils/ShaderPropertyId
class CORDL_TYPE HDROutputUtils_ShaderPropertyId : public ::System::Object {
public:
  // Declarations
  /// @brief Field hdrColorSpace, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_hdrColorSpace, put = setStaticF_hdrColorSpace)) int32_t hdrColorSpace;

  /// @brief Field hdrEncoding, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_hdrEncoding, put = setStaticF_hdrEncoding)) int32_t hdrEncoding;

  static inline int32_t getStaticF_hdrColorSpace();

  static inline int32_t getStaticF_hdrEncoding();

  static inline void setStaticF_hdrColorSpace(int32_t value);

  static inline void setStaticF_hdrEncoding(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDROutputUtils_ShaderPropertyId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils_ShaderPropertyId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDROutputUtils_ShaderPropertyId(HDROutputUtils_ShaderPropertyId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils_ShaderPropertyId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDROutputUtils_ShaderPropertyId(HDROutputUtils_ShaderPropertyId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12281 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HDROutputUtils
class CORDL_TYPE HDROutputUtils : public ::System::Object {
public:
  // Declarations
  using HDRDisplayInformation = ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation;

  using Operation = ::UnityEngine::Rendering::HDROutputUtils_Operation;

  using ShaderKeywords = ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords;

  using ShaderPropertyId = ::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId;

  /// @brief Method ConfigureHDROutput, addr 0x660edbc, size 0x250, virtual false, abstract: false, final false
  static inline void ConfigureHDROutput(::UnityEngine::ComputeShader* computeShader, ::UnityEngine::ColorGamut gamut, ::UnityEngine::Rendering::HDROutputUtils_Operation operations);

  /// @brief Method ConfigureHDROutput, addr 0x660e928, size 0x248, virtual false, abstract: false, final false
  static inline void ConfigureHDROutput(::UnityEngine::Material* material, ::UnityEngine::ColorGamut gamut, ::UnityEngine::Rendering::HDROutputUtils_Operation operations);

  /// @brief Method ConfigureHDROutput, addr 0x660ec38, size 0x184, virtual false, abstract: false, final false
  static inline void ConfigureHDROutput(::UnityEngine::Material* material, ::UnityEngine::Rendering::HDROutputUtils_Operation operations);

  /// @brief Method ConfigureHDROutput, addr 0x660eb70, size 0xc8, virtual false, abstract: false, final false
  static inline void ConfigureHDROutput(::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::ColorGamut gamut);

  /// @brief Method GetColorEncodingForGamut, addr 0x660e77c, size 0x1ac, virtual false, abstract: false, final false
  static inline bool GetColorEncodingForGamut(::UnityEngine::ColorGamut gamut, ::ByRef<int32_t> encoding);

  /// @brief Method GetColorSpaceForGamut, addr 0x660e528, size 0x254, virtual false, abstract: false, final false
  static inline bool GetColorSpaceForGamut(::UnityEngine::ColorGamut gamut, ::ByRef<int32_t> colorspace);

  /// @brief Method IsShaderVariantValid, addr 0x660f00c, size 0x168, virtual false, abstract: false, final false
  static inline bool IsShaderVariantValid(::UnityEngine::Rendering::ShaderKeywordSet shaderKeywordSet, bool isHDREnabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDROutputUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDROutputUtils(HDROutputUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDROutputUtils(HDROutputUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12282 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HDROutputUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDROutputUtils_Operation, "UnityEngine.Rendering", "HDROutputUtils/Operation");
NEED_NO_BOX(::UnityEngine::Rendering::HDROutputUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDROutputUtils*, "UnityEngine.Rendering", "HDROutputUtils");
NEED_NO_BOX(::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*, "UnityEngine.Rendering", "HDROutputUtils/ShaderKeywords");
NEED_NO_BOX(::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*, "UnityEngine.Rendering", "HDROutputUtils/ShaderPropertyId");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, "UnityEngine.Rendering", "HDROutputUtils/HDRDisplayInformation");
