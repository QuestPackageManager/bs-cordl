#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__EmptyEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11579f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11579f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>::get(), "GetEnumerator",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
inline void Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::setStaticF_Instance(::System::Collections::IEnumerable* value) {
  ::cordl_internals::setStaticField<::System::Collections::IEnumerable*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>::get>(
      std::forward<::System::Collections::IEnumerable*>(value));
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Collections::IEnumerable*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>::get>();
}
inline ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable* Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>());
}
inline void Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable*>::get(), "GetEnumerator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::EmptyEnumerable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
