#pragma once
// IWYU pragma private; include "System/Data/ConstraintEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ConstraintEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
//  Writing Method size for method: ::System::Data::ConstraintEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::ConstraintEnumerator::*)(::System::Data::DataSet*)>(
    &::System::Data::ConstraintEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c768f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintEnumerator.GetNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ConstraintEnumerator::*)()>(&::System::Data::ConstraintEnumerator::GetNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2c76944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), "GetNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintEnumerator.GetConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintEnumerator::*)()>(
    &::System::Data::ConstraintEnumerator::GetConstraint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c76c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), "GetConstraint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintEnumerator.IsValidCandidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::ConstraintEnumerator::*)(::System::Data::Constraint*)>(
    &::System::Data::ConstraintEnumerator::IsValidCandidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c76c2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintEnumerator.get_CurrentObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintEnumerator::*)()>(
    &::System::Data::ConstraintEnumerator::get_CurrentObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c76c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(),
                                                                               "get_CurrentObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& System::Data::ConstraintEnumerator::__cordl_internal_get__tables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Data::ConstraintEnumerator::__cordl_internal_get__tables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
constexpr void System::Data::ConstraintEnumerator::__cordl_internal_set__tables(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerator*& System::Data::ConstraintEnumerator::__cordl_internal_get__constraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraints;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Data::ConstraintEnumerator::__cordl_internal_get__constraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraints;
}
constexpr void System::Data::ConstraintEnumerator::__cordl_internal_set__constraints(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____constraints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::Constraint*& System::Data::ConstraintEnumerator::__cordl_internal_get__currentObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::Constraint*> const& System::Data::ConstraintEnumerator::__cordl_internal_get__currentObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentObject;
}
constexpr void System::Data::ConstraintEnumerator::__cordl_internal_set__currentObject(::System::Data::Constraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::ConstraintEnumerator* System::Data::ConstraintEnumerator::New_ctor(::System::Data::DataSet* dataSet) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::ConstraintEnumerator*>(dataSet));
}
inline void System::Data::ConstraintEnumerator::_ctor(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSet);
}
inline bool System::Data::ConstraintEnumerator::GetNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), "GetNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Data::Constraint* System::Data::ConstraintEnumerator::GetConstraint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), "GetConstraint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*, false>(this, ___internal_method);
}
inline bool System::Data::ConstraintEnumerator::IsValidCandidate(::System::Data::Constraint* constraint) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, constraint);
}
inline ::System::Data::Constraint* System::Data::ConstraintEnumerator::get_CurrentObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::ConstraintEnumerator*>::get(), "get_CurrentObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::ConstraintEnumerator::ConstraintEnumerator() {}
