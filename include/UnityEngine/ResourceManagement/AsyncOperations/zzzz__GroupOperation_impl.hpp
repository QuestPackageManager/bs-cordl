#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\AsyncOperations\GroupOperation.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ICachable_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::GroupOperation_GroupOperationSettings(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::GroupOperation_GroupOperationSettings() {}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::None{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings
    UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::ReleaseDependenciesOnFailure{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings
    UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings::AllowFailedDependencies{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6927120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x6927264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey* (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x692763c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                           { "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6927644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                            { "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDependentOps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* (
    ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependentOps)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x692764c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), { "GetDependentOps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependencies)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6927690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.ReleaseDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::ReleaseDependencies)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6927718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDownloadStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::HashSet_1<::System::Object*>*)>(&::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDownloadStatus)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6927980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.DependenciesAreUnchanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::DependenciesAreUnchanged)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6927bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                         { "DependenciesAreUnchanged", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.get_DebugName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6927d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Execute)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x69280bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.CompleteIfDependenciesComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::CompleteIfDependenciesComplete)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x69282e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), { "CompleteIfDependenciesComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Destroy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x69285fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.get_Progress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_Progress)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6928620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool, bool)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6928828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*,
    ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings)>(&::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69288e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.OnOperationCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::OnOperationCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6928988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                             { "OnOperationCompleted", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_InternalOnComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalOnComplete;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_InternalOnComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalOnComplete;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_m_InternalOnComplete(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalOnComplete = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_LoadedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadedCount;
}
constexpr int32_t const& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_LoadedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoadedCount;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_m_LoadedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoadedCount = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings const&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_m_Settings(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_debugName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugName;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_debugName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugName;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_debugName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugName = value;
}
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;
}
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* const&
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(
    ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_CachedDependencyLocations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDependencyLocations;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_get_m_CachedDependencyLocations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDependencyLocations;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__cordl_internal_set_m_CachedDependencyLocations(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedDependencyLocations = value;
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                                                         { "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(this, ___internal_method);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                          { "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependentOps() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), { "GetDependentOps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deps);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::ReleaseDependencies() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(this, ___internal_method, visited);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::DependenciesAreUnchanged(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                       { "DependenciesAreUnchanged", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deps);
}
inline ::StringW UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_DebugName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::CompleteIfDependenciesComplete() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), { "CompleteIfDependenciesComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Destroy() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_Progress() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations,
                                                                       bool releaseDependenciesOnFailure, bool allowFailedDependencies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operations, releaseDependenciesOnFailure, allowFailedDependencies);
}
inline void
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations,
                                                                       ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation_GroupOperationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operations, settings);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::OnOperationCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(),
                                                           { "OnOperationCompleted", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>());
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
constexpr UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::operator ::UnityEngine::ResourceManagement::AsyncOperations::ICachable*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::ICachable*
UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::i___UnityEngine__ResourceManagement__AsyncOperations__ICachable() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperation() {}
