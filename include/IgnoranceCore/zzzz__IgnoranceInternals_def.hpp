#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceInternals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IgnoranceInternals)
// Forward declare root types
namespace IgnoranceCore {
class IgnoranceInternals;
}
// Write type traits
MARK_REF_PTR_T(::IgnoranceCore::IgnoranceInternals);
// Dependencies System.Object
namespace IgnoranceCore {
// Is value type: false
// CS Name: IgnoranceCore.IgnoranceInternals
class CORDL_TYPE IgnoranceInternals : public ::System::Object {
public:
  // Declarations
  static inline ::IgnoranceCore::IgnoranceInternals* New_ctor();

  /// @brief Method .ctor, addr 0x3aaa1fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceInternals();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceInternals", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoranceInternals(IgnoranceInternals&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoranceInternals", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoranceInternals(IgnoranceInternals const&) = delete;

  /// @brief Field BindAnyAddress offset 0xffffffff size 0x8
  static constexpr ::ConstString BindAnyAddress{ u"::0" };

  /// @brief Field Scheme offset 0xffffffff size 0x8
  static constexpr ::ConstString Scheme{ u"enet" };

  /// @brief Field Version offset 0xffffffff size 0x8
  static constexpr ::ConstString Version{ u"1.4.0r2 (LTS)" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17767 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceInternals, 0x10>, "Size mismatch!");

} // namespace IgnoranceCore
NEED_NO_BOX(::IgnoranceCore::IgnoranceInternals);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceInternals*, "IgnoranceCore", "IgnoranceInternals");
