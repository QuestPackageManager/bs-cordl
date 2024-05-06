#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__Record_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::Record._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::Record::*)(int32_t, ::StringW, ::StringW)>(&::Assets::OVR::Scripts::Record::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bcc470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::Record*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Assets::OVR::Scripts::Record::__cordl_internal_get_sortOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr int32_t const& Assets::OVR::Scripts::Record::__cordl_internal_get_sortOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr void Assets::OVR::Scripts::Record::__cordl_internal_set_sortOrder(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sortOrder = value;
}
constexpr ::StringW& Assets::OVR::Scripts::Record::__cordl_internal_get_category() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr ::StringW const& Assets::OVR::Scripts::Record::__cordl_internal_get_category() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr void Assets::OVR::Scripts::Record::__cordl_internal_set_category(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___category)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Assets::OVR::Scripts::Record::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& Assets::OVR::Scripts::Record::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void Assets::OVR::Scripts::Record::__cordl_internal_set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Assets::OVR::Scripts::Record* Assets::OVR::Scripts::Record::New_ctor(int32_t order, ::StringW cat, ::StringW msg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Assets::OVR::Scripts::Record*>(order, cat, msg));
}
inline void Assets::OVR::Scripts::Record::_ctor(int32_t order, ::StringW cat, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::Record*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, order, cat, msg);
}
// Ctor Parameters []
constexpr ::Assets::OVR::Scripts::Record::Record() {}
