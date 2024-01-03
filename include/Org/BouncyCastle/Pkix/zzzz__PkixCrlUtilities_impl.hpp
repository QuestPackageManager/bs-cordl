#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCrlUtilities_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CrlStoreSelector_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::Org::BouncyCastle::Pkix::PkixParameters*, ::System::DateTime)>(
    &::Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x1105080;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1105d5c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (
    ::Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x11057e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(), "FindCrls", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCrlUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCrlUtilities::*)()>(&::Org::BouncyCastle::Pkix::PkixCrlUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1105070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlselect,
                                                                                                              ::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix, ::System::DateTime currentDate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, crlselect, paramsPkix, currentDate);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlselect,
                                                                                                              ::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*, false>(this, ___internal_method, crlselect, paramsPkix);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlSelect,
                                                                                               ::System::Collections::IList* crlStores) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(), "FindCrls", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, crlSelect, crlStores);
}
inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* Org::BouncyCastle::Pkix::PkixCrlUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>());
}
inline void Org::BouncyCastle::Pkix::PkixCrlUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixCrlUtilities::PkixCrlUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
