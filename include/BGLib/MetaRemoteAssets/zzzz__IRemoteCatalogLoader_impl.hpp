#pragma once
// IWYU pragma private; include "BGLib\MetaRemoteAssets\IRemoteCatalogLoader.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__IRemoteCatalogLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader.LoadRemoteCatalogAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::MetaRemoteAssets::IRemoteCatalogLoader::*)(::System::Threading::CancellationToken)>(
    &::BGLib::MetaRemoteAssets::IRemoteCatalogLoader::LoadRemoteCatalogAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(), { ::i2c::class_of<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::MetaRemoteAssets::IRemoteCatalogLoader::LoadRemoteCatalogAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
