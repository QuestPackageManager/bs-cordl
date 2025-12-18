#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlArrayItemAttributes.hpp"
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlArrayItemAttributes_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlArrayItemAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayItemAttributes.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlArrayItemAttribute* (
    ::System::Xml::Serialization::XmlArrayItemAttributes::*)(int32_t)>(&::System::Xml::Serialization::XmlArrayItemAttributes::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x613e01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlArrayItemAttributes*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayItemAttributes.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Xml::Serialization::XmlArrayItemAttributes::*)(::System::Xml::Serialization::XmlArrayItemAttribute*)>(&::System::Xml::Serialization::XmlArrayItemAttributes::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x613e11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlArrayItemAttributes*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlArrayItemAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayItemAttributes.AddKeyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlArrayItemAttributes::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlArrayItemAttributes::AddKeyHash)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x613e1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlArrayItemAttributes*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayItemAttributes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlArrayItemAttributes::*)()>(
    &::System::Xml::Serialization::XmlArrayItemAttributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613e2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlArrayItemAttributes*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlArrayItemAttribute* System::Xml::Serialization::XmlArrayItemAttributes::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlArrayItemAttributes*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlArrayItemAttribute*, false>(this, ___internal_method, index);
}
inline int32_t System::Xml::Serialization::XmlArrayItemAttributes::Add(::System::Xml::Serialization::XmlArrayItemAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlArrayItemAttributes*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlArrayItemAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, attribute);
}
inline void System::Xml::Serialization::XmlArrayItemAttributes::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlArrayItemAttributes*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline void System::Xml::Serialization::XmlArrayItemAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlArrayItemAttributes*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlArrayItemAttributes* System::Xml::Serialization::XmlArrayItemAttributes::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlArrayItemAttributes*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlArrayItemAttributes::XmlArrayItemAttributes() {}
