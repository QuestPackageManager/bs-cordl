#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IDataSourceProvider.hpp"
#include "UnityEngine/UIElements/zzzz__IDataSourceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDataSourceProvider.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::IDataSourceProvider::*)()>(&::UnityEngine::UIElements::IDataSourceProvider::get_dataSource)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IDataSourceProvider*>(), { ::i2c::class_of<::UnityEngine::UIElements::IDataSourceProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IDataSourceProvider.get_dataSourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (::UnityEngine::UIElements::IDataSourceProvider::*)()>(
    &::UnityEngine::UIElements::IDataSourceProvider::get_dataSourcePath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IDataSourceProvider*>(), { ::i2c::class_of<::UnityEngine::UIElements::IDataSourceProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::UIElements::IDataSourceProvider::get_dataSource() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDataSourceProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Unity::Properties::PropertyPath UnityEngine::UIElements::IDataSourceProvider::get_dataSourcePath() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDataSourceProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(this, ___internal_method);
}
