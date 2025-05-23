#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RequestCache)
// Forward declare root types
namespace System::Net::Cache {
class RequestCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCache);
// Dependencies System.Object
namespace System::Net::Cache {
// Is value type: false
// CS Name: System.Net.Cache.RequestCache
class CORDL_TYPE RequestCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field LineSplits, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_LineSplits, put = setStaticF_LineSplits)) ::ArrayW<char16_t, ::Array<char16_t>*> LineSplits;

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_LineSplits();

  static inline void setStaticF_LineSplits(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCache(RequestCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCache(RequestCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCache, 0x10>, "Size mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCache*, "System.Net.Cache", "RequestCache");
