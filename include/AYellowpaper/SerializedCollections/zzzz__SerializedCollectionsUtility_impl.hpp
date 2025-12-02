#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/SerializedCollectionsUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedCollectionsUtility_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::AYellowpaper::SerializedCollections::SerializedCollectionsUtility.IsValidKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::AYellowpaper::SerializedCollections::SerializedCollectionsUtility::IsValidKey)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3160f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedCollectionsUtility*>::get(), "IsValidKey",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline bool AYellowpaper::SerializedCollections::SerializedCollectionsUtility::IsValidKey(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedCollectionsUtility*>::get(), "IsValidKey",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj);
}
template <typename T> inline bool AYellowpaper::SerializedCollections::SerializedCollectionsUtility::KeysAreEqual(T key, ::System::Object* otherKey) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedCollectionsUtility*>::get(), "KeysAreEqual",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, otherKey);
}
// Ctor Parameters []
constexpr ::AYellowpaper::SerializedCollections::SerializedCollectionsUtility::SerializedCollectionsUtility() {}
