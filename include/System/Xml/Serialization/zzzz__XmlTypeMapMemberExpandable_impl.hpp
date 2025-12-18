#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberExpandable.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberElement_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberExpandable.get_FlatArrayIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::XmlTypeMapMemberExpandable::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMemberExpandable::get_FlatArrayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615e5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>::get(),
                                                                               "get_FlatArrayIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberExpandable.set_FlatArrayIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberExpandable::*)(int32_t)>(
    &::System::Xml::Serialization::XmlTypeMapMemberExpandable::set_FlatArrayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615e5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>::get(), "set_FlatArrayIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberExpandable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberExpandable::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMemberExpandable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x615e5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Serialization::XmlTypeMapMemberExpandable::__cordl_internal_get__flatArrayIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatArrayIndex;
}
constexpr int32_t const& System::Xml::Serialization::XmlTypeMapMemberExpandable::__cordl_internal_get__flatArrayIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatArrayIndex;
}
constexpr void System::Xml::Serialization::XmlTypeMapMemberExpandable::__cordl_internal_set__flatArrayIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flatArrayIndex = value;
}
inline int32_t System::Xml::Serialization::XmlTypeMapMemberExpandable::get_FlatArrayIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>::get(),
                                                                             "get_FlatArrayIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMemberExpandable::set_FlatArrayIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>::get(), "set_FlatArrayIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlTypeMapMemberExpandable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberExpandable* System::Xml::Serialization::XmlTypeMapMemberExpandable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberExpandable::XmlTypeMapMemberExpandable() {}
