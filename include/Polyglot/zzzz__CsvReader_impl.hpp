#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Polyglot/zzzz__CsvReader_def.hpp"
#include "Polyglot/zzzz__CsvReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Polyglot::__CsvReader__ParsingMode::__CsvReader__ParsingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Polyglot::__CsvReader__ParsingMode::__CsvReader__ParsingMode() {}
constexpr ::Polyglot::__CsvReader__ParsingMode Polyglot::__CsvReader__ParsingMode::None{ static_cast<int32_t>(0x0) };
constexpr ::Polyglot::__CsvReader__ParsingMode Polyglot::__CsvReader__ParsingMode::OutQuote{ static_cast<int32_t>(0x1) };
constexpr ::Polyglot::__CsvReader__ParsingMode Polyglot::__CsvReader__ParsingMode::InQuote{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Polyglot::CsvReader.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* (*)(::StringW)>(
    &::Polyglot::CsvReader::Parse)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x2800a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::CsvReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::CsvReader::*)()>(&::Polyglot::CsvReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280126c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* Polyglot::CsvReader::Parse(::StringW src) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader*>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>*, false>(nullptr, ___internal_method, src);
}
inline ::Polyglot::CsvReader* Polyglot::CsvReader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Polyglot::CsvReader*>());
}
inline void Polyglot::CsvReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Polyglot::CsvReader::CsvReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
