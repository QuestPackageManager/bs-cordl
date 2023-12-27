#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserProof)
// Forward declare root types
namespace Oculus::Platform::Models {
class UserProof;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserProof);
// Type: Oculus.Platform.Models::UserProof
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13490))
// CS Name: ::Oculus.Platform.Models::UserProof*
class CORDL_TYPE UserProof : public ::System::Object {
public:
  // Declarations
  /// @brief Field Value, offset 0x10, size 0x8
  __declspec(property(get = __get_Value, put = __set_Value))::StringW Value;

  constexpr ::StringW& __get_Value();

  constexpr ::StringW const& __get_Value() const;

  constexpr void __set_Value(::StringW value);

  static inline ::Oculus::Platform::Models::UserProof* New_ctor(void* o);

  /// @brief Method .ctor addr 0x27093bc size 0x78 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "UserProof", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserProof(UserProof&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserProof", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserProof(UserProof const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserProof();

public:
  /// @brief Field Value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserProof, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserProof);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserProof*, "Oculus.Platform.Models", "UserProof");
