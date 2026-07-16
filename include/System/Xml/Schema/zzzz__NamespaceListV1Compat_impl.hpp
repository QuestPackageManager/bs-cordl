#pragma once
// IWYU pragma private; include "System/Xml/Schema/NamespaceListV1Compat.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_impl.hpp"
#include "System/Xml/Schema/zzzz__NamespaceListV1Compat_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListV1Compat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::NamespaceListV1Compat::*)(::StringW, ::StringW)>(&::System::Xml::Schema::NamespaceListV1Compat::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61d9eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceListV1Compat*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListV1Compat.Allows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::NamespaceListV1Compat::*)(::StringW)>(&::System::Xml::Schema::NamespaceListV1Compat::Allows)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61d9ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceListV1Compat*>(), { ::i2c::class_of<::System::Xml::Schema::NamespaceListV1Compat*>(), 4 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::NamespaceListV1Compat::_ctor(::StringW namespaces, ::StringW targetNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::NamespaceListV1Compat*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, namespaces, targetNamespace);
}
inline bool System::Xml::Schema::NamespaceListV1Compat::Allows(::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::NamespaceListV1Compat*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline ::System::Xml::Schema::NamespaceListV1Compat* System::Xml::Schema::NamespaceListV1Compat::New_ctor(::StringW namespaces, ::StringW targetNamespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::NamespaceListV1Compat*>(namespaces, targetNamespace));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NamespaceListV1Compat::NamespaceListV1Compat() {}
