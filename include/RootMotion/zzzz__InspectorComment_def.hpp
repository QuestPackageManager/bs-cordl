#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InspectorComment)
// Forward declare root types
namespace RootMotion {
class InspectorComment;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::InspectorComment);
// Type: RootMotion::InspectorComment
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::InspectorComment*
class CORDL_TYPE InspectorComment : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field color, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::StringW color;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  static inline ::RootMotion::InspectorComment* New_ctor(::StringW name);

  static inline ::RootMotion::InspectorComment* New_ctor(::StringW name, ::StringW color);

  constexpr ::StringW const& __cordl_internal_get_color() const;

  constexpr ::StringW& __cordl_internal_get_color();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_color(::StringW value);

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x13419cc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x1341a34, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW color);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectorComment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectorComment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectorComment(InspectorComment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectorComment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectorComment(InspectorComment const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field color, offset: 0x18, size: 0x8, def value: None
  ::StringW ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::InspectorComment, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::InspectorComment, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::InspectorComment, ___color) == 0x18, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::InspectorComment);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::InspectorComment*, "RootMotion", "InspectorComment");
