#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlAnyElementAttributes.hpp"
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlAnyElementAttributes_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAnyElementAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlAnyElementAttribute* (
    ::System::Xml::Serialization::XmlAnyElementAttributes::*)(int32_t)>(&::System::Xml::Serialization::XmlAnyElementAttributes::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x436fc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::XmlAnyElementAttributes::*)(
    ::System::Xml::Serialization::XmlAnyElementAttribute*)>(&::System::Xml::Serialization::XmlAnyElementAttributes::Add)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x436fd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAnyElementAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes.AddKeyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlAnyElementAttributes::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlAnyElementAttributes::AddKeyHash)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x436fe38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes.get_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::XmlAnyElementAttributes::*)()>(
    &::System::Xml::Serialization::XmlAnyElementAttributes::get_Order)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x436ff04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(),
                                                                               "get_Order", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlAnyElementAttributes::*)()>(
    &::System::Xml::Serialization::XmlAnyElementAttributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43701d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlAnyElementAttribute* System::Xml::Serialization::XmlAnyElementAttributes::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlAnyElementAttribute*, false>(this, ___internal_method, index);
}
inline int32_t System::Xml::Serialization::XmlAnyElementAttributes::Add(::System::Xml::Serialization::XmlAnyElementAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlAnyElementAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, attribute);
}
inline void System::Xml::Serialization::XmlAnyElementAttributes::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline int32_t System::Xml::Serialization::XmlAnyElementAttributes::get_Order() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(),
                                                                             "get_Order", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlAnyElementAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlAnyElementAttributes*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlAnyElementAttributes* System::Xml::Serialization::XmlAnyElementAttributes::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlAnyElementAttributes*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlAnyElementAttributes::XmlAnyElementAttributes() {}
