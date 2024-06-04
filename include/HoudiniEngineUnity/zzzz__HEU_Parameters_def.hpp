#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Parameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_Parameters)
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
class HEU_ParameterData;
}
namespace HoudiniEngineUnity {
class HEU_ParameterModifier;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
class __HEU_Parameters____c__DisplayClass35_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class __HEU_Parameters____c__DisplayClass35_0;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Parameters);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0);
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_Parameters::<>c__DisplayClass35_0*
class CORDL_TYPE __HEU_Parameters____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0))::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>* __9__0;

  /// @brief Field parentID, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_parentID, put = __cordl_internal_set_parentID)) int32_t parentID;

  static inline ::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0* New_ctor();

  /// @brief Method <Initialize>b__0, addr 0x2592894, size 0x14, virtual false, abstract: false, final false
  inline bool _Initialize_b__0(::HoudiniEngineUnity::HAPI_ParmInfo p);

  constexpr ::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>*& __cordl_internal_get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>*> const& __cordl_internal_get___9__0() const;

  constexpr int32_t const& __cordl_internal_get_parentID() const;

  constexpr int32_t& __cordl_internal_get_parentID();

  constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>* value);

  constexpr void __cordl_internal_set_parentID(int32_t value);

  /// @brief Method .ctor, addr 0x258fce4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_Parameters____c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Parameters____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_Parameters____c__DisplayClass35_0(__HEU_Parameters____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_Parameters____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_Parameters____c__DisplayClass35_0(__HEU_Parameters____c__DisplayClass35_0 const&) = delete;

  /// @brief Field parentID, offset: 0x10, size: 0x4, def value: None
  int32_t ___parentID;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0, ___parentID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0, _____9__0) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_Parameters
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 123, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_Parameters*
class CORDL_TYPE HEU_Parameters : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c__DisplayClass35_0 = ::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0;

  __declspec(property(get = get_ParameterModifiers, put = set_ParameterModifiers))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* ParameterModifiers;

  __declspec(property(get = get_RecacheUI, put = set_RecacheUI)) bool RecacheUI;

  __declspec(property(get = get_RequiresRegeneration, put = set_RequiresRegeneration)) bool RequiresRegeneration;

  __declspec(property(get = get_RootParameters, put = set_RootParameters))::System::Collections::Generic::List_1<int32_t>* RootParameters;

  __declspec(property(get = get_ShowParameters, put = set_ShowParameters)) bool ShowParameters;

  /// @brief Field _defaultPresetData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultPresetData, put = __cordl_internal_set__defaultPresetData))::ArrayW<uint8_t, ::Array<uint8_t>*> _defaultPresetData;

  /// @brief Field _nodeID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__nodeID, put = __cordl_internal_set__nodeID)) int32_t _nodeID;

  /// @brief Field _paramChoices, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__paramChoices,
                      put = __cordl_internal_set__paramChoices))::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*> _paramChoices;

  /// @brief Field _paramFloats, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__paramFloats, put = __cordl_internal_set__paramFloats))::ArrayW<float_t, ::Array<float_t>*> _paramFloats;

  /// @brief Field _paramInts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__paramInts, put = __cordl_internal_set__paramInts))::ArrayW<int32_t, ::Array<int32_t>*> _paramInts;

  /// @brief Field _paramStrings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__paramStrings, put = __cordl_internal_set__paramStrings))::ArrayW<::StringW, ::Array<::StringW>*> _paramStrings;

  /// @brief Field _parameterList, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterList,
                      put = __cordl_internal_set__parameterList))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* _parameterList;

  /// @brief Field _parameterModifiers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__parameterModifiers,
                      put = __cordl_internal_set__parameterModifiers))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* _parameterModifiers;

  /// @brief Field _presetData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__presetData, put = __cordl_internal_set__presetData))::ArrayW<uint8_t, ::Array<uint8_t>*> _presetData;

  /// @brief Field _recacheUI, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get__recacheUI, put = __cordl_internal_set__recacheUI)) bool _recacheUI;

  /// @brief Field _regenerateParameters, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__regenerateParameters, put = __cordl_internal_set__regenerateParameters)) bool _regenerateParameters;

  /// @brief Field _rootParameters, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__rootParameters, put = __cordl_internal_set__rootParameters))::System::Collections::Generic::List_1<int32_t>* _rootParameters;

  /// @brief Field _showParameters, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__showParameters, put = __cordl_internal_set__showParameters)) bool _showParameters;

  /// @brief Field _uiLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__uiLabel, put = __cordl_internal_set__uiLabel))::StringW _uiLabel;

  /// @brief Field _validParameters, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__validParameters, put = __cordl_internal_set__validParameters)) bool _validParameters;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Parameters>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Parameters>>*() noexcept;

  /// @brief Method AreParametersValid, addr 0x258dee0, size 0x8, virtual false, abstract: false, final false
  inline bool AreParametersValid();

  /// @brief Method CleanUp, addr 0x258df10, size 0x29c, virtual false, abstract: false, final false
  inline void CleanUp();

  /// @brief Method ClearInstancesFromMultiParm, addr 0x259112c, size 0xc0, virtual false, abstract: false, final false
  inline void ClearInstancesFromMultiParm(int32_t unityParamIndex);

  /// @brief Method DownloadAsDefaultPresetData, addr 0x2591b50, size 0x50, virtual false, abstract: false, final false
  inline void DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DownloadPresetData, addr 0x2591abc, size 0x50, virtual false, abstract: false, final false
  inline void DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetChosenIndexFromChoiceList, addr 0x25902f4, size 0xac, virtual false, abstract: false, final false
  inline int32_t GetChosenIndexFromChoiceList(::HoudiniEngineUnity::HEU_ParameterData* inChoiceParameter);

  /// @brief Method GetDefaultPresetData, addr 0x258ded8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDefaultPresetData();

  /// @brief Method GetInputNodeConnectionObjects, addr 0x2591ab8, size 0x4, virtual false, abstract: false, final false
  inline void GetInputNodeConnectionObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* inputNodeObjects);

  /// @brief Method GetParameter, addr 0x258b74c, size 0x84, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_ParameterData* GetParameter(int32_t listIndex);

  /// @brief Method GetParameter, addr 0x25900e4, size 0x190, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_ParameterData* GetParameter(::StringW name);

  /// @brief Method GetParameterDataForUIRestore, addr 0x25918d0, size 0x1e8, virtual false, abstract: false, final false
  inline void GetParameterDataForUIRestore(::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>* folderParams,
                                           ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* inputNodeParams);

  /// @brief Method GetParameterWithParmID, addr 0x258b588, size 0x164, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_ParameterData* GetParameterWithParmID(int32_t parmID);

  /// @brief Method GetParameters, addr 0x25900dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* GetParameters();

  /// @brief Method GetPresetData, addr 0x258dec8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPresetData();

  /// @brief Method GetStringFromParameter, addr 0x25903a0, size 0x48, virtual false, abstract: false, final false
  inline ::StringW GetStringFromParameter(::StringW paramName);

  /// @brief Method HasModifiersPending, addr 0x25911ec, size 0x50, virtual false, abstract: false, final false
  inline bool HasModifiersPending();

  /// @brief Method HaveParametersChanged, addr 0x2590458, size 0x410, virtual false, abstract: false, final false
  inline bool HaveParametersChanged();

  /// @brief Method Initialize, addr 0x258e1ac, size 0x1b38, virtual false, abstract: false, final false
  inline bool Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo,
                         ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::HEU_ParameterData*>* previousParamFolders,
                         ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* previousParamInputNodes,
                         ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset);

  /// @brief Method InsertInstanceToMultiParm, addr 0x2590f84, size 0xd4, virtual false, abstract: false, final false
  inline void InsertInstanceToMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToAdd);

  /// @brief Method IsEquivalentTo, addr 0x259244c, size 0x318, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_Parameters* other);

  static inline ::HoudiniEngineUnity::HEU_Parameters* New_ctor();

  /// @brief Method ProcessModifiers, addr 0x259123c, size 0x694, virtual false, abstract: false, final false
  inline void ProcessModifiers(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method RemoveInstancesFromMultiParm, addr 0x2591058, size 0xd4, virtual false, abstract: false, final false
  inline void RemoveInstancesFromMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToRemove);

  /// @brief Method RemoveParameter, addr 0x2590274, size 0x80, virtual false, abstract: false, final false
  inline void RemoveParameter(int32_t listIndex);

  /// @brief Method ResetAllToDefault, addr 0x25922c4, size 0x188, virtual false, abstract: false, final false
  inline void ResetAllToDefault(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SetPresetData, addr 0x258ded0, size 0x8, virtual false, abstract: false, final false
  inline void SetPresetData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method SetStringToParameter, addr 0x25903e8, size 0x70, virtual false, abstract: false, final false
  inline void SetStringToParameter(::StringW paramName, ::StringW value);

  /// @brief Method SetupRampParameter, addr 0x258fcec, size 0x3f0, virtual false, abstract: false, final false
  inline void SetupRampParameter(::HoudiniEngineUnity::HEU_ParameterData* rampParameter);

  /// @brief Method SyncInternalParametersForUndoCompare, addr 0x2591ea8, size 0x41c, virtual false, abstract: false, final false
  inline void SyncInternalParametersForUndoCompare(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SyncParameterFromHoudini, addr 0x2591e28, size 0x80, virtual false, abstract: false, final false
  inline void SyncParameterFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW parameterName);

  /// @brief Method UpdateTransformParameters, addr 0x2591d80, size 0xa8, virtual false, abstract: false, final false
  inline void UpdateTransformParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_TransformEuler> HAPITransform);

  /// @brief Method UploadParameterInputs, addr 0x2591ba0, size 0x1e0, virtual false, abstract: false, final false
  inline void UploadParameterInputs(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, bool bForceUpdate);

  /// @brief Method UploadPresetData, addr 0x2591b0c, size 0x44, virtual false, abstract: false, final false
  inline void UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadValuesToHoudini, addr 0x2590868, size 0x71c, virtual false, abstract: false, final false
  inline bool UploadValuesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, bool bDoCheck, bool bForceUploadInputs);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__defaultPresetData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__defaultPresetData();

  constexpr int32_t const& __cordl_internal_get__nodeID() const;

  constexpr int32_t& __cordl_internal_get__nodeID();

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*> const& __cordl_internal_get__paramChoices() const;

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>& __cordl_internal_get__paramChoices();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__paramFloats() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__paramFloats();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__paramInts() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__paramInts();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__paramStrings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__paramStrings();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>*& __cordl_internal_get__parameterList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>*> const& __cordl_internal_get__parameterList() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*& __cordl_internal_get__parameterModifiers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*> const& __cordl_internal_get__parameterModifiers() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__presetData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__presetData();

  constexpr bool const& __cordl_internal_get__recacheUI() const;

  constexpr bool& __cordl_internal_get__recacheUI();

  constexpr bool const& __cordl_internal_get__regenerateParameters() const;

  constexpr bool& __cordl_internal_get__regenerateParameters();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__rootParameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get__rootParameters() const;

  constexpr bool const& __cordl_internal_get__showParameters() const;

  constexpr bool& __cordl_internal_get__showParameters();

  constexpr ::StringW const& __cordl_internal_get__uiLabel() const;

  constexpr ::StringW& __cordl_internal_get__uiLabel();

  constexpr bool const& __cordl_internal_get__validParameters() const;

  constexpr bool& __cordl_internal_get__validParameters();

  constexpr void __cordl_internal_set__defaultPresetData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__nodeID(int32_t value);

  constexpr void __cordl_internal_set__paramChoices(::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*> value);

  constexpr void __cordl_internal_set__paramFloats(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__paramInts(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__paramStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__parameterList(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* value);

  constexpr void __cordl_internal_set__parameterModifiers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* value);

  constexpr void __cordl_internal_set__presetData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__recacheUI(bool value);

  constexpr void __cordl_internal_set__regenerateParameters(bool value);

  constexpr void __cordl_internal_set__rootParameters(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__showParameters(bool value);

  constexpr void __cordl_internal_set__uiLabel(::StringW value);

  constexpr void __cordl_internal_set__validParameters(bool value);

  /// @brief Method .ctor, addr 0x2592764, size 0x130, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ParameterModifiers, addr 0x258dea4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* get_ParameterModifiers();

  /// @brief Method get_RecacheUI, addr 0x258defc, size 0x8, virtual false, abstract: false, final false
  inline bool get_RecacheUI();

  /// @brief Method get_RequiresRegeneration, addr 0x258deb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequiresRegeneration();

  /// @brief Method get_RootParameters, addr 0x258de94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* get_RootParameters();

  /// @brief Method get_ShowParameters, addr 0x258dee8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowParameters();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Parameters>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_Parameters>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_Parameters__() noexcept;

  /// @brief Method set_ParameterModifiers, addr 0x258deac, size 0x8, virtual false, abstract: false, final false
  inline void set_ParameterModifiers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* value);

  /// @brief Method set_RecacheUI, addr 0x258df04, size 0xc, virtual false, abstract: false, final false
  inline void set_RecacheUI(bool value);

  /// @brief Method set_RequiresRegeneration, addr 0x258debc, size 0xc, virtual false, abstract: false, final false
  inline void set_RequiresRegeneration(bool value);

  /// @brief Method set_RootParameters, addr 0x258de9c, size 0x8, virtual false, abstract: false, final false
  inline void set_RootParameters(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method set_ShowParameters, addr 0x258def0, size 0xc, virtual false, abstract: false, final false
  inline void set_ShowParameters(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Parameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Parameters(HEU_Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Parameters(HEU_Parameters const&) = delete;

  /// @brief Field _nodeID, offset: 0x18, size: 0x4, def value: None
  int32_t ____nodeID;

  /// @brief Field _uiLabel, offset: 0x20, size: 0x8, def value: None
  ::StringW ____uiLabel;

  /// @brief Field _paramInts, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____paramInts;

  /// @brief Field _paramFloats, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____paramFloats;

  /// @brief Field _paramStrings, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____paramStrings;

  /// @brief Field _paramChoices, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*> ____paramChoices;

  /// @brief Field _rootParameters, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____rootParameters;

  /// @brief Field _parameterList, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterData*>* ____parameterList;

  /// @brief Field _parameterModifiers, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ParameterModifier*>* ____parameterModifiers;

  /// @brief Field _regenerateParameters, offset: 0x60, size: 0x1, def value: None
  bool ____regenerateParameters;

  /// @brief Field _presetData, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____presetData;

  /// @brief Field _defaultPresetData, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____defaultPresetData;

  /// @brief Field _validParameters, offset: 0x78, size: 0x1, def value: None
  bool ____validParameters;

  /// @brief Field _showParameters, offset: 0x79, size: 0x1, def value: None
  bool ____showParameters;

  /// @brief Field _recacheUI, offset: 0x7a, size: 0x1, def value: None
  bool ____recacheUI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Parameters, 0x80>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____nodeID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____uiLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____paramInts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____paramFloats) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____paramStrings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____paramChoices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____rootParameters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____parameterList) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____parameterModifiers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____regenerateParameters) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____presetData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____defaultPresetData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____validParameters) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____showParameters) == 0x79, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_Parameters, ____recacheUI) == 0x7a, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Parameters);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Parameters*, "HoudiniEngineUnity", "HEU_Parameters");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_Parameters____c__DisplayClass35_0*, "HoudiniEngineUnity", "HEU_Parameters/<>c__DisplayClass35_0");
