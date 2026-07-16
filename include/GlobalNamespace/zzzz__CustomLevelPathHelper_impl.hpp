#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomLevelPathHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLevelPathHelper_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomLevelPathHelper.IsHiddenDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IO::DirectoryInfo*)>(&::GlobalNamespace::CustomLevelPathHelper::IsHiddenDirectory)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3705054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelPathHelper*>(), { "IsHiddenDirectory", {}, { ::i2c::type_of<::System::IO::DirectoryInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLevelPathHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLevelPathHelper::*)()>(&::GlobalNamespace::CustomLevelPathHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3705110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelPathHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::CustomLevelPathHelper::IsHiddenDirectory(::System::IO::DirectoryInfo* beatmapDirectory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelPathHelper*>(), { "IsHiddenDirectory", {}, { ::i2c::type_of<::System::IO::DirectoryInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, beatmapDirectory);
}
inline void GlobalNamespace::CustomLevelPathHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelPathHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomLevelPathHelper* GlobalNamespace::CustomLevelPathHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomLevelPathHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelPathHelper::CustomLevelPathHelper() {}
