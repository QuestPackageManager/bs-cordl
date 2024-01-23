#pragma once
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
// Type: UnityEngine.Assertions::AssertionMessageUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Assertions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10315))
// CS Name: ::UnityEngine.Assertions::AssertionMessageUtil*
class CORDL_TYPE AssertionMessageUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMessage, addr 0x2ce99b8, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW GetMessage(::StringW failureMessage);

  /// @brief Method GetMessage, addr 0x2ce9aa4, size 0x158, virtual false, abstract: false, final false
  static inline ::StringW GetMessage(::StringW failureMessage, ::StringW expected);

  /// @brief Method GetEqualityMessage, addr 0x2ce9624, size 0x1f4, virtual false, abstract: false, final false
  static inline ::StringW GetEqualityMessage(::System::Object* actual, ::System::Object* expected, bool expectEqual);

  /// @brief Method NullFailureMessage, addr 0x2ce92c4, size 0x168, virtual false, abstract: false, final false
  static inline ::StringW NullFailureMessage(::System::Object* value, bool expectNull);

  /// @brief Method BooleanFailureMessage, addr 0x2ce8fd0, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW BooleanFailureMessage(bool expected);

  // Ctor Parameters [CppParam { name: "", ty: "AssertionMessageUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssertionMessageUtil(AssertionMessageUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssertionMessageUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssertionMessageUtil(AssertionMessageUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertionMessageUtil();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Assertions::AssertionMessageUtil, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Assertions
NEED_NO_BOX(::UnityEngine::Assertions::AssertionMessageUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::AssertionMessageUtil*, "UnityEngine.Assertions", "AssertionMessageUtil");
