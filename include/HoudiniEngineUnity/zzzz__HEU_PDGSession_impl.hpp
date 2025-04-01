#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PDGSession.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGSession_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_EventInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGAssetLink_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGSession_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNetworkData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor::HEU_PDGSession_EventMessageColor(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor::HEU_PDGSession_EventMessageColor() {}
constexpr ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor HoudiniEngineUnity::HEU_PDGSession_EventMessageColor::DEFAULT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor HoudiniEngineUnity::HEU_PDGSession_EventMessageColor::WARNING{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_PDGSession_EventMessageColor HoudiniEngineUnity::HEU_PDGSession_EventMessageColor::ERROR{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.GetPDGSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_PDGSession* (*)()>(&::HoudiniEngineUnity::HEU_PDGSession::GetPDGSession)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3a4adc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "GetPDGSession",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3a4e36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.AddAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink*)>(
    &::HoudiniEngineUnity::HEU_PDGSession::AddAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4e4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "AddAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.RemoveAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_PDGAssetLink*)>(
    &::HoudiniEngineUnity::HEU_PDGSession::RemoveAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4ae38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "RemoveAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4e4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.CleanUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::CleanUp)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3a4e4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "CleanUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.UpdatePDGContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::UpdatePDGContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4e5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "UpdatePDGContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ReinitializePDGContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::ReinitializePDGContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4e5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(),
                                                                               "ReinitializePDGContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ProcessPDGEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>)>(&::HoudiniEngineUnity::HEU_PDGSession::ProcessPDGEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4e5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ProcessPDGEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.GetTOPAssetLinkAndNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGSession::*)(
    int32_t, ::ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink*>, ::ByRef<::HoudiniEngineUnity::HEU_TOPNodeData*>)>(&::HoudiniEngineUnity::HEU_PDGSession::GetTOPAssetLinkAndNode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3a4e5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "GetTOPAssetLinkAndNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HEU_TOPNodeData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.SetTOPNodePDGState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState)>(&::HoudiniEngineUnity::HEU_PDGSession::SetTOPNodePDGState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a4e6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "SetTOPNodePDGState", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData_PDGState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodePDGStateClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodePDGStateClear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3a4e710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodePDGStateClear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeTotalWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeTotalWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a4e758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeTotalWorkItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeCookedWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookedWorkItem)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3a4e7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeCookedWorkItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeErrorWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeErrorWorkItem)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3a4e7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeErrorWorkItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeWaitingWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeWaitingWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a4e834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeWaitingWorkItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeScheduledWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeScheduledWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a4e880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeScheduledWorkItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.NotifyTOPNodeCookingWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookingWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a4e8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeCookingWorkItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ResetPDGEventInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>)>(
    &::HoudiniEngineUnity::HEU_PDGSession::ResetPDGEventInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a4e918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ResetPDGEventInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.SetErrorState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::StringW, bool)>(
    &::HoudiniEngineUnity::HEU_PDGSession::SetErrorState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a4e92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "SetErrorState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ClearErrorState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::ClearErrorState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a4e96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ClearErrorState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.GetHAPIPDGSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (::HoudiniEngineUnity::HEU_PDGSession::*)(bool)>(
    &::HoudiniEngineUnity::HEU_PDGSession::GetHAPIPDGSession)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3a4e9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "GetHAPIPDGSession",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.CookTOPNetworkOutputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_TOPNetworkData*)>(
    &::HoudiniEngineUnity::HEU_PDGSession::CookTOPNetworkOutputNode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4d234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "CookTOPNetworkOutputNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.PauseCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_TOPNetworkData*)>(
    &::HoudiniEngineUnity::HEU_PDGSession::PauseCook)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4d298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "PauseCook", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.CancelCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::HoudiniEngineUnity::HEU_TOPNetworkData*)>(
    &::HoudiniEngineUnity::HEU_PDGSession::CancelCook)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4d2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "CancelCook", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ClearWorkItemResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGSession::ClearWorkItemResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a4ed40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ClearWorkItemResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PDG_EventInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.DirtyTOPNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGSession::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::DirtyTOPNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a4d128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "DirtyTOPNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.CookTOPNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGSession::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::CookTOPNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a4d150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "CookTOPNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.DirtyAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGSession::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGSession::DirtyAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a4d178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "DirtyAll", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.AddEventMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)(::StringW)>(&::HoudiniEngineUnity::HEU_PDGSession::AddEventMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a4ed44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "AddEventMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.GetEventMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::GetEventMessages)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a4ed60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "GetEventMessages",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGSession.ClearEventMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGSession::*)()>(&::HoudiniEngineUnity::HEU_PDGSession::ClearEventMessages)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a4ed80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(),
                                                                               "ClearEventMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PDGAssetLink>>*& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PDGAssetLink>>* const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgAssets;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__pdgAssets(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PDGAssetLink>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pdgAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgMaxProcessEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgMaxProcessEvents;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgMaxProcessEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgMaxProcessEvents;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__pdgMaxProcessEvents(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pdgMaxProcessEvents = value;
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*>& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgQueryEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgQueryEvents;
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*> const&
HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgQueryEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgQueryEvents;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__pdgQueryEvents(::ArrayW<::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::Array<::HoudiniEngineUnity::HAPI_PDG_EventInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pdgQueryEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgContextSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgContextSize;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgContextSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgContextSize;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__pdgContextSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pdgContextSize = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgContextIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgContextIDs;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgContextIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgContextIDs;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__pdgContextIDs(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pdgContextIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__errored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errored;
}
constexpr bool const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__errored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errored;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__errored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____errored = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__errorMsg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errorMsg;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__errorMsg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errorMsg;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__errorMsg(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____errorMsg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HAPI_PDG_State& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgState;
}
constexpr ::HoudiniEngineUnity::HAPI_PDG_State const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgState;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__pdgState(::HoudiniEngineUnity::HAPI_PDG_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pdgState = value;
}
constexpr ::System::Text::StringBuilder*& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgEventMessages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgEventMessages;
}
constexpr ::System::Text::StringBuilder* const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__pdgEventMessages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgEventMessages;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__pdgEventMessages(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pdgEventMessages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__eventMessageColorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventMessageColorCode;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_get__eventMessageColorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventMessageColorCode;
}
constexpr void HoudiniEngineUnity::HEU_PDGSession::__cordl_internal_set__eventMessageColorCode(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventMessageColorCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_PDGSession::setStaticF__pdgSession(::HoudiniEngineUnity::HEU_PDGSession* value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::HEU_PDGSession*, "_pdgSession", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get>(
      std::forward<::HoudiniEngineUnity::HEU_PDGSession*>(value));
}
inline ::HoudiniEngineUnity::HEU_PDGSession* HoudiniEngineUnity::HEU_PDGSession::getStaticF__pdgSession() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::HEU_PDGSession*, "_pdgSession", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get>();
}
inline ::HoudiniEngineUnity::HEU_PDGSession* HoudiniEngineUnity::HEU_PDGSession::GetPDGSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "GetPDGSession",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_PDGSession*, false>(nullptr, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGSession::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGSession::AddAsset(::HoudiniEngineUnity::HEU_PDGAssetLink* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "AddAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void HoudiniEngineUnity::HEU_PDGSession::RemoveAsset(::HoudiniEngineUnity::HEU_PDGAssetLink* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "RemoveAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void HoudiniEngineUnity::HEU_PDGSession::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGSession::CleanUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "CleanUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGSession::UpdatePDGContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "UpdatePDGContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGSession::ReinitializePDGContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(),
                                                                             "ReinitializePDGContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGSession::ProcessPDGEvent(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t contextID, ::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ProcessPDGEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, contextID, eventInfo);
}
inline bool HoudiniEngineUnity::HEU_PDGSession::GetTOPAssetLinkAndNode(int32_t nodeID, ::ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink*> assetLink,
                                                                       ::ByRef<::HoudiniEngineUnity::HEU_TOPNodeData*> topNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "GetTOPAssetLinkAndNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HEU_PDGAssetLink*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HEU_TOPNodeData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, assetLink, topNode);
}
inline void HoudiniEngineUnity::HEU_PDGSession::SetTOPNodePDGState(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode,
                                                                   ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState pdgState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "SetTOPNodePDGState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData_PDGState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetLink, topNode, pdgState);
}
inline void HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodePDGStateClear(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodePDGStateClear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetLink, topNode);
}
inline void HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeTotalWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t inc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeTotalWorkItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetLink, topNode, inc);
}
inline void HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookedWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeCookedWorkItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetLink, topNode);
}
inline void HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeErrorWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeErrorWorkItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetLink, topNode);
}
inline void HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeWaitingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t inc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeWaitingWorkItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetLink, topNode, inc);
}
inline void HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeScheduledWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t inc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeScheduledWorkItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetLink, topNode, inc);
}
inline void HoudiniEngineUnity::HEU_PDGSession::NotifyTOPNodeCookingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, int32_t inc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "NotifyTOPNodeCookingWorkItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetLink, topNode, inc);
}
inline void HoudiniEngineUnity::HEU_PDGSession::ResetPDGEventInfo(::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo> eventInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ResetPDGEventInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PDG_EventInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventInfo);
}
inline void HoudiniEngineUnity::HEU_PDGSession::SetErrorState(::StringW msg, bool bLogIt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "SetErrorState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg, bLogIt);
}
inline void HoudiniEngineUnity::HEU_PDGSession::ClearErrorState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ClearErrorState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_PDGSession::GetHAPIPDGSession(bool bCreate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "GetHAPIPDGSession",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase*, false>(this, ___internal_method, bCreate);
}
inline void HoudiniEngineUnity::HEU_PDGSession::CookTOPNetworkOutputNode(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "CookTOPNetworkOutputNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topNetwork);
}
inline void HoudiniEngineUnity::HEU_PDGSession::PauseCook(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "PauseCook", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topNetwork);
}
inline void HoudiniEngineUnity::HEU_PDGSession::CancelCook(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "CancelCook", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topNetwork);
}
inline void HoudiniEngineUnity::HEU_PDGSession::ClearWorkItemResult(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t contextID, ::HoudiniEngineUnity::HAPI_PDG_EventInfo eventInfo,
                                                                    ::HoudiniEngineUnity::HEU_TOPNodeData* topNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ClearWorkItemResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PDG_EventInfo>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, contextID, eventInfo, topNode);
}
inline bool HoudiniEngineUnity::HEU_PDGSession::DirtyTOPNode(int32_t nodeID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "DirtyTOPNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID);
}
inline bool HoudiniEngineUnity::HEU_PDGSession::CookTOPNode(int32_t nodeID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "CookTOPNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID);
}
inline bool HoudiniEngineUnity::HEU_PDGSession::DirtyAll(int32_t nodeID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "DirtyAll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID);
}
inline void HoudiniEngineUnity::HEU_PDGSession::AddEventMessage(::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "AddEventMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline ::StringW HoudiniEngineUnity::HEU_PDGSession::GetEventMessages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "GetEventMessages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGSession::ClearEventMessages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGSession*>::get(), "ClearEventMessages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_PDGSession* HoudiniEngineUnity::HEU_PDGSession::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PDGSession*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PDGSession::HEU_PDGSession() {}
