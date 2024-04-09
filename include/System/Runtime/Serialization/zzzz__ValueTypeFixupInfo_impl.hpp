#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ValueTypeFixupInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ValueTypeFixupInfo::*)(
    int64_t, ::System::Reflection::FieldInfo*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::System::Runtime::Serialization::ValueTypeFixupInfo::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x27324f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ContainerID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(
    &::System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2732648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                                                                               "get_ContainerID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ParentField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(
    &::System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2732650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                                                                               "get_ParentField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ParentIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(
    &::System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2732658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                                                                               "get_ParentIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__containerID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerID;
}
constexpr int64_t const& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__containerID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerID;
}
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_set__containerID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerID = value;
}
constexpr ::System::Reflection::FieldInfo*& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__parentField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__parentField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentField;
}
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_set__parentField(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__parentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentIndex;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_get__parentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentIndex;
}
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__cordl_internal_set__parentIndex(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::ValueTypeFixupInfo* System::Runtime::Serialization::ValueTypeFixupInfo::New_ctor(int64_t containerID, ::System::Reflection::FieldInfo* member,
                                                                                                                          ::ArrayW<int32_t, ::Array<int32_t>*> parentIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ValueTypeFixupInfo*>(containerID, member, parentIndex));
}
inline void System::Runtime::Serialization::ValueTypeFixupInfo::_ctor(int64_t containerID, ::System::Reflection::FieldInfo* member, ::ArrayW<int32_t, ::Array<int32_t>*> parentIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, containerID, member, parentIndex);
}
inline int64_t System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                                                                             "get_ContainerID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::System::Reflection::FieldInfo* System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                                                                             "get_ParentField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                                                                             "get_ParentIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ValueTypeFixupInfo::ValueTypeFixupInfo() {}
