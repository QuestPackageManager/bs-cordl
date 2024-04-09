#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetLabelReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__IKeyEvaluator_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.get_labelString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::get_labelString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f532e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                                               "get_labelString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.set_labelString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetLabelReference::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::set_labelString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f532e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(), "set_labelString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.get_RuntimeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::get_RuntimeKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f532f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                                               "get_RuntimeKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.RuntimeKeyIsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::RuntimeKeyIsValid)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f53348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                                               "RuntimeKeyIsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f533c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::AssetLabelReference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::AssetLabelReference::*)()>(
    &::UnityEngine::AddressableAssets::AssetLabelReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f533e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::AddressableAssets::IKeyEvaluator"
constexpr UnityEngine::AddressableAssets::AssetLabelReference::operator ::UnityEngine::AddressableAssets::IKeyEvaluator*() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::IKeyEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AddressableAssets::IKeyEvaluator"
constexpr ::UnityEngine::AddressableAssets::IKeyEvaluator* UnityEngine::AddressableAssets::AssetLabelReference::i___UnityEngine__AddressableAssets__IKeyEvaluator() noexcept {
  return static_cast<::UnityEngine::AddressableAssets::IKeyEvaluator*>(static_cast<void*>(this));
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LabelString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::AddressableAssets::AssetLabelReference::get_labelString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                                             "get_labelString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::AssetLabelReference::set_labelString(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(), "set_labelString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::AddressableAssets::AssetLabelReference::get_RuntimeKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                                             "get_RuntimeKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::AssetLabelReference::RuntimeKeyIsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                                             "RuntimeKeyIsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::AddressableAssets::AssetLabelReference::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetLabelReference* UnityEngine::AddressableAssets::AssetLabelReference::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AddressableAssets::AssetLabelReference*>());
}
inline void UnityEngine::AddressableAssets::AssetLabelReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::AssetLabelReference*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::AssetLabelReference::AssetLabelReference() {}
