#pragma once
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapDataAssetFileModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::*)()>(
    &::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x234d0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x234d60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty:
// "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockBeatmapDataAssetFileModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_path_5__2", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_i_5__3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::MockBeatmapDataAssetFileModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::StringW _path_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1, uint32_t _i_5__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->previewBeatmapLevel = previewBeatmapLevel;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_path_5__2 = _path_5__2;
  this->__u__1 = __u__1;
  this->_i_5__3 = _i_5__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)(
    ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::MockBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x234cde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), "add_levelDataAssetDownloadUpdateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)(
    ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&::GlobalNamespace::MockBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x234ce98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), "remove_levelDataAssetDownloadUpdateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel.GetAssetBundleFileForPreviewLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* (
    ::GlobalNamespace::MockBeatmapDataAssetFileModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MockBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x234cf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), "GetAssetBundleFileForPreviewLevelAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForPreviewLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::MockBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x234d058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), "TryDeleteAssetBundleFileForPreviewLevelAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapDataAssetFileModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapDataAssetFileModel::*)()>(
    &::GlobalNamespace::MockBeatmapDataAssetFileModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234d0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr GlobalNamespace::MockBeatmapDataAssetFileModel::operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapDataAssetFileModel*>(static_cast<void*>(this));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& GlobalNamespace::MockBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDataAssetDownloadUpdateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> const&
GlobalNamespace::MockBeatmapDataAssetFileModel::__get_levelDataAssetDownloadUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDataAssetDownloadUpdateEvent;
}
constexpr void GlobalNamespace::MockBeatmapDataAssetFileModel::__set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDataAssetDownloadUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MockBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), "add_levelDataAssetDownloadUpdateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), "remove_levelDataAssetDownloadUpdateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*
GlobalNamespace::MockBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), "GetAssetBundleFileForPreviewLevelAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>*, false>(this, ___internal_method, previewBeatmapLevel, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>*
GlobalNamespace::MockBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), "TryDeleteAssetBundleFileForPreviewLevelAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, previewBeatmapLevel, cancellationToken);
}
inline ::GlobalNamespace::MockBeatmapDataAssetFileModel* GlobalNamespace::MockBeatmapDataAssetFileModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockBeatmapDataAssetFileModel*>());
}
inline void GlobalNamespace::MockBeatmapDataAssetFileModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapDataAssetFileModel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockBeatmapDataAssetFileModel::MockBeatmapDataAssetFileModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
