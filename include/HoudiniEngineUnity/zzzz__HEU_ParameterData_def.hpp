#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ParameterData)
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
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
// Type: HoudiniEngineUnity::HEU_ParameterData
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 329, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(9734)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9760))
// CS Name: ::HoudiniEngineUnity::HEU_ParameterData*
class CORDL_TYPE HEU_ParameterData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _unityIndex, offset 0x10, size 0x4
  __declspec(property(get = __get__unityIndex, put = __set__unityIndex)) int32_t _unityIndex;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _labelName, offset 0x20, size 0x8
  __declspec(property(get = __get__labelName, put = __set__labelName))::StringW _labelName;

  /// @brief Field _help, offset 0x28, size 0x8
  __declspec(property(get = __get__help, put = __set__help))::StringW _help;

  /// @brief Field _childParameterIDs, offset 0x30, size 0x8
  __declspec(property(get = __get__childParameterIDs, put = __set__childParameterIDs))::System::Collections::Generic::List_1<int32_t>* _childParameterIDs;

  /// @brief Field _choiceValue, offset 0x38, size 0x4
  __declspec(property(get = __get__choiceValue, put = __set__choiceValue)) int32_t _choiceValue;

  /// @brief Field _intValues, offset 0x40, size 0x8
  __declspec(property(get = __get__intValues, put = __set__intValues))::ArrayW<int32_t, ::Array<int32_t>*> _intValues;

  /// @brief Field _floatValues, offset 0x48, size 0x8
  __declspec(property(get = __get__floatValues, put = __set__floatValues))::ArrayW<float_t, ::Array<float_t>*> _floatValues;

  /// @brief Field _stringValues, offset 0x50, size 0x8
  __declspec(property(get = __get__stringValues, put = __set__stringValues))::ArrayW<::StringW, ::Array<::StringW>*> _stringValues;

  /// @brief Field _toggle, offset 0x58, size 0x1
  __declspec(property(get = __get__toggle, put = __set__toggle)) bool _toggle;

  /// @brief Field _color, offset 0x5c, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _gradient, offset 0x70, size 0x8
  __declspec(property(get = __get__gradient, put = __set__gradient))::UnityEngine::Gradient* _gradient;

  /// @brief Field _animCurve, offset 0x78, size 0x8
  __declspec(property(get = __get__animCurve, put = __set__animCurve))::UnityEngine::AnimationCurve* _animCurve;

  /// @brief Field _choiceLabels, offset 0x80, size 0x8
  __declspec(property(get = __get__choiceLabels, put = __set__choiceLabels))::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> _choiceLabels;

  /// @brief Field _choiceStringValues, offset 0x88, size 0x8
  __declspec(property(get = __get__choiceStringValues, put = __set__choiceStringValues))::ArrayW<::StringW, ::Array<::StringW>*> _choiceStringValues;

  /// @brief Field _choiceIntValues, offset 0x90, size 0x8
  __declspec(property(get = __get__choiceIntValues, put = __set__choiceIntValues))::ArrayW<int32_t, ::Array<int32_t>*> _choiceIntValues;

  /// @brief Field _parmInfo, offset 0x98, size 0x90
  __declspec(property(get = __get__parmInfo, put = __set__parmInfo))::HoudiniEngineUnity::HAPI_ParmInfo _parmInfo;

  /// @brief Field _showChildren, offset 0x128, size 0x1
  __declspec(property(get = __get__showChildren, put = __set__showChildren)) bool _showChildren;

  /// @brief Field _fileTypeInfo, offset 0x130, size 0x8
  __declspec(property(get = __get__fileTypeInfo, put = __set__fileTypeInfo))::StringW _fileTypeInfo;

  /// @brief Field _folderListChildrenProcessed, offset 0x138, size 0x4
  __declspec(property(get = __get__folderListChildrenProcessed, put = __set__folderListChildrenProcessed)) int32_t _folderListChildrenProcessed;

  /// @brief Field _tabSelectedIndex, offset 0x13c, size 0x4
  __declspec(property(get = __get__tabSelectedIndex, put = __set__tabSelectedIndex)) int32_t _tabSelectedIndex;

  /// @brief Field _paramInputNode, offset 0x140, size 0x8
  __declspec(property(get = __get__paramInputNode, put = __set__paramInputNode))::HoudiniEngineUnity::HEU_InputNode* _paramInputNode;

  /// @brief Field _hasAssetPathTag, offset 0x148, size 0x1
  __declspec(property(get = __get__hasAssetPathTag, put = __set__hasAssetPathTag)) bool _hasAssetPathTag;

  __declspec(property(get = get_ParmID)) int32_t ParmID;

  __declspec(property(get = get_ParentID)) int32_t ParentID;

  __declspec(property(get = get_ChildIndex)) int32_t ChildIndex;

  __declspec(property(get = get_ParmSize)) int32_t ParmSize;

  __declspec(property(get = get_IntMin)) int32_t IntMin;

  __declspec(property(get = get_IntMax)) int32_t IntMax;

  __declspec(property(get = get_IntUIMin)) int32_t IntUIMin;

  __declspec(property(get = get_IntUIMax)) int32_t IntUIMax;

  __declspec(property(get = get_FloatMin)) float_t FloatMin;

  __declspec(property(get = get_FloatMax)) float_t FloatMax;

  __declspec(property(get = get_FloatUIMin)) float_t FloatUIMin;

  __declspec(property(get = get_FloatUIMax)) float_t FloatUIMax;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterData*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterData*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterData*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_ParameterData__() noexcept;

  constexpr int32_t& __get__unityIndex();

  constexpr int32_t const& __get__unityIndex() const;

  constexpr void __set__unityIndex(int32_t value);

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr ::StringW& __get__labelName();

  constexpr ::StringW const& __get__labelName() const;

  constexpr void __set__labelName(::StringW value);

  constexpr ::StringW& __get__help();

  constexpr ::StringW const& __get__help() const;

  constexpr void __set__help(::StringW value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get__childParameterIDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get__childParameterIDs() const;

  constexpr void __set__childParameterIDs(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr int32_t& __get__choiceValue();

  constexpr int32_t const& __get__choiceValue() const;

  constexpr void __set__choiceValue(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__intValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__intValues() const;

  constexpr void __set__intValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__floatValues();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__floatValues() const;

  constexpr void __set__floatValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__stringValues();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__stringValues() const;

  constexpr void __set__stringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr bool& __get__toggle();

  constexpr bool const& __get__toggle() const;

  constexpr void __set__toggle(bool value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr ::UnityEngine::Gradient*& __get__gradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __get__gradient() const;

  constexpr void __set__gradient(::UnityEngine::Gradient* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__animCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__animCurve() const;

  constexpr void __set__animCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& __get__choiceLabels();

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& __get__choiceLabels() const;

  constexpr void __set__choiceLabels(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__choiceStringValues();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__choiceStringValues() const;

  constexpr void __set__choiceStringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__choiceIntValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__choiceIntValues() const;

  constexpr void __set__choiceIntValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::HoudiniEngineUnity::HAPI_ParmInfo& __get__parmInfo();

  constexpr ::HoudiniEngineUnity::HAPI_ParmInfo const& __get__parmInfo() const;

  constexpr void __set__parmInfo(::HoudiniEngineUnity::HAPI_ParmInfo value);

  constexpr bool& __get__showChildren();

  constexpr bool const& __get__showChildren() const;

  constexpr void __set__showChildren(bool value);

  constexpr ::StringW& __get__fileTypeInfo();

  constexpr ::StringW const& __get__fileTypeInfo() const;

  constexpr void __set__fileTypeInfo(::StringW value);

  constexpr int32_t& __get__folderListChildrenProcessed();

  constexpr int32_t const& __get__folderListChildrenProcessed() const;

  constexpr void __set__folderListChildrenProcessed(int32_t value);

  constexpr int32_t& __get__tabSelectedIndex();

  constexpr int32_t const& __get__tabSelectedIndex() const;

  constexpr void __set__tabSelectedIndex(int32_t value);

  constexpr ::HoudiniEngineUnity::HEU_InputNode*& __get__paramInputNode();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputNode*> const& __get__paramInputNode() const;

  constexpr void __set__paramInputNode(::HoudiniEngineUnity::HEU_InputNode* value);

  constexpr bool& __get__hasAssetPathTag();

  constexpr bool const& __get__hasAssetPathTag() const;

  constexpr void __set__hasAssetPathTag(bool value);

  /// @brief Method get_ParmID, addr 0x2190908, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ParmID();

  /// @brief Method get_ParentID, addr 0x219207c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ParentID();

  /// @brief Method get_ChildIndex, addr 0x2192084, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ChildIndex();

  /// @brief Method get_ParmSize, addr 0x219208c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ParmSize();

  /// @brief Method IsInt, addr 0x2192094, size 0x10, virtual false, abstract: false, final false
  inline bool IsInt();

  /// @brief Method IsFloat, addr 0x21920a4, size 0x10, virtual false, abstract: false, final false
  inline bool IsFloat();

  /// @brief Method IsString, addr 0x21920b4, size 0x10, virtual false, abstract: false, final false
  inline bool IsString();

  /// @brief Method IsPathFile, addr 0x21920c4, size 0x14, virtual false, abstract: false, final false
  inline bool IsPathFile();

  /// @brief Method HasMin, addr 0x21920d8, size 0x8, virtual false, abstract: false, final false
  inline bool HasMin();

  /// @brief Method HasMax, addr 0x21920e0, size 0x8, virtual false, abstract: false, final false
  inline bool HasMax();

  /// @brief Method HasUIMin, addr 0x21920e8, size 0x8, virtual false, abstract: false, final false
  inline bool HasUIMin();

  /// @brief Method HasUIMax, addr 0x21920f0, size 0x8, virtual false, abstract: false, final false
  inline bool HasUIMax();

  /// @brief Method get_IntMin, addr 0x21920f8, size 0xdc, virtual false, abstract: false, final false
  inline int32_t get_IntMin();

  /// @brief Method get_IntMax, addr 0x21921d4, size 0xdc, virtual false, abstract: false, final false
  inline int32_t get_IntMax();

  /// @brief Method get_IntUIMin, addr 0x21922b0, size 0xdc, virtual false, abstract: false, final false
  inline int32_t get_IntUIMin();

  /// @brief Method get_IntUIMax, addr 0x219238c, size 0xdc, virtual false, abstract: false, final false
  inline int32_t get_IntUIMax();

  /// @brief Method get_FloatMin, addr 0x2192468, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FloatMin();

  /// @brief Method get_FloatMax, addr 0x2192470, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FloatMax();

  /// @brief Method get_FloatUIMin, addr 0x2192478, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FloatUIMin();

  /// @brief Method get_FloatUIMax, addr 0x2192480, size 0x8, virtual false, abstract: false, final false
  inline float_t get_FloatUIMax();

  /// @brief Method IsContainer, addr 0x2192488, size 0x54, virtual false, abstract: false, final false
  inline bool IsContainer();

  /// @brief Method IsMultiParam, addr 0x21924dc, size 0x10, virtual false, abstract: false, final false
  inline bool IsMultiParam();

  /// @brief Method IsRamp, addr 0x21924ec, size 0x10, virtual false, abstract: false, final false
  inline bool IsRamp();

  /// @brief Method IsToggle, addr 0x21924fc, size 0x10, virtual false, abstract: false, final false
  inline bool IsToggle();

  /// @brief Method IsColor, addr 0x219250c, size 0x10, virtual false, abstract: false, final false
  inline bool IsColor();

  /// @brief Method ToVector3, addr 0x219251c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ToVector3();

  /// @brief Method IsAssetPath, addr 0x21925a0, size 0x8, virtual false, abstract: false, final false
  inline bool IsAssetPath();

  /// @brief Method IsEquivalentTo, addr 0x21925a8, size 0x71c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterData* other);

  static inline ::HoudiniEngineUnity::HEU_ParameterData* New_ctor();

  /// @brief Method .ctor, addr 0x2192cc4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ParameterData(HEU_ParameterData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ParameterData(HEU_ParameterData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ParameterData();

public:
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
  ::HoudiniEngineUnity::HEU_InputNode* ____paramInputNode;

  /// @brief Field _hasAssetPathTag, offset: 0x148, size: 0x1, def value: None
  bool ____hasAssetPathTag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ParameterData, 0x150>, "Size mismatch!");

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

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ParameterData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ParameterData*, "HoudiniEngineUnity", "HEU_ParameterData");
