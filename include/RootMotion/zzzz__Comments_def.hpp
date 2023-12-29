#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Comments)
// Forward declare root types
namespace RootMotion {
class Comments;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::Comments);
// Type: RootMotion::Comments
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12417))
// CS Name: ::RootMotion::Comments*
class CORDL_TYPE Comments : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field text, offset 0x18, size 0x8
  __declspec(property(get = __get_text, put = __set_text))::StringW text;

  constexpr ::StringW& __get_text();

  constexpr ::StringW const& __get_text() const;

  constexpr void __set_text(::StringW value);

  static inline ::RootMotion::Comments* New_ctor();

  /// @brief Method .ctor addr 0x11cc9ac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Comments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Comments(Comments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Comments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Comments(Comments const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Comments();

public:
  /// @brief Field text, offset: 0x18, size: 0x8, def value: None
  ::StringW ___text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Comments, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::Comments, ___text) == 0x18, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::Comments);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Comments*, "RootMotion", "Comments");
