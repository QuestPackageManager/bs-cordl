#pragma once
// IWYU pragma private; include "System/Xml/Schema/DoubleLinkAxis.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_impl.hpp"
#include "System/Xml/Schema/zzzz__DoubleLinkAxis_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::DoubleLinkAxis.get_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::Axis* (::System::Xml::Schema::DoubleLinkAxis::*)()>(
    &::System::Xml::Schema::DoubleLinkAxis::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43992d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DoubleLinkAxis*>::get(), "get_Next",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DoubleLinkAxis.set_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DoubleLinkAxis::*)(::MS::Internal::Xml::XPath::Axis*)>(
    &::System::Xml::Schema::DoubleLinkAxis::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43992d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DoubleLinkAxis*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DoubleLinkAxis._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::DoubleLinkAxis::*)(::MS::Internal::Xml::XPath::Axis*, ::System::Xml::Schema::DoubleLinkAxis*)>(&::System::Xml::Schema::DoubleLinkAxis::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x43992e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DoubleLinkAxis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::DoubleLinkAxis*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DoubleLinkAxis.ConvertTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (*)(::MS::Internal::Xml::XPath::Axis*)>(
    &::System::Xml::Schema::DoubleLinkAxis::ConvertTree)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4399338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DoubleLinkAxis*>::get(), "ConvertTree", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis*>::get() })));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::Axis*& System::Xml::Schema::DoubleLinkAxis::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::MS::Internal::Xml::XPath::Axis* const& System::Xml::Schema::DoubleLinkAxis::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::Schema::DoubleLinkAxis::__cordl_internal_set_next(::MS::Internal::Xml::XPath::Axis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::MS::Internal::Xml::XPath::Axis* System::Xml::Schema::DoubleLinkAxis::get_Next() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DoubleLinkAxis*>::get(), "get_Next",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::Axis*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DoubleLinkAxis::set_Next(::MS::Internal::Xml::XPath::Axis* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DoubleLinkAxis*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::DoubleLinkAxis::_ctor(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::Schema::DoubleLinkAxis* inputaxis) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DoubleLinkAxis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::DoubleLinkAxis*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis, inputaxis);
}
inline ::System::Xml::Schema::DoubleLinkAxis* System::Xml::Schema::DoubleLinkAxis::ConvertTree(::MS::Internal::Xml::XPath::Axis* axis) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DoubleLinkAxis*>::get(), "ConvertTree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::DoubleLinkAxis*, false>(nullptr, ___internal_method, axis);
}
inline ::System::Xml::Schema::DoubleLinkAxis* System::Xml::Schema::DoubleLinkAxis::New_ctor(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::Schema::DoubleLinkAxis* inputaxis) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::DoubleLinkAxis*>(axis, inputaxis));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DoubleLinkAxis::DoubleLinkAxis() {}
