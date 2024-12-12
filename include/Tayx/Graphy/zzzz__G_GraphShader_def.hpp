#pragma once
// IWYU pragma private; include "Tayx/Graphy/G_GraphShader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_GraphShader)
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace Tayx::Graphy {
class G_GraphShader;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::G_GraphShader);
// Dependencies System.Object, UnityEngine.Color
namespace Tayx::Graphy {
// Is value type: false
// CS Name: Tayx.Graphy.G_GraphShader
class CORDL_TYPE G_GraphShader : public ::System::Object {
public:
  // Declarations
  /// @brief Field ArrayMaxSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ArrayMaxSize, put = __cordl_internal_set_ArrayMaxSize)) int32_t ArrayMaxSize;

  /// @brief Field Average, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_Average, put = __cordl_internal_set_Average)) float_t Average;

  /// @brief Field CautionColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_CautionColor, put = __cordl_internal_set_CautionColor)) ::UnityEngine::Color CautionColor;

  /// @brief Field CautionThreshold, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_CautionThreshold, put = __cordl_internal_set_CautionThreshold)) float_t CautionThreshold;

  /// @brief Field CriticalColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_CriticalColor, put = __cordl_internal_set_CriticalColor)) ::UnityEngine::Color CriticalColor;

  /// @brief Field GoodColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_GoodColor, put = __cordl_internal_set_GoodColor)) ::UnityEngine::Color GoodColor;

  /// @brief Field GoodThreshold, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_GoodThreshold, put = __cordl_internal_set_GoodThreshold)) float_t GoodThreshold;

  /// @brief Field Image, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Image, put = __cordl_internal_set_Image)) ::UnityW<::UnityEngine::UI::Image> Image;

  /// @brief Field Name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Field Name_Length, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Name_Length, put = __cordl_internal_set_Name_Length)) ::StringW Name_Length;

  /// @brief Field ShaderArrayValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ShaderArrayValues, put = __cordl_internal_set_ShaderArrayValues)) ::ArrayW<float_t, ::Array<float_t>*> ShaderArrayValues;

  /// @brief Field m_averagePropertyId, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_averagePropertyId, put = __cordl_internal_set_m_averagePropertyId)) int32_t m_averagePropertyId;

  /// @brief Field m_cautionColorPropertyId, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_cautionColorPropertyId, put = __cordl_internal_set_m_cautionColorPropertyId)) int32_t m_cautionColorPropertyId;

  /// @brief Field m_cautionThresholdPropertyId, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_cautionThresholdPropertyId, put = __cordl_internal_set_m_cautionThresholdPropertyId)) int32_t m_cautionThresholdPropertyId;

  /// @brief Field m_criticalColorPropertyId, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_criticalColorPropertyId, put = __cordl_internal_set_m_criticalColorPropertyId)) int32_t m_criticalColorPropertyId;

  /// @brief Field m_goodColorPropertyId, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_goodColorPropertyId, put = __cordl_internal_set_m_goodColorPropertyId)) int32_t m_goodColorPropertyId;

  /// @brief Field m_goodThresholdPropertyId, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_goodThresholdPropertyId, put = __cordl_internal_set_m_goodThresholdPropertyId)) int32_t m_goodThresholdPropertyId;

  /// @brief Method InitializeShader, addr 0x44cfc48, size 0x17c, virtual false, abstract: false, final false
  inline void InitializeShader();

  static inline ::Tayx::Graphy::G_GraphShader* New_ctor();

  /// @brief Method UpdateArray, addr 0x44cfdc4, size 0x44, virtual false, abstract: false, final false
  inline void UpdateArray();

  /// @brief Method UpdateAverage, addr 0x44cfe08, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateAverage();

  /// @brief Method UpdateColors, addr 0x44cfeac, size 0xa0, virtual false, abstract: false, final false
  inline void UpdateColors();

  /// @brief Method UpdatePoints, addr 0x44cff4c, size 0x3c, virtual false, abstract: false, final false
  inline void UpdatePoints();

  /// @brief Method UpdateThresholds, addr 0x44cfe44, size 0x68, virtual false, abstract: false, final false
  inline void UpdateThresholds();

  constexpr int32_t const& __cordl_internal_get_ArrayMaxSize() const;

  constexpr int32_t& __cordl_internal_get_ArrayMaxSize();

  constexpr float_t const& __cordl_internal_get_Average() const;

  constexpr float_t& __cordl_internal_get_Average();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_CautionColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_CautionColor();

  constexpr float_t const& __cordl_internal_get_CautionThreshold() const;

  constexpr float_t& __cordl_internal_get_CautionThreshold();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_CriticalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_CriticalColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_GoodColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_GoodColor();

  constexpr float_t const& __cordl_internal_get_GoodThreshold() const;

  constexpr float_t& __cordl_internal_get_GoodThreshold();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_Image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_Image();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::StringW const& __cordl_internal_get_Name_Length() const;

