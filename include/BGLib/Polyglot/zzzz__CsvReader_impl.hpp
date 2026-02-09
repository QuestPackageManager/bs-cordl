#pragma once
// IWYU pragma private; include "BGLib/Polyglot/CsvReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__CsvReader_def.hpp"
#include "BGLib/Polyglot/zzzz__CsvReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode::CsvReader_ParsingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode::CsvReader_ParsingMode()   {
}
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode  BGLib::Polyglot::CsvReader_ParsingMode::None{static_cast<int32_t>(0x0)};
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode  BGLib::Polyglot::CsvReader_ParsingMode::OutQuote{static_cast<int32_t>(0x1)};
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode  BGLib::Polyglot::CsvReader_ParsingMode::InQuote{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::BGLib::Polyglot::CsvReader.Parse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* (*)(::StringW)>(&::BGLib::Polyglot::CsvReader::Parse)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x3225580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::CsvReader*>::get(),
                        "Parse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::CsvReader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::Polyglot::CsvReader::*)()>(&::BGLib::Polyglot::CsvReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3228ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::CsvReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* BGLib::Polyglot::CsvReader::Parse(::StringW  src)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::CsvReader*>::get(),
                        "Parse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>*, false>(nullptr, ___internal_method, src);
}
inline void BGLib::Polyglot::CsvReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::CsvReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::CsvReader* BGLib::Polyglot::CsvReader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::CsvReader*>());
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::CsvReader::CsvReader()   {
}
