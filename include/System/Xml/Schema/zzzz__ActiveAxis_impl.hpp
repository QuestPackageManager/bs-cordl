#pragma once
// IWYU pragma private; include "System/Xml/Schema/ActiveAxis.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ActiveAxis_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__Asttree_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.get_CurrentDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::ActiveAxis::*)()>(&::System::Xml::Schema::ActiveAxis::get_CurrentDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43948a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), "get_CurrentDepth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.Reactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ActiveAxis::*)()>(&::System::Xml::Schema::ActiveAxis::Reactivate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x43948a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), "Reactivate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ActiveAxis::*)(::System::Xml::Schema::Asttree*)>(
    &::System::Xml::Schema::ActiveAxis::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x43948bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Asttree*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.MoveToStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ActiveAxis::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::ActiveAxis::MoveToStartElement)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4394a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), "MoveToStartElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.EndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ActiveAxis::*)(::StringW, ::StringW)>(&::System::Xml::Schema::ActiveAxis::EndElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4394ba0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ActiveAxis.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ActiveAxis::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::ActiveAxis::MoveToAttribute)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4394cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::ActiveAxis::__cordl_internal_get__currentDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDepth;
}
constexpr int32_t const& System::Xml::Schema::ActiveAxis::__cordl_internal_get__currentDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDepth;
}
constexpr void System::Xml::Schema::ActiveAxis::__cordl_internal_set__currentDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDepth = value;
}
constexpr bool& System::Xml::Schema::ActiveAxis::__cordl_internal_get__isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive;
}
constexpr bool const& System::Xml::Schema::ActiveAxis::__cordl_internal_get__isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive;
}
constexpr void System::Xml::Schema::ActiveAxis::__cordl_internal_set__isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActive = value;
}
constexpr ::System::Xml::Schema::Asttree*& System::Xml::Schema::ActiveAxis::__cordl_internal_get__axisTree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisTree;
}
constexpr ::System::Xml::Schema::Asttree* const& System::Xml::Schema::ActiveAxis::__cordl_internal_get__axisTree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisTree;
}
constexpr void System::Xml::Schema::ActiveAxis::__cordl_internal_set__axisTree(::System::Xml::Schema::Asttree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____axisTree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::ActiveAxis::__cordl_internal_get__axisStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisStack;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::ActiveAxis::__cordl_internal_get__axisStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisStack;
}
constexpr void System::Xml::Schema::ActiveAxis::__cordl_internal_set__axisStack(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____axisStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t System::Xml::Schema::ActiveAxis::get_CurrentDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), "get_CurrentDepth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Schema::ActiveAxis::Reactivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), "Reactivate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::ActiveAxis::_ctor(::System::Xml::Schema::Asttree* axisTree) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Asttree*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axisTree);
}
inline bool System::Xml::Schema::ActiveAxis::MoveToStartElement(::StringW localname, ::StringW URN) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), "MoveToStartElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localname, URN);
}
inline bool System::Xml::Schema::ActiveAxis::EndElement(::StringW localname, ::StringW URN) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localname, URN);
}
inline bool System::Xml::Schema::ActiveAxis::MoveToAttribute(::StringW localname, ::StringW URN) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ActiveAxis*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localname, URN);
}
inline ::System::Xml::Schema::ActiveAxis* System::Xml::Schema::ActiveAxis::New_ctor(::System::Xml::Schema::Asttree* axisTree) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ActiveAxis*>(axisTree));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ActiveAxis::ActiveAxis() {}
