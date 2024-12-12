#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RequestCacheBinding)
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Cache {
class RequestCacheValidator;
}
namespace System::Net::Cache {
class RequestCache;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheBinding;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCacheBinding);
// Dependencies System.Object
namespace System::Net::Cache {
// Is value type: false
// CS Name: System.Net.Cache.RequestCacheBinding
class CORDL_TYPE RequestCacheBinding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Cache)) ::System::Net::Cache::RequestCache* Cache;

  __declspec(property(get = get_Policy)) ::System::Net::Cache::RequestCachePolicy* Policy;

  __declspec(property(get = get_Validator)) ::System::Net::Cache::RequestCacheValidator* Validator;

  /// @brief Field m_CacheValidator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheValidator, put = __cordl_internal_set_m_CacheValidator)) ::System::Net::Cache::RequestCacheValidator* m_CacheValidator;

  /// @brief Field m_Policy, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Policy, put = __cordl_internal_set_m_Policy)) ::System::Net::Cache::RequestCachePolicy* m_Policy;

  /// @brief Field m_RequestCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RequestCache, put = __cordl_internal_set_m_RequestCache)) ::System::Net::Cache::RequestCache* m_RequestCache;

  static inline ::System::Net::Cache::RequestCacheBinding* New_ctor(::System::Net::Cache::RequestCache* requestCache, ::System::Net::Cache::RequestCacheValidator* cacheValidator,
                                                                    ::System::Net::Cache::RequestCachePolicy* policy);

  constexpr ::System::Net::Cache::RequestCacheValidator* const& __cordl_internal_get_m_CacheValidator() const;

  constexpr ::System::Net::Cache::RequestCacheValidator*& __cordl_internal_get_m_CacheValidator();

  constexpr ::System::Net::Cache::RequestCachePolicy* const& __cordl_internal_get_m_Policy() const;

  constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get_m_Policy();

  constexpr ::System::Net::Cache::RequestCache* const& __cordl_internal_get_m_RequestCache() const;

  constexpr ::System::Net::Cache::RequestCache*& __cordl_internal_get_m_RequestCache();

  constexpr void __cordl_internal_set_m_CacheValidator(::System::Net::Cache::RequestCacheValidator* value);

  constexpr void __cordl_internal_set_m_Policy(::System::Net::Cache::RequestCachePolicy* value);

  constexpr void __cordl_internal_set_m_RequestCache(::System::Net::Cache::RequestCache* value);

  /// @brief Method .ctor, addr 0x43edca0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Cache::RequestCache* requestCache, ::System::Net::Cache::RequestCacheValidator* cacheValidator, ::System::Net::Cache::RequestCachePolicy* policy);

  /// @brief Method get_Cache, addr 0x43edd14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Cache::RequestCache* get_Cache();

  /// @brief Method get_Policy, addr 0x43edd24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Cache::RequestCachePolicy* get_Policy();

  /// @brief Method get_Validator, addr 0x43edd1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Cache::RequestCacheValidator* get_Validator();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCacheBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestCacheBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCacheBinding(RequestCacheBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCacheBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCacheBinding(RequestCacheBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9836 };

  /// @brief Field m_RequestCache, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Cache::RequestCache* ___m_RequestCache;

  /// @brief Field m_CacheValidator, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Cache::RequestCacheValidator* ___m_CacheValidator;

  /// @brief Field m_Policy, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Cache::RequestCachePolicy* ___m_Policy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Cache::RequestCacheBinding, ___m_RequestCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cache::RequestCacheBinding, ___m_CacheValidator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cache::RequestCacheBinding, ___m_Policy) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheBinding, 0x28>, "Size mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCacheBinding);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheBinding*, "System.Net.Cache", "RequestCacheBinding");
