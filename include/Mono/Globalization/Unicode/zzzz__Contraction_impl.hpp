#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/Contraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::Contraction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::Contraction::*)(
    int32_t, ::ArrayW<char16_t, ::Array<char16_t>*>, ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Globalization::Unicode::Contraction::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3c5a12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::Contraction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr int32_t const& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr void Mono::Globalization::Unicode::Contraction::__cordl_internal_set_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Index = value;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr void Mono::Globalization::Unicode::Contraction::__cordl_internal_set_Source(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Replacement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Replacement;
}
constexpr ::StringW const& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_Replacement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Replacement;
}
constexpr void Mono::Globalization::Unicode::Contraction::__cordl_internal_set_Replacement(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Replacement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_SortKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SortKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Globalization::Unicode::Contraction::__cordl_internal_get_SortKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SortKey;
}
constexpr void Mono::Globalization::Unicode::Contraction::__cordl_internal_set_SortKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SortKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Globalization::Unicode::Contraction::_ctor(int32_t index, ::ArrayW<char16_t, ::Array<char16_t>*> source, ::StringW replacement, ::ArrayW<uint8_t, ::Array<uint8_t>*> sortkey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::Contraction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, source, replacement, sortkey);
}
inline ::Mono::Globalization::Unicode::Contraction* Mono::Globalization::Unicode::Contraction::New_ctor(int32_t index, ::ArrayW<char16_t, ::Array<char16_t>*> source, ::StringW replacement,
                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> sortkey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Globalization::Unicode::Contraction*>(index, source, replacement, sortkey));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::Contraction::Contraction() {}
