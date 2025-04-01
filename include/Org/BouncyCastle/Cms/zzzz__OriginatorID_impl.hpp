#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/OriginatorID.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorID_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorID.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Cms::OriginatorID::*)()>(&::Org::BouncyCastle::Cms::OriginatorID::GetHashCode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2678338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorID*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorID.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cms::OriginatorID::*)(::System::Object*)>(
    &::Org::BouncyCastle::Cms::OriginatorID::Equals)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x26783dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorID*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorID::*)()>(&::Org::BouncyCastle::Cms::OriginatorID::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2675cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorID*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Cms::OriginatorID::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorID*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cms::OriginatorID::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorID*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline void Org::BouncyCastle::Cms::OriginatorID::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorID*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::OriginatorID* Org::BouncyCastle::Cms::OriginatorID::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::OriginatorID*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::OriginatorID::OriginatorID() {}
