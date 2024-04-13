#pragma once
#include "System/Xml/Schema/zzzz__ActiveAxis_impl.hpp"
#include "System/Xml/Schema/zzzz__SelectorActiveAxis_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__Asttree_def.hpp"
#include "System/Xml/Schema/zzzz__ConstraintStruct_def.hpp"
#include "System/Xml/Schema/zzzz__KeySequence_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis.get_lastDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SelectorActiveAxis::*)()>(
    &::System::Xml::Schema::SelectorActiveAxis::get_lastDepth)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2df801c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(),
                                                                               "get_lastDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::SelectorActiveAxis::*)(::System::Xml::Schema::Asttree*, ::System::Xml::Schema::ConstraintStruct*)>(&::System::Xml::Schema::SelectorActiveAxis::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2df7f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Asttree*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ConstraintStruct*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis.EndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SelectorActiveAxis::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::SelectorActiveAxis::EndElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2df80c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis.PushKS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SelectorActiveAxis::*)(int32_t, int32_t)>(
    &::System::Xml::Schema::SelectorActiveAxis::PushKS)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2df810c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), "PushKS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SelectorActiveAxis.PopKS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::KeySequence* (::System::Xml::Schema::SelectorActiveAxis::*)()>(
    &::System::Xml::Schema::SelectorActiveAxis::PopKS)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2df84dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), "PopKS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::ConstraintStruct*& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ConstraintStruct*> const& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr void System::Xml::Schema::SelectorActiveAxis::__cordl_internal_set_cs(::System::Xml::Schema::ConstraintStruct* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_KSs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KSs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_KSs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KSs;
}
constexpr void System::Xml::Schema::SelectorActiveAxis::__cordl_internal_set_KSs(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KSs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_KSpointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KSpointer;
}
constexpr int32_t const& System::Xml::Schema::SelectorActiveAxis::__cordl_internal_get_KSpointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KSpointer;
}
constexpr void System::Xml::Schema::SelectorActiveAxis::__cordl_internal_set_KSpointer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___KSpointer = value;
}
inline int32_t System::Xml::Schema::SelectorActiveAxis::get_lastDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), "get_lastDepth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::SelectorActiveAxis* System::Xml::Schema::SelectorActiveAxis::New_ctor(::System::Xml::Schema::Asttree* axisTree, ::System::Xml::Schema::ConstraintStruct* cs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::SelectorActiveAxis*>(axisTree, cs));
}
inline void System::Xml::Schema::SelectorActiveAxis::_ctor(::System::Xml::Schema::Asttree* axisTree, ::System::Xml::Schema::ConstraintStruct* cs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Asttree*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ConstraintStruct*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axisTree, cs);
}
inline bool System::Xml::Schema::SelectorActiveAxis::EndElement(::StringW localname, ::StringW URN) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localname, URN);
}
inline int32_t System::Xml::Schema::SelectorActiveAxis::PushKS(int32_t errline, int32_t errcol) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), "PushKS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, errline, errcol);
}
inline ::System::Xml::Schema::KeySequence* System::Xml::Schema::SelectorActiveAxis::PopKS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SelectorActiveAxis*>::get(), "PopKS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::KeySequence*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SelectorActiveAxis::SelectorActiveAxis() {}
