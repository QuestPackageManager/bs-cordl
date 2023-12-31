#pragma once
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
// Type: UnityEngine.TextCore::Glyph
// SizeInfo { instance_size: 72, native_size: 52, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15528)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15527)),
// TypeDefinitionIndex(TypeDefinitionIndex(15529))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15530)) CS Name: ::UnityEngine.TextCore::Glyph*
class CORDL_TYPE Glyph : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Index, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Index, put = __set_m_Index)) uint32_t m_Index;

  /// @brief Field m_Metrics, offset 0x14, size 0x14
  __declspec(property(get = __get_m_Metrics, put = __set_m_Metrics))::UnityEngine::TextCore::GlyphMetrics m_Metrics;

  /// @brief Field m_GlyphRect, offset 0x28, size 0x10
  __declspec(property(get = __get_m_GlyphRect, put = __set_m_GlyphRect))::UnityEngine::TextCore::GlyphRect m_GlyphRect;

  /// @brief Field m_Scale, offset 0x38, size 0x4
  __declspec(property(get = __get_m_Scale, put = __set_m_Scale)) float_t m_Scale;

  /// @brief Field m_AtlasIndex, offset 0x3c, size 0x4
  __declspec(property(get = __get_m_AtlasIndex, put = __set_m_AtlasIndex)) int32_t m_AtlasIndex;

  /// @brief Field m_ClassDefinitionType, offset 0x40, size 0x4
  __declspec(property(get = __get_m_ClassDefinitionType, put = __set_m_ClassDefinitionType))::UnityEngine::TextCore::GlyphClassDefinitionType m_ClassDefinitionType;

  __declspec(property(get = get_index, put = set_index)) uint32_t index;

  __declspec(property(get = get_metrics, put = set_metrics))::UnityEngine::TextCore::GlyphMetrics metrics;

  __declspec(property(get = get_glyphRect, put = set_glyphRect))::UnityEngine::TextCore::GlyphRect glyphRect;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_atlasIndex, put = set_atlasIndex)) int32_t atlasIndex;

  constexpr uint32_t& __get_m_Index();

  constexpr uint32_t const& __get_m_Index() const;

  constexpr void __set_m_Index(uint32_t value);

  constexpr ::UnityEngine::TextCore::GlyphMetrics& __get_m_Metrics();

  constexpr ::UnityEngine::TextCore::GlyphMetrics const& __get_m_Metrics() const;

  constexpr void __set_m_Metrics(::UnityEngine::TextCore::GlyphMetrics value);

  constexpr ::UnityEngine::TextCore::GlyphRect& __get_m_GlyphRect();

  constexpr ::UnityEngine::TextCore::GlyphRect const& __get_m_GlyphRect() const;

  constexpr void __set_m_GlyphRect(::UnityEngine::TextCore::GlyphRect value);

  constexpr float_t& __get_m_Scale();

  constexpr float_t const& __get_m_Scale() const;

  constexpr void __set_m_Scale(float_t value);

  constexpr int32_t& __get_m_AtlasIndex();

  constexpr int32_t const& __get_m_AtlasIndex() const;

  constexpr void __set_m_AtlasIndex(int32_t value);

  constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType& __get_m_ClassDefinitionType();

  constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType const& __get_m_ClassDefinitionType() const;

  constexpr void __set_m_ClassDefinitionType(::UnityEngine::TextCore::GlyphClassDefinitionType value);

  /// @brief Method get_index, addr 0x2d209bc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_index();

  /// @brief Method set_index, addr 0x2d209c4, size 0x8, virtual false, abstract: false, final false
  inline void set_index(uint32_t value);

  /// @brief Method get_metrics, addr 0x2d209cc, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::GlyphMetrics get_metrics();

  /// @brief Method set_metrics, addr 0x2d209e0, size 0x14, virtual false, abstract: false, final false
  inline void set_metrics(::UnityEngine::TextCore::GlyphMetrics value);

  /// @brief Method get_glyphRect, addr 0x2d209f4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::GlyphRect get_glyphRect();

  /// @brief Method set_glyphRect, addr 0x2d20a00, size 0x8, virtual false, abstract: false, final false
  inline void set_glyphRect(::UnityEngine::TextCore::GlyphRect value);

  /// @brief Method get_scale, addr 0x2d20a08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method set_scale, addr 0x2d20a10, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

  /// @brief Method get_atlasIndex, addr 0x2d20a18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_atlasIndex();

  /// @brief Method set_atlasIndex, addr 0x2d20a20, size 0x8, virtual false, abstract: false, final false
  inline void set_atlasIndex(int32_t value);

  static inline ::UnityEngine::TextCore::Glyph* New_ctor();

  /// @brief Method .ctor, addr 0x2d20a28, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextCore::Glyph* New_ctor(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct);

  /// @brief Method .ctor, addr 0x2d20a50, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct);

  static inline ::UnityEngine::TextCore::Glyph* New_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale,
                                                         int32_t atlasIndex);

  /// @brief Method .ctor, addr 0x2d20adc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex);

  // Ctor Parameters [CppParam { name: "", ty: "Glyph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Glyph(Glyph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Glyph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Glyph(Glyph const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Glyph();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Glyph, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_Metrics) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_GlyphRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_Scale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_AtlasIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Glyph, ___m_ClassDefinitionType) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::TextCore
NEED_NO_BOX(::UnityEngine::TextCore::Glyph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Glyph*, "UnityEngine.TextCore", "Glyph");
