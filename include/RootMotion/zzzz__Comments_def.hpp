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
// CS Name: ::RootMotion::Comments*
class CORDL_TYPE Comments : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text))::StringW text;

  static inline ::RootMotion::Comments* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr void __cordl_internal_set_text(::StringW value);

  /// @brief Method .ctor, addr 0x13412cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Comments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Comments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Comments(Comments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Comments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Comments(Comments const&) = delete;

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
