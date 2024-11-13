#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/TOPNodeTags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TOPNodeTags)
// Forward declare root types
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::TOPNodeTags);
// Type: HoudiniEngineUnity::TOPNodeTags
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::TOPNodeTags*
class CORDL_TYPE TOPNodeTags : public ::System::Object {
public:
  // Declarations
  /// @brief Field _autoload, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__autoload, put = __cordl_internal_set__autoload)) bool _autoload;

  /// @brief Field _show, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__show, put = __cordl_internal_set__show)) bool _show;

  static inline ::HoudiniEngineUnity::TOPNodeTags* New_ctor();

  constexpr bool const& __cordl_internal_get__autoload() const;

  constexpr bool& __cordl_internal_get__autoload();

  constexpr bool const& __cordl_internal_get__show() const;

  constexpr bool& __cordl_internal_get__show();

  constexpr void __cordl_internal_set__autoload(bool value);

  constexpr void __cordl_internal_set__show(bool value);

  /// @brief Method .ctor, addr 0x39faa9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TOPNodeTags();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TOPNodeTags", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TOPNodeTags(TOPNodeTags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TOPNodeTags", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TOPNodeTags(TOPNodeTags const&) = delete;

  /// @brief Field _show, offset: 0x10, size: 0x1, def value: None
  bool ____show;

  /// @brief Field _autoload, offset: 0x11, size: 0x1, def value: None
  bool ____autoload;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11718 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::TOPNodeTags, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::TOPNodeTags, ____show) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::TOPNodeTags, ____autoload) == 0x11, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::TOPNodeTags);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::TOPNodeTags*, "HoudiniEngineUnity", "TOPNodeTags");
