#pragma once
// IWYU pragma private; include "UnityEngine/Assertions/AssertionException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssertionException)
// Forward declare root types
namespace UnityEngine::Assertions {
class AssertionException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Assertions::AssertionException);
// Dependencies System.Exception
namespace UnityEngine::Assertions {
// Is value type: false
// CS Name: UnityEngine.Assertions.AssertionException
class CORDL_TYPE AssertionException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field m_UserMessage, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UserMessage, put = __cordl_internal_set_m_UserMessage)) ::StringW m_UserMessage;

  static inline ::UnityEngine::Assertions::AssertionException* New_ctor(::StringW message, ::StringW userMessage);

  constexpr ::StringW const& __cordl_internal_get_m_UserMessage() const;

  constexpr ::StringW& __cordl_internal_get_m_UserMessage();

  constexpr void __cordl_internal_set_m_UserMessage(::StringW value);

  /// @brief Method .ctor, addr 0x48cc014, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW userMessage);

  /// @brief Method get_Message, addr 0x48cc91c, size 0x74, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertionException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssertionException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssertionException(AssertionException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssertionException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssertionException(AssertionException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11325 };

  /// @brief Field m_UserMessage, offset: 0x90, size: 0x8, def value: None
  ::StringW ___m_UserMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Assertions::AssertionException, ___m_UserMessage) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Assertions::AssertionException, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Assertions
NEED_NO_BOX(::UnityEngine::Assertions::AssertionException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::AssertionException*, "UnityEngine.Assertions", "AssertionException");
