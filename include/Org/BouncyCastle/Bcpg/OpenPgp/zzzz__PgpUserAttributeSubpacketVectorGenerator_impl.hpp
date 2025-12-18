#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpUserAttributeSubpacketVectorGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVectorGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/Attr/zzzz__ImageAttrib_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator.SetImageAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::*)(
    ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::SetImageAttribute)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x34a7400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::Generate)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x34a7550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x34a7810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::__cordl_internal_set_list(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::SetImageAttribute(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format imageType,
                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, imageType, imageData);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::Generate() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator::PgpUserAttributeSubpacketVectorGenerator() {}
