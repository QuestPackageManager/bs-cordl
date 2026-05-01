#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ShaderInfoStorage_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseShaderInfoStorage_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderInfoStorage_1)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::UIElements {
class UIRAtlasAllocator;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class ShaderInfoStorage_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::ShaderInfoStorage_1);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.TextureFormat, UnityEngine.UIElements.UIR.BaseShaderInfoStorage
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorage`1<T>
class CORDL_TYPE ShaderInfoStorage_1 : public ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage {
public:
  // Declarations
  /// @brief Field m_Allocator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Allocator, put = __cordl_internal_set_m_Allocator)) ::UnityEngine::UIElements::UIRAtlasAllocator* m_Allocator;

  /// @brief Field m_Convert, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Convert, put = __cordl_internal_set_m_Convert)) ::System::Func_2<::UnityEngine::Color, T>* m_Convert;

  /// @brief Field m_Format, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Format, put = __cordl_internal_set_m_Format)) ::UnityEngine::TextureFormat m_Format;

  /// @brief Field m_InitialSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InitialSize, put = __cordl_internal_set_m_InitialSize)) int32_t m_InitialSize;

  /// @brief Field m_MaxSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxSize, put = __cordl_internal_set_m_MaxSize)) int32_t m_MaxSize;

  /// @brief Field m_Texels, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Texels, put = __cordl_internal_set_m_Texels)) ::Unity::Collections::NativeArray_1<T> m_Texels;

  /// @brief Field m_Texture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Texture, put = __cordl_internal_set_m_Texture)) ::UnityW<::UnityEngine::Texture2D> m_Texture;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  /// @brief Method AllocateRect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AllocateRect(int32_t width, int32_t height, ::ByRef<::UnityEngine::RectInt> uvs);

  /// @brief Method CpuBlit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CpuBlit(::Unity::Collections::NativeArray_1<T> src, int32_t srcWidth, int32_t srcHeight, ::Unity::Collections::NativeArray_1<T> dst, int32_t dstWidth, int32_t dstHeight);

  /// @brief Method CreateOrExpandTexture, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CreateOrExpandTexture();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>* New_ctor(::UnityEngine::TextureFormat format, ::System::Func_2<::UnityEngine::Color, T>* convert, int32_t initialSize,
                                                                                 int32_t maxSize);

  /// @brief Method SetTexel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetTexel(int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method UpdateTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateTexture();

  constexpr ::UnityEngine::UIElements::UIRAtlasAllocator* const& __cordl_internal_get_m_Allocator() const;

  constexpr ::UnityEngine::UIElements::UIRAtlasAllocator*& __cordl_internal_get_m_Allocator();

  constexpr ::System::Func_2<::UnityEngine::Color, T>* const& __cordl_internal_get_m_Convert() const;

  constexpr ::System::Func_2<::UnityEngine::Color, T>*& __cordl_internal_get_m_Convert();

  constexpr ::UnityEngine::TextureFormat const& __cordl_internal_get_m_Format() const;

  constexpr ::UnityEngine::TextureFormat& __cordl_internal_get_m_Format();

  constexpr int32_t const& __cordl_internal_get_m_InitialSize() const;

  constexpr int32_t& __cordl_internal_get_m_InitialSize();

  constexpr int32_t const& __cordl_internal_get_m_MaxSize() const;

  constexpr int32_t& __cordl_internal_get_m_MaxSize();

  constexpr ::Unity::Collections::NativeArray_1<T> const& __cordl_internal_get_m_Texels() const;

  constexpr ::Unity::Collections::NativeArray_1<T>& __cordl_internal_get_m_Texels();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_Texture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_Texture();

  constexpr void __cordl_internal_set_m_Allocator(::UnityEngine::UIElements::UIRAtlasAllocator* value);

  constexpr void __cordl_internal_set_m_Convert(::System::Func_2<::UnityEngine::Color, T>* value);

  constexpr void __cordl_internal_set_m_Format(::UnityEngine::TextureFormat value);

  constexpr void __cordl_internal_set_m_InitialSize(int32_t value);

  constexpr void __cordl_internal_set_m_MaxSize(int32_t value);

  constexpr void __cordl_internal_set_m_Texels(::Unity::Collections::NativeArray_1<T> value);

  constexpr void __cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextureFormat format, ::System::Func_2<::UnityEngine::Color, T>* convert, int32_t initialSize, int32_t maxSize);

  /// @brief Method get_texture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_texture();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderInfoStorage_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderInfoStorage_1(ShaderInfoStorage_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorage_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderInfoStorage_1(ShaderInfoStorage_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5343 };

  /// @brief Field m_InitialSize, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_InitialSize;

  /// @brief Field m_MaxSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_MaxSize;

  /// @brief Field m_Format, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::TextureFormat ___m_Format;

  /// @brief Field m_Convert, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Color, T>* ___m_Convert;

  /// @brief Field m_Allocator, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIRAtlasAllocator* ___m_Allocator;

  /// @brief Field m_Texture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_Texture;

  /// @brief Field m_Texels, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> ___m_Texels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::ShaderInfoStorage_1, "UnityEngine.UIElements.UIR", "ShaderInfoStorage`1");
