#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\AsyncOpHandlesCacheKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__AsyncOpHandlesCacheKey_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x690ec08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)()>(
    &::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6917614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)(::System::Object*)>(
    &::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6917630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(
    &::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x691772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::*)(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*)>(
    &::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69176a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::__cordl_internal_get_m_Handles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Handles;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::__cordl_internal_get_m_Handles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Handles;
}
constexpr void UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::__cordl_internal_set_m_Handles(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Handles = value;
}
inline void
UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* handles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handles);
}
inline int32_t UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::Equals(::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*
UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* handles) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey*>(handles));
}
/// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
constexpr UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::operator ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ResourceManagement::Util::IOperationCacheKey"
constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*
UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::i___UnityEngine__ResourceManagement__Util__IOperationCacheKey() noexcept {
  return static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
constexpr UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>"
constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*
UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__IOperationCacheKey__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey::AsyncOpHandlesCacheKey() {}
