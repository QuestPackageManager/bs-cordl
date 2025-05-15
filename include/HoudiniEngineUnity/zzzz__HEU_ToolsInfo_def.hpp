#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ToolsInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ToolsInfo)
namespace HoudiniEngineUnity {
struct HEU_ToolsInfo_PaintMergeMode;
}
namespace HoudiniEngineUnity {
struct HEU_ToolsInfo_PaintMeshVisibility;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_ToolsInfo_PaintMergeMode;
}
namespace HoudiniEngineUnity {
struct HEU_ToolsInfo_PaintMeshVisibility;
}
namespace HoudiniEngineUnity {
class HEU_ToolsInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode);
MARK_VAL_T(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ToolsInfo);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_ToolsInfo/PaintMergeMode
struct CORDL_TYPE HEU_ToolsInfo_PaintMergeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_ToolsInfo_PaintMergeMode_Unwrapped
  enum struct __HEU_ToolsInfo_PaintMergeMode_Unwrapped : int32_t {
    __E_REPLACE = static_cast<int32_t>(0x0),
    __E_ADD = static_cast<int32_t>(0x1),
    __E_SUBTRACT = static_cast<int32_t>(0x2),
    __E_MULTIPLY = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_ToolsInfo_PaintMergeMode_Unwrapped() const noexcept {
    return static_cast<__HEU_ToolsInfo_PaintMergeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ToolsInfo_PaintMergeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_ToolsInfo_PaintMergeMode(int32_t value__) noexcept;

  /// @brief Field ADD value: I32(1)
  static ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode const ADD;

  /// @brief Field MULTIPLY value: I32(3)
  static ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode const MULTIPLY;

  /// @brief Field REPLACE value: I32(0)
  static ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode const REPLACE;

  /// @brief Field SUBTRACT value: I32(2)
  static ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode const SUBTRACT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11935 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_ToolsInfo/PaintMeshVisibility
struct CORDL_TYPE HEU_ToolsInfo_PaintMeshVisibility {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_ToolsInfo_PaintMeshVisibility_Unwrapped
  enum struct __HEU_ToolsInfo_PaintMeshVisibility_Unwrapped : int32_t {
    __E_AUTO = static_cast<int32_t>(0x0),
    __E_SHOW = static_cast<int32_t>(0x1),
    __E_HIDE = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_ToolsInfo_PaintMeshVisibility_Unwrapped() const noexcept {
    return static_cast<__HEU_ToolsInfo_PaintMeshVisibility_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ToolsInfo_PaintMeshVisibility();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_ToolsInfo_PaintMeshVisibility(int32_t value__) noexcept;

  /// @brief Field AUTO value: I32(0)
  static ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility const AUTO;

  /// @brief Field HIDE value: I32(2)
  static ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility const HIDE;

  /// @brief Field SHOW value: I32(1)
  static ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility const SHOW;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11936 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_ToolsInfo::PaintMergeMode, HoudiniEngineUnity.HEU_ToolsInfo::PaintMeshVisibility, HoudiniEngineUnity.IEquivable`1<T>, UnityEngine.Color,
// UnityEngine.ScriptableObject
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_ToolsInfo
class CORDL_TYPE HEU_ToolsInfo : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using PaintMergeMode = ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode;

  using PaintMeshVisibility = ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility;

  /// @brief Field _affectedAreaPaintColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__affectedAreaPaintColor, put = __cordl_internal_set__affectedAreaPaintColor)) ::UnityEngine::Color _affectedAreaPaintColor;

  /// @brief Field _alwaysCookUpstream, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__alwaysCookUpstream, put = __cordl_internal_set__alwaysCookUpstream)) bool _alwaysCookUpstream;

  /// @brief Field _brushHandleColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__brushHandleColor, put = __cordl_internal_set__brushHandleColor)) ::UnityEngine::Color _brushHandleColor;

  /// @brief Field _editPointBoxSelectedColor, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__editPointBoxSelectedColor, put = __cordl_internal_set__editPointBoxSelectedColor)) ::UnityEngine::Color _editPointBoxSelectedColor;

  /// @brief Field _editPointBoxSize, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__editPointBoxSize, put = __cordl_internal_set__editPointBoxSize)) float_t _editPointBoxSize;

  /// @brief Field _editPointBoxUnselectedColor, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__editPointBoxUnselectedColor, put = __cordl_internal_set__editPointBoxUnselectedColor)) ::UnityEngine::Color _editPointBoxUnselectedColor;

  /// @brief Field _isPainting, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get__isPainting, put = __cordl_internal_set__isPainting)) bool _isPainting;

  /// @brief Field _lastAttributeName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lastAttributeName, put = __cordl_internal_set__lastAttributeName)) ::StringW _lastAttributeName;

  /// @brief Field _lastAttributeNodeName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lastAttributeNodeName, put = __cordl_internal_set__lastAttributeNodeName)) ::StringW _lastAttributeNodeName;

  /// @brief Field _lastAttributesGeoID, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__lastAttributesGeoID, put = __cordl_internal_set__lastAttributesGeoID)) int32_t _lastAttributesGeoID;

  /// @brief Field _lastAttributesPartID, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__lastAttributesPartID, put = __cordl_internal_set__lastAttributesPartID)) int32_t _lastAttributesPartID;

  /// @brief Field _liveUpdate, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__liveUpdate, put = __cordl_internal_set__liveUpdate)) bool _liveUpdate;

  /// @brief Field _paintBrushOpacity, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__paintBrushOpacity, put = __cordl_internal_set__paintBrushOpacity)) float_t _paintBrushOpacity;

  /// @brief Field _paintBrushSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__paintBrushSize, put = __cordl_internal_set__paintBrushSize)) float_t _paintBrushSize;

  /// @brief Field _paintFloatValue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__paintFloatValue, put = __cordl_internal_set__paintFloatValue)) ::ArrayW<float_t, ::Array<float_t>*> _paintFloatValue;

  /// @brief Field _paintIntValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__paintIntValue, put = __cordl_internal_set__paintIntValue)) ::ArrayW<int32_t, ::Array<int32_t>*> _paintIntValue;

  /// @brief Field _paintMergeMode, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__paintMergeMode, put = __cordl_internal_set__paintMergeMode)) ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode _paintMergeMode;

  /// @brief Field _paintMeshVisiblity, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__paintMeshVisiblity, put = __cordl_internal_set__paintMeshVisiblity)) ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility _paintMeshVisiblity;

  /// @brief Field _paintStringValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__paintStringValue, put = __cordl_internal_set__paintStringValue)) ::ArrayW<::StringW, ::Array<::StringW>*> _paintStringValue;

  /// @brief Field _recacheRequired, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__recacheRequired, put = __cordl_internal_set__recacheRequired)) bool _recacheRequired;

  /// @brief Field _showOnlyEditGeometry, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__showOnlyEditGeometry, put = __cordl_internal_set__showOnlyEditGeometry)) bool _showOnlyEditGeometry;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a9d0bc, size 0x610, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ToolsInfo* other);

  static inline ::HoudiniEngineUnity::HEU_ToolsInfo* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__affectedAreaPaintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__affectedAreaPaintColor();

  constexpr bool const& __cordl_internal_get__alwaysCookUpstream() const;

  constexpr bool& __cordl_internal_get__alwaysCookUpstream();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__brushHandleColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__brushHandleColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__editPointBoxSelectedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__editPointBoxSelectedColor();

  constexpr float_t const& __cordl_internal_get__editPointBoxSize() const;

  constexpr float_t& __cordl_internal_get__editPointBoxSize();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__editPointBoxUnselectedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__editPointBoxUnselectedColor();

  constexpr bool const& __cordl_internal_get__isPainting() const;

  constexpr bool& __cordl_internal_get__isPainting();

  constexpr ::StringW const& __cordl_internal_get__lastAttributeName() const;

  constexpr ::StringW& __cordl_internal_get__lastAttributeName();

  constexpr ::StringW const& __cordl_internal_get__lastAttributeNodeName() const;

  constexpr ::StringW& __cordl_internal_get__lastAttributeNodeName();

  constexpr int32_t const& __cordl_internal_get__lastAttributesGeoID() const;

  constexpr int32_t& __cordl_internal_get__lastAttributesGeoID();

  constexpr int32_t const& __cordl_internal_get__lastAttributesPartID() const;

  constexpr int32_t& __cordl_internal_get__lastAttributesPartID();

  constexpr bool const& __cordl_internal_get__liveUpdate() const;

  constexpr bool& __cordl_internal_get__liveUpdate();

  constexpr float_t const& __cordl_internal_get__paintBrushOpacity() const;

  constexpr float_t& __cordl_internal_get__paintBrushOpacity();

  constexpr float_t const& __cordl_internal_get__paintBrushSize() const;

  constexpr float_t& __cordl_internal_get__paintBrushSize();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__paintFloatValue() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__paintFloatValue();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__paintIntValue() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__paintIntValue();

  constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode const& __cordl_internal_get__paintMergeMode() const;

  constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode& __cordl_internal_get__paintMergeMode();

  constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility const& __cordl_internal_get__paintMeshVisiblity() const;

  constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility& __cordl_internal_get__paintMeshVisiblity();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__paintStringValue() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__paintStringValue();

  constexpr bool const& __cordl_internal_get__recacheRequired() const;

  constexpr bool& __cordl_internal_get__recacheRequired();

  constexpr bool const& __cordl_internal_get__showOnlyEditGeometry() const;

  constexpr bool& __cordl_internal_get__showOnlyEditGeometry();

  constexpr void __cordl_internal_set__affectedAreaPaintColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__alwaysCookUpstream(bool value);

  constexpr void __cordl_internal_set__brushHandleColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__editPointBoxSelectedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__editPointBoxSize(float_t value);

  constexpr void __cordl_internal_set__editPointBoxUnselectedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__isPainting(bool value);

  constexpr void __cordl_internal_set__lastAttributeName(::StringW value);

  constexpr void __cordl_internal_set__lastAttributeNodeName(::StringW value);

  constexpr void __cordl_internal_set__lastAttributesGeoID(int32_t value);

  constexpr void __cordl_internal_set__lastAttributesPartID(int32_t value);

  constexpr void __cordl_internal_set__liveUpdate(bool value);

  constexpr void __cordl_internal_set__paintBrushOpacity(float_t value);

  constexpr void __cordl_internal_set__paintBrushSize(float_t value);

  constexpr void __cordl_internal_set__paintFloatValue(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__paintIntValue(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__paintMergeMode(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode value);

  constexpr void __cordl_internal_set__paintMeshVisiblity(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility value);

  constexpr void __cordl_internal_set__paintStringValue(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__recacheRequired(bool value);

  constexpr void __cordl_internal_set__showOnlyEditGeometry(bool value);

  /// @brief Method .ctor, addr 0x3a9d6cc, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_ToolsInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ToolsInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ToolsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ToolsInfo(HEU_ToolsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ToolsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ToolsInfo(HEU_ToolsInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11937 };

  /// @brief Field _paintBrushSize, offset: 0x18, size: 0x4, def value: None
  float_t ____paintBrushSize;

  /// @brief Field _paintBrushOpacity, offset: 0x1c, size: 0x4, def value: None
  float_t ____paintBrushOpacity;

  /// @brief Field _paintIntValue, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____paintIntValue;

  /// @brief Field _paintFloatValue, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____paintFloatValue;

  /// @brief Field _paintStringValue, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____paintStringValue;

  /// @brief Field _lastAttributesGeoID, offset: 0x38, size: 0x4, def value: None
  int32_t ____lastAttributesGeoID;

  /// @brief Field _lastAttributesPartID, offset: 0x3c, size: 0x4, def value: None
  int32_t ____lastAttributesPartID;

  /// @brief Field _lastAttributeNodeName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____lastAttributeNodeName;

  /// @brief Field _lastAttributeName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____lastAttributeName;

  /// @brief Field _brushHandleColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____brushHandleColor;

  /// @brief Field _affectedAreaPaintColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____affectedAreaPaintColor;

  /// @brief Field _liveUpdate, offset: 0x70, size: 0x1, def value: None
  bool ____liveUpdate;

  /// @brief Field _isPainting, offset: 0x71, size: 0x1, def value: None
  bool ____isPainting;

  /// @brief Field _editPointBoxSize, offset: 0x74, size: 0x4, def value: None
  float_t ____editPointBoxSize;

  /// @brief Field _editPointBoxUnselectedColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____editPointBoxUnselectedColor;

  /// @brief Field _editPointBoxSelectedColor, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Color ____editPointBoxSelectedColor;

  /// @brief Field _recacheRequired, offset: 0x98, size: 0x1, def value: None
  bool ____recacheRequired;

  /// @brief Field _paintMergeMode, offset: 0x9c, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode ____paintMergeMode;

  /// @brief Field _showOnlyEditGeometry, offset: 0xa0, size: 0x1, def value: None
  bool ____showOnlyEditGeometry;

  /// @brief Field _alwaysCookUpstream, offset: 0xa1, size: 0x1, def value: None
  bool ____alwaysCookUpstream;

  /// @brief Field _paintMeshVisiblity, offset: 0xa4, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility ____paintMeshVisiblity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____paintBrushSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____paintBrushOpacity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____paintIntValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____paintFloatValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____paintStringValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____lastAttributesGeoID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____lastAttributesPartID) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____lastAttributeNodeName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____lastAttributeName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____brushHandleColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____affectedAreaPaintColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____liveUpdate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____isPainting) == 0x71, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____editPointBoxSize) == 0x74, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____editPointBoxUnselectedColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____editPointBoxSelectedColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____recacheRequired) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____paintMergeMode) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____showOnlyEditGeometry) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____alwaysCookUpstream) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ToolsInfo, ____paintMeshVisiblity) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ToolsInfo, 0xa8>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode, "HoudiniEngineUnity", "HEU_ToolsInfo/PaintMergeMode");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility, "HoudiniEngineUnity", "HEU_ToolsInfo/PaintMeshVisibility");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ToolsInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ToolsInfo*, "HoudiniEngineUnity", "HEU_ToolsInfo");
