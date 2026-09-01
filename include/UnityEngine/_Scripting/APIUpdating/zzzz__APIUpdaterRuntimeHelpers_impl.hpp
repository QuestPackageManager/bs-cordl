#pragma once
// IWYU pragma private; include "UnityEngine\_Scripting\APIUpdating\APIUpdaterRuntimeHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/_Scripting/APIUpdating/zzzz__APIUpdaterRuntimeHelpers_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers.GetMovedFromAttributeDataForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6afae6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*>(),
                            { "GetMovedFromAttributeDataForType",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers.GetObsoleteTypeRedirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6afafa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*>(),
                            { "GetObsoleteTypeRedirection",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType(::System::Type* sourceType, ::by_ref<::StringW> assembly, ::by_ref<::StringW> nsp,
                                                                                                             ::by_ref<::StringW> klass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*>(),
                          { "GetMovedFromAttributeDataForType",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceType, assembly, nsp, klass);
}
inline bool UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection(::System::Type* sourceType, ::by_ref<::StringW> assemblyName, ::by_ref<::StringW> nsp,
                                                                                                       ::by_ref<::StringW> className) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*>(),
                          { "GetObsoleteTypeRedirection",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceType, assemblyName, nsp, className);
}
// Ctor Parameters []
constexpr ::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::APIUpdaterRuntimeHelpers() {}
