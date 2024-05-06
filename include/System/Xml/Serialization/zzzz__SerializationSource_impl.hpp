#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__SerializationSource_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::SerializationSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::SerializationSource::*)(
    ::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Xml::Serialization::SerializationSource::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ec3da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::SerializationSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::SerializationSource.BaseEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::SerializationSource::*)(::System::Xml::Serialization::SerializationSource*)>(
    &::System::Xml::Serialization::SerializationSource::BaseEquals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2ec3ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::SerializationSource*>::get(), "BaseEquals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::SerializationSource*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Xml::Serialization::SerializationSource::__cordl_internal_get_includedTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedTypes;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Xml::Serialization::SerializationSource::__cordl_internal_get_includedTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedTypes;
}
constexpr void System::Xml::Serialization::SerializationSource::__cordl_internal_set_includedTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___includedTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::SerializationSource::__cordl_internal_get_namspace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namspace;
}
constexpr ::StringW const& System::Xml::Serialization::SerializationSource::__cordl_internal_get_namspace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namspace;
}
constexpr void System::Xml::Serialization::SerializationSource::__cordl_internal_set_namspace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namspace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Serialization::SerializationSource::__cordl_internal_get_canBeGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canBeGenerated;
}
constexpr bool const& System::Xml::Serialization::SerializationSource::__cordl_internal_get_canBeGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canBeGenerated;
}
constexpr void System::Xml::Serialization::SerializationSource::__cordl_internal_set_canBeGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canBeGenerated = value;
}
inline ::System::Xml::Serialization::SerializationSource* System::Xml::Serialization::SerializationSource::New_ctor(::StringW namspace,
                                                                                                                    ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::SerializationSource*>(namspace, includedTypes));
}
inline void System::Xml::Serialization::SerializationSource::_ctor(::StringW namspace, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> includedTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::SerializationSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, namspace, includedTypes);
}
inline bool System::Xml::Serialization::SerializationSource::BaseEquals(::System::Xml::Serialization::SerializationSource* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::SerializationSource*>::get(), "BaseEquals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::SerializationSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::SerializationSource::SerializationSource() {}
