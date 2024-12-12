#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryAssetProvider_1.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryDataProvider_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryAssetProvider_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TAdapter>
inline ::System::Object* UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>::Convert(::System::Type* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, data);
}
template <typename TAdapter> inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TAdapter>
inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>* UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>*>());
}
// Ctor Parameters []
template <typename TAdapter> constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>::BinaryAssetProvider_1() {}
