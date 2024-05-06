#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KawaseBlurRendererSO)
namespace GlobalNamespace {
class __KawaseBlurRendererSO__BloomKernel;
}
namespace GlobalNamespace {
struct __KawaseBlurRendererSO__KernelSize;
}
namespace GlobalNamespace {
struct __KawaseBlurRendererSO__Pass;
}
namespace GlobalNamespace {
struct __KawaseBlurRendererSO__WeightsType;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct __KawaseBlurRendererSO__KernelSize;
}
namespace GlobalNamespace {
struct __KawaseBlurRendererSO__Pass;
}
namespace GlobalNamespace {
struct __KawaseBlurRendererSO__WeightsType;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace GlobalNamespace {
class __KawaseBlurRendererSO__BloomKernel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize);
MARK_VAL_T(::GlobalNamespace::__KawaseBlurRendererSO__Pass);
MARK_VAL_T(::GlobalNamespace::__KawaseBlurRendererSO__WeightsType);
MARK_REF_PTR_T(::GlobalNamespace::KawaseBlurRendererSO);
MARK_REF_PTR_T(::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel);
// Type: ::KernelSize
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::KawaseBlurRendererSO::KernelSize
struct CORDL_TYPE __KawaseBlurRendererSO__KernelSize {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____KawaseBlurRendererSO__KernelSize_Unwrapped
  enum struct ____KawaseBlurRendererSO__KernelSize_Unwrapped : int32_t {
    __E_Kernel7 = static_cast<int32_t>(0x0),
    __E_Kernel15 = static_cast<int32_t>(0x1),
    __E_Kernel23 = static_cast<int32_t>(0x2),
    __E_Kernel35 = static_cast<int32_t>(0x3),
    __E_Kernel63 = static_cast<int32_t>(0x4),
    __E_Kernel127 = static_cast<int32_t>(0x5),
    __E_Kernel135 = static_cast<int32_t>(0x6),
    __E_Kernel143 = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____KawaseBlurRendererSO__KernelSize_Unwrapped() const noexcept {
    return static_cast<____KawaseBlurRendererSO__KernelSize_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __KawaseBlurRendererSO__KernelSize();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __KawaseBlurRendererSO__KernelSize(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Kernel127 value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const Kernel127;

  /// @brief Field Kernel135 value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const Kernel135;

  /// @brief Field Kernel143 value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const Kernel143;

  /// @brief Field Kernel15 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const Kernel15;

  /// @brief Field Kernel23 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const Kernel23;

  /// @brief Field Kernel35 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const Kernel35;

  /// @brief Field Kernel63 value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const Kernel63;

  /// @brief Field Kernel7 value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const Kernel7;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::WeightsType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::KawaseBlurRendererSO::WeightsType
struct CORDL_TYPE __KawaseBlurRendererSO__WeightsType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____KawaseBlurRendererSO__WeightsType_Unwrapped
  enum struct ____KawaseBlurRendererSO__WeightsType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AlphaWeights = static_cast<int32_t>(0x1),
    __E_AlphaAndDepthWeights = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____KawaseBlurRendererSO__WeightsType_Unwrapped() const noexcept {
    return static_cast<____KawaseBlurRendererSO__WeightsType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __KawaseBlurRendererSO__WeightsType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __KawaseBlurRendererSO__WeightsType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AlphaAndDepthWeights value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType const AlphaAndDepthWeights;

  /// @brief Field AlphaWeights value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType const AlphaWeights;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__KawaseBlurRendererSO__WeightsType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__KawaseBlurRendererSO__WeightsType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomKernel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::KawaseBlurRendererSO::BloomKernel*
class CORDL_TYPE __KawaseBlurRendererSO__BloomKernel : public ::System::Object {
public:
  // Declarations
  /// @brief Field kernelSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelSize, put = __cordl_internal_set_kernelSize))::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize;

  /// @brief Field sharedPartWithNext, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedPartWithNext, put = __cordl_internal_set_sharedPartWithNext)) int32_t sharedPartWithNext;

  static inline ::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel* New_ctor();

  constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& __cordl_internal_get_kernelSize() const;

  constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& __cordl_internal_get_kernelSize();

  constexpr int32_t const& __cordl_internal_get_sharedPartWithNext() const;

  constexpr int32_t& __cordl_internal_get_sharedPartWithNext();

  constexpr void __cordl_internal_set_kernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize value);

  constexpr void __cordl_internal_set_sharedPartWithNext(int32_t value);

  /// @brief Method .ctor, addr 0x24ef69c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KawaseBlurRendererSO__BloomKernel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__KawaseBlurRendererSO__BloomKernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KawaseBlurRendererSO__BloomKernel(__KawaseBlurRendererSO__BloomKernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KawaseBlurRendererSO__BloomKernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KawaseBlurRendererSO__BloomKernel(__KawaseBlurRendererSO__BloomKernel const&) = delete;

  /// @brief Field kernelSize, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize ___kernelSize;

  /// @brief Field sharedPartWithNext, offset: 0x14, size: 0x4, def value: None
  int32_t ___sharedPartWithNext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel, ___kernelSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel, ___sharedPartWithNext) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pass
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::KawaseBlurRendererSO::Pass
struct CORDL_TYPE __KawaseBlurRendererSO__Pass {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____KawaseBlurRendererSO__Pass_Unwrapped
  enum struct ____KawaseBlurRendererSO__Pass_Unwrapped : int32_t {
    __E_AlphaWeights = static_cast<int32_t>(0x0),
    __E_Blur = static_cast<int32_t>(0x1),
    __E_BlurAndAdd = static_cast<int32_t>(0x2),
    __E_BlurWithAlphaWeights = static_cast<int32_t>(0x3),
    __E_AlphaAndDepthWeights = static_cast<int32_t>(0x4),
    __E_BlurGamma = static_cast<int32_t>(0x5),
    __E_BlurGammaAndAdd = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____KawaseBlurRendererSO__Pass_Unwrapped() const noexcept {
    return static_cast<____KawaseBlurRendererSO__Pass_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __KawaseBlurRendererSO__Pass();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __KawaseBlurRendererSO__Pass(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AlphaAndDepthWeights value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__KawaseBlurRendererSO__Pass const AlphaAndDepthWeights;

  /// @brief Field AlphaWeights value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__KawaseBlurRendererSO__Pass const AlphaWeights;

  /// @brief Field Blur value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__KawaseBlurRendererSO__Pass const Blur;

  /// @brief Field BlurAndAdd value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__KawaseBlurRendererSO__Pass const BlurAndAdd;

  /// @brief Field BlurGamma value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__KawaseBlurRendererSO__Pass const BlurGamma;

  /// @brief Field BlurGammaAndAdd value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__KawaseBlurRendererSO__Pass const BlurGammaAndAdd;

  /// @brief Field BlurWithAlphaWeights value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__KawaseBlurRendererSO__Pass const BlurWithAlphaWeights;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__KawaseBlurRendererSO__Pass, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__KawaseBlurRendererSO__Pass, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KawaseBlurRendererSO
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::KawaseBlurRendererSO*
class CORDL_TYPE KawaseBlurRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using BloomKernel = ::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel;

  using KernelSize = ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize;

  using Pass = ::GlobalNamespace::__KawaseBlurRendererSO__Pass;

  using WeightsType = ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType;

  /// @brief Field _additiveAlphaID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__additiveAlphaID, put = setStaticF__additiveAlphaID)) int32_t _additiveAlphaID;

  /// @brief Field _additiveMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__additiveMaterial, put = __cordl_internal_set__additiveMaterial))::UnityW<::UnityEngine::Material> _additiveMaterial;

  /// @brief Field _additiveShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__additiveShader, put = __cordl_internal_set__additiveShader))::UnityW<::UnityEngine::Shader> _additiveShader;

  /// @brief Field _alphaID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaID, put = setStaticF__alphaID)) int32_t _alphaID;

  /// @brief Field _alphaWeightsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaWeightsID, put = setStaticF__alphaWeightsID)) int32_t _alphaWeightsID;

  /// @brief Field _bloomKernels, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bloomKernels,
      put = __cordl_internal_set__bloomKernels))::ArrayW<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, ::Array<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>*> _bloomKernels;

  /// @brief Field _blurTextures, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__blurTextures,
                      put = __cordl_internal_set__blurTextures))::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> _blurTextures;

  /// @brief Field _boostID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__boostID, put = setStaticF__boostID)) int32_t _boostID;

  /// @brief Field _commandBuffersMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__commandBuffersMaterial, put = __cordl_internal_set__commandBuffersMaterial))::UnityW<::UnityEngine::Material> _commandBuffersMaterial;

  /// @brief Field _kawaseBlurMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurMaterial, put = __cordl_internal_set__kawaseBlurMaterial))::UnityW<::UnityEngine::Material> _kawaseBlurMaterial;

  /// @brief Field _kawaseBlurShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurShader, put = __cordl_internal_set__kawaseBlurShader))::UnityW<::UnityEngine::Shader> _kawaseBlurShader;

  /// @brief Field _kernels, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__kernels, put = __cordl_internal_set__kernels))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> _kernels;

  /// @brief Field _offsetID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__offsetID, put = setStaticF__offsetID)) int32_t _offsetID;

  /// @brief Field _tempTexture0ID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__tempTexture0ID, put = setStaticF__tempTexture0ID)) int32_t _tempTexture0ID;

  /// @brief Field _tempTexture1ID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__tempTexture1ID, put = setStaticF__tempTexture1ID)) int32_t _tempTexture1ID;

  /// @brief Field _tintColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__tintColorID, put = setStaticF__tintColorID)) int32_t _tintColorID;

  /// @brief Field _tintMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tintMaterial, put = __cordl_internal_set__tintMaterial))::UnityW<::UnityEngine::Material> _tintMaterial;

  /// @brief Field _tintShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tintShader, put = __cordl_internal_set__tintShader))::UnityW<::UnityEngine::Shader> _tintShader;

  /// @brief Field kBloomIterationWeights, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kBloomIterationWeights,
                             put = setStaticF_kBloomIterationWeights))::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> kBloomIterationWeights;

