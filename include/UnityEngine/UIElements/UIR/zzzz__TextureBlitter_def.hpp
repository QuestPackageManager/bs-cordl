#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TextureBlitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlitter)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::UIR {
struct TextureBlitter_BlitInfo;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TextureBlitter;
}
namespace UnityEngine::UIElements::UIR {
struct TextureBlitter_BlitInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::TextureBlitter);
MARK_VAL_T(::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo);
// Dependencies UnityEngine.Color, UnityEngine.RectInt, UnityEngine.Vector2Int
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo
struct CORDL_TYPE TextureBlitter_BlitInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureBlitter_BlitInfo();

  // Ctor Parameters [CppParam { name: "src", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "srcRect", ty: "::UnityEngine::RectInt", modifiers: "",
  // def_value: None }, CppParam { name: "dstPos", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "border", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "tint", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr TextureBlitter_BlitInfo(::UnityW<::UnityEngine::Texture> src, ::UnityEngine::RectInt srcRect, ::UnityEngine::Vector2Int dstPos, int32_t border, ::UnityEngine::Color tint) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6395 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field src, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> src;

  /// @brief Field srcRect, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::RectInt srcRect;

  /// @brief Field dstPos, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2Int dstPos;

  /// @brief Field border, offset: 0x20, size: 0x4, def value: None
  int32_t border;

  /// @brief Field tint, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color tint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, src) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, srcRect) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, dstPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, border) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, tint) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.IDisposable, System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.RectInt
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.TextureBlitter
class CORDL_TYPE TextureBlitter : public ::System::Object {
public:
  // Declarations
  using BlitInfo = ::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo;

  /// @brief Field <disposed>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field k_TextureIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_TextureIds, put = setStaticF_k_TextureIds)) ::ArrayW<int32_t, ::Array<int32_t>*> k_TextureIds;

  /// @brief Field m_BlitMaterial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial)) ::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_PendingBlits, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PendingBlits,
                      put = __cordl_internal_set_m_PendingBlits)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>* m_PendingBlits;

  /// @brief Field m_PrevRT, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrevRT, put = __cordl_internal_set_m_PrevRT)) ::UnityW<::UnityEngine::RenderTexture> m_PrevRT;

  /// @brief Field m_Properties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Properties, put = __cordl_internal_set_m_Properties)) ::UnityEngine::MaterialPropertyBlock* m_Properties;

  /// @brief Field m_SingleBlit, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SingleBlit,
                      put = __cordl_internal_set_m_SingleBlit)) ::ArrayW<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, ::Array<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>*>
      m_SingleBlit;

  /// @brief Field m_Viewport, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Viewport, put = __cordl_internal_set_m_Viewport)) ::UnityEngine::RectInt m_Viewport;

  /// @brief Field s_CommitSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CommitSampler, put = setStaticF_s_CommitSampler)) ::Unity::Profiling::ProfilerMarker s_CommitSampler;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginBlit, addr 0x49ad4f4, size 0x1f8, virtual false, abstract: false, final false
  inline void BeginBlit(::UnityEngine::RenderTexture* dst);

  /// @brief Method BlitOneNow, addr 0x49ad47c, size 0x78, virtual false, abstract: false, final false
  inline void BlitOneNow(::UnityEngine::RenderTexture* dst, ::UnityEngine::Texture* src, ::UnityEngine::RectInt srcRect, ::UnityEngine::Vector2Int dstPos, bool addBorder, ::UnityEngine::Color tint);

  /// @brief Method Commit, addr 0x49add08, size 0xec, virtual false, abstract: false, final false
  inline void Commit(::UnityEngine::RenderTexture* dst);

  /// @brief Method Dispose, addr 0x49ad068, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x49ad0d4, size 0x7c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DoBlit, addr 0x49ad6ec, size 0x5a0, virtual false, abstract: false, final false
  inline void DoBlit(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>* blitInfos, int32_t startIndex);

  /// @brief Method EndBlit, addr 0x49adc8c, size 0x7c, virtual false, abstract: false, final false
  inline void EndBlit();

  static inline ::UnityEngine::UIElements::UIR::TextureBlitter* New_ctor(int32_t capacity);

  /// @brief Method QueueBlit, addr 0x49ad330, size 0x14c, virtual false, abstract: false, final false
  inline void QueueBlit(::UnityEngine::Texture* src, ::UnityEngine::RectInt srcRect, ::UnityEngine::Vector2Int dstPos, bool addBorder, ::UnityEngine::Color tint);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>* const& __cordl_internal_get_m_PendingBlits() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>*& __cordl_internal_get_m_PendingBlits();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_PrevRT() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_PrevRT();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_Properties() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_Properties();

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, ::Array<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>*> const& __cordl_internal_get_m_SingleBlit() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, ::Array<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>*>& __cordl_internal_get_m_SingleBlit();

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_m_Viewport() const;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_m_Viewport();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_PendingBlits(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>* value);

  constexpr void __cordl_internal_set_m_PrevRT(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_m_Properties(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_m_SingleBlit(::ArrayW<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, ::Array<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>*> value);

  constexpr void __cordl_internal_set_m_Viewport(::UnityEngine::RectInt value);

  /// @brief Method .ctor, addr 0x49ad27c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_TextureIds();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_CommitSampler();

  /// @brief Method get_disposed, addr 0x49ad054, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_k_TextureIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_CommitSampler(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_disposed, addr 0x49ad05c, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureBlitter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureBlitter(TextureBlitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureBlitter(TextureBlitter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6396 };

  /// @brief Field m_SingleBlit, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, ::Array<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>*> ___m_SingleBlit;

  /// @brief Field m_BlitMaterial, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  /// @brief Field m_Properties, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_Properties;

  /// @brief Field m_Viewport, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::RectInt ___m_Viewport;

  /// @brief Field m_PrevRT, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_PrevRT;

  /// @brief Field m_PendingBlits, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo>* ___m_PendingBlits;

  /// @brief Field <disposed>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_SingleBlit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_BlitMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_Properties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_Viewport) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_PrevRT) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ___m_PendingBlits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::TextureBlitter, ____disposed_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextureBlitter, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::TextureBlitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureBlitter*, "UnityEngine.UIElements.UIR", "TextureBlitter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureBlitter_BlitInfo, "UnityEngine.UIElements.UIR", "TextureBlitter/BlitInfo");
