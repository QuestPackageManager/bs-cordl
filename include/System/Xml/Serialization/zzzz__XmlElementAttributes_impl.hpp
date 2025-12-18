#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlElementAttributes.hpp"
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementAttributes_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlElementAttribute* (::System::Xml::Serialization::XmlElementAttributes::*)(int32_t)>(
    &::System::Xml::Serialization::XmlElementAttributes::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6141324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::XmlElementAttributes::*)(::System::Xml::Serialization::XmlElementAttribute*)>(
    &::System::Xml::Serialization::XmlElementAttributes::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6141424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlElementAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes.AddKeyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlElementAttributes::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlElementAttributes::AddKeyHash)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x61414d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes.get_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::XmlElementAttributes::*)()>(
    &::System::Xml::Serialization::XmlElementAttributes::get_Order)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x61415c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(),
                                                                               "get_Order", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlElementAttributes::*)()>(
    &::System::Xml::Serialization::XmlElementAttributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6141878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlElementAttribute* System::Xml::Serialization::XmlElementAttributes::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlElementAttribute*, false>(this, ___internal_method, index);
}
inline int32_t System::Xml::Serialization::XmlElementAttributes::Add(::System::Xml::Serialization::XmlElementAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlElementAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, attribute);
}
inline void System::Xml::Serialization::XmlElementAttributes::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline int32_t System::Xml::Serialization::XmlElementAttributes::get_Order() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(),
                                                                             "get_Order", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlElementAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlElementAttributes*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlElementAttributes* System::Xml::Serialization::XmlElementAttributes::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlElementAttributes*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlElementAttributes::XmlElementAttributes() {}
