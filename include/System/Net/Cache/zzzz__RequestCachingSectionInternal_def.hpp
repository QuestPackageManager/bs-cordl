#pragma once
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
// Type: System.Net.Cache::RequestCachingSectionInternal
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9319))
// CS Name: ::System.Net.Cache::RequestCachingSectionInternal*
class CORDL_TYPE RequestCachingSectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field DisableAllCaching, offset 0x10, size 0x1
  __declspec(property(get = __get_DisableAllCaching, put = __set_DisableAllCaching)) bool DisableAllCaching;

  constexpr bool& __get_DisableAllCaching();

  constexpr bool const& __get_DisableAllCaching() const;

  constexpr void __set_DisableAllCaching(bool value);

  static inline ::System::Net::Cache::RequestCachingSectionInternal* New_ctor();

  /// @brief Method .ctor, addr 0x29f12b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RequestCachingSectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCachingSectionInternal(RequestCachingSectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCachingSectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCachingSectionInternal(RequestCachingSectionInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCachingSectionInternal();

public:
  /// @brief Field DisableAllCaching, offset: 0x10, size: 0x1, def value: None
  bool ___DisableAllCaching;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCachingSectionInternal, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::Cache::RequestCachingSectionInternal, ___DisableAllCaching) == 0x10, "Offset mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCachingSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCachingSectionInternal*, "System.Net.Cache", "RequestCachingSectionInternal");
