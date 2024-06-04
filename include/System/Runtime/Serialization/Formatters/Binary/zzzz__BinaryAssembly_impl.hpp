#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryAssembly.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssembly_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285cf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::*)(int32_t, ::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285cf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x285cf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Read)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x285cfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly.Dump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x285cfec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), "Dump",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::__cordl_internal_get_assemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::__cordl_internal_get_assemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::__cordl_internal_set_assemId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemId = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::__cordl_internal_get_assemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::__cordl_internal_get_assemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::__cordl_internal_set_assemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Set(int32_t assemId, ::StringW assemblyString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assemId, assemblyString);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*>::get(), "Dump",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly::BinaryAssembly() {}
