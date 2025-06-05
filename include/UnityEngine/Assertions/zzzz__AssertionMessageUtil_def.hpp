#pragma once
// IWYU pragma private; include "UnityEngine/Assertions/AssertionMessageUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssertionMessageUtil)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Assertions {
class AssertionMessageUtil;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Assertions::AssertionMessageUtil);
// Dependencies System.Object
namespace UnityEngine::Assertions {
// Is value type: false
// CS Name: UnityEngine.Assertions.AssertionMessageUtil
class CORDL_TYPE AssertionMessageUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method BooleanFailureMessage, addr 0x48d215c, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW BooleanFailureMessage(bool expected);

  /// @brief Method GetEqualityMessage, addr 0x48d2358, size 0x1f4, virtual false, abstract: false, final false
  static inline ::StringW GetEqualityMessage(::System::Object* actual, ::System::Object* expected, bool expectEqual);

  /// @brief Method GetMessage, addr 0x48d2978, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW GetMessage(::StringW failureMessage);

  /// @brief Method GetMessage, addr 0x48d2a64, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW GetMessage(::StringW failureMessage, ::StringW expected);

  /// @brief Method NullFailureMessage, addr 0x48d2608, size 0x168, virtual false, abstract: false, final false
  static inline ::StringW NullFailureMessage(::System::Object* value, bool expectNull);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertionMessageUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssertionMessageUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssertionMessageUtil(AssertionMessageUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssertionMessageUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssertionMessageUtil(AssertionMessageUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11326 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Assertions::AssertionMessageUtil, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Assertions
NEED_NO_BOX(::UnityEngine::Assertions::AssertionMessageUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::AssertionMessageUtil*, "UnityEngine.Assertions", "AssertionMessageUtil");
