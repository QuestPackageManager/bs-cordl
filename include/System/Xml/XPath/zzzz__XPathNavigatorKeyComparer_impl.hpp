#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigatorKeyComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigatorKeyComparer.System_Collections_IEqualityComparer_Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XPath::XPathNavigatorKeyComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29966d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathNavigatorKeyComparer*>::get(),
                                                                               "System.Collections.IEqualityComparer.Equals", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigatorKeyComparer.System_Collections_IEqualityComparer_GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XPath::XPathNavigatorKeyComparer::*)(::System::Object*)>(
    &::System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_GetHashCode)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x29967b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathNavigatorKeyComparer*>::get(), "System.Collections.IEqualityComparer.GetHashCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigatorKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XPath::XPathNavigatorKeyComparer::*)()>(
    &::System::Xml::XPath::XPathNavigatorKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29966d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathNavigatorKeyComparer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr System::Xml::XPath::XPathNavigatorKeyComparer::operator ::System::Collections::IEqualityComparer*() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* System::Xml::XPath::XPathNavigatorKeyComparer::i___System__Collections__IEqualityComparer() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
inline bool System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_Equals(::System::Object* obj1, ::System::Object* obj2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathNavigatorKeyComparer*>::get(),
                                                                             "System.Collections.IEqualityComparer.Equals", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj1, obj2);
}
inline int32_t System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathNavigatorKeyComparer*>::get(), "System.Collections.IEqualityComparer.GetHashCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::System::Xml::XPath::XPathNavigatorKeyComparer* System::Xml::XPath::XPathNavigatorKeyComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XPath::XPathNavigatorKeyComparer*>());
}
inline void System::Xml::XPath::XPathNavigatorKeyComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathNavigatorKeyComparer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XPath::XPathNavigatorKeyComparer::XPathNavigatorKeyComparer() {}
