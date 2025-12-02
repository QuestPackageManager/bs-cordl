#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SharedInstanceHandle.hpp"
#include "UnityEngine/Rendering/zzzz__SharedInstanceHandle_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.get_index
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::SharedInstanceHandle::*)()>(
    &::UnityEngine::Rendering::SharedInstanceHandle::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66044a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                                                               "get_index", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.set_index
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SharedInstanceHandle::*)(int32_t)>(
    &::UnityEngine::Rendering::SharedInstanceHandle::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66044a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), "set_index",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.get_valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SharedInstanceHandle::*)()>(
    &::UnityEngine::Rendering::SharedInstanceHandle::get_valid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66044b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                                                               "get_valid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::SharedInstanceHandle::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::SharedInstanceHandle::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6604510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::SharedInstanceHandle::*)(::UnityEngine::Rendering::SharedInstanceHandle)>(
    &::UnityEngine::Rendering::SharedInstanceHandle::CompareTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x660457c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SharedInstanceHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::SharedInstanceHandle::*)()>(
    &::UnityEngine::Rendering::SharedInstanceHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66045ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), 2));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SharedInstanceHandle::setStaticF_Invalid(::UnityEngine::Rendering::SharedInstanceHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::SharedInstanceHandle, "Invalid",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get>(
      std::forward<::UnityEngine::Rendering::SharedInstanceHandle>(value));
}
inline ::UnityEngine::Rendering::SharedInstanceHandle UnityEngine::Rendering::SharedInstanceHandle::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::SharedInstanceHandle, "Invalid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get>();
}
inline int32_t UnityEngine::Rendering::SharedInstanceHandle::get_index() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), "get_index",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SharedInstanceHandle::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), "set_index",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::SharedInstanceHandle::get_valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), "get_valid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::SharedInstanceHandle::Equals(::UnityEngine::Rendering::SharedInstanceHandle other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::SharedInstanceHandle::CompareTo(::UnityEngine::Rendering::SharedInstanceHandle other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SharedInstanceHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::SharedInstanceHandle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SharedInstanceHandle>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
constexpr UnityEngine::Rendering::SharedInstanceHandle::operator ::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*
UnityEngine::Rendering::SharedInstanceHandle::i___System__IEquatable_1___UnityEngine__Rendering__SharedInstanceHandle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SharedInstanceHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
constexpr UnityEngine::Rendering::SharedInstanceHandle::operator ::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*
UnityEngine::Rendering::SharedInstanceHandle::i___System__IComparable_1___UnityEngine__Rendering__SharedInstanceHandle_() {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::SharedInstanceHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_index_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::SharedInstanceHandle::SharedInstanceHandle(int32_t _index_k__BackingField) noexcept {
  this->_index_k__BackingField = _index_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SharedInstanceHandle::SharedInstanceHandle() {}
