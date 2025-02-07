#pragma once
// IWYU pragma private; include "System/Collections/Specialized/CaseSensitiveStringDictionary.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_impl.hpp"
#include "System/Collections/Specialized/zzzz__CaseSensitiveStringDictionary_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::CaseSensitiveStringDictionary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::CaseSensitiveStringDictionary::*)()>(
    &::System::Collections::Specialized::CaseSensitiveStringDictionary::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4489aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::CaseSensitiveStringDictionary*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::CaseSensitiveStringDictionary.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Specialized::CaseSensitiveStringDictionary::*)(::StringW, ::StringW)>(
    &::System::Collections::Specialized::CaseSensitiveStringDictionary::Add)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4489aa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::CaseSensitiveStringDictionary*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::CaseSensitiveStringDictionary*>::get(), 5));
    return ___internal_method;
  }
};
inline void System::Collections::Specialized::CaseSensitiveStringDictionary::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::CaseSensitiveStringDictionary*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Collections::Specialized::CaseSensitiveStringDictionary::Add(::StringW key, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Specialized::CaseSensitiveStringDictionary*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline ::System::Collections::Specialized::CaseSensitiveStringDictionary* System::Collections::Specialized::CaseSensitiveStringDictionary::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Specialized::CaseSensitiveStringDictionary*>());
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::CaseSensitiveStringDictionary::CaseSensitiveStringDictionary() {}