  /// @brief Method AlphaWeights, addr 0x24f03bc, size 0xd0, virtual false, abstract: false, final false
  inline void AlphaWeights(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);

  /// @brief Method Bloom, addr 0x24ef6e0, size 0x48c, virtual false, abstract: false, final false
  inline void Bloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, int32_t iterationsStart, int32_t iterations, float_t boost, float_t alphaWeights,
                    ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType blurStartWeightsType, ::ArrayW<float_t, ::Array<float_t>*> bloomIterationWeights);

  /// @brief Method Blur, addr 0x24f0278, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> Blur(::UnityEngine::Texture* src, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize, int32_t downsample);

  /// @brief Method Blur, addr 0x24efb6c, size 0x4a8, virtual false, abstract: false, final false
  inline void Blur(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest, ::ArrayW<int32_t, ::Array<int32_t>*> kernel, float_t boost, int32_t downsample, int32_t startIdx, int32_t length,
                   float_t alphaWeights, float_t additiveAlpha, bool additivelyBlendToDest, bool gammaCorrection, ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType blurStartWeightsType);

  /// @brief Method Blur, addr 0x24f0334, size 0x88, virtual false, abstract: false, final false
  inline void Blur(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize, float_t boost, int32_t downsample);

  /// @brief Method CreateBlurCommandBuffer, addr 0x24f048c, size 0x310, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* CreateBlurCommandBuffer(int32_t width, int32_t height, ::StringW globalTextureName, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize,
                                                                          float_t boost);

