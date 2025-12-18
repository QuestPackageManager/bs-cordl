#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Texture2DAtlas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DAtlas)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class AtlasAllocator;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct Texture2DAtlas_BlitType;
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
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct Texture2DAtlas_BlitType;
}
namespace UnityEngine::Rendering {
class Texture2DAtlas;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Texture2DAtlas_BlitType);
MARK_REF_PTR_T(::UnityEngine::Rendering::Texture2DAtlas);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.Texture2DAtlas/BlitType
struct CORDL_TYPE Texture2DAtlas_BlitType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Texture2DAtlas_BlitType_Unwrapped
  enum struct __Texture2DAtlas_BlitType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_CubeTo2DOctahedral = static_cast<int32_t>(0x1),
    __E_SingleChannel = static_cast<int32_t>(0x2),
    __E_CubeTo2DOctahedralSingleChannel = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Texture2DAtlas_BlitType_Unwrapped() const noexcept {
    return static_cast<__Texture2DAtlas_BlitType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture2DAtlas_BlitType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Texture2DAtlas_BlitType(int32_t value__) noexcept;

  /// @brief Field CubeTo2DOctahedral value: I32(1)
  static ::UnityEngine::Rendering::Texture2DAtlas_BlitType const CubeTo2DOctahedral;

  /// @brief Field CubeTo2DOctahedralSingleChannel value: I32(3)
  static ::UnityEngine::Rendering::Texture2DAtlas_BlitType const CubeTo2DOctahedralSingleChannel;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::Rendering::Texture2DAtlas_BlitType const Default;

  /// @brief Field SingleChannel value: I32(2)
  static ::UnityEngine::Rendering::Texture2DAtlas_BlitType const SingleChannel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12226 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas_BlitType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Texture2DAtlas_BlitType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Texture2DAtlas
class CORDL_TYPE Texture2DAtlas : public ::System::Object {
public:
  // Declarations
  using BlitType = ::UnityEngine::Rendering::Texture2DAtlas_BlitType;

  __declspec(property(get = get_AtlasTexture)) ::UnityEngine::Rendering::RTHandle* AtlasTexture;

  /// @brief Field fullScaleOffset, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_fullScaleOffset, put = setStaticF_fullScaleOffset)) ::UnityEngine::Vector4 fullScaleOffset;

  /// @brief Field m_AllocationCache, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AllocationCache,
      put =
          __cordl_internal_set_m_AllocationCache)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* m_AllocationCache;

  /// @brief Field m_AtlasAllocator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasAllocator, put = __cordl_internal_set_m_AtlasAllocator)) ::UnityEngine::Rendering::AtlasAllocator* m_AtlasAllocator;

  /// @brief Field m_AtlasTexture, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasTexture, put = __cordl_internal_set_m_AtlasTexture)) ::UnityEngine::Rendering::RTHandle* m_AtlasTexture;

  /// @brief Field m_Format, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Format, put = __cordl_internal_set_m_Format)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format;

  /// @brief Field m_Height, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Height, put = __cordl_internal_set_m_Height)) int32_t m_Height;

  /// @brief Field m_IsAtlasTextureOwner, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsAtlasTextureOwner, put = __cordl_internal_set_m_IsAtlasTextureOwner)) bool m_IsAtlasTextureOwner;

  /// @brief Field m_IsGPUTextureUpToDate, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsGPUTextureUpToDate,
                      put = __cordl_internal_set_m_IsGPUTextureUpToDate)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_IsGPUTextureUpToDate;

  /// @brief Field m_TextureHashes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureHashes, put = __cordl_internal_set_m_TextureHashes)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* m_TextureHashes;

  /// @brief Field m_UseMipMaps, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseMipMaps, put = __cordl_internal_set_m_UseMipMaps)) bool m_UseMipMaps;

  /// @brief Field m_Width, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) int32_t m_Width;

  /// @brief Field s_MaxMipLevelPadding, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_MaxMipLevelPadding, put = setStaticF_s_MaxMipLevelPadding)) int32_t s_MaxMipLevelPadding;

  /// @brief Method AddTexture, addr 0x65fc7b0, size 0xa0, virtual true, abstract: false, final false
  inline bool AddTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture);

  /// @brief Method AllocateTexture, addr 0x65fb9d4, size 0x1ec, virtual true, abstract: false, final false
  inline bool AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture, int32_t width, int32_t height,
                              int32_t overrideInstanceID);

  /// @brief Method AllocateTextureWithoutBlit, addr 0x65fbc1c, size 0x188, virtual true, abstract: false, final false
  inline bool AllocateTextureWithoutBlit(int32_t instanceId, int32_t width, int32_t height, ::ByRef<::UnityEngine::Vector4> scaleOffset);

  /// @brief Method AllocateTextureWithoutBlit, addr 0x65fbbc0, size 0x5c, virtual false, abstract: false, final false
  inline bool AllocateTextureWithoutBlit(::UnityEngine::Texture* texture, int32_t width, int32_t height, ::ByRef<::UnityEngine::Vector4> scaleOffset);

  /// @brief Method Blit2DTexture, addr 0x65faa80, size 0x288, virtual false, abstract: false, final false
  inline void Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                            ::UnityEngine::Rendering::Texture2DAtlas_BlitType blitType);

  /// @brief Method BlitCubeTexture2D, addr 0x65fb840, size 0x194, virtual true, abstract: false, final false
  inline void BlitCubeTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, bool blitMips, int32_t overrideInstanceID);

  /// @brief Method BlitOctahedralTexture, addr 0x65fb834, size 0xc, virtual true, abstract: false, final false
  inline void BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset,
                                    bool blitMips, int32_t overrideInstanceID);

  /// @brief Method BlitTexture, addr 0x65fb59c, size 0x1b0, virtual true, abstract: false, final false
  inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                          int32_t overrideInstanceID);

  /// @brief Method ClearTarget, addr 0x65fa198, size 0x1c0, virtual false, abstract: false, final false
  inline void ClearTarget(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method EnsureTextureSlot, addr 0x65fca84, size 0x164, virtual false, abstract: false, final false
  inline bool EnsureTextureSlot(::ByRef<bool> isUploadNeeded, ::ByRef<::UnityEngine::Vector4> scaleBias, int32_t key, int32_t width, int32_t height);

  /// @brief Method GetCachedTextureSize, addr 0x65fbf64, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int GetCachedTextureSize(int32_t id);

  /// @brief Method GetTextureHash, addr 0x65fbda4, size 0x7c, virtual false, abstract: false, final false
  inline int32_t GetTextureHash(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB);

  /// @brief Method GetTextureID, addr 0x65fb74c, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetTextureID(::UnityEngine::Texture* texture);

  /// @brief Method GetTextureID, addr 0x65fbe20, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetTextureID(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB);

  /// @brief Method GetTextureMipmapCount, addr 0x65fa00c, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetTextureMipmapCount(int32_t width, int32_t height);

  /// @brief Method Is2D, addr 0x65fa618, size 0xd0, virtual false, abstract: false, final false
  inline bool Is2D(::UnityEngine::Texture* texture);

  /// @brief Method IsCached, addr 0x65fbe9c, size 0x8c, virtual false, abstract: false, final false
  inline bool IsCached(::ByRef<::UnityEngine::Vector4> scaleOffset, int32_t id);

  /// @brief Method IsCached, addr 0x65fbf28, size 0x3c, virtual false, abstract: false, final false
  inline bool IsCached(::ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture);

  /// @brief Method IsCached, addr 0x65fbe68, size 0x34, virtual false, abstract: false, final false
  inline bool IsCached(::ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB);

  /// @brief Method IsSingleChannelBlit, addr 0x65fa6e8, size 0x398, virtual false, abstract: false, final false
  inline bool IsSingleChannelBlit(::UnityEngine::Texture* source, ::UnityEngine::Texture* destination);

  /// @brief Method MarkGPUTextureInvalid, addr 0x65fb524, size 0x78, virtual false, abstract: false, final false
  inline void MarkGPUTextureInvalid(int32_t instanceId);

  /// @brief Method MarkGPUTextureValid, addr 0x65fb4a0, size 0x84, virtual false, abstract: false, final false
  inline void MarkGPUTextureValid(int32_t instanceId, bool mipAreValid);

  /// @brief Method NeedsUpdate, addr 0x65fc280, size 0xdc, virtual true, abstract: false, final false
  inline bool NeedsUpdate(int32_t id, int32_t updateCount, bool needMips);

  /// @brief Method NeedsUpdate, addr 0x65fbfe0, size 0x2a0, virtual true, abstract: false, final false
  inline bool NeedsUpdate(::UnityEngine::Texture* texture, bool needMips);

  /// @brief Method NeedsUpdate, addr 0x65fc35c, size 0x454, virtual true, abstract: false, final false
  inline bool NeedsUpdate(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB, bool needMips);

  static inline ::UnityEngine::Rendering::Texture2DAtlas* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                                                                   bool powerOfTwoPadding, ::StringW name, bool useMipMap);

  /// @brief Method Release, addr 0x65fa098, size 0x78, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method ResetAllocator, addr 0x65fa110, size 0x88, virtual false, abstract: false, final false
  inline void ResetAllocator();

  /// @brief Method UpdateTexture, addr 0x65fc850, size 0x17c, virtual true, abstract: false, final false
  inline bool UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* oldTexture, ::UnityEngine::Texture* newTexture, ::ByRef<::UnityEngine::Vector4> scaleOffset,
                            ::UnityEngine::Vector4 sourceScaleOffset, bool updateIfNeeded, bool blitMips);

  /// @brief Method UpdateTexture, addr 0x65fc9cc, size 0xb8, virtual true, abstract: false, final false
  inline bool UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* texture, ::ByRef<::UnityEngine::Vector4> scaleOffset, bool updateIfNeeded, bool blitMips);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* const& __cordl_internal_get_m_AllocationCache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>*& __cordl_internal_get_m_AllocationCache();

  constexpr ::UnityEngine::Rendering::AtlasAllocator* const& __cordl_internal_get_m_AtlasAllocator() const;

  constexpr ::UnityEngine::Rendering::AtlasAllocator*& __cordl_internal_get_m_AtlasAllocator();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_AtlasTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_AtlasTexture();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_Format() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_Format();

  constexpr int32_t const& __cordl_internal_get_m_Height() const;

  constexpr int32_t& __cordl_internal_get_m_Height();

  constexpr bool const& __cordl_internal_get_m_IsAtlasTextureOwner() const;

  constexpr bool& __cordl_internal_get_m_IsAtlasTextureOwner();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get_m_IsGPUTextureUpToDate() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_IsGPUTextureUpToDate();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get_m_TextureHashes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get_m_TextureHashes();

  constexpr bool const& __cordl_internal_get_m_UseMipMaps() const;

  constexpr bool& __cordl_internal_get_m_UseMipMaps();

  constexpr int32_t const& __cordl_internal_get_m_Width() const;

  constexpr int32_t& __cordl_internal_get_m_Width();

  constexpr void __cordl_internal_set_m_AllocationCache(::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* value);

  constexpr void __cordl_internal_set_m_AtlasAllocator(::UnityEngine::Rendering::AtlasAllocator* value);

  constexpr void __cordl_internal_set_m_AtlasTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_Format(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_Height(int32_t value);

  constexpr void __cordl_internal_set_m_IsAtlasTextureOwner(bool value);

  constexpr void __cordl_internal_set_m_IsGPUTextureUpToDate(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_TextureHashes(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_m_UseMipMaps(bool value);

  constexpr void __cordl_internal_set_m_Width(int32_t value);

  /// @brief Method .ctor, addr 0x65f9d18, size 0x2f4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode, bool powerOfTwoPadding, ::StringW name,
                    bool useMipMap);

  static inline ::UnityEngine::Vector4 getStaticF_fullScaleOffset();

  static inline int32_t getStaticF_s_MaxMipLevelPadding();

  /// @brief Method get_AtlasTexture, addr 0x65f9d10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_AtlasTexture();

  /// @brief Method get_maxMipLevelPadding, addr 0x65f9cb4, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t get_maxMipLevelPadding();

  static inline void setStaticF_fullScaleOffset(::UnityEngine::Vector4 value);

  static inline void setStaticF_s_MaxMipLevelPadding(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture2DAtlas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture2DAtlas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture2DAtlas(Texture2DAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture2DAtlas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture2DAtlas(Texture2DAtlas const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12227 };

  /// @brief Field kGPUTexInvalid offset 0xffffffff size 0x4
  static constexpr int32_t kGPUTexInvalid{ static_cast<int32_t>(0x0) };

  /// @brief Field kGPUTexValidMip0 offset 0xffffffff size 0x4
  static constexpr int32_t kGPUTexValidMip0{ static_cast<int32_t>(0x1) };

  /// @brief Field kGPUTexValidMipAll offset 0xffffffff size 0x4
  static constexpr int32_t kGPUTexValidMipAll{ static_cast<int32_t>(0x2) };

  /// @brief Field m_AtlasTexture, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_AtlasTexture;

  /// @brief Field m_Width, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Width;

  /// @brief Field m_Height, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Height;

  /// @brief Field m_Format, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_Format;

  /// @brief Field m_UseMipMaps, offset: 0x24, size: 0x1, def value: None
  bool ___m_UseMipMaps;

  /// @brief Field m_IsAtlasTextureOwner, offset: 0x25, size: 0x1, def value: None
  bool ___m_IsAtlasTextureOwner;

  /// @brief Field m_AtlasAllocator, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::AtlasAllocator* ___m_AtlasAllocator;

  /// @brief Field m_AllocationCache, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* ___m_AllocationCache;

  /// @brief Field m_IsGPUTextureUpToDate, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_IsGPUTextureUpToDate;

  /// @brief Field m_TextureHashes, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ___m_TextureHashes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_AtlasTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_Width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_Height) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_Format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_UseMipMaps) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_IsAtlasTextureOwner) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_AtlasAllocator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_AllocationCache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_IsGPUTextureUpToDate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Texture2DAtlas, ___m_TextureHashes) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Texture2DAtlas, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Texture2DAtlas_BlitType, "UnityEngine.Rendering", "Texture2DAtlas/BlitType");
NEED_NO_BOX(::UnityEngine::Rendering::Texture2DAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Texture2DAtlas*, "UnityEngine.Rendering", "Texture2DAtlas");
