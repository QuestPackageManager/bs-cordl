#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RequestCacheProtocol)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheProtocol;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCacheProtocol);
// Type: System.Net.Cache::RequestCacheProtocol
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Cache {
// Is value type: false
// CS Name: ::System.Net.Cache::RequestCacheProtocol*
class CORDL_TYPE RequestCacheProtocol : public ::System::Object {
public:
  // Declarations
  static inline ::System::Net::Cache::RequestCacheProtocol* New_ctor(::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method .ctor, addr 0x2ade09c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* arg1, ::System::Object* arg2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCacheProtocol();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestCacheProtocol", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCacheProtocol(RequestCacheProtocol&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCacheProtocol", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCacheProtocol(RequestCacheProtocol const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheProtocol, 0x10>, "Size mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCacheProtocol);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheProtocol*, "System.Net.Cache", "RequestCacheProtocol");