  /// @brief Method DoubleBlur, addr 0x24f0014, size 0x264, virtual false, abstract: false, final false
  inline void DoubleBlur(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize0, float_t boost0,
                         ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize1, float_t boost1, float_t secondBlurAlpha, int32_t downsample, bool gammaCorrection);

  /// @brief Method GetBlurKernel, addr 0x24ef0f8, size 0x1fc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetBlurKernel(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize);

  static inline ::GlobalNamespace::KawaseBlurRendererSO* New_ctor();

  /// @brief Method OnDisable, addr 0x24ef6a4, size 0x3c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x24ef2f4, size 0x3a8, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__additiveMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__additiveMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__additiveShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__additiveShader();

  constexpr ::ArrayW<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, ::Array<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>*> const& __cordl_internal_get__bloomKernels() const;

  constexpr ::ArrayW<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, ::Array<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>*>& __cordl_internal_get__bloomKernels();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get__blurTextures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get__blurTextures();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__commandBuffersMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__commandBuffersMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__kawaseBlurMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__kawaseBlurMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__kawaseBlurShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__kawaseBlurShader();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get__kernels() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get__kernels();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__tintMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__tintMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__tintShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__tintShader();

  constexpr void __cordl_internal_set__additiveMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__additiveShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__bloomKernels(::ArrayW<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, ::Array<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>*> value);

