#pragma once
// IWYU pragma private; include "System\TypeNameParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeNameParser_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::TypeNameParser.GetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*,
                                                                           ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*, bool, bool,
                                                                           ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::TypeNameParser::GetType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c8ec58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeNameParser*>(),
                                                             { "GetType",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*>(),
                                                                 ::i2c::type_of<::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
inline ::System::Type* System::TypeNameParser::GetType(::StringW typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                                       ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError, bool ignoreCase,
                                                       ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeNameParser*>(),
                                                           { "GetType",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*>(),
                                                               ::i2c::type_of<::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase, stackMark);
}
// Ctor Parameters []
constexpr ::System::TypeNameParser::TypeNameParser() {}
