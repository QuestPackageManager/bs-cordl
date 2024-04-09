#pragma once
#include "System/Xml/Schema/zzzz__Position_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Position._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Position::*)(int32_t, ::System::Object*)>(&::System::Xml::Schema::Position::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2df8c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Position>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Position::_ctor(int32_t symbol, ::System::Object* particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Position>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, symbol, particle);
}
// Ctor Parameters [CppParam { name: "symbol", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "particle", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Xml::Schema::Position::Position(int32_t symbol, ::System::Object* particle) noexcept {
  this->symbol = symbol;
  this->particle = particle;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Position::Position() {}