  constexpr ::StringW& __cordl_internal_get_Name_Length();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_ShaderArrayValues() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_ShaderArrayValues();

  constexpr int32_t const& __cordl_internal_get_m_averagePropertyId() const;

  constexpr int32_t& __cordl_internal_get_m_averagePropertyId();

  constexpr int32_t const& __cordl_internal_get_m_cautionColorPropertyId() const;

  constexpr int32_t& __cordl_internal_get_m_cautionColorPropertyId();

  constexpr int32_t const& __cordl_internal_get_m_cautionThresholdPropertyId() const;

  constexpr int32_t& __cordl_internal_get_m_cautionThresholdPropertyId();

  constexpr int32_t const& __cordl_internal_get_m_criticalColorPropertyId() const;

  constexpr int32_t& __cordl_internal_get_m_criticalColorPropertyId();

  constexpr int32_t const& __cordl_internal_get_m_goodColorPropertyId() const;

  constexpr int32_t& __cordl_internal_get_m_goodColorPropertyId();

  constexpr int32_t const& __cordl_internal_get_m_goodThresholdPropertyId() const;

  constexpr int32_t& __cordl_internal_get_m_goodThresholdPropertyId();

  constexpr void __cordl_internal_set_ArrayMaxSize(int32_t value);

  constexpr void __cordl_internal_set_Average(float_t value);

  constexpr void __cordl_internal_set_CautionColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_CautionThreshold(float_t value);

  constexpr void __cordl_internal_set_CriticalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_GoodColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_GoodThreshold(float_t value);

  constexpr void __cordl_internal_set_Image(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Name_Length(::StringW value);

  constexpr void __cordl_internal_set_ShaderArrayValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_averagePropertyId(int32_t value);

  constexpr void __cordl_internal_set_m_cautionColorPropertyId(int32_t value);

  constexpr void __cordl_internal_set_m_cautionThresholdPropertyId(int32_t value);

  constexpr void __cordl_internal_set_m_criticalColorPropertyId(int32_t value);

  constexpr void __cordl_internal_set_m_goodColorPropertyId(int32_t value);

  constexpr void __cordl_internal_set_m_goodThresholdPropertyId(int32_t value);

  /// @brief Method .ctor, addr 0x44cff88, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_GraphShader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_GraphShader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_GraphShader(G_GraphShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_GraphShader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_GraphShader(G_GraphShader const&) = delete;

  /// @brief Field ArrayMaxSizeFull offset 0xffffffff size 0x4
  static constexpr int32_t ArrayMaxSizeFull{ static_cast<int32_t>(0x200) };

  /// @brief Field ArrayMaxSizeLight offset 0xffffffff size 0x4
  static constexpr int32_t ArrayMaxSizeLight{ static_cast<int32_t>(0x80) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17212 };

  /// @brief Field ArrayMaxSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___ArrayMaxSize;

  /// @brief Field ShaderArrayValues, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___ShaderArrayValues;

  /// @brief Field Image, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___Image;

  /// @brief Field Name, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Name_Length, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Name_Length;

  /// @brief Field Average, offset: 0x38, size: 0x4, def value: None
  float_t ___Average;

  /// @brief Field m_averagePropertyId, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_averagePropertyId;

  /// @brief Field GoodThreshold, offset: 0x40, size: 0x4, def value: None
  float_t ___GoodThreshold;

  /// @brief Field CautionThreshold, offset: 0x44, size: 0x4, def value: None
  float_t ___CautionThreshold;

  /// @brief Field m_goodThresholdPropertyId, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_goodThresholdPropertyId;

  /// @brief Field m_cautionThresholdPropertyId, offset: 0x4c, size: 0x4, def value: None
  int32_t ___m_cautionThresholdPropertyId;

  /// @brief Field GoodColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ___GoodColor;

  /// @brief Field CautionColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ___CautionColor;

  /// @brief Field CriticalColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ___CriticalColor;

  /// @brief Field m_goodColorPropertyId, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_goodColorPropertyId;

  /// @brief Field m_cautionColorPropertyId, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_cautionColorPropertyId;

  /// @brief Field m_criticalColorPropertyId, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_criticalColorPropertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___ArrayMaxSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___ShaderArrayValues) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___Image) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___Name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___Name_Length) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___Average) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___m_averagePropertyId) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___GoodThreshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___CautionThreshold) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___m_goodThresholdPropertyId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___m_cautionThresholdPropertyId) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___GoodColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___CautionColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___CriticalColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___m_goodColorPropertyId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___m_cautionColorPropertyId) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___m_criticalColorPropertyId) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::G_GraphShader, 0x90>, "Size mismatch!");

} // namespace Tayx::Graphy
NEED_NO_BOX(::Tayx::Graphy::G_GraphShader);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::G_GraphShader*, "Tayx.Graphy", "G_GraphShader");
