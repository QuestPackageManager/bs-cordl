#pragma once
// IWYU pragma private; include "System/Xml/Schema/AxisElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__AxisElement_def.hpp"
#include "System/Xml/Schema/zzzz__DoubleLinkAxis_def.hpp"
#include "System/Xml/Schema/zzzz__ForwardAxis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::AxisElement.get_CurNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (::System::Xml::Schema::AxisElement::*)()>(
    &::System::Xml::Schema::AxisElement::get_CurNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43925f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), "get_CurNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::AxisElement::*)(::System::Xml::Schema::DoubleLinkAxis*, int32_t)>(
    &::System::Xml::Schema::AxisElement::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x43925fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::DoubleLinkAxis*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisElement.SetDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::AxisElement::*)(int32_t)>(&::System::Xml::Schema::AxisElement::SetDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4392630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), "SetDepth", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisElement.MoveToParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::AxisElement::*)(int32_t, ::System::Xml::Schema::ForwardAxis*)>(
    &::System::Xml::Schema::AxisElement::MoveToParent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4392638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), "MoveToParent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ForwardAxis*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AxisElement.MoveToChild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::AxisElement::*)(::StringW, ::StringW, int32_t, ::System::Xml::Schema::ForwardAxis*)>(
    &::System::Xml::Schema::AxisElement::MoveToChild)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x4392744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), "MoveToChild", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ForwardAxis*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::DoubleLinkAxis*& System::Xml::Schema::AxisElement::__cordl_internal_get_curNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr ::System::Xml::Schema::DoubleLinkAxis* const& System::Xml::Schema::AxisElement::__cordl_internal_get_curNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr void System::Xml::Schema::AxisElement::__cordl_internal_set_curNode(::System::Xml::Schema::DoubleLinkAxis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::AxisElement::__cordl_internal_get_rootDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootDepth;
}
constexpr int32_t const& System::Xml::Schema::AxisElement::__cordl_internal_get_rootDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootDepth;
}
constexpr void System::Xml::Schema::AxisElement::__cordl_internal_set_rootDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootDepth = value;
}
constexpr int32_t& System::Xml::Schema::AxisElement::__cordl_internal_get_curDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curDepth;
}
constexpr int32_t const& System::Xml::Schema::AxisElement::__cordl_internal_get_curDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curDepth;
}
constexpr void System::Xml::Schema::AxisElement::__cordl_internal_set_curDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curDepth = value;
}
constexpr bool& System::Xml::Schema::AxisElement::__cordl_internal_get_isMatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMatch;
}
constexpr bool const& System::Xml::Schema::AxisElement::__cordl_internal_get_isMatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMatch;
}
constexpr void System::Xml::Schema::AxisElement::__cordl_internal_set_isMatch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMatch = value;
}
inline ::System::Xml::Schema::DoubleLinkAxis* System::Xml::Schema::AxisElement::get_CurNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), "get_CurNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::DoubleLinkAxis*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::AxisElement::_ctor(::System::Xml::Schema::DoubleLinkAxis* node, int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::DoubleLinkAxis*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, depth);
}
inline void System::Xml::Schema::AxisElement::SetDepth(int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), "SetDepth", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, depth);
}
inline void System::Xml::Schema::AxisElement::MoveToParent(int32_t depth, ::System::Xml::Schema::ForwardAxis* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), "MoveToParent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ForwardAxis*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, depth, parent);
}
inline bool System::Xml::Schema::AxisElement::MoveToChild(::StringW name, ::StringW URN, int32_t depth, ::System::Xml::Schema::ForwardAxis* parent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::AxisElement*>::get(), "MoveToChild", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ForwardAxis*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, URN, depth, parent);
}
inline ::System::Xml::Schema::AxisElement* System::Xml::Schema::AxisElement::New_ctor(::System::Xml::Schema::DoubleLinkAxis* node, int32_t depth) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::AxisElement*>(node, depth));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::AxisElement::AxisElement() {}
