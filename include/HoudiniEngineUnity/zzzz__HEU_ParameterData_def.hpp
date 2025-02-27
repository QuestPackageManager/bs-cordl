#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ParameterData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ParameterData)
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ParameterData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ParameterData);
// Dependencies HoudiniEngineUnity.HAPI_ParmInfo, HoudiniEngineUnity.IEquivable`1<T>, System.Object, UnityEngine.Color
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_ParameterData
class CORDL_TYPE HEU_ParameterData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChildIndex)) int32_t ChildIndex;

  __declspec(property(get = get_FloatMax)) float_t FloatMax;

  __declspec(property(get = get_FloatMin)) float_t FloatMin;

  __declspec(property(get = get_FloatUIMax)) float_t FloatUIMax;

  __declspec(property(get = get_FloatUIMin)) float_t FloatUIMin;

  __declspec(property(get = get_IntMax)) int32_t IntMax;

  __declspec(property(get = get_IntMin)) int32_t IntMin;

  __declspec(property(get = get_IntUIMax)) int32_t IntUIMax;

  __declspec(property(get = get_IntUIMin)) int32_t IntUIMin;

  __declspec(property(get = get_ParentID)) int32_t ParentID;

  __declspec(property(get = get_ParmID)) int32_t ParmID;

  __declspec(property(get = get_ParmSize)) int32_t ParmSize;

  /// @brief Field _animCurve, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__animCurve, put = __cordl_internal_set__animCurve)) ::UnityEngine::AnimationCurve* _animCurve;

  /// @brief Field _childParameterIDs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__childParameterIDs, put = __cordl_internal_set__childParameterIDs)) ::System::Collections::Generic::List_1<int32_t>* _childParameterIDs;

  /// @brief Field _choiceIntValues, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__choiceIntValues, put = __cordl_internal_set__choiceIntValues)) ::ArrayW<int32_t, ::Array<int32_t>*> _choiceIntValues;

  /// @brief Field _choiceLabels, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__choiceLabels, put = __cordl_internal_set__choiceLabels)) ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> _choiceLabels;

  /// @brief Field _choiceStringValues, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__choiceStringValues, put = __cordl_internal_set__choiceStringValues)) ::ArrayW<::StringW, ::Array<::StringW>*> _choiceStringValues;

  /// @brief Field _choiceValue, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__choiceValue, put = __cordl_internal_set__choiceValue)) int32_t _choiceValue;

  /// @brief Field _color, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _fileTypeInfo, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__fileTypeInfo, put = __cordl_internal_set__fileTypeInfo)) ::StringW _fileTypeInfo;

  /// @brief Field _floatValues, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__floatValues, put = __cordl_internal_set__floatValues)) ::ArrayW<float_t, ::Array<float_t>*> _floatValues;

  /// @brief Field _folderListChildrenProcessed, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get__folderListChildrenProcessed, put = __cordl_internal_set__folderListChildrenProcessed)) int32_t _folderListChildrenProcessed;

  /// @brief Field _gradient, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__gradient, put = __cordl_internal_set__gradient)) ::UnityEngine::Gradient* _gradient;

  /// @brief Field _hasAssetPathTag, offset 0x148, size 0x1
  __declspec(property(get = __cordl_internal_get__hasAssetPathTag, put = __cordl_internal_set__hasAssetPathTag)) bool _hasAssetPathTag;

  /// @brief Field _help, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__help, put = __cordl_internal_set__help)) ::StringW _help;

  /// @brief Field _intValues, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__intValues, put = __cordl_internal_set__intValues)) ::ArrayW<int32_t, ::Array<int32_t>*> _intValues;

  /// @brief Field _labelName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__labelName, put = __cordl_internal_set__labelName)) ::StringW _labelName;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _paramInputNode, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__paramInputNode, put = __cordl_internal_set__paramInputNode)) ::UnityW<::HoudiniEngineUnity::HEU_InputNode> _paramInputNode;

  /// @brief Field _parmInfo, offset 0x98, size 0x90
  __declspec(property(get = __cordl_internal_get__parmInfo, put = __cordl_internal_set__parmInfo)) ::HoudiniEngineUnity::HAPI_ParmInfo _parmInfo;

  /// @brief Field _showChildren, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get__showChildren, put = __cordl_internal_set__showChildren)) bool _showChildren;

  /// @brief Field _stringValues, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__stringValues, put = __cordl_internal_set__stringValues)) ::ArrayW<::StringW, ::Array<::StringW>*> _stringValues;

  /// @brief Field _tabSelectedIndex, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get__tabSelectedIndex, put = __cordl_internal_set__tabSelectedIndex)) int32_t _tabSelectedIndex;

  /// @brief Field _toggle, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle)) bool _toggle;

  /// @brief Field _unityIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__unityIndex, put = __cordl_internal_set__unityIndex)) int32_t _unityIndex;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterData*>*() noexcept;

  /// @brief Method HasMax, addr 0x3a569c0, size 0x8, virtual false, abstract: false, final false
  inline bool HasMax();

  /// @brief Method HasMin, addr 0x3a569b8, size 0x8, virtual false, abstract: false, final false
  inline bool HasMin();

  /// @brief Method HasUIMax, addr 0x3a569d0, size 0x8, virtual false, abstract: false, final false
  inline bool HasUIMax();

  /// @brief Method HasUIMin, addr 0x3a569c8, size 0x8, virtual false, abstract: false, final false
  inline bool HasUIMin();

  /// @brief Method IsAssetPath, addr 0x3a56e80, size 0x8, virtual false, abstract: false, final false
  inline bool IsAssetPath();

  /// @brief Method IsColor, addr 0x3a56dec, size 0x10, virtual false, abstract: false, final false
  inline bool IsColor();

  /// @brief Method IsContainer, addr 0x3a56d68, size 0x54, virtual false, abstract: false, final false
  inline bool IsContainer();

  /// @brief Method IsEquivalentTo, addr 0x3a56e88, size 0x71c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterData* other);

  /// @brief Method IsFloat, addr 0x3a56984, size 0x10, virtual false, abstract: false, final false
  inline bool IsFloat();

  /// @brief Method IsInt, addr 0x3a56974, size 0x10, virtual false, abstract: false, final false
  inline bool IsInt();

  /// @brief Method IsMultiParam, addr 0x3a56dbc, size 0x10, virtual false, abstract: false, final false
  inline bool IsMultiParam();

  /// @brief Method IsPathFile, addr 0x3a569a4, size 0x14, virtual false, abstract: false, final false
  inline bool IsPathFile();

  /// @brief Method IsRamp, addr 0x3a56dcc, size 0x10, virtual false, abstract: false, final false
  inline bool IsRamp();

  /// @brief Method IsString, addr 0x3a56994, size 0x10, virtual false, abstract: false, final false
  inline bool IsString();

  /// @brief Method IsToggle, addr 0x3a56ddc, size 0x10, virtual false, abstract: false, final false
  inline bool IsToggle();

  static inline ::HoudiniEngineUnity::HEU_ParameterData* New_ctor();

  /// @brief Method ToVector3, addr 0x3a56dfc, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ToVector3();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animCurve();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__childParameterIDs() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__childParameterIDs();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__choiceIntValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__choiceIntValues();

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& __cordl_internal_get__choiceLabels() const;

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& __cordl_internal_get__choiceLabels();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__choiceStringValues() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__choiceStringValues();

  constexpr int32_t const& __cordl_internal_get__choiceValue() const;

  constexpr int32_t& __cordl_internal_get__choiceValue();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::StringW const& __cordl_internal_get__fileTypeInfo() const;

  constexpr ::StringW& __cordl_internal_get__fileTypeInfo();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__floatValues() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__floatValues();

  constexpr int32_t const& __cordl_internal_get__folderListChildrenProcessed() const;

  constexpr int32_t& __cordl_internal_get__folderListChildrenProcessed();

  constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__gradient() const;

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get__gradient();

  constexpr bool const& __cordl_internal_get__hasAssetPathTag() const;

  constexpr bool& __cordl_internal_get__hasAssetPathTag();

  constexpr ::StringW const& __cordl_internal_get__help() const;

  constexpr ::StringW& __cordl_internal_get__help();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__intValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__intValues();

  constexpr ::StringW const& __cordl_internal_get__labelName() const;

  constexpr ::StringW& __cordl_internal_get__labelName();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_InputNode> const& __cordl_internal_get__paramInputNode() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_InputNode>& __cordl_internal_get__paramInputNode();

  constexpr ::HoudiniEngineUnity::HAPI_ParmInfo const& __cordl_internal_get__parmInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_ParmInfo& __cordl_internal_get__parmInfo();

  constexpr bool const& __cordl_internal_get__showChildren() const;

  constexpr bool& __cordl_internal_get__showChildren();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__stringValues() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__stringValues();

  constexpr int32_t const& __cordl_internal_get__tabSelectedIndex() const;

  constexpr int32_t& __cordl_internal_get__tabSelectedIndex();

  constexpr bool const& __cordl_internal_get__toggle() const;

  constexpr bool& __cordl_internal_get__toggle();

  constexpr int32_t const& __cordl_internal_get__unityIndex() const;

  constexpr int32_t& __cordl_internal_get__unityIndex();

  constexpr void __cordl_internal_set__animCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__childParameterIDs(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__choiceIntValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__choiceLabels(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  constexpr void __cordl_internal_set__choiceStringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__choiceValue(int32_t value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__fileTypeInfo(::StringW value);

  constexpr void __cordl_internal_set__floatValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__folderListChildrenProcessed(int32_t value);

  constexpr void __cordl_internal_set__gradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set__hasAssetPathTag(bool value);

  constexpr void __cordl_internal_set__help(::StringW value);

  constexpr void __cordl_internal_set__intValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__labelName(::StringW value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__paramInputNode(::UnityW<::HoudiniEngineUnity::HEU_InputNode> value);

  constexpr void __cordl_internal_set__parmInfo(::HoudiniEngineUnity::HAPI_ParmInfo value);

  constexpr void __cordl_internal_set__showChildren(bool value);

  constexpr void __cordl_internal_set__stringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__tabSelectedIndex(int32_t value);

  constexpr void __cordl_internal_set__toggle(bool value);

  constexpr void __cordl_internal_set__unityIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3a575a4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ChildIndex, addr 0x3a56964, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ChildIndex();

  /// @brief Method get_FloatMax, addr 0x3a56d50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FloatMax();

  /// @brief Method get_FloatMin, addr 0x3a56d48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FloatMin();

  /// @brief Method get_FloatUIMax, addr 0x3a56d60, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FloatUIMax();

  /// @brief Method get_FloatUIMin, addr 0x3a56d58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FloatUIMin();

  /// @brief Method get_IntMax, addr 0x3a56ab4, size 0xdc, virtual false, abstract: false, final false
  inline int32_t get_IntMax();

  /// @brief Method get_IntMin, addr 0x3a569d8, size 0xdc, virtual false, abstract: false, final false
  inline int32_t get_IntMin();

  /// @brief Method get_IntUIMax, addr 0x3a56c6c, size 0xdc, virtual false, abstract: false, final false
  inline int32_t get_IntUIMax();

  /// @brief Method get_IntUIMin, addr 0x3a56b90, size 0xdc, virtual false, abstract: false, final false
  inline int32_t get_IntUIMin();

  /// @brief Method get_ParentID, addr 0x3a5695c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ParentID();

  /// @brief Method get_ParmID, addr 0x3a551fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ParmID();

  /// @brief Method get_ParmSize, addr 0x3a5696c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ParmSize();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterData*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterData*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_ParameterData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ParameterData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ParameterData(HEU_ParameterData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ParameterData(HEU_ParameterData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11747 };

  /// @brief Field _unityIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____unityIndex;

  /// @brief Field _name, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _labelName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____labelName;

  /// @brief Field _help, offset: 0x28, size: 0x8, def value: None
  ::StringW ____help;

  /// @brief Field _childParameterIDs, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____childParameterIDs;

  /// @brief Field _choiceValue, offset: 0x38, size: 0x4, def value: None
  int32_t ____choiceValue;

  /// @brief Field _intValues, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____intValues;

  /// @brief Field _floatValues, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____floatValues;

  /// @brief Field _stringValues, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____stringValues;

  /// @brief Field _toggle, offset: 0x58, size: 0x1, def value: None
  bool ____toggle;

  /// @brief Field _color, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _gradient, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Gradient* ____gradient;

  /// @brief Field _animCurve, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____animCurve;

  /// @brief Field _choiceLabels, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> ____choiceLabels;

  /// @brief Field _choiceStringValues, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____choiceStringValues;

  /// @brief Field _choiceIntValues, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____choiceIntValues;

  /// @brief Field _parmInfo, offset: 0x98, size: 0x90, def value: None
  ::HoudiniEngineUnity::HAPI_ParmInfo ____parmInfo;

  /// @brief Field _showChildren, offset: 0x128, size: 0x1, def value: None
  bool ____showChildren;

  /// @brief Field _fileTypeInfo, offset: 0x130, size: 0x8, def value: None
  ::StringW ____fileTypeInfo;

  /// @brief Field _folderListChildrenProcessed, offset: 0x138, size: 0x4, def value: None
  int32_t ____folderListChildrenProcessed;

  /// @brief Field _tabSelectedIndex, offset: 0x13c, size: 0x4, def value: None
  int32_t ____tabSelectedIndex;

  /// @brief Field _paramInputNode, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_InputNode> ____paramInputNode;

  /// @brief Field _hasAssetPathTag, offset: 0x148, size: 0x1, def value: None
  bool ____hasAssetPathTag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____unityIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____labelName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____help) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____childParameterIDs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____choiceValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____intValues) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____floatValues) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____stringValues) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____toggle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____color) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____gradient) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____animCurve) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____choiceLabels) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____choiceStringValues) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____choiceIntValues) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____parmInfo) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____showChildren) == 0x128, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____fileTypeInfo) == 0x130, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____folderListChildrenProcessed) == 0x138, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____tabSelectedIndex) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____paramInputNode) == 0x140, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ParameterData, ____hasAssetPathTag) == 0x148, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ParameterData, 0x150>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ParameterData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ParameterData*, "HoudiniEngineUnity", "HEU_ParameterData");