  constexpr void __cordl_internal_set__blurTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> value);

  constexpr void __cordl_internal_set__commandBuffersMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__kawaseBlurMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__kawaseBlurShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__kernels(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr void __cordl_internal_set__tintMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__tintShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x24f079c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__additiveAlphaID();

  static inline int32_t getStaticF__alphaID();

  static inline int32_t getStaticF__alphaWeightsID();

  static inline int32_t getStaticF__boostID();

  static inline int32_t getStaticF__offsetID();

  static inline int32_t getStaticF__tempTexture0ID();

  static inline int32_t getStaticF__tempTexture1ID();

  static inline int32_t getStaticF__tintColorID();

  static inline ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> getStaticF_kBloomIterationWeights();

  static inline void setStaticF__additiveAlphaID(int32_t value);

  static inline void setStaticF__alphaID(int32_t value);

  static inline void setStaticF__alphaWeightsID(int32_t value);

  static inline void setStaticF__boostID(int32_t value);

  static inline void setStaticF__offsetID(int32_t value);

  static inline void setStaticF__tempTexture0ID(int32_t value);

  static inline void setStaticF__tempTexture1ID(int32_t value);

  static inline void setStaticF__tintColorID(int32_t value);

  static inline void setStaticF_kBloomIterationWeights(::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KawaseBlurRendererSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KawaseBlurRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KawaseBlurRendererSO(KawaseBlurRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KawaseBlurRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KawaseBlurRendererSO(KawaseBlurRendererSO const&) = delete;

  /// @brief Field _kawaseBlurShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____kawaseBlurShader;

  /// @brief Field _additiveShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____additiveShader;

  /// @brief Field _tintShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____tintShader;

  /// @brief Field _kawaseBlurMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____kawaseBlurMaterial;

  /// @brief Field _additiveMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____additiveMaterial;

  /// @brief Field _tintMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____tintMaterial;

  /// @brief Field _commandBuffersMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____commandBuffersMaterial;

  /// @brief Field _kernels, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ____kernels;

  /// @brief Field _bloomKernels, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, ::Array<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>*> ____bloomKernels;

  /// @brief Field _blurTextures, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> ____blurTextures;

  /// @brief Field kMaxBloomIterations offset 0xffffffff size 0x4
  static constexpr int32_t kMaxBloomIterations{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KawaseBlurRendererSO, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____kawaseBlurShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____additiveShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____tintShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____kawaseBlurMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____additiveMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____tintMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____commandBuffersMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____kernels) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____bloomKernels) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KawaseBlurRendererSO, ____blurTextures) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize, "", "KawaseBlurRendererSO/KernelSize");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__KawaseBlurRendererSO__Pass, "", "KawaseBlurRendererSO/Pass");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__KawaseBlurRendererSO__WeightsType, "", "KawaseBlurRendererSO/WeightsType");
NEED_NO_BOX(::GlobalNamespace::KawaseBlurRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KawaseBlurRendererSO*, "", "KawaseBlurRendererSO");
NEED_NO_BOX(::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, "", "KawaseBlurRendererSO/BloomKernel");
