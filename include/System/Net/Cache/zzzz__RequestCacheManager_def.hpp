#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RequestCacheManager)
namespace System::Net::Cache {
class RequestCacheBinding;
}
namespace System::Net::Cache {
class RequestCachingSectionInternal;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCacheManager);
// Dependencies System.Object
namespace System::Net::Cache {
// Is value type: false
// CS Name: System.Net.Cache.RequestCacheManager
class CORDL_TYPE RequestCacheManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_BypassCacheBinding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BypassCacheBinding, put = setStaticF_s_BypassCacheBinding)) ::System::Net::Cache::RequestCacheBinding* s_BypassCacheBinding;

  /// @brief Field s_CacheConfigSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CacheConfigSettings, put = setStaticF_s_CacheConfigSettings)) ::System::Net::Cache::RequestCachingSectionInternal* s_CacheConfigSettings;

  /// @brief Field s_DefaultFtpBinding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultFtpBinding, put = setStaticF_s_DefaultFtpBinding)) ::System::Net::Cache::RequestCacheBinding* s_DefaultFtpBinding;

  /// @brief Field s_DefaultGlobalBinding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultGlobalBinding, put = setStaticF_s_DefaultGlobalBinding)) ::System::Net::Cache::RequestCacheBinding* s_DefaultGlobalBinding;

  /// @brief Field s_DefaultHttpBinding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultHttpBinding, put = setStaticF_s_DefaultHttpBinding)) ::System::Net::Cache::RequestCacheBinding* s_DefaultHttpBinding;

  /// @brief Method GetBinding, addr 0x43eee3c, size 0x1f8, virtual false, abstract: false, final false
  static inline ::System::Net::Cache::RequestCacheBinding* GetBinding(::StringW internedScheme);

  /// @brief Method LoadConfigSettings, addr 0x43ef034, size 0x174, virtual false, abstract: false, final false
  static inline void LoadConfigSettings();

  static inline ::System::Net::Cache::RequestCacheBinding* getStaticF_s_BypassCacheBinding();

  static inline ::System::Net::Cache::RequestCachingSectionInternal* getStaticF_s_CacheConfigSettings();

  static inline ::System::Net::Cache::RequestCacheBinding* getStaticF_s_DefaultFtpBinding();

  static inline ::System::Net::Cache::RequestCacheBinding* getStaticF_s_DefaultGlobalBinding();

  static inline ::System::Net::Cache::RequestCacheBinding* getStaticF_s_DefaultHttpBinding();

  static inline void setStaticF_s_BypassCacheBinding(::System::Net::Cache::RequestCacheBinding* value);

  static inline void setStaticF_s_CacheConfigSettings(::System::Net::Cache::RequestCachingSectionInternal* value);

  static inline void setStaticF_s_DefaultFtpBinding(::System::Net::Cache::RequestCacheBinding* value);

  static inline void setStaticF_s_DefaultGlobalBinding(::System::Net::Cache::RequestCacheBinding* value);

  static inline void setStaticF_s_DefaultHttpBinding(::System::Net::Cache::RequestCacheBinding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCacheManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestCacheManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCacheManager(RequestCacheManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCacheManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCacheManager(RequestCacheManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9838 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheManager, 0x10>, "Size mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCacheManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheManager*, "System.Net.Cache", "RequestCacheManager");
