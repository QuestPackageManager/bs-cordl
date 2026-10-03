#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Utility/AssemblyUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/Utility/zzzz__AssemblyUtility_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::AssemblyUtility.GetAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* (*)()>(
    &::UnityEngine::AddressableAssets::Utility::AssemblyUtility::GetAssemblies)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x688c928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::AssemblyUtility*>(), { "GetAssemblies", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* UnityEngine::AddressableAssets::Utility::AssemblyUtility::GetAssemblies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::AssemblyUtility*>(), { "GetAssemblies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Utility::AssemblyUtility::AssemblyUtility() {}
