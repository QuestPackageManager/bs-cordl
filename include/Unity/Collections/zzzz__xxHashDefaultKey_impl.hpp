#pragma once
// IWYU pragma private; include "Unity/Collections/xxHashDefaultKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__xxHashDefaultKey_def.hpp"
inline void Unity::Collections::xxHashDefaultKey::setStaticF_kSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "kSecret", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHashDefaultKey*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unity::Collections::xxHashDefaultKey::getStaticF_kSecret() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "kSecret", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::xxHashDefaultKey*>::get>();
}
// Ctor Parameters []
constexpr ::Unity::Collections::xxHashDefaultKey::xxHashDefaultKey() {}
