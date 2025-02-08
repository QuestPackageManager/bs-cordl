#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalFE.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalSerializerTypeE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_impl.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_impl.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__TypeFilterLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalFE_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::InternalFE._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::InternalFE::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::InternalFE::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d18258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::InternalFE*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_get_FEtypeFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FEtypeFormat;
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_get_FEtypeFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FEtypeFormat;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_set_FEtypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FEtypeFormat = value;
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_get_FEassemblyFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FEassemblyFormat;
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const& System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_get_FEassemblyFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FEassemblyFormat;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_set_FEassemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FEassemblyFormat = value;
}
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel& System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_get_FEsecurityLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FEsecurityLevel;
}
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel const& System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_get_FEsecurityLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FEsecurityLevel;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_set_FEsecurityLevel(::System::Runtime::Serialization::Formatters::TypeFilterLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FEsecurityLevel = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE& System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_get_FEserializerTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FEserializerTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE const&
System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_get_FEserializerTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FEserializerTypeEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::InternalFE::__cordl_internal_set_FEserializerTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FEserializerTypeEnum = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::InternalFE::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::InternalFE*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::InternalFE* System::Runtime::Serialization::Formatters::Binary::InternalFE::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::InternalFE*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE::InternalFE() {}
