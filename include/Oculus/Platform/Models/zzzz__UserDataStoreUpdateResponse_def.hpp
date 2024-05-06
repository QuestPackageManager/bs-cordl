#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataStoreUpdateResponse)
// Forward declare root types
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserDataStoreUpdateResponse);
// Type: Oculus.Platform.Models::UserDataStoreUpdateResponse
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::UserDataStoreUpdateResponse*
class CORDL_TYPE UserDataStoreUpdateResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field Success, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Success, put = __cordl_internal_set_Success)) bool Success;

  static inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* New_ctor(void* o);

  constexpr bool const& __cordl_internal_get_Success() const;

  constexpr bool& __cordl_internal_get_Success();

  constexpr void __cordl_internal_set_Success(bool value);

  /// @brief Method .ctor, addr 0x2adf4f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserDataStoreUpdateResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserDataStoreUpdateResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserDataStoreUpdateResponse(UserDataStoreUpdateResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserDataStoreUpdateResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserDataStoreUpdateResponse(UserDataStoreUpdateResponse const&) = delete;

  /// @brief Field Success, offset: 0x10, size: 0x1, def value: None
  bool ___Success;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserDataStoreUpdateResponse, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::UserDataStoreUpdateResponse, ___Success) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserDataStoreUpdateResponse*, "Oculus.Platform.Models", "UserDataStoreUpdateResponse");
