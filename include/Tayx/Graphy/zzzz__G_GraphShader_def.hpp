#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Tayx.Graphy::G_GraphShader
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15069))
// CS Name: ::Tayx.Graphy::G_GraphShader*
class CORDL_TYPE G_GraphShader : public ::System::Object {
public:
  // Declarations
  /// @brief Field ArrayMaxSize, offset 0x10, size 0x4
  __declspec(property(get = __get_ArrayMaxSize, put = __set_ArrayMaxSize)) int32_t ArrayMaxSize;

  /// @brief Field ShaderArrayValues, offset 0x18, size 0x8
  __declspec(property(get = __get_ShaderArrayValues, put = __set_ShaderArrayValues))::ArrayW<float_t, ::Array<float_t>*> ShaderArrayValues;

  /// @brief Field Image, offset 0x20, size 0x8
  __declspec(property(get = __get_Image, put = __set_Image))::UnityEngine::UI::Image* Image;

  /// @brief Field Name, offset 0x28, size 0x8
  __declspec(property(get = __get_Name, put = __set_Name))::StringW Name;

  /// @brief Field Name_Length, offset 0x30, size 0x8
  __declspec(property(get = __get_Name_Length, put = __set_Name_Length))::StringW Name_Length;

  /// @brief Field Average, offset 0x38, size 0x4
  __declspec(property(get = __get_Average, put = __set_Average)) float_t Average;

  /// @brief Field m_averagePropertyId, offset 0x3c, size 0x4
  __declspec(property(get = __get_m_averagePropertyId, put = __set_m_averagePropertyId)) int32_t m_averagePropertyId;

  /// @brief Field GoodThreshold, offset 0x40, size 0x4
  __declspec(property(get = __get_GoodThreshold, put = __set_GoodThreshold)) float_t GoodThreshold;

  /// @brief Field CautionThreshold, offset 0x44, size 0x4
  __declspec(property(get = __get_CautionThreshold, put = __set_CautionThreshold)) float_t CautionThreshold;

  /// @brief Field m_goodThresholdPropertyId, offset 0x48, size 0x4
  __declspec(property(get = __get_m_goodThresholdPropertyId, put = __set_m_goodThresholdPropertyId)) int32_t m_goodThresholdPropertyId;

  /// @brief Field m_cautionThresholdPropertyId, offset 0x4c, size 0x4
  __declspec(property(get = __get_m_cautionThresholdPropertyId, put = __set_m_cautionThresholdPropertyId)) int32_t m_cautionThresholdPropertyId;

  /// @brief Field GoodColor, offset 0x50, size 0x10
  __declspec(property(get = __get_GoodColor, put = __set_GoodColor))::UnityEngine::Color GoodColor;

  /// @brief Field CautionColor, offset 0x60, size 0x10
  __declspec(property(get = __get_CautionColor, put = __set_CautionColor))::UnityEngine::Color CautionColor;

  /// @brief Field CriticalColor, offset 0x70, size 0x10
  __declspec(property(get = __get_CriticalColor, put = __set_CriticalColor))::UnityEngine::Color CriticalColor;

  /// @brief Field m_goodColorPropertyId, offset 0x80, size 0x4
  __declspec(property(get = __get_m_goodColorPropertyId, put = __set_m_goodColorPropertyId)) int32_t m_goodColorPropertyId;

  /// @brief Field m_cautionColorPropertyId, offset 0x84, size 0x4
  __declspec(property(get = __get_m_cautionColorPropertyId, put = __set_m_cautionColorPropertyId)) int32_t m_cautionColorPropertyId;

  /// @brief Field m_criticalColorPropertyId, offset 0x88, size 0x4
  __declspec(property(get = __get_m_criticalColorPropertyId, put = __set_m_criticalColorPropertyId)) int32_t m_criticalColorPropertyId;

  constexpr int32_t& __get_ArrayMaxSize();

  constexpr int32_t const& __get_ArrayMaxSize() const;

