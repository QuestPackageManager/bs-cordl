#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PDGSession.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PDGSession)
namespace HoudiniEngineUnity {
struct HAPI_PDG_EventInfo;
}
namespace HoudiniEngineUnity {
class HEU_PDGAssetLink;
}
namespace HoudiniEngineUnity {
struct HEU_PDGSession_EventMessageColor;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_TOPNetworkData;
}
namespace HoudiniEngineUnity {
struct HEU_TOPNodeData_PDGState;
}
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_PDGSession_EventMessageColor;
}
namespace HoudiniEngineUnity {
class HEU_PDGSession;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PDGSession);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_PDGSession/EventMessageColor
struct CORDL_TYPE HEU_PDGSession_EventMessageColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_PDGSession_EventMessageColor_Unwrapped
  enum struct __HEU_PDGSession_EventMessageColor_Unwrapped : int32_t {
    __E_DEFAULT = static_cast<int32_t>(0x0),
    __E_WARNING = static_cast<int32_t>(0x1),
    __E_ERROR = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_PDGSession_EventMessageColor_Unwrapped() const noexcept {
    return static_cast<__HEU_PDGSession_EventMessageColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PDGSession_EventMessageColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_PDGSession_EventMessageColor(int32_t value__) noexcept;

  /// @brief Field DEFAULT value: I32(0)
  static ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor const DEFAULT;

  /// @brief Field ERROR value: I32(2)
  static ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor const ERROR;

  /// @brief Field WARNING value: I32(1)
  static ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor const WARNING;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HAPI_PDG_State, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_PDGSession
class CORDL_TYPE HEU_PDGSession : public ::System::Object {
public:
  // Declarations
  using EventMessageColor = ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor;

  /// @brief Field _errorMsg, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__errorMsg, put = __cordl_internal_set__errorMsg)) ::StringW _errorMsg;

  /// @brief Field _errored, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__errored, put = __cordl_internal_set__errored)) bool _errored;

  /// @brief Field _eventMessageColorCode, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__eventMessageColorCode, put = __cordl_internal_set__eventMessageColorCode)) ::ArrayW<::StringW, ::Array<::StringW>*> _eventMessageColorCode;

  /// @brief Field _pdgAssets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pdgAssets,
                      put = __cordl_internal_set__pdgAssets)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PDGAssetLink>>* _pdgAssets;

  /// @brief Field _pdgContextIDs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pdgContextIDs, put = __cordl_internal_set__pdgContextIDs)) ::ArrayW<int32_t, ::Array<int32_t>*> _pdgContextIDs;

  /// @brief Field _pdgContextSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__pdgContextSize, put = __cordl_internal_set__pdgContextSize)) int32_t _pdgContextSize;

  /// @brief Field _pdgEventMessages, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__pdgEventMessages, put = __cordl_internal_set__pdgEventMessages)) ::System::Text::StringBuilder* _pdgEventMessages;

  /// @brief Field _pdgMaxProcessEvents, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__pdgMaxProcessEvents, put = __cordl_internal_set__pdgMaxProcessEvents)) int32_t _pdgMaxProcessEvents;

  /// @brief Field _pdgQueryEvents, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pdgQueryEvents,
                      put = __cordl_internal_set__pdgQueryEvents)) ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*>
      _pdgQueryEvents;

  /// @brief Field _pdgSession, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pdgSession, put = setStaticF__pdgSession)) ::HoudiniEngineUnity::HEU_PDGSession* _pdgSession;

  /// @brief Field _pdgState, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__pdgState, put = __cordl_internal_set__pdgState)) ::HoudiniEngineUnity::HAPI_PDG_State _pdgState;

  /// @brief Method AddAsset, addr 0x3a530a0, size 0x4, virtual false, abstract: false, final false
  inline void AddAsset(::HoudiniEngineUnity::HEU_PDGAssetLink* asset);

  /// @brief Method AddEventMessage, addr 0x3a5391c, size 0x1c, virtual false, abstract: false, final false
  inline void AddEventMessage(::StringW msg);

  /// @brief Method CancelCook, addr 0x3a51ed4, size 0x4, virtual false, abstract: false, final false
  inline void CancelCook(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);

  /// @brief Method CleanUp, addr 0x3a530a8, size 0xfc, virtual false, abstract: false, final false
  inline void CleanUp();

  /// @brief Method ClearErrorState, addr 0x3a53544, size 0x4c, virtual false, abstract: false, final false
  inline void ClearErrorState();

  /// @brief Method ClearEventMessages, addr 0x3a53958, size 0x20, virtual false, abstract: false, final false
  inline void ClearEventMessages();

  /// @brief Method ClearWorkItemResult, addr 0x3a53918, size 0x4, virtual false, abstract: false, final false
  inline void ClearWorkItemResult(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t contextID, ::HoudiniEngineUnity::HAPI_PDG_EventInfo eventInfo,
                                  ::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method CookTOPNetworkOutputNode, addr 0x3a51e0c, size 0x4, virtual false, abstract: false, final false
  inline void CookTOPNetworkOutputNode(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);

  /// @brief Method CookTOPNode, addr 0x3a51d28, size 0x8, virtual false, abstract: false, final false
  inline bool CookTOPNode(int32_t nodeID);

  /// @brief Method DirtyAll, addr 0x3a51d50, size 0x8, virtual false, abstract: false, final false
  inline bool DirtyAll(int32_t nodeID);

  /// @brief Method DirtyTOPNode, addr 0x3a51d00, size 0x8, virtual false, abstract: false, final false
  inline bool DirtyTOPNode(int32_t nodeID);

  /// @brief Method GetEventMessages, addr 0x3a53938, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetEventMessages();

  /// @brief Method GetHAPIPDGSession, addr 0x3a53590, size 0x68, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* GetHAPIPDGSession(bool bCreate);

  /// @brief Method GetPDGSession, addr 0x3a4f99c, size 0x74, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_PDGSession* GetPDGSession();

  /// @brief Method GetTOPAssetLinkAndNode, addr 0x3a531b0, size 0x100, virtual false, abstract: false, final false
  inline bool GetTOPAssetLinkAndNode(int32_t nodeID, ::ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink*> assetLink, ::ByRef<::HoudiniEngineUnity::HEU_TOPNodeData*> topNode);

  static inline ::HoudiniEngineUnity::HEU_PDGSession* New_ctor();

  /// @brief Method NotifyTOPNodeCookedWorkItem, addr 0x3a5337c, size 0x48, virtual false, abstract: false, final false
  inline void NotifyTOPNodeCookedWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method NotifyTOPNodeCookingWorkItem, addr 0x3a534a4, size 0x4c, virtual false, abstract: false, final false
  inline void NotifyTOPNodeCookingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t inc);

  /// @brief Method NotifyTOPNodeErrorWorkItem, addr 0x3a533c4, size 0x48, virtual false, abstract: false, final false
  inline void NotifyTOPNodeErrorWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method NotifyTOPNodePDGStateClear, addr 0x3a532e8, size 0x48, virtual false, abstract: false, final false
  inline void NotifyTOPNodePDGStateClear(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode);

  /// @brief Method NotifyTOPNodeScheduledWorkItem, addr 0x3a53458, size 0x4c, virtual false, abstract: false, final false
  inline void NotifyTOPNodeScheduledWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t inc);

  /// @brief Method NotifyTOPNodeTotalWorkItem, addr 0x3a53330, size 0x4c, virtual false, abstract: false, final false
  inline void NotifyTOPNodeTotalWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t inc);

  /// @brief Method NotifyTOPNodeWaitingWorkItem, addr 0x3a5340c, size 0x4c, virtual false, abstract: false, final false
  inline void NotifyTOPNodeWaitingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t inc);

  /// @brief Method PauseCook, addr 0x3a51e70, size 0x4, virtual false, abstract: false, final false
  inline void PauseCook(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork);

  /// @brief Method ProcessPDGEvent, addr 0x3a531ac, size 0x4, virtual false, abstract: false, final false
  inline void ProcessPDGEvent(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t contextID, ::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo);

  /// @brief Method ReinitializePDGContext, addr 0x3a531a8, size 0x4, virtual false, abstract: false, final false
  inline void ReinitializePDGContext();

  /// @brief Method RemoveAsset, addr 0x3a4fa10, size 0x4, virtual false, abstract: false, final false
  inline void RemoveAsset(::HoudiniEngineUnity::HEU_PDGAssetLink* asset);

  /// @brief Method ResetPDGEventInfo, addr 0x3a534f0, size 0x14, virtual false, abstract: false, final false
  static inline void ResetPDGEventInfo(::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo);

  /// @brief Method SetErrorState, addr 0x3a53504, size 0x40, virtual false, abstract: false, final false
  inline void SetErrorState(::StringW msg, bool bLogIt);

  /// @brief Method SetTOPNodePDGState, addr 0x3a532b0, size 0x38, virtual false, abstract: false, final false
  inline void SetTOPNodePDGState(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState pdgState);

  /// @brief Method Update, addr 0x3a530a4, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePDGContext, addr 0x3a531a4, size 0x4, virtual false, abstract: false, final false
  inline void UpdatePDGContext();

  constexpr ::StringW const& __cordl_internal_get__errorMsg() const;

  constexpr ::StringW& __cordl_internal_get__errorMsg();

  constexpr bool const& __cordl_internal_get__errored() const;

  constexpr bool& __cordl_internal_get__errored();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__eventMessageColorCode() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__eventMessageColorCode();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PDGAssetLink>>* const& __cordl_internal_get__pdgAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PDGAssetLink>>*& __cordl_internal_get__pdgAssets();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__pdgContextIDs() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__pdgContextIDs();

  constexpr int32_t const& __cordl_internal_get__pdgContextSize() const;

  constexpr int32_t& __cordl_internal_get__pdgContextSize();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__pdgEventMessages() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__pdgEventMessages();

  constexpr int32_t const& __cordl_internal_get__pdgMaxProcessEvents() const;

  constexpr int32_t& __cordl_internal_get__pdgMaxProcessEvents();

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*> const& __cordl_internal_get__pdgQueryEvents() const;

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*>& __cordl_internal_get__pdgQueryEvents();

  constexpr ::HoudiniEngineUnity::HAPI_PDG_State const& __cordl_internal_get__pdgState() const;

  constexpr ::HoudiniEngineUnity::HAPI_PDG_State& __cordl_internal_get__pdgState();

  constexpr void __cordl_internal_set__errorMsg(::StringW value);

  constexpr void __cordl_internal_set__errored(bool value);

  constexpr void __cordl_internal_set__eventMessageColorCode(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__pdgAssets(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PDGAssetLink>>* value);

  constexpr void __cordl_internal_set__pdgContextIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__pdgContextSize(int32_t value);

  constexpr void __cordl_internal_set__pdgEventMessages(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__pdgMaxProcessEvents(int32_t value);

  constexpr void __cordl_internal_set__pdgQueryEvents(::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*> value);

  constexpr void __cordl_internal_set__pdgState(::HoudiniEngineUnity::HAPI_PDG_State value);

  /// @brief Method .ctor, addr 0x3a52f44, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::HEU_PDGSession* getStaticF__pdgSession();

  static inline void setStaticF__pdgSession(::HoudiniEngineUnity::HEU_PDGSession* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PDGSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PDGSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PDGSession(HEU_PDGSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PDGSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PDGSession(HEU_PDGSession const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11763 };

  /// @brief Field _pdgAssets, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PDGAssetLink>>* ____pdgAssets;

  /// @brief Field _pdgMaxProcessEvents, offset: 0x18, size: 0x4, def value: None
  int32_t ____pdgMaxProcessEvents;

  /// @brief Field _pdgQueryEvents, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*> ____pdgQueryEvents;

  /// @brief Field _pdgContextSize, offset: 0x28, size: 0x4, def value: None
  int32_t ____pdgContextSize;

  /// @brief Field _pdgContextIDs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____pdgContextIDs;

  /// @brief Field _errored, offset: 0x38, size: 0x1, def value: None
  bool ____errored;

  /// @brief Field _errorMsg, offset: 0x40, size: 0x8, def value: None
  ::StringW ____errorMsg;

  /// @brief Field _pdgState, offset: 0x48, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_PDG_State ____pdgState;

  /// @brief Field _pdgEventMessages, offset: 0x50, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____pdgEventMessages;

  /// @brief Field _eventMessageColorCode, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____eventMessageColorCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____pdgAssets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____pdgMaxProcessEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____pdgQueryEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____pdgContextSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____pdgContextIDs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____errored) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____errorMsg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____pdgState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____pdgEventMessages) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PDGSession, ____eventMessageColorCode) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PDGSession, 0x60>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor, "HoudiniEngineUnity", "HEU_PDGSession/EventMessageColor");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PDGSession);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PDGSession*, "HoudiniEngineUnity", "HEU_PDGSession");
