#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ChameleonKey_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ChameleonKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ChameleonKey::*)(::StringW, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::ChameleonKey::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2df76e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChameleonKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChameleonKey.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::ChameleonKey::*)()>(&::System::Xml::Schema::ChameleonKey::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2df773c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChameleonKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChameleonKey*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ChameleonKey.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ChameleonKey::*)(::System::Object*)>(&::System::Xml::Schema::ChameleonKey::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2df77bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChameleonKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChameleonKey*>::get(), 0));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::ChameleonKey::__cordl_internal_get_targetNS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNS;
}
constexpr ::StringW const& System::Xml::Schema::ChameleonKey::__cordl_internal_get_targetNS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNS;
}
constexpr void System::Xml::Schema::ChameleonKey::__cordl_internal_set_targetNS(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetNS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Xml::Schema::ChameleonKey::__cordl_internal_get_chameleonLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonLocation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Xml::Schema::ChameleonKey::__cordl_internal_get_chameleonLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonLocation;
}
constexpr void System::Xml::Schema::ChameleonKey::__cordl_internal_set_chameleonLocation(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chameleonLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::ChameleonKey::__cordl_internal_get_originalSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalSchema;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchema*> const& System::Xml::Schema::ChameleonKey::__cordl_internal_get_originalSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalSchema;
}
constexpr void System::Xml::Schema::ChameleonKey::__cordl_internal_set_originalSchema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originalSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::ChameleonKey::__cordl_internal_get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr int32_t const& System::Xml::Schema::ChameleonKey::__cordl_internal_get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr void System::Xml::Schema::ChameleonKey::__cordl_internal_set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
inline ::System::Xml::Schema::ChameleonKey* System::Xml::Schema::ChameleonKey::New_ctor(::StringW ns, ::System::Xml::Schema::XmlSchema* originalSchema) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ChameleonKey*>(ns, originalSchema));
}
inline void System::Xml::Schema::ChameleonKey::_ctor(::StringW ns, ::System::Xml::Schema::XmlSchema* originalSchema) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChameleonKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ns, originalSchema);
}
inline int32_t System::Xml::Schema::ChameleonKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChameleonKey*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::ChameleonKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ChameleonKey*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ChameleonKey::ChameleonKey() {}
