#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCachingSectionInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RequestCachingSectionInternal)
// Forward declare root types
namespace System::Net::Cache {
class RequestCachingSectionInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCachingSectionInternal);
// Dependencies System.Object
namespace System::Net::Cache {
// Is value type: false
// CS Name: System.Net.Cache.RequestCachingSectionInternal
class CORDL_TYPE RequestCachingSectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field DisableAllCaching, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_DisableAllCaching, put = __cordl_internal_set_DisableAllCaching)) bool DisableAllCaching;

  static inline ::System::Net::Cache::RequestCachingSectionInternal* New_ctor();

  constexpr bool const& __cordl_internal_get_DisableAllCaching() const;

  constexpr bool& __cordl_internal_get_DisableAllCaching();

  constexpr void __cordl_internal_set_DisableAllCaching(bool value);

  /// @brief Method .ctor, addr 0x43ef1a8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCachingSectionInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestCachingSectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCachingSectionInternal(RequestCachingSectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCachingSectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCachingSectionInternal(RequestCachingSectionInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9840 };

  /// @brief Field DisableAllCaching, offset: 0x10, size: 0x1, def value: None
  bool ___DisableAllCaching;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Cache::RequestCachingSectionInternal, ___DisableAllCaching) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCachingSectionInternal, 0x18>, "Size mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCachingSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCachingSectionInternal*, "System.Net.Cache", "RequestCachingSectionInternal");
