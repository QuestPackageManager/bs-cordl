#pragma once
// IWYU pragma private; include "GlobalNamespace/AssertExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AssertExtensions)
// Forward declare root types
namespace GlobalNamespace {
class AssertExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AssertExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AssertExtensions
class CORDL_TYPE AssertExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW GetMessage(::StringW pattern, T value, T other, ::StringW message);

  /// @brief Method GreaterOrEqual, addr 0x22b224c, size 0x4, virtual false, abstract: false, final false
  static inline void GreaterOrEqual(float_t value, float_t expectedLessValue, ::StringW message);

  /// @brief Method LessThan, addr 0x22b2248, size 0x4, virtual false, abstract: false, final false
  static inline void LessThan(float_t value, float_t expectedGreaterValue, ::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssertExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssertExtensions(AssertExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssertExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssertExtensions(AssertExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17114 };

  /// @brief Field kUnityAssertions offset 0xffffffff size 0x8
  static constexpr ::ConstString kUnityAssertions{ u"UNITY_ASSERTIONS" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AssertExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AssertExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AssertExtensions*, "", "AssertExtensions");
