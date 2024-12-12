#pragma once
// IWYU pragma private; include "System/DelegateData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DelegateData)
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class DelegateData;
}
// Write type traits
MARK_REF_PTR_T(::System::DelegateData);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.DelegateData
class CORDL_TYPE DelegateData : public ::System::Object {
public:
  // Declarations
  /// @brief Field curried_first_arg, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_curried_first_arg, put = __cordl_internal_set_curried_first_arg)) bool curried_first_arg;

  /// @brief Field method_name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_method_name, put = __cordl_internal_set_method_name)) ::StringW method_name;

  /// @brief Field target_type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_target_type, put = __cordl_internal_set_target_type)) ::System::Type* target_type;

  static inline ::System::DelegateData* New_ctor();

  constexpr bool const& __cordl_internal_get_curried_first_arg() const;

  constexpr bool& __cordl_internal_get_curried_first_arg();

  constexpr ::StringW const& __cordl_internal_get_method_name() const;

  constexpr ::StringW& __cordl_internal_get_method_name();

  constexpr ::System::Type* const& __cordl_internal_get_target_type() const;

  constexpr ::System::Type*& __cordl_internal_get_target_type();

  constexpr void __cordl_internal_set_curried_first_arg(bool value);

  constexpr void __cordl_internal_set_method_name(::StringW value);

  constexpr void __cordl_internal_set_target_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x3e32c78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateData(DelegateData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateData(DelegateData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2590 };

  /// @brief Field target_type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___target_type;

  /// @brief Field method_name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___method_name;

  /// @brief Field curried_first_arg, offset: 0x20, size: 0x1, def value: None
  bool ___curried_first_arg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::DelegateData, ___target_type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::DelegateData, ___method_name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::DelegateData, ___curried_first_arg) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DelegateData, 0x28>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::DelegateData);
DEFINE_IL2CPP_ARG_TYPE(::System::DelegateData*, "System", "DelegateData");
