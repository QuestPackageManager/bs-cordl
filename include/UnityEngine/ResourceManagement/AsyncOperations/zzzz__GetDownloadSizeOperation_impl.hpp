#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/GetDownloadSizeOperation.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GetDownloadSizeOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, ::UnityEngine::ResourceManagement::ResourceManager*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d4d2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(),
                                                { "Init",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                    ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation.Calculate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::Calculate)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x6d4d2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(), { "Calculate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4d7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d4d7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d4d7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*&
UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::__cordl_internal_get_m_Locations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Locations;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* const&
UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::__cordl_internal_get_m_Locations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Locations;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::__cordl_internal_set_m_Locations(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Locations = value;
}
constexpr bool& UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::__cordl_internal_get_m_Started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Started;
}
constexpr bool const& UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::__cordl_internal_get_m_Started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Started;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::__cordl_internal_set_m_Started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Started = value;
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::Init(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
    ::UnityEngine::ResourceManagement::ResourceManager* resourceManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(),
                                              { "Init",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                  ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locations, resourceManager);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::Calculate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(), { "Calculate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation* UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::GetDownloadSizeOperation::GetDownloadSizeOperation() {}