  constexpr void __set_ArrayMaxSize(int32_t value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_ShaderArrayValues();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_ShaderArrayValues() const;

  constexpr void __set_ShaderArrayValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::UnityEngine::UI::Image*& __get_Image();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_Image() const;

  constexpr void __set_Image(::UnityEngine::UI::Image* value);

  constexpr ::StringW& __get_Name();

  constexpr ::StringW const& __get_Name() const;

  constexpr void __set_Name(::StringW value);

  constexpr ::StringW& __get_Name_Length();

  constexpr ::StringW const& __get_Name_Length() const;

  constexpr void __set_Name_Length(::StringW value);

  constexpr float_t& __get_Average();

  constexpr float_t const& __get_Average() const;

  constexpr void __set_Average(float_t value);

  constexpr int32_t& __get_m_averagePropertyId();

  constexpr int32_t const& __get_m_averagePropertyId() const;

  constexpr void __set_m_averagePropertyId(int32_t value);

  constexpr float_t& __get_GoodThreshold();

  constexpr float_t const& __get_GoodThreshold() const;

  constexpr void __set_GoodThreshold(float_t value);

  constexpr float_t& __get_CautionThreshold();

  constexpr float_t const& __get_CautionThreshold() const;

  constexpr void __set_CautionThreshold(float_t value);

  constexpr int32_t& __get_m_goodThresholdPropertyId();

  constexpr int32_t const& __get_m_goodThresholdPropertyId() const;

  constexpr void __set_m_goodThresholdPropertyId(int32_t value);

  constexpr int32_t& __get_m_cautionThresholdPropertyId();

  constexpr int32_t const& __get_m_cautionThresholdPropertyId() const;

  constexpr void __set_m_cautionThresholdPropertyId(int32_t value);

  constexpr ::UnityEngine::Color& __get_GoodColor();

  constexpr ::UnityEngine::Color const& __get_GoodColor() const;

  constexpr void __set_GoodColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_CautionColor();

  constexpr ::UnityEngine::Color const& __get_CautionColor() const;

  constexpr void __set_CautionColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_CriticalColor();

  constexpr ::UnityEngine::Color const& __get_CriticalColor() const;

  constexpr void __set_CriticalColor(::UnityEngine::Color value);

  constexpr int32_t& __get_m_goodColorPropertyId();

  constexpr int32_t const& __get_m_goodColorPropertyId() const;

  constexpr void __set_m_goodColorPropertyId(int32_t value);

  constexpr int32_t& __get_m_cautionColorPropertyId();

  constexpr int32_t const& __get_m_cautionColorPropertyId() const;

  constexpr void __set_m_cautionColorPropertyId(int32_t value);

  constexpr int32_t& __get_m_criticalColorPropertyId();

  constexpr int32_t const& __get_m_criticalColorPropertyId() const;

  constexpr void __set_m_criticalColorPropertyId(int32_t value);

  /// @brief Method InitializeShader, addr 0x2a06240, size 0x17c, virtual false, abstract: false, final false
  inline void InitializeShader();

  /// @brief Method UpdateArray, addr 0x2a063bc, size 0x44, virtual false, abstract: false, final false
  inline void UpdateArray();

  /// @brief Method UpdateAverage, addr 0x2a06400, size 0x3c, virtual false, abstract: false, final false
  inline void UpdateAverage();

  /// @brief Method UpdateThresholds, addr 0x2a0643c, size 0x68, virtual false, abstract: false, final false
  inline void UpdateThresholds();

  /// @brief Method UpdateColors, addr 0x2a064a4, size 0xa0, virtual false, abstract: false, final false
  inline void UpdateColors();

  /// @brief Method UpdatePoints, addr 0x2a06544, size 0x3c, virtual false, abstract: false, final false
  inline void UpdatePoints();

  static inline ::Tayx::Graphy::G_GraphShader* New_ctor();

  /// @brief Method .ctor, addr 0x2a06580, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "G_GraphShader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_GraphShader(G_GraphShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_GraphShader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_GraphShader(G_GraphShader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_GraphShader();

public:
  /// @brief Field ArrayMaxSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___ArrayMaxSize;

  /// @brief Field ShaderArrayValues, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___ShaderArrayValues;

  /// @brief Field Image, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___Image;

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

  /// @brief Field ArrayMaxSizeFull offset 0xffffffff size 0x4
  static constexpr int32_t ArrayMaxSizeFull{ static_cast<int32_t>(0x200) };

  /// @brief Field ArrayMaxSizeLight offset 0xffffffff size 0x4
  static constexpr int32_t ArrayMaxSizeLight{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::G_GraphShader, 0x90>, "Size mismatch!");

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

} // namespace Tayx::Graphy
NEED_NO_BOX(::Tayx::Graphy::G_GraphShader);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::G_GraphShader*, "Tayx.Graphy", "G_GraphShader");
