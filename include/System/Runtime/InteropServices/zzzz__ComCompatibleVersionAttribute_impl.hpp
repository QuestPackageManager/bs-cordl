#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ComCompatibleVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComCompatibleVersionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ComCompatibleVersionAttribute::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::System::Runtime::InteropServices::ComCompatibleVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24d75d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComCompatibleVersionAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__major() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____major;
}
constexpr int32_t const& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__major() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____major;
}
constexpr void System::Runtime::InteropServices::ComCompatibleVersionAttribute::__set__major(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____major = value;
}
constexpr int32_t& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__minor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minor;
}
constexpr int32_t const& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__minor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minor;
}
constexpr void System::Runtime::InteropServices::ComCompatibleVersionAttribute::__set__minor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minor = value;
}
constexpr int32_t& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__build() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____build;
}
constexpr int32_t const& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__build() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____build;
}
constexpr void System::Runtime::InteropServices::ComCompatibleVersionAttribute::__set__build(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____build = value;
}
constexpr int32_t& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__revision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____revision;
}
constexpr int32_t const& System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__revision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____revision;
}
constexpr void System::Runtime::InteropServices::ComCompatibleVersionAttribute::__set__revision(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____revision = value;
}
inline ::System::Runtime::InteropServices::ComCompatibleVersionAttribute* System::Runtime::InteropServices::ComCompatibleVersionAttribute::New_ctor(int32_t major, int32_t minor, int32_t build,
                                                                                                                                                    int32_t revision) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::InteropServices::ComCompatibleVersionAttribute*>(major, minor, build, revision));
}
inline void System::Runtime::InteropServices::ComCompatibleVersionAttribute::_ctor(int32_t major, int32_t minor, int32_t build, int32_t revision) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComCompatibleVersionAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, major, minor, build, revision);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::ComCompatibleVersionAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
