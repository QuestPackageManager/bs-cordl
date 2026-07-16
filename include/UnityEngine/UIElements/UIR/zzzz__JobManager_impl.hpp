#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/JobManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__JobManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ConvertMeshJobData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CopyMeshJobData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__JobMerger_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NativePagedList_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NudgeJobData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)(::by_ref<::UnityEngine::UIElements::UIR::NudgeJobData>)>(
    &::UnityEngine::UIElements::UIR::JobManager::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6cda47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "Add", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::NudgeJobData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)(::by_ref<::UnityEngine::UIElements::UIR::ConvertMeshJobData>)>(
    &::UnityEngine::UIElements::UIR::JobManager::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6cd8418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ConvertMeshJobData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)(::by_ref<::UnityEngine::UIElements::UIR::CopyMeshJobData>)>(
    &::UnityEngine::UIElements::UIR::JobManager::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6cd84f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::CopyMeshJobData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.CompleteNudgeJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)()>(&::UnityEngine::UIElements::UIR::JobManager::CompleteNudgeJobs)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6cda4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "CompleteNudgeJobs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.CompleteConvertMeshJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)()>(&::UnityEngine::UIElements::UIR::JobManager::CompleteConvertMeshJobs)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6cda6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "CompleteConvertMeshJobs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.CompleteCopyMeshJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)()>(&::UnityEngine::UIElements::UIR::JobManager::CompleteCopyMeshJobs)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6cda8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "CompleteCopyMeshJobs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::JobManager::*)()>(&::UnityEngine::UIElements::UIR::JobManager::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdaa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)(bool)>(&::UnityEngine::UIElements::UIR::JobManager::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdaa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)()>(&::UnityEngine::UIElements::UIR::JobManager::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cdaa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)(bool)>(&::UnityEngine::UIElements::UIR::JobManager::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6cdaaf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::JobManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::JobManager::*)()>(&::UnityEngine::UIElements::UIR::JobManager::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6cdabd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::NudgeJobData>*& UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get_m_NudgeJobs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NudgeJobs;
}
constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::NudgeJobData>* const& UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get_m_NudgeJobs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NudgeJobs;
}
constexpr void UnityEngine::UIElements::UIR::JobManager::__cordl_internal_set_m_NudgeJobs(::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::NudgeJobData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NudgeJobs = value;
}
constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::ConvertMeshJobData>*& UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get_m_ConvertMeshJobs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConvertMeshJobs;
}
constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::ConvertMeshJobData>* const&
UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get_m_ConvertMeshJobs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ConvertMeshJobs;
}
constexpr void
UnityEngine::UIElements::UIR::JobManager::__cordl_internal_set_m_ConvertMeshJobs(::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::ConvertMeshJobData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ConvertMeshJobs = value;
}
constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::CopyMeshJobData>*& UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get_m_CopyMeshJobs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyMeshJobs;
}
constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::CopyMeshJobData>* const&
UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get_m_CopyMeshJobs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyMeshJobs;
}
constexpr void
UnityEngine::UIElements::UIR::JobManager::__cordl_internal_set_m_CopyMeshJobs(::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::CopyMeshJobData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyMeshJobs = value;
}
constexpr ::UnityEngine::UIElements::UIR::JobMerger*& UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get_m_JobMerger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobMerger;
}
constexpr ::UnityEngine::UIElements::UIR::JobMerger* const& UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get_m_JobMerger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobMerger;
}
constexpr void UnityEngine::UIElements::UIR::JobManager::__cordl_internal_set_m_JobMerger(::UnityEngine::UIElements::UIR::JobMerger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JobMerger = value;
}
constexpr bool& UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::JobManager::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::JobManager::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::JobManager::Add(::by_ref<::UnityEngine::UIElements::UIR::NudgeJobData> job) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "Add", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::NudgeJobData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job);
}
inline void UnityEngine::UIElements::UIR::JobManager::Add(::by_ref<::UnityEngine::UIElements::UIR::ConvertMeshJobData> job) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ConvertMeshJobData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job);
}
inline void UnityEngine::UIElements::UIR::JobManager::Add(::by_ref<::UnityEngine::UIElements::UIR::CopyMeshJobData> job) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::CopyMeshJobData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job);
}
inline void UnityEngine::UIElements::UIR::JobManager::CompleteNudgeJobs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "CompleteNudgeJobs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::JobManager::CompleteConvertMeshJobs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "CompleteConvertMeshJobs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::JobManager::CompleteCopyMeshJobs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "CompleteCopyMeshJobs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::JobManager::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::JobManager::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::JobManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::JobManager::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::UIR::JobManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::JobManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::JobManager* UnityEngine::UIElements::UIR::JobManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::JobManager*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::JobManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::JobManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::JobManager::JobManager() {}
