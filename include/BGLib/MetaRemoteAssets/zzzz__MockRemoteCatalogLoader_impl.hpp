#pragma once
// IWYU pragma private; include "BGLib\MetaRemoteAssets\MockRemoteCatalogLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MockRemoteCatalogLoader_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__IRemoteCatalogLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader.LoadRemoteCatalogAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::*)(::System::Threading::CancellationToken)>(
    &::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::LoadRemoteCatalogAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x331b33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>(),
                                                                                           { "LoadRemoteCatalogAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::*)()>(&::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x331b3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::LoadRemoteCatalogAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>(),
                                                                                         { "LoadRemoteCatalogAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline void BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader* BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*>());
}
/// @brief Convert operator to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
constexpr BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::operator ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*() noexcept {
  return static_cast<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::i___BGLib__MetaRemoteAssets__IRemoteCatalogLoader() noexcept {
  return static_cast<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader::MockRemoteCatalogLoader() {}
