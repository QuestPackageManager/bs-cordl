#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/Level2Map.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__Level2Map_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::Level2Map._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::Level2Map::*)(uint8_t, uint8_t)>(
    &::Mono::Globalization::Unicode::Level2Map::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3c538c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::Level2Map*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& Mono::Globalization::Unicode::Level2Map::__cordl_internal_get_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr uint8_t const& Mono::Globalization::Unicode::Level2Map::__cordl_internal_get_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr void Mono::Globalization::Unicode::Level2Map::__cordl_internal_set_Source(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Source = value;
}
constexpr uint8_t& Mono::Globalization::Unicode::Level2Map::__cordl_internal_get_Replace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Replace;
}
constexpr uint8_t const& Mono::Globalization::Unicode::Level2Map::__cordl_internal_get_Replace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Replace;
}
constexpr void Mono::Globalization::Unicode::Level2Map::__cordl_internal_set_Replace(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Replace = value;
}
inline void Mono::Globalization::Unicode::Level2Map::_ctor(uint8_t source, uint8_t replace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::Level2Map*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, replace);
}
inline ::Mono::Globalization::Unicode::Level2Map* Mono::Globalization::Unicode::Level2Map::New_ctor(uint8_t source, uint8_t replace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Globalization::Unicode::Level2Map*>(source, replace));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::Level2Map::Level2Map() {}
