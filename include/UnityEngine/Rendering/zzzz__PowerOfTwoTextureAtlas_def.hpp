#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PowerOfTwoTextureAtlas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PowerOfTwoTextureAtlas)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct PowerOfTwoTextureAtlas_BlitType;
}
namespace UnityEngine::Rendering {
class PowerOfTwoTextureAtlas___c;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct PowerOfTwoTextureAtlas_BlitType;
}
namespace UnityEngine::Rendering {
class PowerOfTwoTextureAtlas;
}
namespace UnityEngine::Rendering {
class PowerOfTwoTextureAtlas___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType);
MARK_REF_PTR_T(::UnityEngine::Rendering::PowerOfTwoTextureAtlas);
MARK_REF_PTR_T(::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.PowerOfTwoTextureAtlas/BlitType
struct CORDL_TYPE PowerOfTwoTextureAtlas_BlitType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PowerOfTwoTextureAtlas_BlitType_Unwrapped
  enum struct __PowerOfTwoTextureAtlas_BlitType_Unwrapped : int32_t {
    __E_Padding = static_cast<int32_t>(0x0),
    __E_PaddingMultiply = static_cast<int32_t>(0x1),
    __E_OctahedralPadding = static_cast<int32_t>(0x2),
    __E_OctahedralPaddingMultiply = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PowerOfTwoTextureAtlas_BlitType_Unwrapped() const noexcept {
    return static_cast<__PowerOfTwoTextureAtlas_BlitType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PowerOfTwoTextureAtlas_BlitType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PowerOfTwoTextureAtlas_BlitType(int32_t value__) noexcept;

  /// @brief Field OctahedralPadding value: I32(2)
  static ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType const OctahedralPadding;

  /// @brief Field OctahedralPaddingMultiply value: I32(3)
  static ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType const OctahedralPaddingMultiply;

  /// @brief Field Padding value: I32(0)
  static ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType const Padding;

  /// @brief Field PaddingMultiply value: I32(1)
  static ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType const PaddingMultiply;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12212 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.PowerOfTwoTextureAtlas/<>c
class CORDL_TYPE PowerOfTwoTextureAtlas___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0)) ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* __9__23_0;

  static inline ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c* New_ctor();

  /// @brief Method <RelayoutEntries>b__23_0, addr 0x65f3cac, size 0x80, virtual false, abstract: false, final false
  inline int32_t _RelayoutEntries_b__23_0(::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int> c1, ::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int> c2);

  /// @brief Method .ctor, addr 0x65f3ca8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c* getStaticF___9();

  static inline ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* getStaticF___9__23_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c* value);

  static inline void setStaticF___9__23_0(::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PowerOfTwoTextureAtlas___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PowerOfTwoTextureAtlas___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PowerOfTwoTextureAtlas___c(PowerOfTwoTextureAtlas___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PowerOfTwoTextureAtlas___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PowerOfTwoTextureAtlas___c(PowerOfTwoTextureAtlas___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12213 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.Texture2DAtlas
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.PowerOfTwoTextureAtlas
class CORDL_TYPE PowerOfTwoTextureAtlas : public ::UnityEngine::Rendering::Texture2DAtlas {
public:
  // Declarations
  using BlitType = ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType;

  using __c = ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c;

  /// @brief Field m_MipPadding, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MipPadding, put = __cordl_internal_set_m_MipPadding)) int32_t m_MipPadding;

  /// @brief Field m_RequestedTextures, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestedTextures,
                      put = __cordl_internal_set_m_RequestedTextures)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* m_RequestedTextures;

  __declspec(property(get = get_mipPadding)) int32_t mipPadding;

  /// @brief Method AllocateTexture, addr 0x65f31b4, size 0x1ec, virtual true, abstract: false, final false
  inline bool AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture, int32_t width, int32_t height,
                              int32_t overrideInstanceID);

  /// @brief Method Blit2DTexture, addr 0x65f29b0, size 0x388, virtual false, abstract: false, final false
  inline void Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                            ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType blitType);

  /// @brief Method BlitOctahedralTexture, addr 0x65f2f50, size 0x10c, virtual true, abstract: false, final false
  inline void BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset,
                                    bool blitMips, int32_t overrideInstanceID);

  /// @brief Method BlitOctahedralTextureMultiply, addr 0x65f305c, size 0x10c, virtual false, abstract: false, final false
  inline void BlitOctahedralTextureMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset,
                                            bool blitMips, int32_t overrideInstanceID);

  /// @brief Method BlitTexture, addr 0x65f2d38, size 0x10c, virtual true, abstract: false, final false
  inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                          int32_t overrideInstanceID);

  /// @brief Method BlitTextureMultiply, addr 0x65f2e44, size 0x10c, virtual false, abstract: false, final false
  inline void BlitTextureMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset,
                                  bool blitMips, int32_t overrideInstanceID);

  /// @brief Method GetApproxCacheSizeInByte, addr 0x65f3a48, size 0xe8, virtual false, abstract: false, final false
  static inline int64_t GetApproxCacheSizeInByte(int32_t nbElement, int32_t resolution, bool hasMipmap, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetMaxCacheSizeForWeightInByte, addr 0x65f3b30, size 0x124, virtual false, abstract: false, final false
  static inline int32_t GetMaxCacheSizeForWeightInByte(int32_t weight, bool hasMipmap, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetPayloadScaleOffset, addr 0x65f281c, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetPayloadScaleOffset(::UnityEngine::Texture* texture, ::ByRef<::UnityEngine::Vector4> scaleOffset);

  /// @brief Method GetPayloadScaleOffset, addr 0x65f2978, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPayloadScaleOffset(::ByRef<::UnityEngine::Vector2> textureSize, ::ByRef<::UnityEngine::Vector2> paddingSize, ::ByRef<::UnityEngine::Vector4> scaleOffset);

  /// @brief Method GetPowerOfTwoTextureSize, addr 0x65f28ec, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPowerOfTwoTextureSize(::UnityEngine::Texture* texture);

  /// @brief Method GetTexturePadding, addr 0x65f27ec, size 0x30, virtual false, abstract: false, final false
  inline int32_t GetTexturePadding();

  static inline ::UnityEngine::Rendering::PowerOfTwoTextureAtlas* New_ctor(int32_t size, int32_t mipPadding, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                           ::UnityEngine::FilterMode filterMode, ::StringW name, bool useMipMap);

  /// @brief Method RelayoutEntries, addr 0x65f362c, size 0x41c, virtual false, abstract: false, final false
  inline bool RelayoutEntries();

  /// @brief Method ReserveSpace, addr 0x65f34a8, size 0x14c, virtual false, abstract: false, final false
  inline bool ReserveSpace(int32_t id, int32_t width, int32_t height);

  /// @brief Method ReserveSpace, addr 0x65f33f4, size 0x70, virtual false, abstract: false, final false
  inline bool ReserveSpace(::UnityEngine::Texture* texture);

  /// @brief Method ReserveSpace, addr 0x65f3464, size 0x44, virtual false, abstract: false, final false
  inline bool ReserveSpace(::UnityEngine::Texture* texture, int32_t width, int32_t height);

  /// @brief Method ReserveSpace, addr 0x65f35f4, size 0x38, virtual false, abstract: false, final false
  inline bool ReserveSpace(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB, int32_t width, int32_t height);

  /// @brief Method ResetRequestedTexture, addr 0x65f33a0, size 0x54, virtual false, abstract: false, final false
  inline void ResetRequestedTexture();

  /// @brief Method TextureSizeToPowerOfTwo, addr 0x65f3168, size 0x4c, virtual false, abstract: false, final false
  inline void TextureSizeToPowerOfTwo(::UnityEngine::Texture* texture, ::ByRef<int32_t> width, ::ByRef<int32_t> height);

  constexpr int32_t const& __cordl_internal_get_m_MipPadding() const;

  constexpr int32_t& __cordl_internal_get_m_MipPadding();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* const& __cordl_internal_get_m_RequestedTextures() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>*& __cordl_internal_get_m_RequestedTextures();

  constexpr void __cordl_internal_set_m_MipPadding(int32_t value);

  constexpr void __cordl_internal_set_m_RequestedTextures(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* value);

  /// @brief Method .ctor, addr 0x65f26c0, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, int32_t mipPadding, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode, ::StringW name, bool useMipMap);

  /// @brief Method get_mipPadding, addr 0x65f27e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mipPadding();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PowerOfTwoTextureAtlas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PowerOfTwoTextureAtlas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PowerOfTwoTextureAtlas(PowerOfTwoTextureAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PowerOfTwoTextureAtlas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PowerOfTwoTextureAtlas(PowerOfTwoTextureAtlas const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12214 };

  /// @brief Field k_MipmapFactorApprox offset 0xffffffff size 0x4
  static constexpr float_t k_MipmapFactorApprox{ static_cast<float_t>(1.33f) };

  /// @brief Field m_MipPadding, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_MipPadding;

  /// @brief Field m_RequestedTextures, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* ___m_RequestedTextures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PowerOfTwoTextureAtlas, ___m_MipPadding) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PowerOfTwoTextureAtlas, ___m_RequestedTextures) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PowerOfTwoTextureAtlas, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType, "UnityEngine.Rendering", "PowerOfTwoTextureAtlas/BlitType");
NEED_NO_BOX(::UnityEngine::Rendering::PowerOfTwoTextureAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PowerOfTwoTextureAtlas*, "UnityEngine.Rendering", "PowerOfTwoTextureAtlas");
NEED_NO_BOX(::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*, "UnityEngine.Rendering", "PowerOfTwoTextureAtlas/<>c");
