#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Glyph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphClassDefinitionType_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Glyph)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
// Forward declare root types
namespace UnityEngine::TextCore {
class Glyph;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Glyph);
// Dependencies System.Object, UnityEngine.TextCore.GlyphClassDefinitionType, UnityEngine.TextCore.GlyphMetrics, UnityEngine.TextCore.GlyphRect
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.Glyph
class CORDL_TYPE Glyph : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_atlasIndex, put = set_atlasIndex)) int32_t atlasIndex;

  __declspec(property(get = get_glyphRect, put = set_glyphRect)) ::UnityEngine::TextCore::GlyphRect glyphRect;

  __declspec(property(get = get_index, put = set_index)) uint32_t index;

  /// @brief Field m_AtlasIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AtlasIndex, put = __cordl_internal_set_m_AtlasIndex)) int32_t m_AtlasIndex;

  /// @brief Field m_ClassDefinitionType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClassDefinitionType, put = __cordl_internal_set_m_ClassDefinitionType)) ::UnityEngine::TextCore::GlyphClassDefinitionType m_ClassDefinitionType;

  /// @brief Field m_GlyphRect, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_GlyphRect, put = __cordl_internal_set_m_GlyphRect)) ::UnityEngine::TextCore::GlyphRect m_GlyphRect;

  /// @brief Field m_Index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) uint32_t m_Index;

  /// @brief Field m_Metrics, offset 0x14, size 0x14
  __declspec(property(get = __cordl_internal_get_m_Metrics, put = __cordl_internal_set_m_Metrics)) ::UnityEngine::TextCore::GlyphMetrics m_Metrics;

  /// @brief Field m_Scale, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) float_t m_Scale;

  __declspec(property(get = get_metrics, put = set_metrics)) ::UnityEngine::TextCore::GlyphMetrics metrics;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  static inline ::UnityEngine::TextCore::Glyph* New_ctor();

  static inline ::UnityEngine::TextCore::Glyph* New_ctor(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct);

  static inline ::UnityEngine::TextCore::Glyph* New_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale,
                                                         int32_t atlasIndex);

  constexpr int32_t const& __cordl_internal_get_m_AtlasIndex() const;

  constexpr int32_t& __cordl_internal_get_m_AtlasIndex();

  constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType const& __cordl_internal_get_m_ClassDefinitionType() const;

  constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType& __cordl_internal_get_m_ClassDefinitionType();

  constexpr ::UnityEngine::TextCore::GlyphRect const& __cordl_internal_get_m_GlyphRect() const;

  constexpr ::UnityEngine::TextCore::GlyphRect& __cordl_internal_get_m_GlyphRect();

  constexpr uint32_t const& __cordl_internal_get_m_Index() const;

  constexpr uint32_t& __cordl_internal_get_m_Index();

  constexpr ::UnityEngine::TextCore::GlyphMetrics const& __cordl_internal_get_m_Metrics() const;

  constexpr ::UnityEngine::TextCore::GlyphMetrics& __cordl_internal_get_m_Metrics();

  constexpr float_t const& __cordl_internal_get_m_Scale() const;

  constexpr float_t& __cordl_internal_get_m_Scale();

  constexpr void __cordl_internal_set_m_AtlasIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ClassDefinitionType(::UnityEngine::TextCore::GlyphClassDefinitionType value);

  constexpr void __cordl_internal_set_m_GlyphRect(::UnityEngine::TextCore::GlyphRect value);

  constexpr void __cordl_internal_set_m_Index(uint32_t value);

  constexpr void __cordl_internal_set_m_Metrics(::UnityEngine::TextCore::GlyphMetrics value);

  constexpr void __cordl_internal_set_m_Scale(float_t value);

  /// @brief Method .ctor, addr 0x491b54c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x491b574, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct);

  /// @brief Method .ctor, addr 0x491b600, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex);

  /// @brief Method get_atlasIndex, addr 0x491b53c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasIndex();

  /// @brief Method get_glyphRect, addr 0x491b518, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::GlyphRect get_glyphRect();

  /// @brief Method get_index, addr 0x491b4e0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_index();

  /// @brief Method get_metrics, addr 0x491b4f0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::GlyphMetrics get_metrics();

  /// @brief Method get_scale, addr 0x491b52c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method set_atlasIndex, addr 0x491b544, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasIndex(int32_t value);

  /// @brief Method set_glyphRect, addr 0x491b524, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphRect(::UnityEngine::TextCore::GlyphRect value);

  /// @brief Method set_index, addr 0x491b4e8, size 0x8, virtual false, abstract: false, final false
  inline void set_index(uint32_t value);

  /// @brief Method set_metrics, addr 0x491b504, size 0x14, virtual false, abstract: false, final false
  inline void set_metrics(::UnityEngine::TextCore::GlyphMetrics value);

  /// @brief Method set_scale, addr 0x491b534, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Glyph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Glyph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Glyph(Glyph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Glyph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Glyph(Glyph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18183 };

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  uint32_t ___m_Index;

  /// @brief Field m_Metrics, offset: 0x14, size: 0x14, def value: None
  ::UnityEngine::TextCore::GlyphMetrics ___m_Metrics;

  /// @brief Field m_GlyphRect, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::TextCore::GlyphRect ___m_GlyphRect;

  /// @brief Field m_Scale, offset: 0x38, size: 0x4, def value: None
  float_t ___m_Scale;

  /// @brief Field m_AtlasIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_AtlasIndex;

  /// @brief Field m_ClassDefinitionType, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::TextCore::GlyphClassDefinitionType ___m_ClassDefinitionType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_Metrics) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_GlyphRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_Scale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_AtlasIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_ClassDefinitionType) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Glyph, 0x48>, "Size mismatch!");

} // namespace UnityEngine::TextCore
NEED_NO_BOX(::UnityEngine::TextCore::Glyph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Glyph*, "UnityEngine.TextCore", "Glyph");
