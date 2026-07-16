#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AssetLabelReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetLabelReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__IKeyEvaluator_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.get_labelString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::get_labelString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x645a88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { "get_labelString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.set_labelString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AssetLabelReference::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::set_labelString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x645a894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { "set_labelString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.get_RuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::get_RuntimeKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x645a89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { "get_RuntimeKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.RuntimeKeyIsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(&::UnityEngine::AddressableAssets::AssetLabelReference::RuntimeKeyIsValid)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x645a8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { "RuntimeKeyIsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(&::UnityEngine::AddressableAssets::AssetLabelReference::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x645a918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(&::UnityEngine::AddressableAssets::AssetLabelReference::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x645a934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddressableAssets::AssetLabelReference::__cordl_internal_get_m_LabelString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelString;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::AssetLabelReference::__cordl_internal_get_m_LabelString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LabelString;
}
constexpr void UnityEngine::AddressableAssets::AssetLabelReference::__cordl_internal_set_m_LabelString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LabelString = value;
}
inline ::StringW UnityEngine::AddressableAssets::AssetLabelReference::get_labelString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { "get_labelString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AssetLabelReference::set_labelString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { "set_labelString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::AddressableAssets::AssetLabelReference::get_RuntimeKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { "get_RuntimeKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::AssetLabelReference::RuntimeKeyIsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { "RuntimeKeyIsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::AssetLabelReference::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AssetLabelReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::AssetLabelReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetLabelReference* UnityEngine::AddressableAssets::AssetLabelReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::AssetLabelReference*>());
}
/// @brief Convert operator to "::UnityEngine::AddressableAssets::IKeyEvaluator"
constexpr UnityEngine::AddressableAssets::AssetLabelReference::operator ::UnityEngine::AddressableAssets::IKeyEvaluator*() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::IKeyEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AddressableAssets::IKeyEvaluator"
constexpr ::UnityEngine::AddressableAssets::IKeyEvaluator* UnityEngine::AddressableAssets::AssetLabelReference::i___UnityEngine__AddressableAssets__IKeyEvaluator() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::IKeyEvaluator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetLabelReference::AssetLabelReference() {}
