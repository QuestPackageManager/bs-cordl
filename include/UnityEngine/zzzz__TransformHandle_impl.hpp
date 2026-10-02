#pragma once
// IWYU pragma private; include "UnityEngine/TransformHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__TransformHandle_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::TransformHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TransformHandle::*)(::System::Object*)>(&::UnityEngine::TransformHandle::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f55f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TransformHandle>(), { ::i2c::class_of<::UnityEngine::TransformHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TransformHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TransformHandle::*)(::UnityEngine::TransformHandle)>(&::UnityEngine::TransformHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f55fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TransformHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::TransformHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TransformHandle.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TransformHandle::*)(::UnityEngine::TransformHandle)>(&::UnityEngine::TransformHandle::CompareTo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f55fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TransformHandle>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::TransformHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TransformHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TransformHandle::*)()>(&::UnityEngine::TransformHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f55ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TransformHandle>(), { ::i2c::class_of<::UnityEngine::TransformHandle>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::TransformHandle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TransformHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::TransformHandle::Equals(::UnityEngine::TransformHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TransformHandle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::TransformHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::TransformHandle::CompareTo(::UnityEngine::TransformHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TransformHandle>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::TransformHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::TransformHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TransformHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TransformHandle>"
constexpr UnityEngine::TransformHandle::operator ::System::IEquatable_1<::UnityEngine::TransformHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::TransformHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::TransformHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::TransformHandle>* UnityEngine::TransformHandle::i___System__IEquatable_1___UnityEngine__TransformHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::TransformHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::TransformHandle>"
constexpr UnityEngine::TransformHandle::operator ::System::IComparable_1<::UnityEngine::TransformHandle>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::TransformHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::TransformHandle>"
constexpr ::System::IComparable_1<::UnityEngine::TransformHandle>* UnityEngine::TransformHandle::i___System__IComparable_1___UnityEngine__TransformHandle_() {
  return static_cast<::System::IComparable_1<::UnityEngine::TransformHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "pTransformData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::UnityEngine::EntityId", modifiers:
// "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TransformHandle::TransformHandle(::System::IntPtr pTransformData, ::UnityEngine::EntityId id) noexcept {
  this->pTransformData = pTransformData;
  this->id = id;
}
// Ctor Parameters []
constexpr ::UnityEngine::TransformHandle::TransformHandle() {}
