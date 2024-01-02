#pragma once
#include "System/ComponentModel/zzzz__EditorBrowsableState_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__EditorBrowsableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/ComponentModel/zzzz__EditorBrowsableState_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EditorBrowsableAttribute::*)(::System::ComponentModel::EditorBrowsableState)>(
    &::System::ComponentModel::EditorBrowsableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2903914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EditorBrowsableState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EditorBrowsableAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::EditorBrowsableAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x290393c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EditorBrowsableAttribute::*)()>(
    &::System::ComponentModel::EditorBrowsableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29039c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::EditorBrowsableState& System::ComponentModel::EditorBrowsableAttribute::__get_browsableState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___browsableState;
}
constexpr ::System::ComponentModel::EditorBrowsableState const& System::ComponentModel::EditorBrowsableAttribute::__get_browsableState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___browsableState;
}
constexpr void System::ComponentModel::EditorBrowsableAttribute::__set_browsableState(::System::ComponentModel::EditorBrowsableState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___browsableState = value;
}
inline ::System::ComponentModel::EditorBrowsableAttribute* System::ComponentModel::EditorBrowsableAttribute::New_ctor(::System::ComponentModel::EditorBrowsableState state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::EditorBrowsableAttribute*>(state));
}
inline void System::ComponentModel::EditorBrowsableAttribute::_ctor(::System::ComponentModel::EditorBrowsableState state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EditorBrowsableState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline bool System::ComponentModel::EditorBrowsableAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::EditorBrowsableAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EditorBrowsableAttribute::EditorBrowsableAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
